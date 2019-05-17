#ifndef GLHPP_RENDERBUFFER_HPP
#define GLHPP_RENDERBUFFER_HPP

    
#ifdef	GL_ALT_FUNDEF_GenRenderbuffers
class Renderbuffer: public _impl::GLObject<Renderbuffer>
{
private:
    
    #ifdef GL_EXT_direct_state_access
        #define renderbuffer_function_dsa(callable1, callable2, ...) renderbuffer_function_dsaf(callable1,callable2,__VA_ARGS__)
    #else
        #define renderbuffer_function_dsa(callable1, callable2, ...) renderbuffer_function_ndsaf(callable2,__VA_ARGS__)
    #endif
    
	template<typename Callable1,typename Callable2, typename... Types>
	void renderbuffer_function_dsaf(Callable1,Callable2,Types... params);
    
    template<typename Callable2, typename... Types>
    void renderbuffer_function_ndsaf(Callable2,Types... params);
    
public:
    
    Renderbuffer(Renderbuffer&& renderbuffer) : _impl::GLObject<Renderbuffer>(std::move(renderbuffer)){}
    
	Renderbuffer():
		_impl::GLObject<Renderbuffer>("GLRenderbuffer",glGenRenderbuffers,glDeleteRenderbuffers)
	{}
	
    #ifdef GL_ALT_FUNDEF_BindRenderbuffer
	void Bind()
	{
		glBindRenderbuffer(GL_RENDERBUFFER,object);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_NamedRenderbufferStorageMultisampleEXT) || defined(GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT) || defined (GL_ALT_FUNDEF_RenderbufferStorageMultisample)
    
    
    #if defined(GL_ALT_FUNDEF_RenderbufferStorageMultisample)
    #define GL_ALT_RenderbufferStorageMultisampleFunc glRenderbufferStorageMultisample
    #elif defined(GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT)
    #define GL_ALT_RenderbufferStorageMultisampleFunc glRenderbufferStorageMultisampleEXT
    #else
    #error No declaration of RenderbufferStorageMultisample found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
	void StorageMultisample(GLsizei samples,GLenum internalformat, GLsizei width, GLsizei height)
	{
		renderbuffer_function_dsa(&glNamedRenderbufferStorageMultisampleEXT,&GL_ALT_RenderbufferStorageMultisampleFunc,samples,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_NamedRenderbufferStorageEXT) || defined(GL_ALT_FUNDEF_RenderbufferStorage)
	void Storage(GLenum internalformat,GLsizei width,GLsizei height)
	{
		renderbuffer_function_dsa(&glNamedRenderbufferStorageEXT,&glRenderbufferStorage,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_GetRenderbufferParameteriv) || defined(GL_ALT_FUNDEF_GetRenderbufferParameterivEXT)
	GLint GetRenderbufferParameteriv(GLenum pname)
	{
		int params;
		renderbuffer_function_dsa(&glGetRenderbufferParameterivEXT,&glGetRenderbufferParameteriv,pname,&params);
		return params;
	}
    #endif
    
protected:
	explicit Renderbuffer(GLuint o):
		_impl::GLObject<Renderbuffer>(o,glDeleteRenderbuffers)
	{}
};
    
#endif


#endif
