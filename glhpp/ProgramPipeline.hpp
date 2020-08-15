#ifndef GLHPP_PROGRAMPIPELINE_HPP
#define GLHPP_PROGRAMPIPELINE_HPP

#include "Object.hpp"
#include "Program.hpp"

namespace gl
{
	class ProgramPipeline: public impl::DefaultableObject<ProgramPipeline>
	{
	protected:
		ProgramPipeline(impl::NullInitializerFlagType) {}
		ProgramPipeline(GLuint initer)
		{
			id=initer;
			deleter_func=glDeleteProgramPipelines;
			is_func=glIsProgramPipeline;
		}
	public:
		ProgramPipeline():ProgramPipeline(0)
		{
			glCreateProgramPipelines(1,&id);
		}
		void Bind() const
		{
			glBindProgramPipeline(id);
		}
		void Validate() const
		{
			glValidateProgramPipeline(id);
		}
		void UseProgramStages(GLbitfield stages,const Program& prog)
		{
			glUseProgramStages(id,stages,prog.name());
		}
		void ActiveShaderProgram(const Program& prog)
		{
			glActiveShaderProgram(id,prog.name());
		}
		void Get(GLenum pname, GLint *params) const
		{
			glGetProgramPipelineiv(id,pname,params);
		}
		void GetInfoLog(GLsizei bufSize,GLsizei *length, GLchar *infoLog) const
		{
			glGetProgramPipelineInfoLog(id,bufSize,length,infoLog);
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
#endif
	};
}

#endif
