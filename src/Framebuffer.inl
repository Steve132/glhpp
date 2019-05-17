namespace gl
{

#if defined(GL_ALT_FUNDEF_NamedFramebufferRenderbuffer) || defined(GL_ALT_FUNDEF_NamedFramebufferRenderbufferEXT) || defined(GL_ALT_FUNDEF_FramebufferRenderbuffer)
inline void Framebuffer::Renderbuffer(GLenum attachment, GLuint renderbuffer)
{
	framebuffer_function_dsa(&glNamedFramebufferRenderbuffer,&glFramebufferRenderbuffer,attachment,GL_RENDERBUFFER,renderbuffer);
}

inline void Framebuffer::Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb)
{
	framebuffer_function_dsa(&glNamedFramebufferRenderbuffer,&glFramebufferRenderbuffer,attachment,GL_RENDERBUFFER,rb.name);
}
#endif

    
#ifdef GL_ALT_FUNDEF_GenFramebuffers
template<class Callable1,class Callable2,typename... Types>
inline void Framebuffer::framebuffer_function_dsaf(Callable1 dsafunc,Callable2 ndsafunc,Types... params)
{
	if(direct_state_access_supported)
	{
		dsafunc(object,params...);
	}
	else
	{
        framebuffer_function_ndsaf(ndsafunc, params...);
	}
}
    
template<class Callable2,typename... Types>
inline void Framebuffer::framebuffer_function_ndsaf(Callable2 ndsafunc,Types... params)
{
    GLenum t_binding = GL_FRAMEBUFFER_BINDING;

    switch(m_target)
    {
#ifdef GL_DRAW_FRAMEBUFFER
        case GL_DRAW_FRAMEBUFFER:
            t_binding = GL_DRAW_FRAMEBUFFER_BINDING;
            break;
#endif
#ifdef GL_READ_FRAMEBUFFER
        case GL_READ_FRAMEBUFFER:
            t_binding = GL_READ_FRAMEBUFFER_BINDING;
            break;
#endif
        case GL_FRAMEBUFFER:
        default: ///\todo what is api convention for the invalid input?
            t_binding = GL_FRAMEBUFFER_BINDING;
            break;
            
    }

    GLint prevBinding = gl::Get<GLint>(t_binding);

    if(prevBinding != object)
    {
        glBindFramebuffer(m_target,object);
    }

    ndsafunc(GL_FRAMEBUFFER,params...);

    if(t_binding!=object)
    {
        glBindFramebuffer(m_target,prevBinding);
    }
}
#endif

}
