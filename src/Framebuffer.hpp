#ifndef GLHPP_FRAMEBUFFER_HPP
#define GLHPP_FRAMEBUFFER_HPP

namspace gl
{
#ifdef GL_ALT_FUNDEF_GenFramebuffers
class Framebuffer: public _impl::GLObject<Framebuffer>
{

    #ifdef GL_EXT_direct_state_access
        #define framebuffer_function_dsa(dsafunc,ndsafunc,...) framebuffer_function_dsaf(dsafunc, ndsafunc,__VA_ARGS__)
    #else
        #define framebuffer_function_dsa(dsafunc,ndsafunc,...) framebuffer_function_ndsaf(ndsafunc,__VA_ARGS__)
    #endif
    
private:
    template<typename Callable1,typename Callable2, typename... Types>
    void framebuffer_function_dsaf(Callable1,Callable2,Types... params);
    
    template<typename Callable2, typename... Types>
    void framebuffer_function_ndsaf(Callable2,Types... params);

	GLenum m_target;
public:
    
    Framebuffer(Framebuffer&& framebuffer) : _impl::GLObject<Framebuffer>(std::move(framebuffer)){}
    
	Framebuffer():
		_impl::GLObject<Framebuffer>("GLFramebuffer",glGenFramebuffers,glDeleteFramebuffers),
		m_target(GL_FRAMEBUFFER)
	{}
	
    #if defined(GL_ALT_FUNDEF_BindFramebuffer)
	void Bind(GLenum target)
	{
		m_target=target;
		glBindFramebuffer(target,object);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_NamedFramebufferParameteri)
    static void Parameter(GLenum target,GLenum pname, GLint param)
	{
		glFramebufferParameteri(target,pname,param);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_GetFramebufferParameterivEXT) || defined(GL_ALT_FUNDEF_GetFramebufferParameteriv)
	GLint GetParameter(GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&glGetFramebufferParameterivEXT,&glGetFramebufferParameteriv,pname,&params);
		return params;
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_GetNamedFramebufferAttachmentParameterivEXT) || defined(GL_ALT_FUNDEF_GetFramebufferAttachmentParameterivEXT)
	GLint GetAttachmentParameteriv(GLenum attachment,GLenum pname)
	{
		GLint params;
		framebuffer_function_dsa(&glGetNamedFramebufferAttachmentParameterivEXT,&glGetFramebufferAttachmentParameteriv,attachment,pname,&params);
		return params;
	}
    #endif
	
    #if (defined(GL_ALT_FUNDEF_NamedFramebufferTextureEXT) || defined(GL_ALT_FUNDEF_FramebufferTexture) || defined(GL_ALT_FUNDEF_FramebufferTextureEXT)) && defined(GL_ALT_FUNDEF_GenTextures)
    
    #if defined(GL_ALT_FUNDEF_FramebufferTexture)
    #define FramebufferTextureFunc glFramebufferTexture
    #elif defined(GL_ALT_FUNDEF_FramebufferTextureEXT)
    #define FramebufferTextureFunc glFramebufferTextureEXT
    #else
    #error No declaration of glFramebufferTextureFunc found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
	void Texture(GLenum attachment, GLuint texture, GLint level)
	{
        
		framebuffer_function_dsa(&glNamedFramebufferTextureEXT,&FramebufferTextureFunc,attachment,texture,level);
	}
    
	void Texture(GLenum attachment,const gl::Texture& tex, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTextureEXT,&FramebufferTextureFunc,attachment,tex.name,level);
	}
    #endif

    #if defined(GL_ALT_FUNDEF_NamedFramebufferRenderbuffer) || defined(GL_ALT_FUNDEF_NamedFramebufferRenderbufferEXT) || defined(GL_ALT_FUNDEF_FramebufferRenderbuffer)
	void Renderbuffer(GLenum attachment, GLuint renderbuffer);
	void Renderbuffer(GLenum attachment,const gl::Renderbuffer& rb);
    #endif

    #if (defined(GL_ALT_FUNDEF_FramebufferTexture1D) || defined(GL_ALT_FUNDEF_NamedFramebufferTexture1DEXT)) && defined(GL_ALT_FUNDEF_GenTextures)
	void Texture1D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture1DEXT, &glFramebufferTexture1D, attachment, textarget, texture, level);
	}
	void Texture1D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture1DEXT, &glFramebufferTexture1D, attachment, tex.target, tex.name, level);
	}
    #endif
    
    #if (defined(GL_ALT_FUNDEF_FramebufferTexture2D) || defined(GL_ALT_FUNDEF_NamedFramebufferTexture2DEXT)) && defined(GL_ALT_FUNDEF_GenTextures)
	void Texture2D(GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture2DEXT, &glFramebufferTexture2D, attachment, textarget, texture, level);
	}
	void Texture2D(GLenum attachment,const gl::Texture& tex,GLint level)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture2DEXT, &glFramebufferTexture2D, attachment, tex.target, tex.name, level);
	}
    #endif
    
    #if (defined(GL_ALT_FUNDEF_FramebufferTexture3D) || defined(GL_ALT_FUNDEF_NamedFramebufferTexture3DEXT))&& defined(GL_ALT_FUNDEF_GenTextures)
	void Texture3D(GLenum attachment, GLenum textarget, GLuint texture, GLint level,GLint layer)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture3DEXT, &glFramebufferTexture3D, attachment, textarget, texture, level, layer);
	}
	void Texture3D(GLenum attachment,const gl::Texture& tex,GLint level,GLint layer)
	{
		framebuffer_function_dsa(&glNamedFramebufferTexture3DEXT, &glFramebufferTexture3D, attachment, tex.target, tex.name, level, layer);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CheckNamedFramebufferStatusEXT) || defined(GL_ALT_FUNDEF_CheckFramebufferStatus)
	void CheckStatus(GLenum target)
	{
		framebuffer_function_dsa(&glCheckNamedFramebufferStatusEXT,[](GLenum t,GLenum){ return glCheckFramebufferStatus(t); },target);
	}
    #endif
    
protected:
	explicit Framebuffer(GLuint o):
		_impl::GLObject<Framebuffer>(o,glDeleteFramebuffers)
	{}	
};
#endif

}


#endif
