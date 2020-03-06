#ifndef GLHPP_PROGRAM_HPP
#define GLHPP_PROGRAM_HPP

#include "Object.hpp"
#include "Shader.hpp"
#include <vector>
#include <algorithm>

namespace gl
{
	class Program: public impl::DefaultableObject<Program>
	{
	protected:
		Program(impl::NullInitializerFlagType) {}
		Program(GLuint initer)
		{
			id=initer;
			deleter_func=deleteProgram;
			is_func=glIsProgram;
		}
		
		static void deleteProgram(GLsizei,const GLuint* id){ glDeleteProgram(*id); }
		friend class Shader;
	public:
		Program():Program(glCreateProgram())
		{}
		void AttachShader(const Shader& shader)
		{
			glAttachShader(id,shader);
		}
		void DetachShader(const Shader& shader)
		{
			glDetachShader(id,shader);
		}
		void Link()
		{
			glLinkProgram(id);
		}
		void Use() const
		{
			glUseProgram(id);
		}
		void Parameter(GLenum pname,GLint value)
		{
			glProgramParameteri(id,pname,value);
		}
		void Get(GLenum pname,GLint *params) const
		{
			glGetProgramiv(id,pname,params);
		}
		void GetInfoLog(GLsizei bufSize, GLsizei *length, GLchar *infoLog) const
		{
			glGetProgramInfoLog(id,bufSize,length,infoLog);
		}
#ifndef GLHPP_STRICT_API
		std::string GetInfoLog() const
		{
			GLsizei bufsize=this->Get(GL_INFO_LOG_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetInfoLog(bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
		GLint Get(GLenum pname) const
		{
			GLint out;this->Get(pname,&out);return out;
		}
#endif
		
		void GetInterface(GLenum programInterface,GLenum pname,GLint* params) const
		{
			glGetProgramInterfaceiv(id,programInterface,pname,params);
		}
		GLuint GetResourceIndex(GLenum programInterface,const char* name) const
		{
			return glGetProgramResourceIndex(id,programInterface,name);
		}
		void GetResourceName(GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar* name) const
		{
			glGetProgramResourceName(id,programInterface,index,bufSize,length,name);
		}
		void GetResource(GLenum programInterface,GLuint index,GLsizei propCount,const GLenum* props,GLsizei bufSize,GLsizei* length,GLint* params) const
		{
			glGetProgramResourceiv(id,programInterface,index,propCount,props,bufSize,length,params);
		}
#ifndef GLHPP_STRICT_API
		GLint GetInterface(GLenum programInterface,GLenum pname) const
		{
			GLint out;GetInterface(programInterface,pname,&out);return out;
		}
		GLuint GetResourceIndex(GLenum programInterface,const std::string& name) const
		{
			return GetResourceIndex(programInterface,name.c_str());
		}
		std::string GetResourceName(GLenum programInterface,GLuint index) const
		{
			GLsizei bufsize=GetInterface(programInterface,GL_MAX_NAME_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetResourceName(programInterface,index,bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
		GLint GetResource(GLenum programInterface,GLuint index,GLenum prop) const
		{
			if(prop==GL_ACTIVE_VARIABLES) throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetResource to query a multi-valued program resource.  Try GetResource_Multi");
		}
		std::vector<GLint> GetResource_Multi(GLenum programInterface,GLuint index,GLenum prop) const
		{
			if(prop!=GL_ACTIVE_VARIABLES) return {GetResource(programInterface,index,prop)};
			
			GLsizei numOut=GetResource(programInterface,index,GL_NUM_ACTIVE_VARIABLES);
			std::vector<GLint> outvec(numOut);
			GetResource(programInterface,index,1,&prop,numOut,nullptr,outvec.data());
			return outvec;
		}
		std::vector<GLint> GetResource(GLenum programInterface,GLuint index,const GLenum* pbegin,const GLenum* pend) const
		{
			const GLenum* presult=std::find(pbegin,pend,GL_ACTIVE_VARIABLES);
			if(presult != pend) throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetResource to query a multi-valued program resource. Try GetResource_Multi");
			std::vector<GLint> out(pend-pbegin);
			GetResource(programInterface,index,out.size(),pbegin,out.size(),nullptr,out.data());
			return out;
		}
#endif
		GLint GetResourceLocation(GLenum programInterface,const GLchar* name) const
		{
			glGetProgramResourceLocation(id,programInterface,name);
		}
		GLuint GetResourceLocationIndex(GLenum programInterface,const char *name) const
		{
			glGetProgramResourceLocationIndex(id,programInterface,name);
		}
		void GetBinary(GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,GLvoid *binary) const
		{
			glGetProgramBinary(id,bufSize,length,binaryFormat,binary);
		}
		void Binary(GLenum binaryFormat,const GLvoid* binary,GLsizei length)
		{
			glProgramBinary(id,binaryFormat,binary,length);
		}
		
#ifndef GLHPP_STRICT_API
		struct BinaryProgram
		{
			GLenum binaryFormat;
			std::vector<GLubyte> binary;
		};
		BinaryProgram GetBinary() const
		{
			GLsizei binlength=this->Get(GL_PROGRAM_BINARY_LENGTH);
			BinaryProgram bp;
			bp.binary.resize(binlength);
			GLsizei lenout;
			GetBinary(bp.binary.size(),&lenout,&bp.binaryFormat,bp.binary.data());
			return bp;
		}
		void Binary(const BinaryProgram& bp)
		{
			Binary(bp.binaryFormat,bp.binary.data(),bp.binary.size());
		}
#endif
		GLint GetUniformLocation(const char* name) const
		{
			return glGetUniformLocation(id,name);
		}
	};
	
	Program Shader::CreateProgram(GLenum type,GLsizei count, const char * const * strings)
	{
		GLuint out=glCreateShaderProgramv(type,count,strings);
		return Program(out);
	}
	#ifndef GLHPP_STRICT_API
	Program Shader::CreateProgram(GLenum type,const std::string& text)
	{
		const char* strs=text.c_str();
		return CreateProgram(type,1,&strs);
	}
	#endif
}

#endif
