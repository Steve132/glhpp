

#if defined(GL_ALT_FUNDEF_GetSamplerParameteriv)
template<>
inline GLint Sampler::GetParameter<GLint>(GLenum pname)
{
	GLint out[4];
	glGetSamplerParameteriv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    
#if defined(GL_ALT_FUNDEF_GetSamplerParameterfv)
template<>
inline GLfloat Sampler::GetParameter<GLfloat>(GLenum pname)
{
	GLfloat out[4];
	glGetSamplerParameterfv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    

#if defined(GL_ALT_FUNDEF_GetSamplerParameterIiv)
template<>
inline GLint Sampler::GetParameterI<GLint>(GLenum pname)
{
	GLint out[4];
	glGetSamplerParameterIiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif

#if defined(GL_ALT_FUNDEF_GetSamplerParameterIuiv)
template<>
inline GLuint Sampler::GetParameterI<GLuint>(GLenum pname)
{
	GLuint out[4];
	glGetSamplerParameterIuiv(object,pname,out);
	_impl::_checkError(GL_INVALID_VALUE,"sampler is not the name of a sampler object previously returned from a call to glGenSamplers.");
	_impl::_checkError(GL_INVALID_ENUM,"Sampler get params is incorrect");
	return out[0];
}
#endif
    


