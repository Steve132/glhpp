#ifndef GLHPP_VERTEXARRAY_HPP
#define GLHPP_VERTEXARRAY_HPP

#include "Object.hpp"
#include "Formats.hpp"
#include "Buffer.hpp"

namespace gl
{
class VertexArray: public gl::impl::DefaultableObject<VertexArray,GL_VERTEX_ARRAY>
{
public:
	VertexArray()
	{
		glCreateVertexArrays(1,&id);
		deleter_func=glDeleteVertexArrays;
	}
	virtual GLboolean Is() const override { return glIsVertexArray(id); }
	
	void Bind() const
	{
		glBindVertexArray(id);
	}
	
	void ElementBuffer(GLuint buffer) const
	{
		glVertexArrayElementBuffer(id, buffer);
	}
	
	void VertexBuffer(GLuint bindingIndex, GLuint buffer, GLintptr offset, GLsizei stride) const
	{
		glVertexArrayVertexBuffer(id, bindingIndex, buffer, offset, stride);
	}
	
	void VertexBuffers(GLuint first, GLsizei count, GLuint* buffers, const GLintptr* offsets, const GLsizei* strides) const
	{
		// note: equivalent to bindvertexbuffers
		glVertexArrayVertexBuffers(id, first, count, buffers, offsets, strides);
	}
	
	#ifndef GLHPP_STRICT_API
	void ElementBuffer(const Buffer& buf) const
	{
		ElementBuffer(static_cast<GLuint>(buf.name()));
	}
	
	void VertexBuffer(GLuint bindingIndex, const Buffer& buf, GLintptr offset, GLsizei stride) const
	{
		VertexBuffer(bindingIndex, static_cast<GLuint>(buf.name()), offset, stride);
	}
	#endif
	
	void AttribBinding(GLuint attribIndex, GLuint bindingIndex) const
	{
		glVertexArrayAttribBinding(id, attribIndex, bindingIndex);
	}
	
	void EnableAttrib(GLuint index) const
	{
		glEnableVertexArrayAttrib(id, index);
	}
	
	void DisableAttrib(GLuint index) const
	{
		glDisableVertexArrayAttrib(id, index);
	}
	
	void BindingDivisor(GLuint bindingIndex, GLuint divisor) const
	{
		glVertexArrayBindingDivisor(id, bindingIndex, divisor);
	}

	void Get(GLenum pname, GLint* param) const
	{
		glGetVertexArrayiv(id, pname, param);
	}
	
	void GetIndexed(GLuint index, GLenum pname, GLint* param) const
	{
		glGetVertexArrayIndexediv(id, index, pname, param);
	}
	
	void GetIndexed(GLuint index, GLenum pname, GLint64* param) const
	{
		glGetVertexArrayIndexed64iv(id, index, pname, param);
	}
	
#ifndef GLHPP_STRICT_API
	//Todo: VAO objects
#endif
	void AttribIFormat(GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset) 
	{
		glVertexArrayAttribIFormat(id,attribindex,size,type,relativeoffset);
	}
	void AttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
	{
		glVertexArrayAttribFormat(id,attribindex,size,type,normalized,relativeoffset);
	}
	void AttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
	{
		glVertexArrayAttribLFormat(id,attribindex,size,type,relativeoffset);
	}


};
}

#endif
