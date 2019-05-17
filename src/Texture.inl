namespace gl
{




#ifdef GL_ALT_FUNDEF_GenTextures


    
#if defined(GL_ALT_FUNDEF_GetIntegerv)

inline GLenum Texture::tbinding_query_enum(GLenum target)
{
    static const GLenum mapping[] = {

#if defined(GL_TEXTURE_1D) && defined(GL_TEXTURE_BINDING_1D)
        GL_TEXTURE_1D, GL_TEXTURE_BINDING_1D,
#endif
#if defined(GL_TEXTURE_2D) && defined(GL_TEXTURE_BINDING_2D)
        GL_TEXTURE_2D, GL_TEXTURE_BINDING_2D,
#endif
#if defined(GL_PROXY_TEXTURE_2D) && defined(GL_TEXTURE_BINDING_2D)
        GL_PROXY_TEXTURE_2D, GL_TEXTURE_BINDING_2D,
#endif
#if defined(GL_TEXTURE_1D_ARRAY) && defined(GL_TEXTURE_BINDING_1D_ARRAY)
        GL_TEXTURE_1D_ARRAY, GL_TEXTURE_BINDING_1D_ARRAY,
#endif
#if defined(GL_PROXY_TEXTURE_1D_ARRAY) && defined(GL_TEXTURE_BINDING_1D_ARRAY)
        GL_PROXY_TEXTURE_1D_ARRAY, GL_TEXTURE_BINDING_1D_ARRAY,
#endif
#if defined(GL_TEXTURE_RECTANGLE) && defined(GL_TEXTURE_BINDING_RECTANGLE)
        GL_TEXTURE_RECTANGLE, GL_TEXTURE_BINDING_RECTANGLE,
#endif
#if defined(GL_PROXY_TEXTURE_RECTANGLE) && defined(GL_TEXTURE_BINDING_RECTANGLE)
        GL_PROXY_TEXTURE_RECTANGLE, GL_TEXTURE_BINDING_RECTANGLE,
#endif
#if defined(GL_TEXTURE_CUBE_MAP) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_X) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_X) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Y) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Z) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_PROXY_TEXTURE_CUBE_MAP) && defined(GL_TEXTURE_BINDING_CUBE_MAP)
        GL_PROXY_TEXTURE_CUBE_MAP, GL_TEXTURE_BINDING_CUBE_MAP,
#endif
#if defined(GL_TEXTURE_3D) && defined(GL_TEXTURE_BINDING_3D)
        GL_TEXTURE_3D, GL_TEXTURE_BINDING_3D,
#endif
#if defined(GL_PROXY_TEXTURE_3D) && defined(GL_TEXTURE_BINDING_3D)
        GL_PROXY_TEXTURE_3D, GL_TEXTURE_BINDING_3D,
#endif
#if defined(GL_TEXTURE_2D_ARRAY) && defined(GL_TEXTURE_BINDING_2D_ARRAY)
        GL_TEXTURE_2D_ARRAY, GL_TEXTURE_BINDING_2D_ARRAY,
#endif
#if defined(GL_PROXY_TEXTURE_2D_ARRAY) && defined(GL_TEXTURE_BINDING_2D_ARRAY)
        GL_PROXY_TEXTURE_2D_ARRAY, GL_TEXTURE_BINDING_2D_ARRAY,
#endif
    };

    const std::size_t elementsInArray = sizeof(mapping) / sizeof(GLenum);
    GLenum bquery = GL_TEXTURE_BINDING_2D;

    for (int i = 0; i< elementsInArray; i += 2)
    {
        if (target == mapping[i])
        {
            bquery = mapping[i + 1];
            break;
        }
    }

    return bquery;
}

inline GLint Texture::tbinding_query(GLenum target)
{
    GLenum bquery = tbinding_query_enum(target);

    GLint t_binding=gl::Get<GLint>(bquery);

    return t_binding;
}
#endif

#ifdef GL_ALT_FUNDEF_GenTextures
    
template<class Callable2,typename... Types>
inline void Texture::texture_function_ndsaf(Callable2 ndsafunc,GLenum target,Types... params)
{
    GLint t_binding = gl::Get<GLint>(m_target_binding);
    
    if(t_binding!=object)
    {
        glBindTexture(m_target,object); /// m_target instead of target, because of eg, cube face targets for subimage.  need to bind as what texture was created as, but pass different target to function
    }
    ndsafunc(target,params...);
    if(t_binding!=object)
    {
        glBindTexture(m_target,t_binding);
    }
}
    
template<class Callable1,class Callable2,typename... Types>
inline void Texture::texture_function_dsaf(Callable1 dsafunc,Callable2 ndsafunc,GLenum target,Types... params)
{
	if(direct_state_access_supported)
	{
		dsafunc(object,target,params...);
	}
	else
	{
        texture_function_ndsaf(ndsafunc, target, params...);
    }
}
#endif

#if defined(GL_ALT_FUNDEF_BindMultiTextureEXT) && defined(GL_ALT_FUNDEF_ActiveTexture)
inline void Texture::BindMulti(GLuint unit,GLenum targ)
{
	GLenum tu = targ ? targ : m_target;
	
    #ifdef GL_EXT_direct_state_access
    if (direct_state_access_supported)
	{
		glBindMultiTextureEXT(unit, tu, object);
	}
	else
    #endif
    {
		int at = gl::Get<int>(GL_ACTIVE_TEXTURE);
		glActiveTexture(GL_TEXTURE0 + unit);
		Bind(tu);
		glActiveTexture(at);
	}
}
#endif


#if defined(GL_ALT_FUNDEF_GenTextures)
#if defined(GL_ALT_FUNDEF_GetTextureParameterivEXT) || defined(GL_ALT_FUNDEF_GetTexParameteriv)
template<>
inline GLint Texture::GetParameter<GLint>(GLenum targ,GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureParameterivEXT,&glGetTexParameteriv,targ,pname,out);
	return out[0];
}
#endif

template<>
inline GLint Texture::GetParameter<GLint>(GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureParameterivEXT,&glGetTexParameteriv,m_target,pname,out);
	return out[0];
}
#endif
    

#if defined(GL_ALT_FUNDEF_GetTextureParameterfvEXT) || defined(GL_ALT_FUNDEF_GetTexParameterfv)
template<>
inline GLfloat Texture::GetParameter<GLfloat>(GLenum targ,GLenum pname)
{
	GLfloat out[4];
	texture_function_dsa(&glGetTextureParameterfvEXT,&glGetTexParameterfv,targ,pname,out);
	return out[0];
}
template<>
inline GLfloat Texture::GetParameter<GLfloat>(GLenum pname)
{
	GLfloat out[4];
	texture_function_dsa(&glGetTextureParameterfvEXT,&glGetTexParameterfv,m_target,pname,out);
	return out[0];
}
#endif


#if defined(GL_ALT_FUNDEF_GetTextureParameterIivEXT) || defined(GL_ALT_FUNDEF_GetTexParameterIiv) || defined(GL_ALT_FUNDEF_GetTexParameterIivEXT)
    
#if defined(GL_ALT_FUNDEF_GetTexParameterIiv)
#undef GL_ALT_TexParameterIivFunc
#define GL_ALT_TexParameterIivFunc glGetTexParameterIiv
#elif defined(GL_ALT_FUNDEF_GetTexParameterIivEXT)
#define GL_ALT_TexParameterIivFunc glGetTexParameterIivEXT
#else
#error No declaration of texParameterIiv found ///\todo overload the dsa funcs to allow dsa only mode
#endif

template<>
inline GLint Texture::GetParameterI<GLint>(GLenum targ,GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureParameterIivEXT,&GL_ALT_TexParameterIivFunc,targ,pname,out);
	return out[0];
}
template<>
inline GLint Texture::GetParameterI<GLint>(GLenum pname)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureParameterIivEXT,&GL_ALT_TexParameterIivFunc,m_target,pname,out);
	return out[0];
}
#endif
    
#if defined(GL_ALT_FUNDEF_GetTextureParameterIuivEXT) || defined(GL_ALT_FUNDEF_GetTexParameterIuiv) || defined(GL_ALT_FUNDEF_GetTexParameterIuivEXT)
    
#if defined(GL_ALT_FUNDEF_GetTexParameterIuiv)
#define GL_ALT_GetTexParameterIuivFUNC glGetTexParameterIuiv
#elif defined(GL_ALT_FUNDEF_GetTexParameterIuivEXT)
#define GL_ALT_GetTexParameterIuivFUNC glGetTexParameterIuivEXT
#else
#error No declaration of texParameterIuiv found ///\todo overload the dsa funcs to allow dsa only mode
#endif
    
template<>
inline GLuint Texture::GetParameterI<GLuint>(GLenum targ,GLenum pname)
{
	GLuint out[4];
	texture_function_dsa(&glGetTextureParameterIuivEXT,&GL_ALT_GetTexParameterIuivFUNC,targ,pname,out);
	return out[0];
}
template<>
inline GLuint Texture::GetParameterI<GLuint>(GLenum pname)
{
	GLuint out[4];
	texture_function_dsa(&glGetTextureParameterIuivEXT,&GL_ALT_GetTexParameterIuivFUNC,m_target,pname,out);
	return out[0];
}
#endif

#if defined(GL_ALT_FUNDEF_GetTextureLevelParameterivEXT) || defined(GL_ALT_FUNDEF_GetTexLevelParameteriv)
template<>
inline GLint Texture::GetLevelParameter(GLenum targ,int lod, GLenum value)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureLevelParameterivEXT,&glGetTexLevelParameteriv,targ,lod,value,out);
	return out[0];
}
template<>
inline GLint Texture::GetLevelParameter(int lod, GLenum value)
{
	GLint out[4];
	texture_function_dsa(&glGetTextureLevelParameterivEXT,&glGetTexLevelParameteriv,m_target,lod,value,out);
	return out[0];
}
#endif
    
#if defined(GL_ALT_FUNDEF_GetTextureLevelParameterfvEXT) || defined(GL_ALT_FUNDEF_GetTexLevelParameterfv)
template<>
inline GLfloat Texture::GetLevelParameter(GLenum targ,int lod, GLenum value)
{
	GLfloat out[4];
	texture_function_dsa(&glGetTextureLevelParameterfvEXT,&glGetTexLevelParameterfv,targ,lod,value,out);
	return out[0];
}
template<>
inline GLfloat Texture::GetLevelParameter(int lod, GLenum value)
{
	GLfloat out[4];
	texture_function_dsa(&glGetTextureLevelParameterfvEXT,&glGetTexLevelParameterfv,m_target,lod,value,out);
	return out[0];
}
#endif


#endif //defined(GL_ALT_FUNDEF_GenTextures)
}
