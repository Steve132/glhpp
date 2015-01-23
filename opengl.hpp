#ifndef GL_HPP
#define GL_HPP

#include<functional>
#include<stdexcept>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstdint>
#include<unordered_map>
#include<initializer_list>

//GL_HPP_ERROR_CHECKING
//Options
//GL_HPP_ERROR_CHECKING //if defined, calls check error after every state, otherwise only error handling is performed
//GL_HPP_DIRECT_STATE_ACCESS //if defined, assumes you have the DIRECT_STATE_ACCESS extension (this should be runtime, but whatever...)
//Note, semantics of gl3.hpp are equivalent to GL_HPP_DIRECT_STATE_ACCESS

//This file supports OpenGL 3.1 or higher (3.0 is not supported because of the lack of GL_COPY_READ_BUFFER)

#ifndef GL_HPP_COMMON_HPP
#error "This file needs to have an opengl API selected from glhpp and included before this file.  Such as #include<glhpp/gl3.1.hpp>"
#endif

#define GL_HPP_CUSTOM 0x0001
namespace gl
{
namespace _impl
{
void _handleError(GLenum errcode,const std::string& what);
void _checkError(GLenum errcode,const std::string& what);

template<GLenum ac=GL_READ_WRITE>
struct BufferMapType
{
	typedef void* ptrtype;
};

template<>
struct BufferMapType<GL_READ_ONLY>
{
	typedef const void* ptrtype;
};

template<class Base>
class DefaultZeroType: public Base
{
public:
	DefaultZeroType():Base(0)
	{}
};

class VersionDependency
{
public:
	VersionDependency(const std::string& actionname,const std::initializer_list<std::string>& depstrings)
	{
		std::unordered_map<std::string,bool>::const_iterator ci=optcache().find(actionname);
		bool supported=false;
		if(ci==optcache().end())
		{
			for(auto dep_it=depstrings.begin();dep_it != depstrings.end() && !supported;++dep_it)
			{
				bool dsup=check_opt(*dep_it);
				supported|=dsup;
				optcache()[*dep_it]=dsup;
			}
		}
		else
		{
			supported=ci->second;
		}
		if(!supported)
		{
			std::ostringstream oss;
			oss << "Error, the active OpenGL context has insufficient OpenGL compatibility needed to \'"+actionname+"\'\n.  This action requires one of:\n";
			for(auto dep_it=depstrings.begin();dep_it != depstrings.end();++dep_it)
			{
				oss << '\t' << *dep_it << '\n';
			}
			throw std::runtime_error(oss.str());
		}
	}
private:
	static bool check_opt(const std::string& dep)
	{
		if(dep.find("VERSION")!=std::string::npos)
		{
			return gl::check_version(dep[11]-'0',dep[13]-'0');
		}
		else
		{
			return gl::check_extension(dep);
		}
	}
	static std::unordered_map<std::string,bool>& optcache()
	{
		static std::unordered_map<std::string,bool> opcsh(128);
		return opcsh;
	}
};

template<class T>
class GLObject
{
protected:
	GLuint object;
	std::function<void(GLsizei,const GLuint*)> delete_func;
	bool direct_state_access_supported;

	static inline GLuint gfuncget(const char* objtype,const std::function<void(GLsizei, GLuint*)>& gfunc)
	{
		GLuint out;
		gfunc(1, &out);
		if (out== 0)
		{
			_handleError(GL_HPP_CUSTOM, std::string("There was an error getting a new OpenGL handle of type") + objtype);
		}
		return out;
	}
	
	GLObject(GLuint o,std::function<void(GLsizei,const GLuint*)> dfunc):
		object(o),
		name(object),
		delete_func(dfunc),
		direct_state_access_supported(gl::check_extension("GL_EXT_direct_state_access") || gl::check_extension("GL_ARB_direct_state_access"))
	{}

	GLObject(const char* objtype,
		std::function<void(GLsizei, GLuint*)> gfunc,
		std::function<void(GLsizei, const GLuint*)> dfunc
		) :
		GLObject(gfuncget(objtype,gfunc),dfunc)	//delegating constructor
	{}

public:
	const GLuint& name;
	
	~GLObject()
	{
		delete_func(1,&object);
	}
	
	GLObject(const GLObject&)=delete;
	GLObject()=delete;
	GLObject& operator=(const GLObject&)=delete;
	
	GLObject(GLObject&& o):
		name(object),
		delete_func(std::move(o.delete_func)),
		object(std::move(o.object)),
		direct_state_access_supported(std::move(o.direct_state_access_supported))

	{}
	
	GLObject& operator=(GLObject&& other)
	{
		if(this !=&other && object !=other.object)
		{
			delete_func(1,&object);
		}
		delete_func=std::move(other.delete_func);
		object=std::move(other.object);
		return *this;
	}
	
	static T& Default()
	{
		static _impl::DefaultZeroType<T> dzt;
		return dzt;
	}
};

}

//These should only exist in their specializations
template<class T> 
T Get(GLenum v) = delete;

template<class T>
T Get(GLenum v,GLsizei i) = delete;

class Exception: public std::runtime_error
{
public:
	Exception(GLenum cde,const std::string& wh);
	GLenum code;
};

/*TODO: figure this out...official GL wiki says emphatically "This is NOT an object"
 *      It should probably have a mutex interface or something
class Sync
{
public:
	Sync(GLenum condition=GL_SYNC_GPU_COMMANDS_COMPLETE,GLbitfield flags=0):
		name(object)
	{
		_impl::VersionDependency("create gl::Sync",{"GL_VERSION_3_2","GL_ARB_sync"});
		object=gl::FenceSync(condition,flags);
		_impl::_checkError(GL_INVALID_ENUM,"glFenceSync() condition is not GL_SYNC_GPU_COMMANDS_COMPLETE.\n");
		_impl::_checkError(GL_INVALID_VALUE,"glFenceSync() flags is not zero.\n");
		if(object==0)
		{
			_impl::_handleError(GL_HPP_CUSTOM,"Fence sync failed to be created");
		}
	}
	void Wait()
	{
		gl::WaitSync(object,0,GL_TIMEOUT_IGNORED);
	}
	GLenum ClientWait(GLuint64 timeout=0)
	{
		return gl::ClientWaitSync(object,GL_SYNC_FLUSH_COMMANDS_BIT,timeout);
	}
	GLint Get(GLenum pname) const
	{
		GLint p;
		GLsizei numwritten=0;
		gl::GetSynciv(object,pname,1,&numwritten,&p);	
		if(numwritten==0)
		{
			_impl::_handleError(GL_HPP_CUSTOM,"Error getting sync parameter");
		}
		_impl::_checkError(GL_INVALID_ENUM,"pname is not one of the accepted tokens");
		return p;	
	}
	const GLsync& name;
private:
	GLsync object;
};*/

    
#ifdef GL_HPP_FUNDEF_CreateShader
class Shader: public _impl::GLObject<Shader>
{
public:
	Shader(GLenum t);
    GLint Get(GLenum variable) const;
	
    #if defined(GL_HPP_FUNDEF_ShaderSource)
    void Source(const std::string& src);
	void Source(std::istream& in);
	void SourceFile(const std::string& filename);
    #endif
    
    #if defined(GL_HPP_FUNDEF_CompileShader)
	std::string Compile();
    #endif
    
    #if defined(GL_HPP_FUNDEF_ReleaseShaderCompiler)
	static void ReleaseCompiler(); ///\todo no implementation found
    #endif

    #if defined(GL_HPP_FUNDEF_ShaderBinary)
	void Binary(GLenum binaryformat,const uint8_t* bindata,size_t bindatalen)
	{
		gl::ShaderBinary(1,&name,binaryformat,(const void*)bindata,bindatalen);
	}
    #endif

    #if defined(GL_HPP_FUNDEF_GetShaderInfoLog)
	std::string GetInfoLog() const
	{
		GLint sz=Get(GL_INFO_LOG_LENGTH);
		char* m=new char[sz];
		GLsizei outsz;
		gl::GetShaderInfoLog(name,sz,&outsz,m);
		std::string strdata(m,m+outsz);
		delete [] m;
		return strdata;
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_GetShaderSource)
	std::string GetSource() const
	{
		GLint sz=Get(GL_SHADER_SOURCE_LENGTH);
		char* m=new char[sz];
		GLsizei outsz;
		gl::GetShaderSource(name,sz,&outsz,m);
		std::string strdata(m,m+outsz);
		delete [] m;
		return strdata;
	}
    #endif
	
private:
	GLenum type;
};
#endif

#ifdef GL_HPP_FUNDEF_CreateProgram
class Program: public _impl::GLObject<Program>
{
public:
	Program();
    
    #if defined (GL_HPP_FUNDEF_GetProgramiv)
	GLint Get(GLenum variable) const;
    #endif
   
    #if defined (GL_HPP_FUNDEF_AttachShader)
	void Attach(const Shader& s);
    #endif
    
    #if defined (GL_HPP_FUNDEF_DetachShader)
	void Detach(const Shader& s);
    #endif
	
    #if defined (GL_HPP_FUNDEF_BindAttribLocation)
	void BindAttribLocation(GLuint index,const std::string& name);
    #endif

    #if defined (GL_HPP_FUNDEF_ValidateProgram) && defined (GL_HPP_FUNDEF_GetProgramInfoLog) && defined (GL_HPP_FUNDEF_GetProgramiv)
	std::pair<bool,std::string> Validate() const;
    #endif
    
	struct ActiveInfo
	{
	public:
		GLint size;
		GLenum type;
		std::string name;
	};
	
	ActiveInfo GetActiveAttrib(GLuint index) const;
	ActiveInfo GetActiveAttrib(const std::string& name) const;
	ActiveInfo GetActiveUniform(GLuint index) const;
	ActiveInfo GetActiveUniform(const std::string& name) const;
	
    #if defined (GL_HPP_FUNDEF_GetAttribLocation)
	GLint GetAttribLocation(const std::string& n) const;
    #endif
    
    #if defined (GL_HPP_FUNDEF_GetUniformLocation)
	GLint GetUniformLocation(const std::string& n) const;
    #endif

	/*TODO: These functions are unavailable
	uint GetUniformBlockIndex(uint program, const char *uniformBlockName);
	void GetActiveUniformBlockName(uint program, uint uniformBlockIndex, sizei bufSize, sizei *length, char *uniformBlockName);
	void GetActiveUniformBlockiv(uint program, uint uniformBlockIndex, enum pname, int *params);
	void GetUniformIndices(uint program, sizei uniformCount, const char **uniformNames, uint *uniformIndices);
	void GetActiveUniformName(uint program, uint uniformIndex, sizei bufSize, sizei *length, char *uniformName);
	void GetActiveUniformsiv(uint program, sizei uniformCount,

	void UniformBlockBinding(uint program, uint uniformBlockIndex, uint uniformBlockBinding);
	void TransformFeedbackVaryings(uint program, sizei count, const char **varyings, enum bufferMode);
	void GetTransformFeedbackVarying(uint program, uint index, sizei bufSize, sizei *length, sizei *size, enum *type, char *name);
	*/
	
	/*TODO:
	std::vector<GLint> GetInterface(enum programInterface, enum pname); 
	
	GLuint GetResourceIndex(enum programInterface,const char *name);

	std::string GetResourceName(enum programInterface, GLuint index);
	void GetProgramResourceiv(enum programInterface, uint index, 

sizei propCount, const enum *props, 

sizei bufSize, sizei *length, int *params); 

*props:  [see Table 7.2]

int GetProgramResourceLocation(

uint program, enum programInterface, 

const char *name);  

int GetProgramResourceLocationIndex( 

uint program, enum programInterface, 

const char *name);   

Program Pipeline Objects [7.4] 

void GenProgramPipelines(sizei n, 

uint *pipelines);

void DeleteProgramPipelines(sizei n, 

const uint *pipelines);

void BindProgramPipeline(uint pipeline);

void UseProgramStages(uint pipeline, 

bitfield stages, uint program);

stages: ALL_SHADER_BITS  or the bitwise OR of

TESS_{CONTROL, EVALUATION}_SHADER_BIT, 

{VERTEX, GEOMETRY, FRAGMENT}_SHADER_BIT, 

COMPUTE_SHADER_BIT

void ActiveShaderProgram(uint pipeline, 

uint program);

Program Binaries [7.5] 

void GetProgramBinary(uint program, 

sizei bufSize, sizei *length, 

enum *binaryFormat, void *binary);

void ProgramBinary(uint program, 

enum binaryFormat, const void *binary, 

sizei length);

Uniform Variables [7.6]

int GetUniformLocation(uint program, 

const char *name);

void GetActiveUniformName(uint program, 

uint uniformIndex, sizei bufSize, 

sizei *length, char *uniformName);

void GetUniformIndices(uint program, 

sizei uniformCount, const char **uniformNames, 

uint *uniformIndices);

void ShaderStorageBlockBinding(

uint program, uint storageBlockIndex, 

uint storageBlockBinding);

int GetSubroutineUniformLocation(

uint program, enum shadertype, 

const char *name);

uint GetSubroutineIndex(uint program, 

enum shadertype, const char *name);

void GetActiveSubroutineName(

uint program, enum shadertype, 

uint index, sizei bufsize, sizei *length, 

char *name);

void GetActiveSubroutineUniformName(

uint program, enum shadertype, 

uint index, sizei bufsize, sizei *length, 

char *name);

void GetActiveSubroutineUniformiv(

uint program, enum shadertype, 

uint index, enum pname, int *values);

pname: {NUM_}COMPATIBLE_SUBROUTINES

void UniformSubroutinesuiv(enum shadertype,

sizei count, const uint *indices);

Shader Memory Access [7.11.2] 

See diagram on page 11 for more information.

void MemoryBarrier(bitfield barriers);

barriers: ALL_BARRIER_BITS or the OR of:

{VERTEX_ATTRIB_ARRAY, ELEMENT_ARRAY, 

UNIFORM, TEXTURE_FETCH, BUFFER_UPDATE, 

SHADER_IMAGE_ACCESS, COMMAND, 

PIXEL_BUFFER, TEXTURE_UPDATE, FRAMEBUFFER, 

TRANSFORM_FEEDBACK, ATOMIC_COUNTER, 

SHADER_STORAGE}_BARRIER_BIT
*/


	void BindFragDataLocation(GLuint colorNumber,const std::string& name);
	GLint GetFragDataLocation(const std::string& name);
	
	//direct functions
	void Uniform(const std::string& n,const GLfloat& v1);
	void Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2);
	void Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3);
	void Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3,const GLfloat& v4);
	void Uniform(const std::string& n,const GLint& v1);
	void Uniform(const std::string& n,const GLint& v1,const GLint& v2);
	void Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3);
	void Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3,const GLint& v4);
	void Uniform(const std::string& n,const GLuint& v1);
	void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2);
	void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3);
	void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3,const GLuint& v4);
	
	//matrix and array uniforms
	//should only exist in their specializations
	template<class T,GLuint sz>
	void Uniform(const std::string& n,const T*,GLsizei count=1)=delete;
	
	template<class T,GLuint rows,GLuint cols>
	void UniformMatrix(const std::string& n,const T*,bool transposed=false,GLsizei count=1)=delete;
	
    #ifdef GL_HPP_FUNDEF_LinkProgram
	std::string Link();
    #endif
	
    #ifdef GL_HPP_FUNDEF_UseProgram
	void Use() const;
    #endif
	
protected:
	explicit Program(GLuint obj);
};
    
#endif

    
#ifdef GL_HPP_FUNDEF_GenBuffers
class Buffer: public _impl::GLObject<Buffer>
{
public:
    
    #if defined(GL_HPP_FUNDEF_BindBuffer)
 	void Bind(GLenum bt) const;
    #endif

	void BindRange(GLenum target, GLuint index,GLintptr offset, GLsizeiptr size) const;
	void BindBase(GLenum target,GLuint index) const;

	void FlushMappedRange(GLintptr offset,GLsizeiptr sz) const;
	void GetSubData(GLintptr offset,GLsizeiptr size,void* output_buffer) const;
	void* GetMappedPointer() const;

	GLint Get(GLenum value) const;

	void Data(GLsizeiptr sz,const GLvoid* data,GLenum usage);

	template<class T>
	void Data(const T* b,const T* e,GLenum usage);

	void SubData(GLintptr offset,GLsizeiptr size,const GLvoid* data);
	
	void ClearData(GLenum internalformat,GLenum format,GLenum type,const void* data);
	void ClearSubData(GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void* data);
	
	void InvalidateData();
	void InvalidateSubData(GLintptr offset,GLsizeiptr length);

	template<class T>
	void SubData(GLintptr offset,const T* b,const T* e);

	void* Map(GLenum access);
	
	template<GLenum ac>
	typename _impl::BufferMapType<ac>::ptrtype Map();

	bool Unmap();

	void* MapRange(GLintptr offset,GLsizeiptr length,GLbitfield access);

	template<GLbitfield ac>
	typename _impl::BufferMapType<(ac & GL_MAP_READ_BIT ? ( ac & GL_MAP_WRITE_BIT ? GL_READ_WRITE : GL_READ_ONLY) : GL_WRITE_ONLY)>::ptrtype
	MapRange(GLintptr offset,GLsizeiptr length);

	void CopySubData(const Buffer& read,GLintptr readoffset,GLintptr writeoffset,GLsizeiptr sz);
	
	Buffer():
		_impl::GLObject<Buffer>("GLBuffer",gl::GenBuffers,gl::DeleteBuffers)
	{}
	
protected:
	explicit Buffer(GLuint o):
		_impl::GLObject<Buffer>(o,gl::DeleteBuffers)
	{}
};
#endif
    
    

#ifdef GL_HPP_FUNDEF_GenVertexArrays ///\todo make this available with an emulated path where vbo's are available
class VertexArray: public _impl::GLObject<VertexArray>
{
public:
    
    #if defined(GL_HPP_FUNDEF_BindVertexArray)
	void Bind() const;
    #endif

    #if defined(GL_HPP_FUNDEF_EnableVertexArrayAttribEXT) || defined(GL_HPP_FUNDEF_EnableVertexAttribArray)
	void EnableAttrib(GLuint index);
    #endif
    
    #if defined(GL_HPP_FUNDEF_DisableVertexArrayAttribEXT) || defined(GL_HPP_FUNDEF_DisableVertexAttribArray)
	void DisableAttrib(GLuint index);
    #endif
    
	void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
	void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);

	void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
	void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);

	void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
	void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);

	void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
	void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);

    #if defined(GL_HPP_FUNDEF_BindVertexArray) && defined(GL_HPP_FUNDEF_BindBuffer)
	void Elements(const GLvoid * pointer);///\todo no implementation
	void Elements(const Buffer&b);
    #endif

	VertexArray():
		_impl::GLObject<VertexArray>("GLVertexArray",gl::GenVertexArrays,gl::DeleteVertexArrays)
	{}

protected:
	explicit VertexArray(GLuint o):
		_impl::GLObject<VertexArray>(o,gl::DeleteVertexArrays)
	{}
};
#endif

#ifdef GL_HPP_FUNDEF_GenQueries
class Query: public _impl::GLObject<Query>
{
public:
    #if defined(GL_HPP_FUNDEF_BeginConditionalRender)
	void BeginConditionalRender(GLenum mode);
    #endif
    
    #if defined(GL_HPP_FUNDEF_EndConditionalRender)
    void EndConditionalRender();
    #endif

    #if defined(GL_HPP_FUNDEF_BeginQuery)
	void Begin(GLenum target);
    #endif
	
    #if defined(GL_HPP_FUNDEF_EndQuery)
    void End(GLenum target);
    #endif
	
    #if defined(GL_HPP_FUNDEF_BeginQueryIndexed)
	void BeginIndexed(GLenum target,GLuint index);
    #endif
    
    #if defined(GL_HPP_FUNDEF_EndQueryIndexed)
    void EndIndexed(GLenum target,GLuint index);
    #endif
    
	template<class T>
	T Get(GLenum) const;

	Query():
		_impl::GLObject<Query>("GLQuery",gl::GenQueries,gl::DeleteQueries)
	{}
	
	void Counter()
	{
		gl::QueryCounter(object,GL_TIMESTAMP);
		_impl::_checkError(GL_INVALID_OPERATION,"Query object is already in use within a glBeginQuery / glEndQuery block.");
		_impl::_checkError(GL_INVALID_VALUE,"Query object is not the name of a query object returned from a previous call to glGenQueries.");
	}
	
protected:
	explicit Query(GLuint o):
		_impl::GLObject<Query>(o,gl::DeleteQueries)
	{}
};
#endif


class ContextInfo
{
public:
	std::string vendor;
	std::string renderer;
	std::string version;
	std::string glsl_version;

	std::vector<std::string> gl_extensions; //alphabetical ordering

	GLuint versionmajor;
	GLuint versionminor;

	ContextInfo();
	bool has_extension(const std::string& s)
	{
		return std::binary_search(gl_extensions.begin(),gl_extensions.end(),s);
	}
};

    
#ifdef GL_HPP_FUNDEF_GenTextures
class Texture:public _impl::GLObject<Texture>
{
private:
	void TexImageErrorCheck()
	{
		//TODO: texture error handling"
	}
    #if defined(GL_HPP_FUNDEF_GetIntegerv)
	GLint tbinding_query(GLenum targ);
    #endif
    
	template<typename Callable1,typename Callable2, typename... Types>
	void texture_function_dsa(Callable1,Callable2,GLenum targ,Types... params);
	GLenum m_target,m_lastbinding;
public:
	const GLenum& target;
	Texture():
		_impl::GLObject<Texture>("GLTexture",gl::GenTextures,gl::DeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_lastbinding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}
    
    #if defined(GL_HPP_FUNDEF_BindTexture)
    void Bind(GLenum targ)
	{
		gl::BindTexture(targ,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
	void Bind()
	{
		gl::BindTexture(m_target,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexImage1D) || defined(GL_HPP_FUNDEF_TextureImage1DEXT)
	void Image1D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage1DEXT,gl::TexImage1D,targ,level,internalformat,width,border,format,type,data);
	}
    
	void Image1D(GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage1DEXT, gl::TexImage1D, m_target, level, internalformat, width, border, format, type, data);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexImage2D) || defined(GL_HPP_FUNDEF_TextureImage2DEXT)
	void Image2D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage2DEXT, gl::TexImage2D, targ, level, internalformat, width, height, border, format, type, data);
	}
	void Image2D(GLint level,GLint internalformat, GLsizei width, GLsizei height,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage2DEXT, gl::TexImage2D, m_target, level, internalformat, width, height, border, format, type, data);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexImage3D) || defined(GL_HPP_FUNDEF_TextureImage3DEXT)
	void Image3D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage3DEXT,gl::TexImage3D,targ,level,internalformat,width,height,depth,border,format,type,data);
	}
	void Image3D(GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureImage3DEXT,gl::TexImage3D,m_target,level,internalformat,width,height,depth,border,format,type,data);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_CopyTexImage1D) || defined(GL_HPP_FUNDEF_CopyTextureImage1DEXT)
	void CopyImage1D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(gl::CopyTextureImage1DEXT,gl::CopyTexImage1D,targ,level,internalformat,x,y,width,border);
	}

	void CopyImage1D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(gl::CopyTextureImage1DEXT, gl::CopyTexImage1D, m_target, level, internalformat, x, y, width, border);
    }
    #endif
    
    #if defined(GL_HPP_FUNDEF_CopyTexImage2D) || defined(GL_HPP_FUNDEF_CopyTextureImage2DEXT)
	void CopyImage2D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(gl::CopyTextureImage2DEXT, gl::CopyTexImage2D, targ, level, internalformat, x, y, width, height, border);
	}
	void CopyImage2D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(gl::CopyTextureImage2DEXT, gl::CopyTexImage2D, m_target, level, internalformat, x, y, width, height, border);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_TexSubImage1D) || defined(GL_HPP_FUNDEF_TextureSubImage1DEXT)
	void SubImage1D(GLenum targ, GLint level, GLint xoffset, GLsizei width, GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage1DEXT,gl::TexSubImage1D,targ,level,xoffset,width,format,type,data);
	}
	void SubImage1D(GLint level, GLint xoffset, GLsizei width, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage1DEXT,gl::TexSubImage1D,m_target,level,xoffset,width,format,type,data);
	}
    #endif

    #if defined(GL_HPP_FUNDEF_TexSubImage2D) || defined(GL_HPP_FUNDEF_TextureSubImage2DEXT)
	void SubImage2D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage2DEXT,gl::TexSubImage2D,targ,level,xoffset,yoffset,width,height,format,type,data);
	}
	void SubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage2DEXT,gl::TexSubImage2D,m_target,level,xoffset,yoffset,width,height,format,type,data);
	}
    #endif

    #if defined(GL_HPP_FUNDEF_TexSubImage3D) || defined(GL_HPP_FUNDEF_TextureSubImage3DEXT)
	void SubImage3D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage3DEXT,gl::TexSubImage3D,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
	void SubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(gl::TextureSubImage3DEXT,gl::TexSubImage3D,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
    #endif
	
    
    #if defined(GL_HPP_FUNDEF_CopyTexSubImage1D) || defined(GL_HPP_FUNDEF_CopyTextureSubImage1DEXT)
	void CopySubImage1D(GLenum targ,GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(gl::CopyTextureSubImage1DEXT,gl::CopyTexSubImage1D,targ,level,xoffset,x,y,width);
	}
	void CopySubImage1D(GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(gl::CopyTextureSubImage1DEXT,gl::CopyTexSubImage1D,m_target,level,xoffset,x,y,width);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CopyTexSubImage1D) || defined(GL_HPP_FUNDEF_CopyTextureSubImage1DEXT)
	void CopySubImage2D(GLenum targ,GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(gl::CopyTextureSubImage2DEXT,gl::CopyTexSubImage2D,targ,level,xoffset,yoffset,x,y,width,height);
	}
	void CopySubImage2D(GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(gl::CopyTextureSubImage2DEXT,gl::CopyTexSubImage2D,m_target,level,xoffset,yoffset,x,y,width,height);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CopyTexSubImage3D) || defined(GL_HPP_FUNDEF_CopyTextureSubImage3DEXT)
	void CopySubImage3D(GLenum targ,GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(gl::CopyTextureSubImage3DEXT,gl::CopyTexSubImage3D,targ,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
	void CopySubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(gl::CopyTextureSubImage3DEXT,gl::CopyTexSubImage3D,m_target,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CompressedTexImage1D) || defined(GL_HPP_FUNDEF_CompressedTextureImage1DEXT)
	void CompressedImage1D(GLenum targ,GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(gl::CompressedTextureImage1DEXT, gl::CompressedTexImage1D, targ, level, internalformat, width, border, imagesize, data);
	}
	void CompressedImage1D(GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(gl::CompressedTextureImage1DEXT, gl::CompressedTexImage1D, m_target, level, internalformat, width, border, imagesize, data);
	}
    #endif
    
     #if defined(GL_HPP_FUNDEF_CompressedTexImage2D) || defined(GL_HPP_FUNDEF_CompressedTextureImage2DEXT)
	void CompressedImage2D(GLenum targ,GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureImage2DEXT, gl::CompressedTexImage2D, targ, level, internalformat, width, height, border, imagesize, data);
	}
	void CompressedImage2D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureImage2DEXT, gl::CompressedTexImage2D, m_target, level, internalformat, width, height, border, imagesize, data);
	}
    #endif
    
     #if defined(GL_HPP_FUNDEF_CompressedTexImage3D) || defined(GL_HPP_FUNDEF_CompressedTextureImage3DEXT)
	void CompressedImage3D(GLenum targ,GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureImage3DEXT, gl::CompressedTexImage3D, targ, level, internalformat, width, height, depth, border, imagesize, data);
	}
	void CompressedImage3D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureImage3DEXT, gl::CompressedTexImage3D, m_target, level, internalformat, width, height, depth, border, imagesize, data);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CompressedTexSubImage1D) || defined(GL_HPP_FUNDEF_CompressedTextureSubImage1DEXT)
	void CompressedSubImage1D(GLenum targ, GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage1DEXT,gl::CompressedTexSubImage1D,targ,level,xoffset,width,format,imagesize,data);
	}
	void CompressedSubImage1D(GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage1DEXT,gl::CompressedTexSubImage1D,m_target,level,xoffset,width,format,imagesize,data);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CompressedTexSubImage2D) || defined(GL_HPP_FUNDEF_CompressedTextureSubImage2DEXT)
    void CompressedSubImage2D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage2DEXT,gl::CompressedTexSubImage2D,targ,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
	void CompressedSubImage2D(GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage2DEXT,gl::CompressedTexSubImage2D,m_target,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CompressedTexSubImage3D) || defined(GL_HPP_FUNDEF_CompressedTextureSubImage3DEXT)
	void CompressedSubImage3D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage3DEXT,gl::CompressedTexSubImage3D,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
	void CompressedSubImage3D(GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth,GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(gl::CompressedTextureSubImage3DEXT,gl::CompressedTexSubImage3D,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
    #endif
    
	/*TODO: cannot be dsaed
	 * void Image2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
	{
		
	}
	void TexImage3DMultisample(enum target, 

sizei samples, int internalformat, 

sizei width, sizei height, sizei depth, 

boolean fixedsamplelocations);

	*/
    
    #if defined(GL_HPP_FUNDEF_TexBuffer) || defined(GL_HPP_FUNDEF_TextureBufferEXT)
	void Buffer(GLenum targ,GLenum internalformat, GLuint buffer)
	{
		texture_function_dsa(gl::TextureBufferEXT,gl::TexBuffer,targ,internalformat,buffer);
	}
	void Buffer(GLenum targ,GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(targ,internalformat,buf.name);
	}
	void Buffer(GLenum internalformat, GLuint buffer)
	{
		texture_function_dsa(gl::TextureBufferEXT,gl::TexBuffer,m_target,internalformat,buffer);
	}
	void Buffer(GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(m_target,internalformat,buf.name);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexBufferRange) || defined(GL_HPP_FUNDEF_TextureBufferRangeEXT)
	void BufferRange(GLenum targ,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(gl::TextureBufferRangeEXT,gl::TexBufferRange,targ,internalformat,buffer,offset,size);
	}
	void BufferRange(GLenum targ,GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(targ,internalformat,buf.name,offset,size);
	}
	void BufferRange(GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(gl::TextureBufferRangeEXT,gl::TexBufferRange,m_target,internalformat,buffer,offset,size);
	}
	void BufferRange(GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(m_target,internalformat,buf.name,offset,size);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexParameteri) || defined(GL_HPP_FUNDEF_TextureParameteriEXT)
	void Parameter(GLenum targ,GLenum pname,GLint i)
	{
		texture_function_dsa(&gl::TextureParameteriEXT,&gl::TexParameteri,targ,pname,i);
	}
	void Parameter(GLenum pname,GLint i)
	{
		texture_function_dsa(&gl::TextureParameteriEXT,&gl::TexParameteri,m_target,pname,i);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexParameterf) || defined(GL_HPP_FUNDEF_TextureParameterfEXT)
	void Parameter(GLenum targ,GLenum pname,GLfloat f)
	{
		texture_function_dsa(&gl::TextureParameterfEXT,&gl::TexParameterf,targ,pname,f);
	}
	void Parameter(GLenum pname,GLfloat f)
	{
		texture_function_dsa(&gl::TextureParameterfEXT,&gl::TexParameterf,m_target,pname,f);
	}
    #endif
    
    
    #if defined(GL_HPP_FUNDEF_TexParameteriv) || defined(GL_HPP_FUNDEF_TextureParameterivEXT)
	void Parameter(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&gl::TextureParameterivEXT,&gl::TexParameteriv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&gl::TextureParameterivEXT,&gl::TexParameteriv,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexParameterfv) || defined(GL_HPP_FUNDEF_TextureParameterfvEXT)
	void Parameter(GLenum targ,GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&gl::TextureParameterfvEXT,&gl::TexParameterfv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&gl::TextureParameterfvEXT,&gl::TexParameterfv,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexParameterIiv) || defined(GL_HPP_FUNDEF_TextureParameterIivEXT)
	void ParameterI(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&gl::TextureParameterIivEXT,&gl::TexParameterIiv,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&gl::TextureParameterIivEXT,&gl::TexParameterIiv,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexParameterIuiv) || defined(GL_HPP_FUNDEF_TextureParameterIuivEXT)
	void ParameterI(GLenum targ,GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&gl::TextureParameterIuivEXT,&gl::TexParameterIuiv,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&gl::TextureParameterIuivEXT,&gl::TexParameterIuiv,m_target,pname,params);
	}
    #endif
	
	template<typename Type>
	Type GetParameter(GLenum targ,GLenum pname);
	
	template<typename Type>
	Type GetParameter(GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum targ,GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum pname);
	
	template<typename Type>
	Type GetLevelParameter(GLenum targ, GLint lod, GLenum value);
	
	template<typename Type>
	Type GetLevelParameter(GLint lod, GLenum value);
	
    #if defined(GL_HPP_FUNDEF_GetTexImage) || defined(GL_HPP_FUNDEF_GetTextureImageEXT)
	void GetImage(GLenum tex, GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&gl::GetTextureImageEXT,&gl::GetTexImage,tex,lod,format,type,img);
	}
	void GetImage(GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&gl::GetTextureImageEXT,&gl::GetTexImage,m_target,lod,format,type,img);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_GetCompressedTexImage) || defined(GL_HPP_FUNDEF_GetCompressedTextureImage)
	void GetCompressedImage(GLenum targ,GLint lod, GLvoid *img)
	{
		texture_function_dsa(&gl::GetCompressedTextureImage,&gl::GetCompressedTexImage,targ,lod,img);
	}
	void GetCompressedImage(GLint lod, GLvoid *img)
	{
		texture_function_dsa(&gl::GetCompressedTextureImage,&gl::GetCompressedTexImage,m_target,lod,img);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_GenerateMipmap) || defined(GL_HPP_FUNDEF_GenerateTextureMipmapEXT)
	void GenerateMipmap(GLenum targ)
	{
		texture_function_dsa(&gl::GenerateTextureMipmapEXT,&gl::GenerateMipmap,targ);
	}
	void GenerateMipmap()
	{
		texture_function_dsa(&gl::GenerateTextureMipmapEXT,&gl::GenerateMipmap,m_target);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TextureView)
    void View(GLenum targ,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		gl::TextureView(object,targ,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		gl::TextureView(object,m_target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	
	void View(GLenum targ,const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		gl::TextureView(object,targ,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		gl::TextureView(object,m_target,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_TexStorage1D) || defined(GL_HPP_FUNDEF_TextureStorage1DEXT)
	void Storage1D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width)
	{
		texture_function_dsa(&gl::TextureStorage1DEXT,&gl::TexStorage1D,targ,levels,internalformat,width);
	}
	void Storage1D(GLsizei levels, GLenum internalformat, GLsizei width)
	{
		texture_function_dsa(&gl::TextureStorage1DEXT,&gl::TexStorage1D,m_target,levels,internalformat,width);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexStorage2D) || defined(GL_HPP_FUNDEF_TextureStorage2DEXT)
	void Storage2D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		texture_function_dsa(&gl::TextureStorage2DEXT,&gl::TexStorage2D,targ,levels,internalformat,width,height);
	}
	void Storage2D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		texture_function_dsa(&gl::TextureStorage2DEXT,&gl::TexStorage2D,m_target,levels,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_TexStorage3D) || defined(GL_HPP_FUNDEF_TextureStorage3DEXT)
	void Storage3D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		texture_function_dsa(&gl::TextureStorage3DEXT,&gl::TexStorage3D,targ,levels,internalformat,width,height,depth);
	}
	void Storage3D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		texture_function_dsa(&gl::TextureStorage3DEXT,&gl::TexStorage3D,m_target,levels,internalformat,width,height,depth);
	}
    #endif
	/*Can't be dsaed
void TexStorage2DMultisample(

enum target, sizei samples, enum 

internalformat, sizei width, sizei height, 

boolean fixedsamplelocations);

target: {PROXY_}TEXTURE_2D_MULTISAMPLE

void TexStorage3DMultisample(

enum target, sizei samples, 

enum internalformat, sizei width, 

sizei height, sizei depth, 

boolean fixedsamplelocations);

target: {PROXY_}TEXTURE_2D_MULTISAMPLE_ARRAY

Invalidating Texture Image Data [8.20]
*/
    #if defined(GL_HPP_FUNDEF_InvalidateTexSubImage)
	void InvalidateSubImage(GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth)
	{
		gl::InvalidateTexSubImage(object,level,xoffset,yoffset,zoffset,width,height,depth);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_InvalidateTexImage)
    void InvalidateImage(GLint level)
	{
		gl::InvalidateTexImage(object,level);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_BindImageTexture)
    void BindImage(GLuint index,GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
	{
		gl::BindImageTexture(index,object,level,layered,layer,access,format);
	}
    #endif
    
protected:
	explicit Texture(GLuint o):
		_impl::GLObject<Texture>(o,gl::DeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_lastbinding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}
};

#endif
    

#ifdef GL_HPP_FUNDEF_GenSamplers
class Sampler:public _impl::GLObject<Sampler>
{
public:
	Sampler():
		_impl::GLObject<Sampler>("GLSampler",gl::GenSamplers,gl::DeleteSamplers)
	{}
	
    #if defined(GL_HPP_FUNDEF_BindSampler)
	void Bind(GLuint unit)
	{
		gl::BindSampler(unit,object);
		_impl::_checkError(GL_INVALID_VALUE,"unit is greater than or equal to the value of GL_MAX_COMBIED_TEXTURE_IMAGE_UNITS.");
		_impl::_checkError(GL_INVALID_OPERATION,"Sampler is not zero or a name previously returned from a call to glGenSamplers, or if such a name has been deleted by a call to glDeleteSamplers.");
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_SamplerParameteri)
	void Parameter(GLenum pname,GLint param)
	{
		gl::SamplerParameteri(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_SamplerParameterf)
	void Parameter(GLenum pname,GLfloat param)
	{
		gl::SamplerParameterf(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_SamplerParameteriv)
	void Parameter(GLenum pname,const GLint* param)
	{
		gl::SamplerParameteriv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_SamplerParameterfv)
	void Parameter(GLenum pname,const GLfloat* param)
	{
		gl::SamplerParameterfv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_SamplerParameterIiv)
    void ParameterIiv(GLenum pname,const GLint* param)
	{
		gl::SamplerParameterIiv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_SamplerParameterIui)
	void ParameterIui(GLenum pname,const GLuint* param)
	{
		gl::SamplerParameterIuiv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
	
	template<typename Type>
	Type GetParameter(GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum pname);
	
protected:
	explicit Sampler(GLuint o):
		_impl::GLObject<Sampler>(o,gl::DeleteSamplers)
	{}
};

#if defined(GL_HPP_FUNDEF_GetSamplerParameteriv)
template<>
inline GLint Sampler::GetParameter<GLint>(GLenum pname)
{
	GLint out[4];
	gl::GetSamplerParameteriv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    
#if defined(GL_HPP_FUNDEF_GetSamplerParameterfv)
template<>
inline GLfloat Sampler::GetParameter<GLfloat>(GLenum pname)
{
	GLfloat out[4];
	gl::GetSamplerParameterfv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    

#if defined(GL_HPP_FUNDEF_GetSamplerParameterIiv)
template<>
inline GLint Sampler::GetParameterI<GLint>(GLenum pname)
{
	GLint out[4];
	gl::GetSamplerParameterIiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif

#if defined(GL_HPP_FUNDEF_GetSamplerParameterIuiv)
template<>
inline GLuint Sampler::GetParameterI<GLuint>(GLenum pname)
{
	GLuint out[4];
	gl::GetSamplerParameterIuiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    
#endif // sampler

#ifdef	GL_HPP_FUNDEF_GenRenderbuffers
class Renderbuffer;
#endif

#ifdef GL_HPP_FUNDEF_GenFramebuffers
class Framebuffer: public _impl::GLObject<Framebuffer>
{
private:
	template<typename Callable1,typename Callable2, typename... Types>
	void framebuffer_function_dsa(Callable1,Callable2,Types... params);
	GLenum m_target;
public:
	Framebuffer():
		_impl::GLObject<Framebuffer>("GLFramebuffer",gl::GenFramebuffers,gl::DeleteFramebuffers),
		m_target(GL_DRAW_FRAMEBUFFER)
	{}
	
    #if defined(GL_HPP_FUNDEF_BindFramebuffer)
	void Bind(GLenum target)
	{
		m_target=target;
		gl::BindFramebuffer(target,object);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_NamedFramebufferParameteri)
    static void Parameter(GLenum target,GLenum pname, GLint param)
	{
		gl::FramebufferParameteri(target,pname,param);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_GetFramebufferParameterivEXT) || defined(GL_HPP_FUNDEF_GetFramebufferParameteriv)
	GLint GetParameter(GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&gl::GetFramebufferParameterivEXT,&gl::GetFramebufferParameteriv,pname,&params);
		return params;
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_GetNamedFramebufferAttachmentParameterivEXT) || defined(GL_HPP_FUNDEF_GetFramebufferAttachmentParameterivEXT)
	GLint GetAttachmentParameteriv(GLenum attachment,GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&gl::GetNamedFramebufferAttachmentParameterivEXT,&gl::GetFramebufferAttachmentParameteriv,attachment,pname,&params);
		return params;
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_NamedFramebufferTextureEXT) || defined(GL_HPP_FUNDEF_FramebufferTexture)
	void Texture(GLenum attachment, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTextureEXT,&gl::FramebufferTexture,attachment,texture,level);
	}
	void Texture(GLenum attachment,const gl::Texture& tex, GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTextureEXT,&gl::FramebufferTexture,attachment,tex.name,level);
	}
    #endif

    #if defined(GL_HPP_FUNDEF_NamedFramebufferRenderbuffer) || defined(GL_HPP_FUNDEF_NamedFramebufferRenderbufferEXT)
	void Renderbuffer(GLenum attachment, GLuint renderbuffer, GLint level);
	void Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb, GLint level);
    #endif

    #if defined(GL_HPP_FUNDEF_FramebufferTexture1D) || defined(GL_HPP_FUNDEF_NamedFramebufferTexture1DEXT)
	void Texture1D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture1DEXT, &gl::FramebufferTexture1D, attachment, textarget, texture, level);
	}
	void Texture1D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture1DEXT, &gl::FramebufferTexture1D, attachment, tex.target, tex.name, level);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_FramebufferTexture2D) || defined(GL_HPP_FUNDEF_NamedFramebufferTexture2DEXT)
	void Texture2D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture2DEXT, &gl::FramebufferTexture2D, attachment, textarget, texture, level);
	}
	void Texture2D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture2DEXT, &gl::FramebufferTexture2D, attachment, tex.target, tex.name, level);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_FramebufferTexture3D) || defined(GL_HPP_FUNDEF_NamedFramebufferTexture3DEXT)
	void Texture3D(GLenum attachment, GLenum textarget, GLuint texture, GLint level,GLint layer)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture3DEXT, &gl::FramebufferTexture3D, attachment, textarget, texture, level, layer);
	}
	void Texture3D(GLenum attachment,const gl::Texture& tex,GLint level,GLint layer)
	{
		framebuffer_function_dsa(&gl::NamedFramebufferTexture3DEXT, &gl::FramebufferTexture3D, attachment, tex.target, tex.name, level, layer);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_CheckNamedFramebufferStatusEXT) || defined(GL_HPP_FUNDEF_CheckFramebufferStatus)
	void CheckStatus(GLenum target)
	{
		framebuffer_function_dsa(&gl::CheckNamedFramebufferStatusEXT,[](GLenum t,GLenum){ return gl::CheckFramebufferStatus(t); },target);
	}
    #endif
    
protected:
	explicit Framebuffer(GLuint o):
		_impl::GLObject<Framebuffer>(o,gl::DeleteFramebuffers)
	{}	
};
#endif
    
    
#ifdef	GL_HPP_FUNDEF_GenRenderbuffers
class Renderbuffer: public _impl::GLObject<Renderbuffer>
{
private:
	template<typename Callable1,typename Callable2, typename... Types>
	void renderbuffer_function_dsa(Callable1,Callable2,Types... params);
public:
	Renderbuffer():
		_impl::GLObject<Renderbuffer>("GLRenderbuffer",gl::GenRenderbuffers,gl::DeleteRenderbuffers)
	{}
	
    #ifdef GL_HPP_FUNDEF_BindRenderbuffer
	void Bind()
	{
		gl::BindRenderbuffer(GL_RENDERBUFFER,object);
	}
    #endif
	
    #if defined(GL_HPP_FUNDEF_NamedRenderbufferStorageMultisampleEXT) || defined(GL_HPP_FUNDEF_RenderbufferStorageMultisampleEXT)
	void StorageMultisample(GLsizei samples,GLenum internalformat, GLsizei width, GLsizei height)
	{
		renderbuffer_function_dsa(&gl::NamedRenderbufferStorageMultisampleEXT,&gl::RenderbufferStorageMultisample,samples,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_NamedRenderbufferStorageEXT) || defined(GL_HPP_FUNDEF_RenderbufferStorage)
	void Storage(GLenum internalformat,GLsizei width,GLsizei height)
	{
		renderbuffer_function_dsa(&gl::NamedRenderbufferStorageEXT,&gl::RenderbufferStorage,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_HPP_FUNDEF_GetRenderbufferParameteriv) || defined(GL_HPP_FUNDEF_GetRenderbufferParameterivEXT)
	GLint GetRenderbufferParameteriv(GLenum pname)
	{
		int params;
		renderbuffer_function_dsa(&gl::GetRenderbufferParameterivEXT,&gl::GetRenderbufferParameteriv,pname,&params);
		return params;
	}
    #endif
    
protected:
	explicit Renderbuffer(GLuint o):
		_impl::GLObject<Renderbuffer>(o,gl::DeleteRenderbuffers)
	{}
};
    
#if defined(GL_HPP_FUNDEF_NamedFramebufferRenderbuffer) || defined(GL_HPP_FUNDEF_NamedFramebufferRenderbufferEXT)
void Framebuffer::Renderbuffer(GLenum attachment, GLuint renderbuffer, GLint level)
{
	framebuffer_function_dsa(&gl::NamedFramebufferRenderbuffer,&gl::FramebufferRenderbufferEXT,attachment,GL_RENDERBUFFER,renderbuffer);
}

void Framebuffer::Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb, GLint level)
{
	framebuffer_function_dsa(&gl::NamedFramebufferRenderbuffer,&gl::FramebufferRenderbufferEXT,attachment,GL_RENDERBUFFER,rb.name);
}
#endif

}
#endif

#include "opengl.inl"

std::ostream& operator<<(std::ostream& out,const gl::ContextInfo& ci);

#endif
