
namespace gl
{  
///////////////////////////////////////////////////
//GETTERS
#ifdef GL_ALT_FUNDEF_GetFloatv
template<>
inline	GLfloat Get<GLfloat>(GLenum e)
{
	GLfloat v;
	glGetFloatv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetDoublev
template<>
inline GLdouble Get<GLdouble>(GLenum e)
{
	GLdouble v;
	glGetDoublev(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetBooleanv
template<>
inline	GLboolean Get<GLboolean>(GLenum e)
{
	GLboolean v;
	glGetBooleanv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetIntegerv
template<>
inline	GLint Get<GLint>(GLenum e)
{
	GLint v;
	glGetIntegerv(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGetIntegerv");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetInteger64v
template<>
inline	GLint64 Get<GLint64>(GLenum e)
{
	GLint64 v;
	glGetInteger64v(e,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetString
template<>
inline std::string Get<std::string>(GLenum e)
{
    const char* bv=reinterpret_cast<const char*>(glGetString(e));
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	return bv;
}
#endif

#ifdef GL_ALT_FUNDEF_GetBooleani_v
template<>
inline GLboolean Get<GLboolean>(GLenum e,GLsizei i)
{
	GLboolean v;
	glGetBooleani_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetIntegeri_v
template<>
inline GLint Get<GLint>(GLenum e,GLsizei i)
{
	GLint v;
	glGetIntegeri_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetInteger64i_v
template<>
inline GLint64 Get<GLint64>(GLenum e,GLsizei i)
{
	GLint64 v;
	glGetInteger64i_v(e,i,&v);
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

#ifdef GL_ALT_FUNDEF_GetStringi
template<>
inline std::string Get<std::string>(GLenum e,GLsizei i)
{
	const char* v=reinterpret_cast<const char*>(glGetStringi(e,i));
	_impl::_checkError(GL_INVALID_ENUM,"Invalid variable read with glGet");
	_impl::_checkError(GL_INVALID_VALUE,"Index is outside the valid range for indexed glGet name");
	return v;
}
#endif

}

