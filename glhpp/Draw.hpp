#ifndef GLHPP_VERTEXARRAY_HPP
#define GLHPP_VERTEXARRAY_HPP

#include "Object.hpp"
#include "Formats.hpp"

namespace gl
{
	void DrawArrays(GLenum mode, GLint first, GLsizei count)
	{
		glDrawArrays(mode, first, count);
	}
	
	void DrawArrays(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount, GLuint baseInstance)
	{
		glDrawArraysInstanceBaseInstance(GLenum mode, GLint first, GLsizei count, instanceCount, baseInstance);
	}
	
	void DrawArrays(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount)
	{
		glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, instanceCount);
	}
	
	void DrawArrays(GLenum mode, const void* indirect)
	{
		glDrawArraysIndirect(GLenum mode, indirect);
	}
	
	void MultiDrawArrays(GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount)
	{
		glMultiDrawArrays(mode, first, count, drawcount);
	}
	
	void MultiDrawArrays(GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride)
	{
		glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
	}
	
	void MultiDrawArrays(GLenum mode, const void* indirect, GLsizei drawcount, GLintptr maxdrawcount, GLsizei stride)
	{
		glMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices)
	{
		glDrawElements(mode, count, type, indices);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLuint baseInstance)
	{
		glDrawElementsInstancedBaseInstance(mode, count, type, indices, instanceCount, baseInstance);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount)
	{
		glDrawElementsInstanced(mode, count, type, indices, instanceCount);
	}
	
	void DrawElements(GLenum mode, GLenum type, const void* indirect)
	{
		glDrawElementsIndirect(mode, type, indirect);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		glDrawElementsBaseVertex(mode, count, type, indices, baseVertex);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLint baseVertex)
	{
		glDrawElementsInstancedBaseVertex(mode, count, type, indices, instanceCount, baseVertex);
	}
	
	void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLint baseVertex, GLuint baseInstance)
	{
		glDrawElementsInstancedBaseVertexInstance(mode, count, type, indices, instanceCount, baseVertex, baseInstance);
	}
	
	void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount)
	{
		glMultiDrawElements(mode, count, type, indices, drawcount);
	}
	
	void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride)
	{
		glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
	}
	
	void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* indirect, GLsizei drawcount, GLsizei maxdrawcount, GLsizei stride)
	{
		glMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
	}
	
	void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* baseVertex)
	{
		glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, baseVertex);
	}
	
	void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices)
	{
		glDrawRangeElements(mode, start, end, count, type, indices);
	}
	
	void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, baseVertex);
	}

}
#endif
