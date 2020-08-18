#ifndef GLHPP_SHADER_HPP
#define GLHPP_SHADER_HPP

#include "Object.hpp"

namespace gl
{
	class Program;
	class Shader: public gl::impl::EnumerableObject<GL_SHADER>
	{
	protected:
		static void deleteShader(GLsizei,const GLuint* id){ glDeleteShader(*id); }
	public:
		Shader(GLenum type)
		{
			id=glCreateShader(type);
			deleter_func=deleteShader;
		}
		virtual GLboolean Is() const override{ return glIsShader(id); }
		
		void Source(GLsizei count,const GLchar * const * text, const GLint* lengths)
		{
			glShaderSource(id,count,text,lengths);
		}
		
#ifndef GLHPP_STRICT_API
		void Source(const GLchar* text,const GLint length)
		{
			Source(1,&text,&length);
		}
		void Source(const std::string& text)
		{
			Source(text.c_str(),text.size());
		}
		#if __cplusplus >= 201703UL
		Source(const std::string_view& text)
		{
			Source(text.data(),text.size());
		}
		#endif
#endif

		void Compile()
		{
			glCompileShader(id);
		}
		void ReleaseCompiler() const
		{
			glReleaseShaderCompiler();
		}
		void Specialize(const GLchar *pEntryPoint,GLuint numSpecializationConstants,const GLuint *pConstantIndex,const GLuint *pConstantValue)
		{
			glSpecializeShader(id,pEntryPoint,numSpecializationConstants,pConstantIndex,pConstantValue);
		}
		//TODO easy mode compile and specialize?
		
		static void Binary(GLsizei count,const GLuint *shaders,GLenum binaryformat,const void *binary, GLsizei length)
		{
			glShaderBinary(count,shaders,binaryformat,binary,length);
		}
		
#ifndef GLHPP_STRICT_API
		void Binary(GLenum binaryformat,const void* binary,GLsizei length)
		{
			Binary(1,&id,binaryformat,binary,length);
		}
#endif

		void Get(GLenum pname,GLint *params) const
		{
			glGetShaderiv(id,pname,params);
		}
		void GetInfoLog(GLsizei bufSize, GLsizei *length, GLchar *infoLog) const
		{
			glGetShaderInfoLog(id,bufSize,length,infoLog);
		}
		void GetSource(GLsizei bufSize, GLsizei *length, GLchar *text) const
		{
			glGetShaderSource(id,bufSize,length,text);
		}
#ifndef GLHPP_STRICT_API
		GLint Get(GLenum pname) const
		{
			GLint out;this->Get(pname,&out);return out;
		}
		std::string GetInfoLog() const
		{
			GLsizei bufsize=this->Get(GL_INFO_LOG_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetInfoLog(bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
		std::string GetSource() const
		{
			GLsizei bufsize=this->Get(GL_SHADER_SOURCE_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetSource(bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
#endif
		static void GetPrecisionFormat(GLenum shadertype, GLenum precisiontype,GLint *range, GLint *precision)
		{
			glGetShaderPrecisionFormat(shadertype,precisiontype,range,precision);
		}
#ifndef GLHPP_STRICT_API
		struct precisionFormat
		{
			GLint minimum,maximum,precision;
		};
		static precisionFormat GetPrecisionFormat(GLenum shadertype,GLenum precisiontype)
		{
			precisionFormat pf;
			GLint vals[3];
			GetPrecisionFormat(shadertype,precisiontype,&vals[0],&vals[2]);
			pf={vals[0],vals[1],vals[2]};
			return pf;
		}
#endif
		static Program CreateProgram(GLenum type,GLsizei count, const char * const * strings);
#ifndef GLHPP_STRICT_API
		static Program CreateProgram(GLenum type,const std::string& text);
#endif
	};
	inline void MemoryBarrier(GLbitfield bf)
	{
		glMemoryBarrier(bf);
	}
	inline void MemoryBarrierByRegion(GLbitfield bf)
	{
		glMemoryBarrierByRegion(bf);
	}
}


#endif
