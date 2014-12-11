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

/*#ifndef GL_HPP_COMMON_HPP
#error "This file needs to have an opengl API selected from glhpp and included before this file.  Such as #include<glhpp/gl3.1.hpp>"
#endif*/

#define GL_HPP_CUSTOM 0x0001
namespace gl
{
	
#ifdef GL_ALT_API_NAME
inline bool check_version(unsigned int a,unsigned int b)
{
	return glaltCheckVersion(a,b);
}
inline bool check_extension(const std::string& ext)
{
	return glaltCheckExtension(ext.c_str());
}
#endif
	
	
	
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
T Get(GLenum v);

template<class T>
T Get(GLenum v, GLsizei i);

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
		_impl::VersionDependency("create glSync",{"GL_VERSION_3_2","GL_ARB_sync"});
		object=glFenceSync(condition,flags);
		_impl::_checkError(GL_INVALID_ENUM,"glFenceSync() condition is not GL_SYNC_GPU_COMMANDS_COMPLETE.\n");
		_impl::_checkError(GL_INVALID_VALUE,"glFenceSync() flags is not zero.\n");
		if(object==0)
		{
			_impl::_handleError(GL_HPP_CUSTOM,"Fence sync failed to be created");
		}
	}
	void Wait()
	{
		glWaitSync(object,0,GL_TIMEOUT_IGNORED);
	}
	GLenum ClientWait(GLuint64 timeout=0)
	{
		return glClientWaitSync(object,GL_SYNC_FLUSH_COMMANDS_BIT,timeout);
	}
	GLint Get(GLenum pname) const
	{
		GLint p;
		GLsizei numwritten=0;
		glGetSynciv(object,pname,1,&numwritten,&p);	
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

class Shader: public _impl::GLObject<Shader>
{
public:
	Shader(GLenum t);
	GLint Get(GLenum variable) const;
	void Source(const std::string& src);
	void Source(std::istream& in);
	void SourceFile(const std::string& filename);
		
	std::string Compile();
	static void ReleaseCompiler();

	void Binary(GLenum binaryformat,const void* bindata,GLsizei bindatalen)
	{
		glShaderBinary(1,&name,binaryformat,bindata,bindatalen);
	}

	std::string GetInfoLog() const
	{
		GLint sz=Get(GL_INFO_LOG_LENGTH);
		char* m=new char[sz];
		GLsizei outsz;
		glGetShaderInfoLog(name,sz,&outsz,m);
		std::string strdata(m,m+outsz);
		delete [] m;
		return strdata;
	}
	std::string GetSource() const
	{
		GLint sz=Get(GL_SHADER_SOURCE_LENGTH);
		char* m=new char[sz];
		GLsizei outsz;
		glGetShaderSource(name,sz,&outsz,m);
		std::string strdata(m,m+outsz);
		delete [] m;
		return strdata;
	}
	
private:
	GLenum type;
};



class Program: public _impl::GLObject<Program>
{
public:
	Program();
	GLint Get(GLenum variable) const;
	
	void Attach(const Shader& s);

	void Detach(const Shader& s);
	
	void BindAttribLocation(GLuint index,const std::string& name);
	
	std::pair<bool,std::string> Validate() const;
	
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
	
	GLint GetAttribLocation(const std::string& n) const;
	
	GLint GetUniformLocation(const std::string& n) const;


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
	void Uniform(const std::string& n, const T*, GLsizei count = 1);
	
	template<class T,GLuint rows,GLuint cols>
	void UniformMatrix(const std::string& n, const T*, bool transposed = false, GLsizei count = 1);
	
	std::string Link();
	
	void Use() const;
	
protected:
	explicit Program(GLuint obj);
};

class Buffer: public _impl::GLObject<Buffer>
{
public:
 	void Bind(GLenum bt) const;

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
		_impl::GLObject<Buffer>("GLBuffer",glGenBuffers,glDeleteBuffers)
	{}
	
protected:
	explicit Buffer(GLuint o):
		_impl::GLObject<Buffer>(o,glDeleteBuffers)
	{}
};


class VertexArray: public _impl::GLObject<VertexArray>
{
public:

	void Bind() const;

	void EnableAttrib(GLuint index);
	void DisableAttrib(GLuint index);

	void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
	void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);

	void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
	void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);

	void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
	void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);

	void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
	void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);

	void Elements(const GLvoid * pointer);
	void Elements(const Buffer&b);

	VertexArray():
		_impl::GLObject<VertexArray>("GLVertexArray",glGenVertexArrays,glDeleteVertexArrays)
	{}

protected:
	explicit VertexArray(GLuint o):
		_impl::GLObject<VertexArray>(o,glDeleteVertexArrays)
	{}
};


class Query: public _impl::GLObject<Query>
{
public:
	void BeginConditionalRender(GLenum mode);
	void EndConditionalRender();

	void Begin(GLenum target);
	void End(GLenum target);
	
	void BeginIndexed(GLenum target,GLuint index);
	void EndIndexed(GLenum target,GLuint index);

	template<class T>
	T Get(GLenum) const;

	Query():
		_impl::GLObject<Query>("GLQuery",glGenQueries,glDeleteQueries)
	{}
	
	void Counter()
	{
		glQueryCounter(object,GL_TIMESTAMP);
		_impl::_checkError(GL_INVALID_OPERATION,"Query object is already in use within a glBeginQuery / glEndQuery block.");
		_impl::_checkError(GL_INVALID_VALUE,"Query object is not the name of a query object returned from a previous call to glGenQueries.");
	}
	
protected:
	explicit Query(GLuint o):
		_impl::GLObject<Query>(o,glDeleteQueries)
	{}
};



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

class Texture:public _impl::GLObject<Texture>
{
private:
	void TexImageErrorCheck()
	{
		//TODO: texture error handling"
	}
	GLint tbinding_query(GLenum targ);
	
	template<typename Callable1,typename Callable2, typename... Types>
	void texture_function_dsa(Callable1,Callable2,GLenum targ,Types... params);
	GLenum m_target,m_lastbinding;
public:
	const GLenum& target;
	Texture():
		_impl::GLObject<Texture>("GLTexture",glGenTextures,glDeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_lastbinding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}
	void Bind(GLenum targ)
	{
		glBindTexture(targ,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
	void Bind()
	{
		glBindTexture(m_target,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
	void Image1D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage1DEXT,glTexImage1D,targ,level,internalformat,width,border,format,type,data);
	}
	void Image1D(GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage1DEXT, glTexImage1D, m_target, level, internalformat, width, border, format, type, data);
	}
	void Image2D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage2DEXT, glTexImage2D, targ, level, internalformat, width, height, border, format, type, data);
	}
	void Image2D(GLint level,GLint internalformat, GLsizei width, GLsizei height,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage2DEXT, glTexImage2D, m_target, level, internalformat, width, height, border, format, type, data);
	}
	void Image3D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage3DEXT,glTexImage3D,targ,level,internalformat,width,height,depth,border,format,type,data);
	}
	void Image3D(GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureImage3DEXT,glTexImage3D,m_target,level,internalformat,width,height,depth,border,format,type,data);
	}
	
	void CopyImage1D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(glCopyTextureImage1DEXT,glCopyTexImage1D,targ,level,internalformat,x,y,width,border);
	}
	void CopyImage1D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(glCopyTextureImage1DEXT, glCopyTexImage1D, m_target, level, internalformat, x, y, width, border);
	}
	void CopyImage2D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(glCopyTextureImage2DEXT, glCopyTexImage2D, targ, level, internalformat, x, y, width, height, border);
	}
	void CopyImage2D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(glCopyTextureImage2DEXT, glCopyTexImage2D, m_target, level, internalformat, x, y, width, height, border);
	}
	
	void SubImage1D(GLenum targ, GLint level, GLint xoffset, GLsizei width, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage1DEXT,glTexSubImage1D,targ,level,xoffset,width,format,type,data);
	}
	void SubImage1D(GLint level, GLint xoffset, GLsizei width, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage1DEXT,glTexSubImage1D,m_target,level,xoffset,width,format,type,data);
	}
	void SubImage2D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage2DEXT,glTexSubImage2D,targ,level,xoffset,yoffset,width,height,format,type,data);
	}
	void SubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage2DEXT,glTexSubImage2D,m_target,level,xoffset,yoffset,width,height,format,type,data);
	}  

	void SubImage3D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage3DEXT,glTexSubImage3D,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
	void SubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage3DEXT,glTexSubImage3D,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
	
	void CopySubImage1D(GLenum targ,GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(glCopyTextureSubImage1DEXT,glCopyTexSubImage1D,targ,level,xoffset,x,y,width);
	}
	void CopySubImage1D(GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(glCopyTextureSubImage1DEXT,glCopyTexSubImage1D,m_target,level,xoffset,x,y,width);
	}
	void CopySubImage2D(GLenum targ,GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage2DEXT,glCopyTexSubImage2D,targ,level,xoffset,yoffset,x,y,width,height);
	}
	void CopySubImage2D(GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage2DEXT,glCopyTexSubImage2D,m_target,level,xoffset,yoffset,x,y,width,height);
	}
	void CopySubImage3D(GLenum targ,GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage3DEXT,glCopyTexSubImage3D,targ,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
	void CopySubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage3DEXT,glCopyTexSubImage3D,m_target,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
	void CompressedImage1D(GLenum targ,GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(glCompressedTextureImage1DEXT, glCompressedTexImage1D, targ, level, internalformat, width, border, imagesize, data);
	}
	void CompressedImage1D(GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(glCompressedTextureImage1DEXT, glCompressedTexImage1D, m_target, level, internalformat, width, border, imagesize, data);
	}
	void CompressedImage2D(GLenum targ,GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage2DEXT, glCompressedTexImage2D, targ, level, internalformat, width, height, border, imagesize, data);
	}
	void CompressedImage2D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage2DEXT, glCompressedTexImage2D, m_target, level, internalformat, width, height, border, imagesize, data);
	}
	void CompressedImage3D(GLenum targ,GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage3DEXT, glCompressedTexImage3D, targ, level, internalformat, width, height, depth, border, imagesize, data);
	}
	void CompressedImage3D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage3DEXT, glCompressedTexImage3D, m_target, level, internalformat, width, height, depth, border, imagesize, data);
	}
	void CompressedSubImage1D(GLenum targ, GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage1DEXT,glCompressedTexSubImage1D,targ,level,xoffset,width,format,imagesize,data);
	}
	void CompressedSubImage1D(GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage1DEXT,glCompressedTexSubImage1D,m_target,level,xoffset,width,format,imagesize,data);
	}
	void CompressedSubImage2D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage2DEXT,glCompressedTexSubImage2D,targ,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
	void CompressedSubImage2D(GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage2DEXT,glCompressedTexSubImage2D,m_target,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
	void CompressedSubImage3D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage3DEXT,glCompressedTexSubImage3D,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
	void CompressedSubImage3D(GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth,GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage3DEXT,glCompressedTexSubImage3D,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
	/*TODO: cannot be dsaed
	 * void Image2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
	{
		
	}
	void TexImage3DMultisample(enum target, 

sizei samples, int internalformat, 

sizei width, sizei height, sizei depth, 

boolean fixedsamplelocations);

	*/
	void Buffer(GLenum targ,GLenum internalformat, GLuint buffer)
	{
		texture_function_dsa(glTextureBufferEXT,glTexBuffer,targ,internalformat,buffer);
	}
	void Buffer(GLenum targ,GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(targ,internalformat,buf.name);
	}
	void Buffer(GLenum internalformat, GLuint buffer)
	{
		texture_function_dsa(glTextureBufferEXT,glTexBuffer,m_target,internalformat,buffer);
	}
	void Buffer(GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(m_target,internalformat,buf.name);
	}
	void BufferRange(GLenum targ,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(glTextureBufferRangeEXT,glTexBufferRange,targ,internalformat,buffer,offset,size);
	}
	void BufferRange(GLenum targ,GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(targ,internalformat,buf.name,offset,size);
	}
	void BufferRange(GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(glTextureBufferRangeEXT,glTexBufferRange,m_target,internalformat,buffer,offset,size);
	}
	void BufferRange(GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(m_target,internalformat,buf.name,offset,size);
	}
	
	void Parameter(GLenum targ,GLenum pname,GLint i)
	{
		texture_function_dsa(&glTextureParameteriEXT,&glTexParameteri,targ,pname,i);
	}
	void Parameter(GLenum pname,GLint i)
	{
		texture_function_dsa(&glTextureParameteriEXT,&glTexParameteri,m_target,pname,i);
	}
	void Parameter(GLenum targ,GLenum pname,GLfloat f)
	{
		texture_function_dsa(&glTextureParameterfEXT,&glTexParameterf,targ,pname,f);
	}
	void Parameter(GLenum pname,GLfloat f)
	{
		texture_function_dsa(&glTextureParameterfEXT,&glTexParameterf,m_target,pname,f);
	}
	void Parameter(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterivEXT,&glTexParameteriv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterivEXT,&glTexParameteriv,m_target,pname,params);
	}
	void Parameter(GLenum targ,GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&glTextureParameterfvEXT,&glTexParameterfv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&glTextureParameterfvEXT,&glTexParameterfv,m_target,pname,params);
	}
	void ParameterI(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterIivEXT,&glTexParameterIiv,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterIivEXT,&glTexParameterIiv,m_target,pname,params);
	}
	void ParameterI(GLenum targ,GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&glTextureParameterIuivEXT,&glTexParameterIuiv,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&glTextureParameterIuivEXT,&glTexParameterIuiv,m_target,pname,params);
	}
	
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
	
	void GetImage(GLenum tex, GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&glGetTextureImageEXT,&glGetTexImage,tex,lod,format,type,img);
	}
	void GetImage(GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&glGetTextureImageEXT,&glGetTexImage,m_target,lod,format,type,img);
	}
	
	void GetCompressedImage(GLenum targ,GLint lod, GLvoid *img)
	{
		texture_function_dsa(&glGetCompressedTextureImage,&glGetCompressedTexImage,targ,lod,img);
	}
	void GetCompressedImage(GLint lod, GLvoid *img)
	{
		texture_function_dsa(&glGetCompressedTextureImage,&glGetCompressedTexImage,m_target,lod,img);
	}
	
	void GenerateMipmap(GLenum targ)
	{
		texture_function_dsa(&glGenerateTextureMipmapEXT,&glGenerateMipmap,targ);
	}
	void GenerateMipmap()
	{
		texture_function_dsa(&glGenerateTextureMipmapEXT,&glGenerateMipmap,m_target);
	}
	void View(GLenum targ,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,targ,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,m_target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	
	void View(GLenum targ,const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,targ,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,m_target,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	
	void Storage1D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width)
	{
		texture_function_dsa(&glTextureStorage1DEXT,&glTexStorage1D,targ,levels,internalformat,width);
	}
	void Storage1D(GLsizei levels, GLenum internalformat, GLsizei width)
	{
		texture_function_dsa(&glTextureStorage1DEXT,&glTexStorage1D,m_target,levels,internalformat,width);
	}
	void Storage2D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		texture_function_dsa(&glTextureStorage2DEXT,&glTexStorage2D,targ,levels,internalformat,width,height);
	}
	void Storage2D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		texture_function_dsa(&glTextureStorage2DEXT,&glTexStorage2D,m_target,levels,internalformat,width,height);
	}
	void Storage3D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		texture_function_dsa(&glTextureStorage3DEXT,&glTexStorage3D,targ,levels,internalformat,width,height,depth);
	}
	void Storage3D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		texture_function_dsa(&glTextureStorage3DEXT,&glTexStorage3D,m_target,levels,internalformat,width,height,depth);
	}
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
	void InvalidateSubImage(GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth)
	{
		glInvalidateTexSubImage(object,level,xoffset,yoffset,zoffset,width,height,depth);
	}
	void InvalidateImage(GLint level)
	{
		glInvalidateTexImage(object,level);
	}

	void BindImage(GLuint index,GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
	{
		glBindImageTexture(index,object,level,layered,layer,access,format);
	}
protected:
	explicit Texture(GLuint o):
		_impl::GLObject<Texture>(o,glDeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_lastbinding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}
};



class Sampler:public _impl::GLObject<Sampler>
{
public:
	Sampler():
		_impl::GLObject<Sampler>("GLSampler",glGenSamplers,glDeleteSamplers)
	{}
	
	void Bind(GLuint unit)
	{
		glBindSampler(unit,object);
		_impl::_checkError(GL_INVALID_VALUE,"unit is greater than or equal to the value of GL_MAX_COMBIED_TEXTURE_IMAGE_UNITS.");
		_impl::_checkError(GL_INVALID_OPERATION,"Sampler is not zero or a name previously returned from a call to glGenSamplers, or if such a name has been deleted by a call to glDeleteSamplers.");
	}
	
	void Parameter(GLenum pname,GLint param)
	{
		glSamplerParameteri(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	void Parameter(GLenum pname,GLfloat param)
	{
		glSamplerParameterf(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	void Parameter(GLenum pname,const GLint* param)
	{
		glSamplerParameteriv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	void Parameter(GLenum pname,const GLfloat* param)
	{
		glSamplerParameterfv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	void ParameterIiv(GLenum pname,const GLint* param)
	{
		glSamplerParameterIiv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	void ParameterIui(GLenum pname,const GLuint* param)
	{
		glSamplerParameterIuiv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
	
	template<typename Type>
	Type GetParameter(GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum pname);
	
protected:
	explicit Sampler(GLuint o):
		_impl::GLObject<Sampler>(o,glDeleteSamplers)
	{}
};

template<>
inline GLint Sampler::GetParameter<GLint>(GLenum pname)
{
	GLint out[4];
	glGetSamplerParameteriv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
template<>
inline GLfloat Sampler::GetParameter<GLfloat>(GLenum pname)
{
	GLfloat out[4];
	glGetSamplerParameterfv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
template<>
inline GLint Sampler::GetParameterI<GLint>(GLenum pname)
{
	GLint out[4];
	glGetSamplerParameterIiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
template<>
inline GLuint Sampler::GetParameterI<GLuint>(GLenum pname)
{
	GLuint out[4];
	glGetSamplerParameterIuiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}

class Renderbuffer;
class Framebuffer: public _impl::GLObject<Framebuffer>
{
private:
	template<typename Callable1,typename Callable2, typename... Types>
	void framebuffer_function_dsa(Callable1,Callable2,Types... params);
	GLenum m_target;
public:
	Framebuffer():
		_impl::GLObject<Framebuffer>("GLFramebuffer",glGenFramebuffers,glDeleteFramebuffers),
		m_target(GL_DRAW_FRAMEBUFFER)
	{}
	
	void Bind(GLenum target)
	{
		m_target=target;
		glBindFramebuffer(target,object);
	}
	static void Parameter(GLenum target,GLenum pname, GLint param)
	{
		glFramebufferParameteri(target,pname,param);
	}
	
	GLint GetParameter(GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&glGetFramebufferParameterivEXT,&glGetFramebufferParameteriv,pname,&params);
		return params;
	}
	
	GLint GetAttachmentParameteriv(GLenum attachment,GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&glGetNamedFramebufferAttachmentParameterivEXT,&glGetFramebufferAttachmentParameteriv,attachment,pname,&params);
		return params;
	}
	
	void Texture(GLenum attachment, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTextureEXT,&glFramebufferTexture,attachment,texture,level);
	}
	void Texture(GLenum attachment,const gl::Texture& tex, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTextureEXT,&glFramebufferTexture,attachment,tex.name,level);
	}

	void Renderbuffer(GLenum attachment, GLuint renderbuffer, GLint level);
	void Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb, GLint level);

	void Texture1D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture1DEXT, &glFramebufferTexture1D, attachment, textarget, texture, level);
	}
	void Texture1D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture1DEXT, &glFramebufferTexture1D, attachment, tex.target, tex.name, level);
	}
	void Texture2D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture2DEXT, &glFramebufferTexture2D, attachment, textarget, texture, level);
	}
	void Texture2D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture2DEXT, &glFramebufferTexture2D, attachment, tex.target, tex.name, level);
	}
	void Texture3D(GLenum attachment, GLenum textarget, GLuint texture, GLint level,GLint layer)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture3DEXT, &glFramebufferTexture3D, attachment, textarget, texture, level, layer);
	}
	void Texture3D(GLenum attachment,const gl::Texture& tex,GLint level,GLint layer)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture3DEXT, &glFramebufferTexture3D, attachment, tex.target, tex.name, level, layer);
	}
	void CheckStatus(GLenum target)
	{
		framebuffer_function_dsa(&glCheckNamedFramebufferStatusEXT,[](GLenum t,GLenum){ return glCheckFramebufferStatus(t); },target);
	}
protected:
	explicit Framebuffer(GLuint o):
		_impl::GLObject<Framebuffer>(o,glDeleteFramebuffers)
	{}	
};

class Renderbuffer: public _impl::GLObject<Renderbuffer>
{
private:
	template<typename Callable1,typename Callable2, typename... Types>
	void renderbuffer_function_dsa(Callable1,Callable2,Types... params);
public:
	Renderbuffer():
		_impl::GLObject<Renderbuffer>("GLRenderbuffer",glGenRenderbuffers,glDeleteRenderbuffers)
	{}
	
	void Bind()
	{
		glBindRenderbuffer(GL_RENDERBUFFER,object);
	}
	
	void StorageMultisample(GLsizei samples,GLenum internalformat, GLsizei width, GLsizei height)
	{
		renderbuffer_function_dsa(&glNamedRenderbufferStorageMultisampleEXT,&glRenderbufferStorageMultisample,samples,internalformat,width,height);
	}
	void Storage(GLenum internalformat,GLsizei width,GLsizei height)
	{
		renderbuffer_function_dsa(&glNamedRenderbufferStorageEXT,&glRenderbufferStorage,internalformat,width,height);
	}
	GLint GetRenderbufferParameteriv(GLenum pname)
	{
		int params;
		renderbuffer_function_dsa(&glGetRenderbufferParameterivEXT,&glGetRenderbufferParameteriv,pname,&params);
		return params;
	}
	
protected:
	explicit Renderbuffer(GLuint o):
		_impl::GLObject<Renderbuffer>(o,glDeleteRenderbuffers)
	{}
};
void Framebuffer::Renderbuffer(GLenum attachment, GLuint renderbuffer, GLint level)
{
	framebuffer_function_dsa(&glNamedFramebufferRenderbuffer,&glFramebufferRenderbufferEXT,attachment,GL_RENDERBUFFER,renderbuffer);
}
void Framebuffer::Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb, GLint level)
{
	framebuffer_function_dsa(&glNamedFramebufferRenderbuffer,&glFramebufferRenderbufferEXT,attachment,GL_RENDERBUFFER,rb.name);
}




}



#include "opengl.inl"

std::ostream& operator<<(std::ostream& out,const gl::ContextInfo& ci);

#endif
