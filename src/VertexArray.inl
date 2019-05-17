namespace gl
{


///////////////////////////////////////////////////////////////////
//VERTEX ARRAY DATA
#ifdef GL_ALT_FUNDEF_GenVertexArrays
    
#if defined(GL_ALT_FUNDEF_BindVertexArray)
inline void VertexArray::Bind() const 
{
	if(gl::Get<GLint>(GL_VERTEX_ARRAY_BINDING) != object)
		glBindVertexArray(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Binding Vertex Array Object failed");
}
#endif
    
#if defined(GL_ALT_FUNDEF_EnableVertexArrayAttribEXT) || defined(GL_ALT_FUNDEF_EnableVertexAttribArray)
inline void VertexArray::EnableAttrib(GLuint index)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glEnableVertexArrayAttribEXT(object,index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
	}
	else
    #endif
	{
        GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			glBindVertexArray(object);
		}
        
        #if defined(GL_ALT_FUNDEF_EnableVertexAttribArray)
		glEnableVertexAttribArray(index);
        #elif defined(GL_ALT_FUNDEF_EnableVertexAttribArrayARB)
        glEnableVertexAttribArrayARB(index);
        #else
        #error no declaration of glEnableVertexAttribArray found
        #endif
        _impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
		if(pbinding!=object)
		{
			glBindVertexArray(pbinding);
		}
	}
}
#endif
    
#if defined(GL_ALT_FUNDEF_DisableVertexArrayAttribEXT) || defined(GL_ALT_FUNDEF_DisableVertexAttribArray)
inline void VertexArray::DisableAttrib(GLuint index)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glDisableVertexArrayAttribEXT(object,index);
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
    }
    else
    #endif
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			glBindVertexArray(object);
		}
        
        #if defined(GL_ALT_FUNDEF_DisableVertexAttribArray)
		glDisableVertexAttribArray(index);
        #elif defined(GL_ALT_FUNDEF_DisableVertexAttribArrayARB)
        glDisableVertexAttribArrayARB(index);
        #else
        #error no declaration of glDisableVertexAttribArray found
        #endif
        
		_impl::_checkError(GL_INVALID_VALUE,"Index is greater than or equal to GL_MAX_VERTEX_ATTRIBS.");
		if(pbinding!=object)
		{
			glBindVertexArray(pbinding);
		}
	}
}
#endif
    
#if defined(GL_ALT_FUNDEF_VertexArrayVertexAttribOffsetEXT) || defined(GL_ALT_FUNDEF_VertexAttribPointer)
inline void VertexArray::AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer)
{
	//direct state access does not seem to be supported with a 0 buffer binding.  No, it DOES..it DOES support it, its just weird.  
	//This is like, offset blah blah blah.

    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glVertexArrayVertexAttribOffsetEXT(object,0,index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,reinterpret_cast<GLintptr>(pointer));
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	
	}
	else
    #endif
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			glBindVertexArray(object);
		}
        
        #if defined(GL_ALT_FUNDEF_VertexAttribPointer)
		glVertexAttribPointer(index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,pointer);
        #elif defined(GL_ALT_FUNDEF_VertexAttribPointerARB)
        glVertexAttribPointerARB(index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,pointer);
        #else 
        #error no declaration of glVertexAttribPointer found
        #endif
        
        _impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
		if(pbinding!=object)
		{
			glBindVertexArray(pbinding);
		}
	}
}

#if defined(GL_ALT_FUNDEF_GenBuffers)
#if defined(GL_ALT_FUNDEF_VertexArrayVertexAttribOffsetEXT) || defined(GL_ALT_FUNDEF_VertexAttribPointer)
inline void VertexArray::AttribPointer(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
    #ifdef GL_EXT_direct_state_access
    if(direct_state_access_supported)
    {
        glVertexArrayVertexAttribOffsetEXT(object,b.name,index,size,type,normalized ? GL_TRUE : GL_FALSE,stride,offset);
        _impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
        _impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
        _impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
    }
    else
    #endif
    {
        GLint bbinding=Get<GLint>(GL_ARRAY_BUFFER_BINDING);
        if(bbinding != b.name)
        {
            b.Bind(GL_ARRAY_BUFFER);
        }
        AttribPointer(index,size,type,normalized,stride,reinterpret_cast<const void*>(offset));
        if(bbinding != b.name)
        {
            glBindBuffer(GL_ARRAY_BUFFER,bbinding);
        }
    }
}
#endif
#endif
    
inline void VertexArray::Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const GLvoid * pointer)
{
    AttribPointer(index,size,type,normalized,stride,pointer);
    EnableAttrib(index);
}
    
#if defined(GL_ALT_FUNDEF_GenBuffers)
inline void VertexArray::Attrib(GLuint index,GLint size,GLenum type,bool normalized,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
    AttribPointer(index,size,type,normalized,stride,b,offset);        EnableAttrib(index);
}
#endif
    
#endif
    
#if defined(GL_ALT_FUNDEF_VertexArrayVertexAttribIOffsetEXT) || defined(GL_ALT_FUNDEF_VertexAttribIPointer) || defined(GL_ALT_FUNDEF_VertexAttribIPointerEXT)
inline void VertexArray::AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glVertexArrayVertexAttribIOffsetEXT(object,0,index,size,type,stride,reinterpret_cast<GLintptr>(pointer));
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	}
	else
    #endif
	{
		GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
		if(pbinding!=object)
		{
			glBindVertexArray(object);
		}
		
        #if defined(GL_ALT_FUNDEF_VertexAttribIPointer)
        glVertexAttribIPointer(index,size,type,stride,pointer);
        #elif defined(GL_ALT_FUNDEF_VertexAttribIPointerEXT)
        glVertexAttribIPointerEXT(index,size,type,stride,pointer);
        #else
        #error no declaration for VertexAttribIPointer found
        #endif

        
        _impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
		if(pbinding!=object)
		{
			glBindVertexArray(pbinding);
		}
	}
}


#if defined(GL_ALT_FUNDEF_GenBuffers)
inline void VertexArray::AttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glVertexArrayVertexAttribIOffsetEXT(object,b.name,index,size,type,stride,offset);
		_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
		_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	}
	else
    #endif
	{
		GLint bbinding=Get<GLint>(GL_ARRAY_BUFFER_BINDING);
		if(bbinding != b.name)
		{
			b.Bind(GL_ARRAY_BUFFER);
		}
		AttribIPointer(index,size,type,stride,reinterpret_cast<const void*>(offset));
		if(bbinding != b.name)
		{
			glBindBuffer(GL_ARRAY_BUFFER,bbinding);
		}
	}
}
#endif
    
inline void VertexArray::AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const GLvoid * pointer)
{
	AttribIPointer(index,size,type,stride,pointer);
	EnableAttrib(index);
}

    
#if defined(GL_ALT_FUNDEF_GenBuffers)
inline void VertexArray::AttribI(GLuint index,GLint size,GLenum type,GLsizei stride,const Buffer& b,GLsizeiptr offset)
{
	AttribIPointer(index,size,type,stride,b,offset);
	EnableAttrib(index);
}
#endif
#endif

#if defined(GL_ALT_FUNDEF_BindVertexArray) && defined(GL_ALT_FUNDEF_BindBuffer)
inline void VertexArray::Elements(const Buffer& b)
{
	GLint bbinding=Get<GLint>(GL_ELEMENT_ARRAY_BUFFER_BINDING);
	GLint pbinding=Get<GLint>(GL_VERTEX_ARRAY_BINDING);
	if(pbinding!=object)
	{
		glBindVertexArray(object);
	} 
	if(bbinding != b.name)
	{
		b.Bind(GL_ELEMENT_ARRAY_BUFFER);
	}
	_impl::_checkError(GL_INVALID_VALUE,"Attribute index is greater than or equal to GL_MAX_VERTEX_ATTRIBS. OR Size is not 1, 2, 3, 4 or (for glVertexAttribPointer), GL_BGRA. OR Stride is negative.");
	_impl::_checkError(GL_INVALID_ENUM,"Type is not an accepted value.");
	_impl::_checkError(GL_INVALID_OPERATION,"Size is GL_BGRA and type is not GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV. OR type is GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV and size is not 4 or GL_BGRA. OR size is GL_BGRA and noramlized is GL_FALSE. OR zero is bound to the GL_ARRAY_BUFFER buffer object binding point and the pointer argument is not NULL.");
	if(pbinding!=object)
	{
		glBindVertexArray(pbinding);
	}
}
#endif
    
#endif


}
