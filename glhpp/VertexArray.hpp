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
		is_func=glIsVertexArray;
	}
	
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
	
	void GetIndex(GLuint index, GLenum pname, GLint* param) const
	{
		glGetVertexArrayIndexediv(id, index, pname, param);
	}
	
	void GetIndex(GLuint index, GLenum pname, GLint64* param) const
	{
		glGetVertexArrayIndexed64iv(id, index, pname, param);
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

};
}

#endif
