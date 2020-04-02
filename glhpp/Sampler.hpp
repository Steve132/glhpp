
#ifndef GLHPP_SAMPLER_HPP
#define GLHPP_SAMPLER_HPP

#include "Object.hpp"
#include <vector>
#include <algorithm>

namespace gl
{
	class Sampler: public impl::Object
	{
	public:
		Sampler()
		{
			id=0;
			glCreateSamplers(1,&id);
			deleter_func=glDeleteSamplers;
			is_func=glIsSampler;
		}
		void Bind(GLuint unit) const
		{
			glBindSampler(unit,id);
		}
		static void Bind(GLuint first,GLsizei count,const GLuint* samplers)
		{
			glBindSamplers(first,count,samplers);
		}
#ifndef GLHPP_STRICT_API
	static void Bind(GLuint first, GLsizei count,const Sampler* tbegin,const Sampler* tend)
	{
		std::vector<GLuint> vals(tend-tbegin);
		for(size_t i=0;i < vals.size();i++) vals[i]=tbegin[i].name();
		Bind(first,count,vals.data());
	}
#endif
	void Parameter(GLenum pname,GLint param) { glSamplerParameteri(id,pname,param);}
	void Parameter(GLenum pname,GLfloat param) { glSamplerParameterf(id,pname,param); }
	void Parameter(GLenum pname,const GLint* param) { glSamplerParameteriv(id,pname,param); }
	void Parameter(GLenum pname,const GLfloat* param) { glSamplerParameterfv(id,pname,param); }
	void ParameterI(GLenum pname,const GLint* param) { glSamplerParameterIiv(id,pname,param); }
	void ParameterI(GLenum pname,const GLuint* param) { glSamplerParameterIuiv(id,pname,param); }
	
	void GetParameter(GLenum pname,GLint* params) const { glGetSamplerParameteriv(id,pname,params); }
	void GetParameter(GLenum pname,GLfloat* params) const { glGetSamplerParameterfv(id,pname,params); }
	void GetParameterI(GLenum pname,GLint* params) const { glGetSamplerParameterIiv(id,pname,params); }
	void GetParameterI(GLenum pname,GLuint* params) const { glGetSamplerParameterIuiv(id,pname,params); }
	
	//TODO: easy mode here
	};
	inline void PixelStore(GLenum pname,GLint param)
	{
		glPixelStorei(pname,param);
	}
	inline void PixelStore(GLenum pname,GLfloat param)
	{
		glPixelStoref(pname,param);
	}
}


#endif
