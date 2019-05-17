

namespace gl
{
namespace _impl
{
static inline void checkUniform()
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



///////////////////////////////////////////////////////
//Program Objects
//direct functions
#ifdef GL_ALT_FUNDEF_CreateProgram
    
//This DSA solution is justifiable because an in-cache if statement with crazy branch prediction
//will always be faster than an out of cache PIMPL paradigm for this.
//also uses a variadic macro to get function args
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough

#if defined(GL_EXT_direct_state_access)
#define GL_HPP_UNIFORM_WRAPPER(fn,...)											\
{																			\
	if(direct_state_access_supported)												\
	{																		\
		glProgram##fn##EXT(object,Program::GetUniformLocation(n),__VA_ARGS__);											\
	}																			\
	else																		\
	{															\
		GLint curr_prog=gl::Get<GLint>(GL_CURRENT_PROGRAM);						\
		glUseProgram(object);													\
		_impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
		FNAME_PASSTHROUGH_MACRO(gl##fn)(Program::GetUniformLocation(n),__VA_ARGS__);																		\
		_impl::checkUniform();													\
		glUseProgram(curr_prog);												\
		_impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
	}																			\
}																			\
																		\

#endif
//#else
#if !defined(GL_EXT_direct_state_access)
    
#define GL_HPP_UNIFORM_WRAPPER(fn,...)											\
    {																			\
        																		\
        {																			\
            GLint curr_prog=gl::Get<GLint>(GL_CURRENT_PROGRAM);						\
            glUseProgram(object);													\
            _impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
            gl##fn(Program::GetUniformLocation(n),__VA_ARGS__);																		\
            _impl::checkUniform();													\
            glUseProgram(curr_prog);												\
            _impl::_checkError(GL_INVALID_OPERATION,"Uniformed program could not be made part of current state, or transform feedback mode is enabled");\
        }																			\
    }																			\
    \
    
#endif
    
#if defined(GL_ALT_FUNDEF_ProgramUniform1fEXT) || defined(GL_ALT_FUNDEF_Uniform1f)
inline void Program::Uniform(const std::string& n,const GLfloat& v1)
{   
	GL_HPP_UNIFORM_WRAPPER(Uniform1f,v1);
}
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform2f) || defined(GL_ALT_FUNDEF_ProgramUniform2fEXT)
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2f,v1,v2);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform3f) || defined(GL_ALT_FUNDEF_ProgramUniform3fEXT)
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3f,v1,v2,v3);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform4f) || defined(GL_ALT_FUNDEF_ProgramUniform4fEXT)
inline void Program::Uniform(const std::string& n,const GLfloat& v1,const GLfloat& v2,const GLfloat& v3,const GLfloat& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4f,v1,v2,v3,v4);
}
#endif
    
#if defined(GL_ALT_FUNDEF_ProgramUniform1iEXT) || defined(GL_ALT_FUNDEF_Uniform1i)
inline void Program::Uniform(const std::string& n,const GLint& v1)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform1i,v1);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform2i) || defined(GL_ALT_FUNDEF_ProgramUniform2iEXT)
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2i,v1,v2);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform3i) || defined(GL_ALT_FUNDEF_ProgramUniform3iEXT)
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3i,v1,v2,v3);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform4i) || defined(GL_ALT_FUNDEF_ProgramUniform4iEXT)
inline void Program::Uniform(const std::string& n,const GLint& v1,const GLint& v2,const GLint& v3,const GLint& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4i,v1,v2,v3,v4);
}
#endif

    
///\todo changing the following preprocessor ifdefs because of ES 2: the programUniform stuff should be ignored in ES 3 but is defined as part of the extension spec; there is no available glUniformXui on ES 2
    
#if defined(GL_ALT_FUNDEF_Uniform1ui)
inline void Program::Uniform(const std::string& n,const GLuint& v1)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform1ui,v1);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform2ui)
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform2ui,v1,v2);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform3ui)
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform3ui,v1,v2,v3);
}
#endif
    
#if defined(GL_ALT_FUNDEF_Uniform4ui) 
inline void Program::Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3,const GLuint& v4)
{
	GL_HPP_UNIFORM_WRAPPER(Uniform4ui,v1,v2,v3,v4);
}
#endif

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
																					

#if defined (GL_ALT_FUNDEF_Uniform1fv) || defined (GL_ALT_FUNDEF_ProgramUniform1fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,1,Uniform1fv);
#endif

#if defined (GL_ALT_FUNDEF_Uniform2fv) || defined (GL_ALT_FUNDEF_ProgramUniform2fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,2,Uniform2fv);
#endif

#if defined (GL_ALT_FUNDEF_Uniform3fv) || defined (GL_ALT_FUNDEF_ProgramUniform3fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,3,Uniform3fv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform4fv) || defined (GL_ALT_FUNDEF_ProgramUniform4fv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLfloat,4,Uniform4fv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform1iv) || defined (GL_ALT_FUNDEF_ProgramUniform1iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,1,Uniform1iv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform2iv) || defined (GL_ALT_FUNDEF_ProgramUniform2iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,2,Uniform2iv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform3iv)  || defined (GL_ALT_FUNDEF_ProgramUniform3iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,3,Uniform3iv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform4iv) || defined (GL_ALT_FUNDEF_ProgramUniform4iv)
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLint,4,Uniform4iv);
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform1uiv) || defined (GL_ALT_FUNDEF_ProgramUniform1uiv) || defined(GL_ALT_FUNDEF_Uniform1uivEXT)
    
#if !defined(GL_ALT_FUNDEF_Uniform1uiv)
    #if defined(GL_ALT_FUNDEF_Uniform1uivEXT)
    #define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough##EXT
    #else
        #error no declaration of Uniform1uiv found
    #endif
#else
    #define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
    
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,1u,Uniform1uiv);
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
    
    
#if defined (GL_ALT_FUNDEF_Uniform2uiv) || defined (GL_ALT_FUNDEF_ProgramUniform2uiv)
#if !defined(GL_ALT_FUNDEF_Uniform2uiv)
#if defined(GL_ALT_FUNDEF_Uniform2uivEXT)
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough##EXT
#else
#error no declaration of Uniform1uiv found
#endif
#else
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,2u,Uniform2uiv);
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif

#if defined (GL_ALT_FUNDEF_Uniform3uiv) || defined (GL_ALT_FUNDEF_ProgramUniform3uiv)
#if !defined(GL_ALT_FUNDEF_Uniform3uiv)
#if defined(GL_ALT_FUNDEF_Uniform3uivEXT)
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough##EXT
#else
#error no declaration of Uniform1uiv found
#endif
#else
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,3u,Uniform3uiv);
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
    
#if defined (GL_ALT_FUNDEF_Uniform4uiv) ||  defined (GL_ALT_FUNDEF_ProgramUniform4uiv)
#if !defined(GL_ALT_FUNDEF_Uniform4uiv)
#if defined(GL_ALT_FUNDEF_Uniform4uivEXT)
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough##EXT
#else
#error no declaration of Uniform1uiv found
#endif
#else
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
GL_HPP_PROGRAM_UNIFORM_DEFINITION(GLuint,4u,Uniform4uiv);
#define FNAME_PASSTHROUGH_MACRO(passthrough) passthrough
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix2fv) || defined (GL_ALT_FUNDEF_ProgramUniformMatrix2fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,2,UniformMatrix2fv);
#endif

#if defined (GL_ALT_FUNDEF_UniformMatrix3fv) || defined(GL_ALT_FUNDEF_ProgramUniformMatrix3fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,3,UniformMatrix3fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix4fv) || defined (GL_ALT_FUNDEF_ProgramUniformMatrix4fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,4,UniformMatrix4fv);
#endif
    
///\todo the DSA version will not be available here if the regular version is not; no ARB or EXT in GL 2, so 2.1 fails to compile.  this goes for next 5 definitions
#if defined (GL_ALT_FUNDEF_UniformMatrix2x3fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,3,UniformMatrix2x3fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix3x2fv)
GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,2,UniformMatrix3x2fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix2x4fv)
    GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,2,4,UniformMatrix2x4fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix4x2fv)
    GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,2,UniformMatrix4x2fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix3x4fv)
    GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,3,4,UniformMatrix3x4fv);
#endif
    
#if defined (GL_ALT_FUNDEF_UniformMatrix4x3fv) 
    GL_HPP_PROGRAM_UNIFORM_MATRIX_DEFINITION(GLfloat,4,3,UniformMatrix4x3fv);
#endif
    

inline Program::ActiveInfo Program::GetActiveAttrib(GLuint index) const
{
	Program::ActiveInfo ai;
	GLint sz=Program::Get(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
	ai.name.reserve(sz);
	ai.name.insert(0,sz,0);
	
	glGetActiveAttrib(object,index,sz,&sz,&(ai.size),&(ai.type),&(ai.name[0]));
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
	
	glGetActiveUniform(object,index,sz,&sz,&(ai.size),&(ai.type),&(ai.name[0]));
	_impl::_checkError(GL_INVALID_VALUE,"Active Uniform Query: index is greater than or equal to the number of active attribute variables in program.");
	return ai;
}
inline Program::ActiveInfo Program::GetActiveUniform(const std::string& name) const
{
	return Program::GetActiveUniform(Program::GetUniformLocation(name));
}

namespace _impl
{
	inline void genProgram(GLsizei n,GLuint* obj)
	{
		*obj=glCreateProgram();
	}
	inline void delProgram(GLsizei n,const GLuint* obj)
	{
		glDeleteProgram(*obj);
	}
}

inline Program::Program():
	_impl::GLObject<Program>("GLProgram",_impl::genProgram,_impl::delProgram)
{}
inline Program::Program(GLuint obj):
	_impl::GLObject<Program>(obj,_impl::delProgram)
{}

#if defined (GL_ALT_FUNDEF_GetProgramiv)
inline GLint Program::Get(GLenum variable) const
{			
	GLint p;
	glGetProgramiv(object,variable,&p);	
	_impl::_checkError(GL_INVALID_VALUE,"Program object is not a value generated by OpenGL");	
	_impl::_checkError(GL_INVALID_OPERATION,"Program does not contain the right shader type for the property requested.");
	_impl::_checkError(GL_INVALID_ENUM,"Property requested does not seem to exist");
	return p;	
}
#endif
	
#if defined (GL_ALT_FUNDEF_AttachShader)
inline void Program::Attach(const Shader& s)
{
	glAttachShader(object,s.name);
	_impl::_checkError(GL_INVALID_OPERATION,"Shader is already attached to program.");
}
#endif

#if defined (GL_ALT_FUNDEF_DetachShader)
inline void Program::Detach(const Shader& s)
{
	glDetachShader(object,s.name);
	_impl::_checkError(GL_INVALID_OPERATION,"Shader to detach is not attached to program.");
}
#endif
	
#if defined (GL_ALT_FUNDEF_BindAttribLocation)
inline void Program::BindAttribLocation(GLuint index,const std::string& name)
{
	glBindAttribLocation(object,index,name.c_str());
	_impl::_checkError(GL_INVALID_VALUE,"BindAttribLocation failed: Program index is greater than or equal to GL_MAX_VERTEX_ATTRIBS");
	_impl::_checkError(GL_INVALID_OPERATION,"BindAttribLocation failed, name starts with the reserved prefix \"gl_\".");
}
#endif
	
#if defined (GL_ALT_FUNDEF_ValidateProgram) && defined (GL_ALT_FUNDEF_GetProgramInfoLog) && defined (GL_ALT_FUNDEF_GetProgramiv)
inline std::pair<bool,std::string> Program::Validate() const
{
	glValidateProgram(object);
	std::string message(Program::Get(GL_INFO_LOG_LENGTH),0);
	GLsizei sz;
	glGetProgramInfoLog(object,static_cast<GLsizei>(message.size()),&sz,&message[0]);
	bool valid=Program::Get(GL_VALIDATE_STATUS) == GL_TRUE;
		
	/*if(valid==GL_FALSE)
	{
		_handleError(GL_INVALID_VALUE,std::string("Failure to validate shader program...")+message); 
	}*/
	return make_pair(valid,message);
}
#endif
	
#if defined (GL_ALT_FUNDEF_GetAttribLocation)
inline GLint Program::GetAttribLocation(const std::string& n) const
{
	GLint r=glGetAttribLocation(object,n.c_str());
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot get attribute, program not currently linked");
	return r;
}
#endif
	
#if defined (GL_ALT_FUNDEF_GetUniformLocation)
inline GLint Program::GetUniformLocation(const std::string& n) const
{
	return glGetUniformLocation(object,n.c_str());
}
#endif
	
#ifdef GL_ALT_FUNDEF_LinkProgram
inline std::string Program::Link()
{
	glLinkProgram(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Link failed: program is the currently active program object and transform feedback mode is active.");

	std::string message(Program::Get(GL_INFO_LOG_LENGTH),0);
	GLsizei sz;
	glGetProgramInfoLog(object,static_cast<GLsizei>(message.size()),&sz,&message[0]);
		
	if(Program::Get(GL_LINK_STATUS)==GL_FALSE)
	{
		_impl::_handleError(GL_INVALID_VALUE,std::string("Error linking program:")+message); 
	}
	return message;
}
#endif

#ifdef GL_ALT_FUNDEF_UseProgram
inline void Program::Use() const
{
	glUseProgram(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Program could not be made part of current state or transform feedback mode is activated");
}
#endif

    
#ifdef  GL_ALT_FUNDEF_BindFragDataLocation
inline void Program::BindFragDataLocation(GLuint colorNumber,const std::string& name)
{
	glBindFragDataLocation(object,colorNumber,name.c_str());
	_impl::_checkError(GL_INVALID_VALUE,"Binding Fragment Output Location failed: colorNumber is greater than or equal to GL_MAX_DRAW_BUFFERS");
	_impl::_checkError(GL_INVALID_OPERATION,"Binding Fragment Output Location failed: name starts with the reserved gl_ prefix");
}
#endif
    
#ifdef GL_ALT_FUNDEF_GetFragDataLocation
inline GLint Program::GetFragDataLocation(const std::string& name)
{
	return glGetFragDataLocation(object,name.c_str());
}
#endif

#endif //GL_ALT_FUNDEF_CreateProgram

}

