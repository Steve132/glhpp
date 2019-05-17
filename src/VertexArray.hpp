#ifndef GLHPP_VERTEX_ARRAY_HPP
#endif GLHPP_VERTEX_ARRAY_HPP



#ifdef GL_ALT_FUNDEF_GenVertexArrays ///\todo make this available with an emulated path where vbo's are available
class VertexArray: public _impl::GLObject<VertexArray>
{
public:
    
    VertexArray(VertexArray&& vertexArray) : _impl::GLObject<VertexArray>(std::move(vertexArray)){}
    
    #if defined(GL_ALT_FUNDEF_BindVertexArray)
	void Bind() const;
    #endif

    #if defined(GL_ALT_FUNDEF_EnableVertexArrayAttribEXT) || defined(GL_ALT_FUNDEF_EnableVertexAttribArray)
	void EnableAttrib(GLuint index);
    #endif
    
    #if defined(GL_ALT_FUNDEF_DisableVertexArrayAttribEXT) || defined(GL_ALT_FUNDEF_DisableVertexAttribArray)
	void DisableAttrib(GLuint index);
    #endif
    
    
    #if defined(GL_ALT_FUNDEF_VertexArrayVertexAttribOffsetEXT) || defined(GL_ALT_FUNDEF_VertexAttribPointer)
	void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
    
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
    #endif
    
    void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer);
    
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset);
    #endif

    #endif
    
    #if defined(GL_ALT_FUNDEF_VertexArrayVertexAttribIOffsetEXT) || defined(GL_ALT_FUNDEF_VertexAttribIPointer)
	void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);
	
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);
    #endif
    
	void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer);
	
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset);
    #endif

    #endif
    
    #if defined(GL_ALT_FUNDEF_BindVertexArray) && defined(GL_ALT_FUNDEF_BindBuffer)
	void Elements(const GLvoid * pointer);///\todo no implementation
	void Elements(const Buffer&b);
    #endif

	VertexArray():
		_impl::GLObject<VertexArray>("GLVertexArray",glGenVertexArrays,glDeleteVertexArrays)
	{}

protected:
	explicit VertexArray(GLuint o):
		_impl::GLObject<VertexArray>(o,glDeleteVertexArrays)
	{}
};
#endif

#endif
