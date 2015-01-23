namespace gl
{
/////////////////////////////////////////////////////////////////////////////////////
////Implementation-Defined stuff
namespace _impl
{
inline void _handleError(GLenum errcode,const std::string& what)
{
	throw Exception(errcode,what);
}
    
#ifdef GL_HPP_ERROR_CHECKING
inline void _checkError(GLenum errcode,const std::string& what)
{
	static const unsigned int NUM_ERRORS=6;
	static const GLenum errenums[NUM_ERRORS]={GL_INVALID_ENUM,GL_INVALID_VALUE,GL_INVALID_OPERATION,GL_INVALID_FRAMEBUFFER_OPERATION,GL_OUT_OF_MEMORY,GL_HPP_CUSTOM};
	static const std::string errstring[NUM_ERRORS]={"GL_INVALID_ENUM","GL_INVALID_VALUE","GL_INVALID_OPERATION","GL_INVALID_FRAMEBUFFER_OPERATION","GL_OUT_OF_MEMORY","GL_HPP_CUSTOM"};

	static GLuint errcount[NUM_ERRORS]={0,0,0,0,0,0};
	for(GLenum lerror=glGetError();lerror!=GL_NO_ERROR;lerror=glGetError())
	{
		const GLenum* ptrenum=std::find(errenums,errenums+NUM_ERRORS,lerror);
		if(ptrenum!=(errenums+NUM_ERRORS))
		{
			errcount[ptrenum-errenums]++;
		}
	}

	for(long i=0;i<NUM_ERRORS;i++)
	{
		if(errenums[i]==errcode && errcount[i]>0)
		{
			_handleError(errenums[i],(errstring[i]+':')+what);
			errcount[i]--;
		}
	}
}
#else
inline void _checkError(GLenum,const std::string&)
{}
#endif

inline void checkUniform()
{
	_impl::_checkError(GL_INVALID_OPERATION,
		"An ambiguous error occured.  One of the following things has happened:\n"
		"\tThere is no current program object.\n"
		"\tThe size of the uniform variable declared in the shader does not match the size indicated by the glUniform command.\n"
		"\tOne of the signed or unsigned integer variants of this function is used to load a uniform variable of type float, vec2, vec3, vec4, or an array of these, or if one of the floating-point variants of this function is used to load a uniform variable of type int, ivec2, ivec3, ivec4, unsigned int, uvec2, uvec3, uvec4, or an array of these.\n"
		"\tOne of the signed integer variants of this function is used to load a uniform variable of type unsigned int, uvec2, uvec3, uvec4, or an array of these.\n"
		"One of the unsigned integer variants of this function is used to load a uniform variable of type int, ivec2, ivec3, ivec4, or an array of these.\n"
		"\tWe used an invalid uniform location for the current program object.\n"
		"\tAn array was tried to be loaded (count>1) but indicated uniform variable is not an array variable.\n"
		"\tA sampler is loaded using a command other than glUniform1i and glUniform1iv.\n"
	       );
	_impl::_checkError(GL_INVALID_VALUE,"Uniform Error: Count is less than 0.");

}
}
///////////////////////////////////////////////////
//GETTERS
#ifdef GL_HPP_FUNDEF_GetFloatv
template<>
inline	GLfloat Get<GLfloat>(GLenum e)
{
	GLfloat v;
	gl::GetFloatv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetDoublev
template<>
inline	GLdouble Get<GLdouble>(GLenum e)
{
	GLdouble v;
	gl::GetDoublev(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetBooleanv
template<>
inline	GLboolean Get<GLboolean>(GLenum e)
{
	GLboolean v;
	gl::GetBooleanv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetIntegerv
template<>
inline	GLint Get<GLint>(GLenum e)
{
	GLint v;
	gl::GetIntegerv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetInteger64v
template<>
inline	GLint64 Get<GLint64>(GLenum e)
{
	GLint64 v;
	gl::GetInteger64v(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetString
template<>
inline std::string Get<std::string>(GLenum e)
{
    const char* bv=reinterpret_cast<const char*>(gl::GetString(e));
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return bv;
}
#endif

#ifdef GL_HPP_FUNDEF_GetBooleani_v
template<>
inline GLboolean Get<GLboolean>(GLenum e,GLsizei i)
{
	GLboolean v;
	gl::GetBooleani_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetIntegeri_v
template<>
inline GLint Get<GLint>(GLenum e,GLsizei i)
{
	GLint v;
	gl::GetIntegeri_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetInteger64i_v
template<>
inline GLint64 Get<GLint64>(GLenum e,GLsizei i)
{
	GLint64 v;
	gl::GetInteger64i_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_HPP_FUNDEF_GetStringi
template<>
inline std::string Get<std::string>(GLenum e,GLsizei i)
{
	const char* v=reinterpret_cast<const char*>(gl::GetStringi(e,i));
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif


///////////////////////////////////////////////////////
///Error Handling
inline Exception::Exception(GLenum cde,const std::string& wh):
		std::runtime_error(wh),
		code(cde)
{}

///////////////////////////////////////////////////////
//Shader Objects
#ifdef	GL_HPP_FUNDEF_CreateShader
namespace _impl
{
	inline void genShader(GLenum t,GLsizei,GLuint* out)
	{
		if(t!=0)
		{
			*out=gl::CreateShader(t);
		}
	}
	inline void delShader(GLsizei,const GLuint* obj)
	{
		gl::DeleteShader(*obj);
	}
}
inline Shader::Shader(GLenum t):
	_impl::GLObject<Shader>("Shader",std::bind(_impl::genShader,t,std::placeholders::_1,std::placeholders::_2),_impl::delShader),
	type(t)
{
	_impl::_checkError(GL_INVALID_ENUM,"Shader creation failed: Shader type is not an accepted value");
}

inline GLint Shader::Get(GLenum variable) const
{			
	GLint p;
	gl::GetShaderiv(object,variable,&p);	
	_impl::_checkError(GL_INVALID_VALUE,"Shader object is not a value generated by OpenGL");	
	_impl::_checkError(GL_INVALID_OPERATION,"Shader is not a shader object");	
	return p;	
}
    
    
#if defined(GL_HPP_FUNDEF_ShaderSource)
inline void Shader::Source(const std::string& src)
{
	GLint len=static_cast<GLint>(src.size());
	const char *cst=src.c_str();
	gl::ShaderSource(object,1,&cst,&len);
	_impl::_checkError(GL_INVALID_VALUE,"Shader object is not a value generated by OpenGL");
	_impl::_checkError(GL_INVALID_OPERATION,"Shader is not a shader object");
}
inline void Shader::Source(std::istream& in)
{
	std::ostringstream oss;
	oss << in.rdbuf();
	Source(oss.str());
}
inline void Shader::SourceFile(const std::string& filename)
{
	std::ifstream in(filename.c_str());
	if(!in)
		_impl::_handleError(GL_HPP_CUSTOM,std::string("File I/O error: ")+filename+"Could not be opened for reading"); 
	Source(in);
}
#endif

    
#if defined(GL_HPP_FUNDEF_CompileShader)
inline std::string Shader::Compile()
{
	gl::CompileShader(object);
	_impl::_checkError(GL_INVALID_VALUE,"Shader object is not a value generated by OpenGL.");
	_impl::_checkError(GL_INVALID_OPERATION,"Shader object is not a shader object.");
	
	std::string message(Shader::Get(GL_INFO_LOG_LENGTH),0);
	GLsizei sz;
	gl::GetShaderInfoLog(object,static_cast<GLsizei>(message.size()),&sz,&message[0]);
		
	if(Shader::Get(GL_COMPILE_STATUS)==GL_FALSE)
	{
		_impl::_handleError(GL_INVALID_VALUE,std::string("Error compiling shader...")+message); 
	}
	return message;
}
#endif
    
#endif
	

///////////////////////////////////////////////////////
//Program Objects
//direct functions
#ifndef	GL_HPP_FUNDEF_CreateProgram
    
#ifndef GL_HPP_DIRECT_STATE
//This DSA solution is justifiable because an in-cache if statement with crazy branch prediction
//will always be faster than an out of cache PIMPL paradigm for this.
//also uses a variadic macro to get function args
#define GL_HPP_UNIFORM_WRAPPER(fn,...)											\
{																			\
	if(direct_state_access_supported)												\
	{																		\
		gl::Program##fn##EXT(object,Program::GetUniformLocation(n),__VA_ARGS__);											\
	}																			\
	else																		\
	{																			\
		GLint curr_prog=gl::Get<GLint>(GL_CURRENT_PROGRAM);						\
		gl::UseProgram(object);													\
		_impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
		gl::fn(Program::GetUniformLocation(n),__VA_ARGS__);																		\
		_impl::checkUniform();													\
		gl::UseProgram(curr_prog);												\
		_impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
	}																			\
}																			\
																			\

inline void Program::Uniform(const std::string& n,const GLfloat& v1)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform1f,v1);
}
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2f,v1,v2);
}
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3f,v1,v2,v3);
}
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3,const GLfloat& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4f,v1,v2,v3,v4);
}
inline void Program::Uniform(const std::string& n,const GLint& v1)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform1i,v1);
}
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2i,v1,v2);
}
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3i,v1,v2,v3);
}
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3,const GLint& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4i,v1,v2,v3,v4);
}

inline void Program::Uniform(const std::string& n,const GLuint& v1)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform1ui,v1);
}
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2ui,v1,v2);
}
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3ui,v1,v2,v3);
}
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3,const GLuint& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4ui,v1,v2,v3,v4);
}

//matrix and array uniforms

#define GL_HPP_PROGRAM_UNIFORM_DEFINITION(type,sz,call)					\
template<> 											\
inline void Program::Uniform<type,sz>(const std::string& n,const type* pval,GLsizei count)	\
{												\
	GL_HPP_UNIFORM_WRAPPER(call,count,pval);					\
}												\
												\

#define GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(type,rows,cols,call)					\
template<> 											\
inline void Program::UniformMatrix<type,rows,cols>(const std::string& n,const type* pval,bool transposed,GLsizei count)	\
{												\
	GL_HPP_UNIFORM_WRAPPER(call,count,transposed ? GL_TRUE : GL_FALSE,pval);					\
}												\
												\
																					

#if defined (GL_HPP_FUNDEF_Uniform1fv) || defined (GL_HPP_FUNDEF_ProgramUniform1fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,1,Uniform1fv);
#endif

#if defined (GL_HPP_FUNDEF_Uniform2fv) || defined (GL_HPP_FUNDEF_ProgramUniform2fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,2,Uniform2fv);
#endif

#if defined (GL_HPP_FUNDEF_Uniform3fv) || defined (GL_HPP_FUNDEF_ProgramUniform3fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,3,Uniform3fv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform4fv) || defined (GL_HPP_FUNDEF_ProgramUniform4fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,4,Uniform4fv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform1iv) || defined (GL_HPP_FUNDEF_ProgramUniform1iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,1,Uniform1iv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform2iv) || defined (GL_HPP_FUNDEF_ProgramUniform2iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,2,Uniform2iv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform3iv)  || defined (GL_HPP_FUNDEF_ProgramUniform3iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,3,Uniform3iv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform4iv) || defined (GL_HPP_FUNDEF_ProgramUniform4iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,4,Uniform4iv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform1uiv) || defined (GL_HPP_FUNDEF_ProgramUniform1uiv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,1,Uniform1uiv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform2uiv) || defined (GL_HPP_FUNDEF_ProgramUniform2uiv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,2,Uniform2uiv);
#endif

#if defined (GL_HPP_FUNDEF_Uniform3uiv) || defined (GL_HPP_FUNDEF_ProgramUniform3uiv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,3,Uniform3uiv);
#endif
    
#if defined (GL_HPP_FUNDEF_Uniform4uiv) ||  defined (GL_HPP_FUNDEF_ProgramUniform4uiv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,4,Uniform4uiv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix2fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix2fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,2,UniformMatrix2fv);
#endif

#if defined (GL_HPP_FUNDEF_UniformMatrix3fv) || defined(GL_HPP_FUNDEF_ProgramUniformMatrix3fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,3,UniformMatrix3fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix4fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix4fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,4,UniformMatrix4fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix2x3fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix2x3fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,3,UniformMatrix2x3fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix3x2fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix3x2fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,2,UniformMatrix3x2fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix2x4fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix2x4fv)
    GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,4,UniformMatrix2x4fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix4x2fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix4x2fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,2,UniformMatrix4x2fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix3x4fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix3x4fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,4,UniformMatrix3x4fv);
#endif
    
#if defined (GL_HPP_FUNDEF_UniformMatrix4x3fv) || defined (GL_HPP_FUNDEF_ProgramUniformMatrix4x3fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,3,UniformMatrix4x3fv);
#endif
    
#else

#endif

inline Program::ActiveInfo Program::GetActiveAttrib(GLuint index) const
{
	Program::ActiveInfo ai;
	GLint sz=Program::Get(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
	ai.name.reserve(sz);
	ai.name.insert(0,sz,0);
	
	gl::GetActiveAttrib(object,index,sz,&sz,&(ai.size),&(ai.type),&(ai.name[0]));
	_impl::_checkError(GL_INVALID_VALUE,"Active Attribute Query: index is greater than or equal to the number of active attribute variables in program.");
	return ai;
}
inline Program::ActiveInfo Program::GetActiveAttrib(const std::string& name) const
{
	return Program::GetActiveAttrib(Program::GetAttribLocation(name));
}
inline Program::ActiveInfo Program::GetActiveUniform(GLuint index) const
{
	Program::ActiveInfo ai;
	GLint sz=Program::Get(GL_ACTIVE_UNIFORM_MAX_LENGTH);
	ai.name.reserve(sz);
	ai.name.insert(0,sz,0);
	
	gl::GetActiveUniform(object,index,sz,&sz,&(ai.size),&(ai.type),&(ai.name[0]));
	_impl::_checkError(GL_INVALID_VALUE,"Active Uniform Query: index is greater than or equal to the number of active attribute variables in program.");
	return ai;
}
inline Program::ActiveInfo Program::GetActiveUniform(const std::string& name) const
{
	return Program::GetActiveUniform(Program::GetUniformLocation(name));
}

namespace _impl
{
	void genProgram(GLsizei n,GLuint* obj)
	{
		*obj=gl::CreateProgram();
	}
	void delProgram(GLsizei n,const GLuint* obj)
	{
		gl::DeleteProgram(*obj);
	}
}

inline Program::Program():
	_impl::GLObject<Program>("GLProgram",_impl::genProgram,_impl::delProgram)
{}
inline Program::Program(GLuint obj):
	_impl::GLObject<Program>(obj,_impl::delProgram)
{}

#if defined (GL_HPP_FUNDEF_GetProgramiv)
inline GLint Program::Get(GLenum variable) const
{			
	GLint p;
	gl::GetProgramiv(object,variable,&p);	
	_impl::_checkError(GL_INVALID_VALUE,"Program object is not a value generated by OpenGL");	
	_impl::_checkError(GL_INVALID_OPERATION,"Program does not contain the right shader type for the property requested.");
	_impl::_checkError(GL_INVALID_ENUM,"Property requested does not seem to exist");
	return p;	
}
#endif
	
#if defined (GL_HPP_FUNDEF_AttachShader)
inline void Program::Attach(const Shader& s)
{
	gl::AttachShader(object,s.name);
	_impl::_checkError(GL_INVALID_OPERATION,"Shader is already attached to program.");
}
#endif

#if defined (GL_HPP_FUNDEF_DetachShader)
inline void Program::Detach(const Shader& s)
{
	gl::DetachShader(object,s.name);
	_impl::_checkError(GL_INVALID_OPERATION,"Shader to detach is not attached to program.");
}
#endif
	
#if defined (GL_HPP_FUNDEF_BindAttribLocation)
inline void Program::BindAttribLocation(GLuint index,const std::string& name)
{
	gl::BindAttribLocation(object,index,name.c_str());
	_impl::_checkError(GL_INVALID_VALUE,"BindAttribLocation failed: Program index is greater than or equal to GL_MAX_VERTEX_ATTRIBS");
	_impl::_checkError(GL_INVALID_OPERATION,"BindAttribLocation failed, name starts with the reserved prefix \"gl_\".");
}
#endif
	
#if defined (GL_HPP_FUNDEF_ValidateProgram) && defined (GL_HPP_FUNDEF_GetProgramInfoLog) && defined (GL_HPP_FUNDEF_GetProgramiv)
inline std::pair<bool,std::string> Program::Validate() const
{
	gl::ValidateProgram(object);
	std::string message(Program::Get(GL_INFO_LOG_LENGTH),0);
	GLsizei sz;
	gl::GetProgramInfoLog(object,static_cast<GLsizei>(message.size()),&sz,&message[0]);
	bool valid=Program::Get(GL_VALIDATE_STATUS) == GL_TRUE;
		
	/*if(valid==GL_FALSE)
	{
		_handleError(GL_INVALID_VALUE,std::string("Failure to validate shader program...")+message); 
	}*/
	return make_pair(valid,message);
}
#endif
	
#if defined (GL_HPP_FUNDEF_GetAttribLocation)
inline GLint Program::GetAttribLocation(const std::string& n) const
{
	GLint r=gl::GetAttribLocation(object,n.c_str());
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot get attribute, program not currently linked");
	return r;
}
#endif
	
#if defined (GL_HPP_FUNDEF_GetUniformLocation)
inline GLint Program::GetUniformLocation(const std::string& n) const
{
	return gl::GetUniformLocation(object,n.c_str());
}
#endif
	
#ifdef GL_HPP_FUNDEF_LinkProgram
inline std::string Program::Link()
{
	gl::LinkProgram(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Link failed: program is the currently active program object and transform feedback mode is active.");

	std::string message(Program::Get(GL_INFO_LOG_LENGTH),0);
	GLsizei sz;
	gl::GetProgramInfoLog(object,static_cast<GLsizei>(message.size()),&sz,&message[0]);
		
	if(Program::Get(GL_LINK_STATUS)==GL_FALSE)
	{
		_impl::_handleError(GL_INVALID_VALUE,std::string("Error linking program:")+message); 
	}
	return message;
}
#endif

#ifdef GL_HPP_FUNDEF_UseProgram
inline void Program::Use() const
{
	gl::UseProgram(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Program could not be made part of current state or transform feedback mode is activated");
}
#endif

inline void Program::BindFragDataLocation(GLuint colorNumber,const std::string& name)
{
	gl::BindFragDataLocation(object,colorNumber,name.c_str());
	_impl::_checkError(GL_INVALID_VALUE,"Binding Fragment Output Location failed: colorNumber is greater than or equal to GL_MAX_DRAW_BUFFERS");
	_impl::_checkError(GL_INVALID_OPERATION,"Binding Fragment Output Location failed: name starts with the reserved gl_ prefix");
}
inline GLint Program::GetFragDataLocation(const std::string& name)
{
	return gl::GetFragDataLocation(object,name.c_str());
}

#endif //GL_HPP_FUNDEF_CreateProgram


//////////////////////////////////////////////////////////////////////////////////////
//Buffer
#ifdef GL_HPP_FUNDEF_GenBuffers
inline void Buffer::Bind(GLenum bt) const 
{
	gl::BindBuffer(bt,object);
	_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Buffer: Buffer target is not one of the allowable values.");
}

inline void Buffer::BindRange(GLenum target, GLuint index,GLintptr offset, GLsizeiptr size) const
{
	gl::BindBufferRange(target,index,object,offset,size);
	_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_TRANSFORM_FEEDBACK_BUFFER or GL_UNIFORM_BUFFER.");
	_impl::_checkError(GL_INVALID_VALUE,"Is generated if index is greater than or equal to the number of target-specific indexed binding points. OR size is less than or equal to zero, or if offset + size is greater than the value of GL_BUFFER_SIZE.");
}
inline void Buffer::BindBase(GLenum target,GLuint index) const
{
	gl::BindBufferBase(target,index,object);
	
	_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_TRANSFORM_FEEDBACK_BUFFER or GL_UNIFORM_BUFFER.");
	_impl::_checkError(GL_INVALID_VALUE,"Is generated if index is greater than or equal to the number of target-specific indexed binding points. OR size is less than or equal to zero or it doesn't have a data store");
}

inline void Buffer::FlushMappedRange(GLintptr offset,GLsizeiptr sz) const
{
	if(direct_state_access_supported)
	{
		gl::FlushMappedNamedBufferRangeEXT(object,offset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or length is negative, or offset + length exceeds the size of the mapping.");
		_impl::_checkError(GL_INVALID_OPERATION,"Zero Buffer is bound to target, or the buffer bound to target is not mapped, or is mapped without the GL_MAP_FLUSH_EXPLICIT flag.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::FlushMappedBufferRange(GL_PIXEL_PACK_BUFFER,offset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or length is negative, or offset + length exceeds the size of the mapping.");
		_impl::_checkError(GL_INVALID_OPERATION,"Zero Buffer is bound to target, or the buffer bound to target is not mapped, or is mapped without the GL_MAP_FLUSH_EXPLICIT flag.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
}
inline void Buffer::GetSubData(GLintptr offset,GLsizeiptr size,void* output_buffer) const
{
	if(direct_state_access_supported)
	{
		gl::GetNamedBufferSubDataEXT(object,offset,size,output_buffer);
		_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER, GL_PIXEL_PACK_BUFFER, or GL_PIXEL_UNPACK_BUFFER.");
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or if together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target. OR The buffer object being queried is already mapped.");

	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::GetBufferSubData(GL_PIXEL_PACK_BUFFER,offset,size,output_buffer);
		_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER, GL_PIXEL_PACK_BUFFER, or GL_PIXEL_UNPACK_BUFFER.");
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or if together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target. OR The buffer object being queried is already mapped.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
}
inline void* Buffer::GetMappedPointer() const
{
	void* p;
	if(direct_state_access_supported)
	{
		gl::GetNamedBufferPointervEXT(object, GL_BUFFER_MAP_POINTER,&p);
		_impl::_checkError(GL_INVALID_ENUM,"Target or pname is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::GetBufferPointerv(GL_PIXEL_PACK_BUFFER, GL_BUFFER_MAP_POINTER,&p);
		_impl::_checkError(GL_INVALID_ENUM,"Target or pname is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
	return p;
}

inline GLint Buffer::Get(GLenum value) const
{
	GLint p;
	if(direct_state_access_supported)
	{
		gl::GetNamedBufferParameterivEXT(object,value,&p);
		_impl::_checkError(GL_INVALID_ENUM,"target or value is not an accepted value");
		_impl::_checkError(GL_INVALID_OPERATION,"Reserved buffer object name 0 is bound to target.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::GetBufferParameteriv(GL_PIXEL_PACK_BUFFER,value,&p);
		_impl::_checkError(GL_INVALID_ENUM,"target or value is not an accepted value");
		_impl::_checkError(GL_INVALID_OPERATION,"Reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
	return p;
}

inline void Buffer::Data(GLsizeiptr sz,const GLvoid* data,GLenum usage)
{
	if(direct_state_access_supported)
	{
		gl::NamedBufferDataEXT(object,sz,data,usage);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the accepted buffer targets OR usage is not GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY, GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.");
		_impl::_checkError(GL_INVALID_VALUE,"size is negative.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot bind the reserved buffer name 0 to anything.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to create a data store with the specified size.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::BufferData(GL_PIXEL_PACK_BUFFER,sz,data,usage);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the accepted buffer targets OR usage is not GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY, GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.");
		_impl::_checkError(GL_INVALID_VALUE,"size is negative.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot bind the reserved buffer name 0 to anything.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to create a data store with the specified size.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
}

template<class T>
inline void Buffer::Data(const T* b,const T* e,GLenum usage)
{
	GLsizeiptr sz=(e-b);
	Data(sz*sizeof(T),reinterpret_cast<const GLvoid*>(b),usage);
}

inline void Buffer::SubData(GLintptr offset,GLsizeiptr size,const GLvoid* data)
{
	if(direct_state_access_supported)
	{
		gl::NamedBufferSubDataEXT(object,offset,size,data);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The buffer object being updated is currently mapped, or the reserved buffer object name 0 is bound to target.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		gl::BufferSubData(GL_PIXEL_PACK_BUFFER,offset,size,data);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The buffer object being updated is currently mapped, or the reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
}

inline void Buffer::ClearData(GLenum internalformat,GLenum format,GLenum type,const void* data)
{
	GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
	if(ppb_binding!=object)
	{
		gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
	}
	gl::ClearBufferData(GL_PIXEL_PACK_BUFFER_BINDING,internalformat,format,type,data);
			
	_impl::_checkError(GL_INVALID_ENUM,"internalformat is not a sized internal format.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the buffer's data stor,e is mapped with glMapBufferRange or glMapBuffer.");
	
	if(ppb_binding!=object)
	{
		gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
	}
}
inline void Buffer::ClearSubData(GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void* data)
{
	GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
	if(ppb_binding!=object)
	{
		gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
	}
	gl::ClearBufferSubData(GL_PIXEL_PACK_BUFFER_BINDING,internalformat,offset,size,format,type,data);
	
	_impl::_checkError(GL_INVALID_ENUM,"Target not one of the generic buffer binding targets, or internalformat is not a sized internal format.");
	_impl::_checkError(GL_INVALID_VALUE,"No buffer is bound to GL_PIXEL_PACK_BUFFER_BINDING. OR offset or range are not multiples of the number of basic machine units per-element for the internal format specified by internalformat. OR  offset or size is less than zero, or if offset + size is greater than the value of GL_BUFFER_SIZE for the buffer bound to target.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the specified buffer range is mapped with glMapBufferRange or glMapBuffer.");
	
	if(ppb_binding!=object)
	{
		gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
	}
}

inline void Buffer::InvalidateData()
{
	gl::InvalidateBufferData(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the buffer is currently mapped.");
}
inline void Buffer::InvalidateSubData(GLintptr offset,GLsizeiptr length)
{
	gl::InvalidateBufferSubData(object,offset,length);
	_impl::_checkError(GL_INVALID_VALUE,"offset or length is negative, or if offset + length is greater than the value of GL_BUFFER_SIZE for buffer.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of buffer is currently mapped.");
}

template<class T>
inline void Buffer::SubData(GLintptr offset,const T* b,const T* e)
{
	GLsizeiptr sz=(e-b);
	SubData(offset*sizeof(T),sz*sizeof(T),reinterpret_cast<const GLvoid*>(b));
}

inline void* Buffer::Map(GLenum access)
{
	void *p;
	if(direct_state_access_supported)
	{
		p=gl::MapNamedBufferEXT(GL_PIXEL_PACK_BUFFER_BINDING,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		p=gl::MapBuffer(GL_PIXEL_PACK_BUFFER_BINDING,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
	return p;
}

template<GLenum ac>
inline typename _impl::BufferMapType<ac>::ptrtype Buffer::Map()
{
	return reinterpret_cast<typename _impl::BufferMapType<ac>::ptrtype>(Map(ac));
}

inline bool Buffer::Unmap()
{
	bool p;
	if(direct_state_access_supported)
	{
		p=gl::UnmapNamedBufferEXT(object) == GL_TRUE;
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot unmap a buffer object whose data store is not mapped.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}

		p=gl::UnmapBuffer(GL_PIXEL_PACK_BUFFER) == GL_TRUE;
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot unmap a buffer object whose data store is not mapped.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
	return p;
}

inline void* Buffer::MapRange(GLintptr offset,GLsizeiptr length,GLbitfield access)
{
	void *p;
	if(direct_state_access_supported)
	{
		p=gl::MapNamedBufferRangeEXT(object,offset,length,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
	}
	else
	{
		GLint ppb_binding=gl::Get<GLint>(GL_PIXEL_PACK_BUFFER_BINDING);
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,object);
		}
		p=gl::MapBufferRange(GL_PIXEL_PACK_BUFFER_BINDING,offset,length,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
		if(ppb_binding!=object)
		{
			gl::BindBuffer(GL_PIXEL_PACK_BUFFER,ppb_binding);
		}
	}
	return p;
}

template<GLbitfield ac>
inline typename _impl::BufferMapType<(ac & GL_MAP_READ_BIT ? ( ac & GL_MAP_WRITE_BIT ? GL_READ_WRITE : GL_READ_ONLY) : GL_WRITE_ONLY)>::ptrtype
Buffer::MapRange(GLintptr offset,GLsizeiptr length)
{
	return reinterpret_cast<typename _impl::BufferMapType<(ac & GL_MAP_READ_BIT ? ( ac & GL_MAP_WRITE_BIT ? GL_READ_WRITE : GL_READ_ONLY) : GL_WRITE_ONLY)>::ptrtype>(
		MapRange(offset,length,ac)
		);
}

inline void Buffer::CopySubData(const Buffer& read,GLintptr readoffset,GLintptr writeoffset,GLsizeiptr sz)
{
	if(direct_state_access_supported)
	{
		gl::NamedCopyBufferSubDataEXT(read.object,object,readoffset,writeoffset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Any of readoffset, writeoffset or size is negative, if readoffset + size exceeds the size of the buffer object bound to readtarget or if writeoffset + size exceeds the size of the buffer object bound to writetarget, OR the same buffer object is bound to both readtarget and writetarget and the ranges [readoffset, readoffset + size) and [writeoffset, writeoffset + size) overlap.");
		_impl::_checkError(GL_INVALID_OPERATION," is generated if zero is bound to readtarget or writetarget. or the buffer object bound to either readtarget or writetarget is mapped.");
	}
	else
	{
		gl::BindBuffer(GL_COPY_READ_BUFFER,read.object);
		_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Read Buffer: Buffer target is not one of the allowable values.");
		gl::BindBuffer(GL_COPY_WRITE_BUFFER,object);
		_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Write Buffer: Buffer target is not one of the allowable values.");
		gl::CopyBufferSubData(GL_COPY_READ_BUFFER,GL_COPY_WRITE_BUFFER,readoffset,writeoffset,sz);

		_impl::_checkError(GL_INVALID_VALUE,"Any of readoffset, writeoffset or size is negative, if readoffset + size exceeds the size of the buffer object bound to readtarget or if writeoffset + size exceeds the size of the buffer object bound to writetarget, OR the same buffer object is bound to both readtarget and writetarget and the ranges [readoffset, readoffset + size) and [writeoffset, writeoffset + size) overlap.");
		_impl::_checkError(GL_INVALID_OPERATION," is generated if zero is bound to readtarget or writetarget. or the buffer object bound to either readtarget or writetarget is mapped.");
	}
}
#endif

///////////////////////////////////////////////////////////////////
//VERTEX ARRAY DATA
#ifdef GL_HPP_FUNDEF_GenVertexArrays
    
#if defined(GL_HPP_FUNDEF_BindVertexArray)
inline void VertexArray::Bind() const 
{
	if(gl::Get<GLint>(GL_VERTEX_ARRAY_BINDING) != object)
		gl::BindVertexArray(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Binding Vertex Array Object failed");
}
#endif
    
#if defined(GL_HPP_FUNDEF_EnableVertexArrayAttribEXT) || defined(GL_HPP_FUNDEF_EnableVertexAttribArray)
inline void VertexArray::EnableAttrib(GLuint index)
{
	if(direct_state_access_supported)
	{
		gl::EnableVertexArrayAttribEXT(object,index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
	}
	else
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			gl::BindVertexArray(object);
		}
		gl::EnableVertexAttribArray(index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
		if(pbinding!=object)
		{
			gl::BindVertexArray(pbinding);
		}
	}
}
#endif
    
#if defined(GL_HPP_FUNDEF_DisableVertexArrayAttribEXT) || defined(GL_HPP_FUNDEF_DisableVertexAttribArray)
inline void VertexArray::DisableAttrib(GLuint index)
{
	if(direct_state_access_supported)
	{
		gl::DisableVertexArrayAttribEXT(object,index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
	}
	else
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			gl::BindVertexArray(object);
		}
		gl::DisableVertexAttribArray(index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
		if(pbinding!=object)
		{
			gl::BindVertexArray(pbinding);
		}
	}
}
#endif
    
inline void VertexArray::AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer)
{
	//direct state access does not seem to be supported with a 0 buffer binding.  No, it DOES..it DOES support it, its just weird.  
	//This is like, offset blah blah blah.

	if(direct_state_access_supported)
	{
		gl::VertexArrayVertexAttribOffsetEXT(object,0,index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,reinterpret_cast<GLintptr>(pointer));
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	
	}
	else
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			gl::BindVertexArray(object);
		}
		gl::VertexAttribPointer(index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,pointer);
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
		if(pbinding!=object)
		{
			gl::BindVertexArray(pbinding);
		}
	}
}
inline void VertexArray::AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer)
{
	if(direct_state_access_supported)
	{
		gl::VertexArrayVertexAttribIOffsetEXT(object,0,index,size,type,stride,reinterpret_cast<GLintptr>(pointer));
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	}
	else
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			gl::BindVertexArray(object);
		}
		gl::VertexAttribIPointer(index,size,type,stride,pointer);
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
		if(pbinding!=object)
		{
			gl::BindVertexArray(pbinding);
		}
	}
}

inline void VertexArray::AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
	if(direct_state_access_supported)
	{
		gl::VertexArrayVertexAttribOffsetEXT(object,b.name,index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,offset);
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	}
	else
	{
		GLint bbinding=Get<GLint>(GL_ARRAY_BUFFER_BINDING);
		if(bbinding != b.name)
		{
			b.Bind(GL_ARRAY_BUFFER);
		}
		AttribPointer(index,size,type,normalized,stride,reinterpret_cast<const void*>(offset));
		if(bbinding != b.name)
		{
			gl::BindBuffer(GL_ARRAY_BUFFER,bbinding);
		}
	}
}
inline void VertexArray::AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
	if(direct_state_access_supported)
	{
		gl::VertexArrayVertexAttribIOffsetEXT(object,b.name,index,size,type,stride,offset);
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	}
	else
	{
		GLint bbinding=Get<GLint>(GL_ARRAY_BUFFER_BINDING);
		if(bbinding != b.name)
		{
			b.Bind(GL_ARRAY_BUFFER);
		}
		AttribIPointer(index,size,type,stride,reinterpret_cast<const void*>(offset));
		if(bbinding != b.name)
		{
			gl::BindBuffer(GL_ARRAY_BUFFER,bbinding);
		}
	}
}


inline void VertexArray::Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer)
{
	AttribPointer(index,size,type,normalized,stride,pointer);
	EnableAttrib(index);
}
inline void VertexArray::AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer)
{
	AttribIPointer(index,size,type,stride,pointer);
	EnableAttrib(index);
}
inline void VertexArray::Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
	AttribPointer(index,size,type,normalized,stride,b,offset);
	EnableAttrib(index);
}
inline void VertexArray::AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
	AttribIPointer(index,size,type,stride,b,offset);
	EnableAttrib(index);
}

#if defined(GL_HPP_FUNDEF_BindVertexArray) && defined(GL_HPP_FUNDEF_BindBuffer)
inline void VertexArray::Elements(const Buffer& b)
{
	GLint bbinding=Get<GLint>(GL_ELEMENT_ARRAY_BUFFER_BINDING);
	GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
	if(pbinding!=object)
	{
		gl::BindVertexArray(object);
	} 
	if(bbinding != b.name)
	{
		b.Bind(GL_ELEMENT_ARRAY_BUFFER);
	}
	_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
	_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
	_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	if(pbinding!=object)
	{
		gl::BindVertexArray(pbinding);
	}
}
#endif
    
#endif


/////////////////////////////////////////////////////////////////////////////////////
/////////////// Query objects
#ifdef GL_HPP_FUNDEF_GenQueries
#if defined(GL_HPP_FUNDEF_BeginConditionalRender)
inline void Query::BeginConditionalRender(GLenum mode)
{
	gl::BeginConditionalRender(object,mode);
	_impl::_checkError(GL_INVALID_VALUE,"Id is not the name of an existing query object.");
	_impl::_checkError(GL_INVALID_ENUM,"Query Mode is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot begin conditional rendering while conditional rendering is already active OR Id is the name of a query object with a target other than GL_SAMPLES_PASSED or GL_ANY_SAMPLES_PASSED or Id is the name of a query currently in progress.");
}
#endif
#if defined(GL_HPP_FUNDEF_EndConditionalRender)
inline void Query::EndConditionalRender()
{
	gl::EndConditionalRender();
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end conditional rendering if conditional rendering is inactive");
}
#endif
    
#if defined(GL_HPP_FUNDEF_BeginQuery)
inline void Query::Begin(GLenum target)
{
	gl::BeginQuery(target,object);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot interrupt a query object of the same target which is already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif
    
#if defined(GL_HPP_FUNDEF_EndQuery)
inline void Query::End(GLenum target)
{
	gl::EndQuery(target);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end a query objec which is not already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif

#if defined(GL_HPP_FUNDEF_BeginQueryIndexed)
inline void Query::BeginIndexed(GLenum target,GLuint index)
{
	gl::BeginQueryIndexed(target,index,object);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot interrupt a query object of the same target which is already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif
    
#if defined(GL_HPP_FUNDEF_EndQueryIndexed)
inline void Query::EndIndexed(GLenum target,GLuint index)
{
	gl::EndQueryIndexed(target,index);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end a query objec which is not already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif

    
#if defined(GL_HPP_FUNDEF_GetQueryObjectiv)
template<>
inline GLint Query::Get<GLint>(GLenum pname) const
{
	GLint p;
	gl::GetQueryObjectiv(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif

#if defined(GL_HPP_FUNDEF_GetQueryObjectuiv)
template<>
inline GLuint Query::Get<GLuint>(GLenum pname) const
{
	GLuint p;
	gl::GetQueryObjectuiv(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif
 
#if defined(GL_HPP_FUNDEF_GetQueryObjecti64v)
template<>
inline GLint64 Query::Get<GLint64>(GLenum pname) const
{
	GLint64 p;
	gl::GetQueryObjecti64v(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif
 
#if defined(GL_HPP_FUNDEF_GetQueryObjectui64v)
template<>
inline GLuint64 Query::Get<GLuint64>(GLenum pname) const
{
	GLuint64 p;
	gl::GetQueryObjectui64v(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif

#endif
    
    


inline ContextInfo::ContextInfo():
		vendor(Get<std::string>(GL_VENDOR)),
		renderer(Get<std::string>(GL_RENDERER)),
		version(Get<std::string>(GL_VERSION)),
		glsl_version(Get<std::string>(GL_SHADING_LANGUAGE_VERSION)),
		gl_extensions(Get<GLint>(GL_NUM_EXTENSIONS)),
		versionmajor(Get<GLint>(GL_MAJOR_VERSION)),
		versionminor(Get<GLint>(GL_MINOR_VERSION))
	{
		for(auto vi=gl_extensions.begin();vi!=gl_extensions.end();++vi)
		{
			*vi=Get<std::string>(GL_EXTENSIONS,static_cast<GLsizei>(vi-gl_extensions.begin()));
		}
	}


#ifdef GL_HPP_FUNDEF_GenTextures

#if defined(GL_HPP_FUNDEF_GetIntegerv)
inline GLint Texture::tbinding_query(GLenum target)
{
	static const GLenum mapping[]={
			GL_TEXTURE_1D, GL_TEXTURE_BINDING_1D,
			GL_TEXTURE_2D, GL_TEXTURE_BINDING_2D,
			GL_PROXY_TEXTURE_2D, GL_TEXTURE_BINDING_2D,
			GL_TEXTURE_1D_ARRAY, GL_TEXTURE_BINDING_1D_ARRAY,
			GL_PROXY_TEXTURE_1D_ARRAY,GL_TEXTURE_BINDING_1D_ARRAY, 
			GL_TEXTURE_RECTANGLE, GL_TEXTURE_BINDING_RECTANGLE,
			GL_PROXY_TEXTURE_RECTANGLE, GL_TEXTURE_BINDING_RECTANGLE,
			GL_TEXTURE_CUBE_MAP_POSITIVE_X,GL_TEXTURE_BINDING_CUBE_MAP, 
			GL_TEXTURE_CUBE_MAP_NEGATIVE_X,GL_TEXTURE_BINDING_CUBE_MAP, 
			GL_TEXTURE_CUBE_MAP_POSITIVE_Y,GL_TEXTURE_BINDING_CUBE_MAP,
			GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,GL_TEXTURE_BINDING_CUBE_MAP,
			GL_TEXTURE_CUBE_MAP_POSITIVE_Z,GL_TEXTURE_BINDING_CUBE_MAP,
			GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,GL_TEXTURE_BINDING_CUBE_MAP,
			GL_PROXY_TEXTURE_CUBE_MAP,GL_TEXTURE_BINDING_CUBE_MAP,
			GL_TEXTURE_3D, GL_TEXTURE_BINDING_3D,
			GL_PROXY_TEXTURE_3D, GL_TEXTURE_BINDING_3D,
			GL_TEXTURE_2D_ARRAY, GL_TEXTURE_BINDING_2D_ARRAY,
			GL_PROXY_TEXTURE_2D_ARRAY,GL_TEXTURE_BINDING_2D_ARRAY, 
		};
	GLenum bquery=GL_TEXTURE_BINDING_1D;
	for(int i=0;i<sizeof(mapping)/2;i++)
	{
		if(target==mapping[2*i])
		{
			bquery=mapping[2*i+1];
			break;
		}
	}
	GLint t_binding=gl::Get<GLint>(bquery);
	return t_binding;
}
#endif

template<class Callable1,class Callable2,typename... Types>
inline void Texture::texture_function_dsa(Callable1 dsafunc,Callable2 ndsafunc,GLenum target,Types... params)
{
	if(target != m_target)
	{
		m_target=target;
		m_lastbinding=(GLenum)tbinding_query(target);
	}
	if(direct_state_access_supported)
	{
		dsafunc(object,target,params...);
	}
	else
	{
		GLenum t_binding=m_lastbinding;
		if(t_binding!=object)
		{
			gl::BindTexture(target,object);
		}
		ndsafunc(target,params...);
		if(t_binding!=object)
		{
			gl::BindTexture(target,t_binding);
		}
	}
		
}

#if defined(GL_HPP_FUNDEF_GetTextureParameterivEXT) || defined(GL_HPP_FUNDEF_GetTexParameteriv)
template<>
inline GLint Texture::GetParameter<GLint>(GLenum targ,GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureParameterivEXT,&gl::GetTexParameteriv,targ,pname,out);
	return out[0];
}
#endif

template<>
inline GLint Texture::GetParameter<GLint>(GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureParameterivEXT,&gl::GetTexParameteriv,m_target,pname,out);
	return out[0];
}
#endif
    

#if defined(GL_HPP_FUNDEF_GetTextureParameterfvEXT) || defined(GL_HPP_FUNDEF_GetTexParameterfv)
template<>
inline GLfloat Texture::GetParameter<GLfloat>(GLenum targ,GLenum pname)
{
	GLfloat out[4];
	texture_function_dsa(&gl::GetTextureParameterfvEXT,&gl::GetTexParameterfv,targ,pname,out);
	return out[0];
}
template<>
inline GLfloat Texture::GetParameter<GLfloat>(GLenum pname)
{
	GLfloat out[4];
	texture_function_dsa(&gl::GetTextureParameterfvEXT,&gl::GetTexParameterfv,m_target,pname,out);
	return out[0];
}
#endif
    
    
#if defined(GL_HPP_FUNDEF_GetTextureParameterIivEXT) || defined(GL_HPP_FUNDEF_GetTexParameterIiv)
template<>
inline GLint Texture::GetParameterI<GLint>(GLenum targ,GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureParameterIivEXT,&gl::GetTexParameterIiv,targ,pname,out);
	return out[0];
}
template<>
inline GLint Texture::GetParameterI<GLint>(GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureParameterIivEXT,&gl::GetTexParameterIiv,m_target,pname,out);
	return out[0];
}
#endif
    
#if defined(GL_HPP_FUNDEF_GetTextureParameterIuivEXT) || defined(GL_HPP_FUNDEF_GetTexParameterIuiv)
template<>
inline GLuint Texture::GetParameterI<GLuint>(GLenum targ,GLenum pname)
{
	GLuint out[4];
	texture_function_dsa(&gl::GetTextureParameterIuivEXT,&gl::GetTexParameterIuiv,targ,pname,out);
	return out[0];
}
template<>
inline GLuint Texture::GetParameterI<GLuint>(GLenum pname)
{
	GLuint out[4];
	texture_function_dsa(&gl::GetTextureParameterIuivEXT,&gl::GetTexParameterIuiv,m_target,pname,out);
	return out[0];
}
#endif

#if defined(GL_HPP_FUNDEF_GetTextureLevelParameterivEXT) || defined(GL_HPP_FUNDEF_GetTexLevelParameteriv)
template<>
inline GLint Texture::GetLevelParameter(GLenum targ,int lod, GLenum value)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureLevelParameterivEXT,&gl::GetTexLevelParameteriv,targ,lod,value,out);
	return out[0];
}
template<>
inline GLint Texture::GetLevelParameter(int lod, GLenum value)
{
	GLint out[4];
	texture_function_dsa(&gl::GetTextureLevelParameterivEXT,&gl::GetTexLevelParameteriv,m_target,lod,value,out);
	return out[0];
}
#endif
    
#if defined(GL_HPP_FUNDEF_GetTextureLevelParameterfvEXT) || defined(GL_HPP_FUNDEF_GetTexLevelParameterfv)
template<>
inline GLfloat Texture::GetLevelParameter(GLenum targ,int lod, GLenum value)
{
	GLfloat out[4];
	texture_function_dsa(&gl::GetTextureLevelParameterfvEXT,&gl::GetTexLevelParameterfv,targ,lod,value,out);
	return out[0];
}
template<>
inline GLfloat Texture::GetLevelParameter(int lod, GLenum value)
{
	GLfloat out[4];
	texture_function_dsa(&gl::GetTextureLevelParameterfvEXT,&gl::GetTexLevelParameterfv,m_target,lod,value,out);
	return out[0];
}
#endif
    
#endif
    
    
template<class Callable1,class Callable2,typename... Types>
inline void Framebuffer::framebuffer_function_dsa(Callable1 dsafunc,Callable2 ndsafunc,Types... params)
{
	if(direct_state_access_supported)
	{
		dsafunc(object,params...);
	}
	else
	{
		GLenum t_binding=gl::Get<GLint>(m_target==GL_DRAW_FRAMEBUFFER ? GL_DRAW_FRAMEBUFFER_BINDING : GL_READ_FRAMEBUFFER_BINDING);
		if(t_binding!=object)
		{
			gl::BindFramebuffer(m_target,object);
		}
		ndsafunc(GL_FRAMEBUFFER,params...);
		if(t_binding!=object)
		{
			gl::BindFramebuffer(m_target,t_binding);
		}
	}
}


#ifdef	GL_HPP_FUNDEF_GenRenderbuffers
template<class Callable1,class Callable2,typename... Types>
inline void Renderbuffer::renderbuffer_function_dsa(Callable1 dsafunc,Callable2 ndsafunc,Types... params)
{
	if(direct_state_access_supported)
	{
		dsafunc(object,params...);
	}
	else
	{
		GLenum t_binding=gl::Get<GLint>(GL_RENDERBUFFER_BINDING);
		if(t_binding!=object)
		{
			gl::BindRenderbuffer(GL_RENDERBUFFER,object);
		}
		ndsafunc(GL_FRAMEBUFFER,params...);
		if(t_binding!=object)
		{
			gl::BindRenderbuffer(GL_RENDERBUFFER,t_binding);
		}
	}
		
}

#endif
    
//////////////////////////////////////////////////////
///////////Global Functions

}

inline std::ostream& operator<<(std::ostream& out,const gl::ContextInfo& ci)
{
	out << "OpenGL Vendor: " << ci.vendor << "\n"
		<< "OpenGL Renderer: " << ci.renderer << "\n"
		<< "OpenGL Version String: " << ci.version << "\n"
		<< "Shading Language Version: " << ci.glsl_version << "\n"
		<< "Supported GL Extensions:\n";
	for(auto vi=ci.gl_extensions.cbegin();vi!=ci.gl_extensions.cend();++vi)
	{
		out << "\t" << *vi << "\n";
	}
	return out;
}
