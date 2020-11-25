#ifndef GLHPP_DRAW_HPP
#define GLHPP_DRAW_HPP

namespace gl
{
	inline void DrawArrays(GLenum mode, GLint first, GLsizei count)
	{
		glDrawArrays(mode, first, count);
	}
	
	inline void DrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount, GLuint baseInstance)
	{
		glDrawArraysInstancedBaseInstance(mode, first, count, instanceCount, baseInstance);
	}
	
	inline void DrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount)
	{
		glDrawArraysInstanced(mode, first, count, instanceCount);
	}
	
	inline void DrawArraysIndirect(GLenum mode, const void* indirect)
	{
		glDrawArraysIndirect(mode, indirect);
	}
#ifndef GLHPP_STRICT_API
	inline void DrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount, GLuint baseInstance)
	{
		DrawArraysInstancedBaseInstance(mode, first, count, instanceCount, baseInstance);
	}
#endif
	
	inline void MultiDrawArrays(GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount)
	{
		glMultiDrawArrays(mode, first, count, drawcount);
	}
	
	inline void MultiDrawArraysIndirect(GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride)
	{
		glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
	}
	
	inline void MultiDrawArraysIndirectCount(GLenum mode, const void* indirect, GLintptr drawcount, GLintptr maxdrawcount, GLsizei stride)
	{
		glMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
	}

	
	
	
	inline void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices)
	{
		glDrawElements(mode, count, type, indices);
	}
	inline void DrawElementsIndirect(GLenum mode, GLenum type, const void* indirect)
	{
		glDrawElementsIndirect(mode, type, indirect);
	}
	
	inline void DrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLuint baseInstance)
	{
		glDrawElementsInstancedBaseInstance(mode, count, type, indices, instanceCount, baseInstance);
	}

	inline void DrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount)
	{
		glDrawElementsInstanced(mode, count, type, indices, instanceCount);
	}

	inline void DrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLint baseVertex)
	{
		glDrawElementsInstancedBaseVertex(mode, count, type, indices, instanceCount, baseVertex);
	}
	
	inline void DrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		glDrawElementsBaseVertex(mode, count, type, indices, baseVertex);
	}
	
	inline void DrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLint baseVertex, GLuint baseInstance)
	{
		glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instanceCount, baseVertex, baseInstance);
	}
	
#ifndef GLHPP_STRICT_API
	inline void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		DrawElementsBaseVertex(mode, count, type, indices, baseVertex);
	}
	
	inline void DrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instanceCount, GLint baseVertex, GLuint baseInstance=0)
	{
		DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instanceCount, baseVertex, baseInstance);
	}
#endif
	
	inline void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount)
	{
		glMultiDrawElements(mode, count, type, indices, drawcount);
	}
	
	inline void MultiDrawElementsIndirect(GLenum mode, const GLsizei* count, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride)
	{
		glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
	}
	
	inline void MultiDrawElementsIndirectCount(GLenum mode, const GLsizei* count, GLenum type, const void* indirect, GLsizei drawcount, GLsizei maxdrawcount, GLsizei stride)
	{
		glMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
	}
	
	inline void MultiDrawElementsBaseVertex(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* baseVertex)
	{
		glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, baseVertex);
	}
#ifndef GLHPP_STRICT_API
	inline void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* baseVertex)
	{
		MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, baseVertex);
	}
#endif


	inline void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices)
	{
		glDrawRangeElements(mode, start, end, count, type, indices);
	}
	
	inline void DrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, baseVertex);
	}
	
#ifndef GLHPP_STRICT_API
	inline void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint baseVertex)
	{
		DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, baseVertex);
	}
#endif
	


}
#endif
