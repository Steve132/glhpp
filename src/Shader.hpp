#ifndef GLHPP_SHADER_HPP
#define GLHPP_SHADER_HPP


namespace gl
{
	    
#ifdef GL_ALT_FUNDEF_CreateShader
class Shader: public _impl::GLObject<Shader>
{
public:
    
    Shader(Shader&& shader) : _impl::GLObject<Shader>(std::move(shader)){}
    
	Shader(GLenum t);
    GLint Get(GLenum variable) const;
	
    #if defined(GL_ALT_FUNDEF_ShaderSource)
    void Source(const std::string& src);
	void Source(std::istream& in);
	void SourceFile(const std::string& filename);
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompileShader)
	std::string Compile();
    #endif
    
    #if defined(GL_ALT_FUNDEF_ReleaseShaderCompiler)
	static void ReleaseCompiler(); ///\todo no implementation found
    #endif

    #if defined(GL_ALT_FUNDEF_ShaderBinary)
	void Binary(GLenum binaryformat,const void* bindata,GLsizei bindatalen)
	{
		glShaderBinary(1,&name,binaryformat,bindata,bindatalen);
	}
    #endif

    #if defined(GL_ALT_FUNDEF_GetShaderInfoLog)
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
    #endif
    
    #if defined(GL_ALT_FUNDEF_GetShaderSource)
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
    #endif
	
private:
	GLenum type;
};
#endif

}

#endif
