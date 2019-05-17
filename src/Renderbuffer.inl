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







#ifdef	GL_ALT_FUNDEF_GenRenderbuffers
template<class Callable1,class Callable2,typename... Types>
inline void Renderbuffer::renderbuffer_function_dsaf(Callable1 dsafunc,Callable2 ndsafunc,Types... params)
{
	if(direct_state_access_supported)
	{
		dsafunc(object,params...);
	}
	else
	{
        renderbuffer_function_ndsaf(ndsafunc, params...);
	}
		
}

template<class Callable2,typename... Types>
inline void Renderbuffer::renderbuffer_function_ndsaf(Callable2 ndsafunc,Types... params)
{
        
    GLenum t_binding=gl::Get<GLint>(GL_RENDERBUFFER_BINDING);
    if(t_binding!=object)
    {
        glBindRenderbuffer(GL_RENDERBUFFER,object);
    }
    ndsafunc(GL_RENDERBUFFER,params...);
    if(t_binding!=object)
    {
        glBindRenderbuffer(GL_RENDERBUFFER,t_binding);
    }
}
    
    
#endif
