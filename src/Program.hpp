#ifndef GLHPP_PROGRAM_HPP
#define GLHPP_PROGRAM_HPP

namespace gl
{


#ifdef GL_ALT_FUNDEF_CreateProgram
class Program: public _impl::GLObject<Program>
{
public:
    
    Program(Program&& program) : _impl::GLObject<Program>(std::move(program)){}
    
    Program& operator=(Program&& program)
    {
        _impl::GLObject<Program>::operator=(std::move(program));
        return *this;
    }
    
	Program();
    
    #if defined (GL_ALT_FUNDEF_GetProgramiv)
	GLint Get(GLenum variable) const;
    #endif
   
    #if defined (GL_ALT_FUNDEF_AttachShader)
	void Attach(const Shader& s);
    #endif
    
    #if defined (GL_ALT_FUNDEF_DetachShader)
	void Detach(const Shader& s);
    #endif
	
    #if defined (GL_ALT_FUNDEF_BindAttribLocation)
	void BindAttribLocation(GLuint index,const std::string& name);
    #endif

    #if defined (GL_ALT_FUNDEF_ValidateProgram) && defined (GL_ALT_FUNDEF_GetProgramInfoLog) && defined (GL_ALT_FUNDEF_GetProgramiv)
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
	
    #if defined (GL_ALT_FUNDEF_GetAttribLocation)
	GLint GetAttribLocation(const std::string& n) const;
    #endif
    
    #if defined (GL_ALT_FUNDEF_GetUniformLocation)
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
	
    #if defined(GL_ALT_FUNDEF_Uniform1ui)
    void Uniform(const std::string& n,const GLuint& v1);
    #endif
    
    #if defined(GL_ALT_FUNDEF_Uniform2ui)
    void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2);
    #endif
    
    #if defined(GL_ALT_FUNDEF_Uniform3ui)
    void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3);
    #endif
    
    #if defined(GL_ALT_FUNDEF_Uniform4ui)
    void Uniform(const std::string& n,const GLuint& v1,const GLuint& v2,const GLuint& v3,const GLuint& v4);
    #endif
    
	//matrix and array uniforms
	//should only exist in their specializations
	template<class T,GLuint sz>
	void Uniform(const std::string& n, const T*, GLsizei count = 1);
	
	template<class T,GLuint rows,GLuint cols>
	void UniformMatrix(const std::string& n, const T*, bool transposed = false, GLsizei count = 1);
	
    #ifdef GL_ALT_FUNDEF_LinkProgram
	std::string Link();
    #endif
	
    #ifdef GL_ALT_FUNDEF_UseProgram
	void Use() const;
    #endif
	
protected:
	explicit Program(GLuint obj);
};
    
#endif

}

#endif
