#ifndef GLHPP_SAMPLER_HPP
#define GLHPP_SAMPLER_HPP

namespace gl
{
    

#ifdef GL_ALT_FUNDEF_GenSamplers
class Sampler:public _impl::GLObject<Sampler>
{
public:
    
    Sampler(Sampler&& sampler) : _impl::GLObject<Sampler>(std::move(sampler)){}

	Sampler():
		_impl::GLObject<Sampler>("GLSampler",glGenSamplers,glDeleteSamplers)
	{}
	
    #if defined(GL_ALT_FUNDEF_BindSampler)
	void Bind(GLuint unit)
	{
		glBindSampler(unit,object);
		_impl::_checkError(GL_INVALID_VALUE,"unit is greater than or equal to the value of GL_MAX_COMBIED_TEXTURE_IMAGE_UNITS.");
		_impl::_checkError(GL_INVALID_OPERATION,"Sampler is not zero or a name previously returned from a call to glGenSamplers, or if such a name has been deleted by a call to glDeleteSamplers.");
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_SamplerParameteri)
	void Parameter(GLenum pname,GLint param)
	{
		glSamplerParameteri(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_SamplerParameterf)
	void Parameter(GLenum pname,GLfloat param)
	{
		glSamplerParameterf(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_SamplerParameteriv)
	void Parameter(GLenum pname,const GLint* param)
	{
		glSamplerParameteriv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_SamplerParameterfv)
	void Parameter(GLenum pname,const GLfloat* param)
	{
		glSamplerParameterfv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_SamplerParameterIiv)
    void ParameterIiv(GLenum pname,const GLint* param)
	{
		glSamplerParameterIiv(object,pname,param);
		_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
		_impl::_checkError(GL_INVALID_ENUM,"params should have a defined constant value (based on the value of pname) and does not.");
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_SamplerParameterIui)
	void ParameterIui(GLenum pname,const GLuint* param)
	{
		glSamplerParameterIuiv(object,pname,param);
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
		_impl::GLObject<Sampler>(o,glDeleteSamplers)
	{}
};
#endif


}





#endif
