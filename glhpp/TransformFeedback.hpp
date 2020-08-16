#ifndef GLHPP_TRANSFORMFEEDBACK_HPP
#define GLHPP_TRANSFORMFEEDBACK_HPP

#include "Object.hpp"
#include "Buffer.hpp"

namespace gl
{
class TransformFeedback: public gl::impl::Object
{
public:
	TransformFeedback()
	{
		glCreateTransformFeedbacks(1,&id);
		deleter_func=glDeleteTransformFeedbacks;
		is_func=glIsTransformFeedback;
	}
	
	void Bind() const
	{
		glBindTransformFeedback(GL_TRANSFORM_FEEDBACK, id);
	}
	
	void Begin(GLenum primitiveMode) const
	{
		glBeginTransformFeedback(primitiveMode);
	}
	
	void Pause() const
	{
		glPauseTransformFeedback();
	}
	
	void Resume() const
	{
		glResumeTransformFeedback();
	}
	
	void End() const
	{
		glEndTransformFeedback();
	}
	
	void BufferRange(GLuint index, GLuint buffer, GLintptr offset, GLsizei size) const
	{
		glTransformFeedbackBufferRange(id, index, buffer, offset, size);
	}
	
	void BufferBase(GLuint index, GLuint buffer) const
	{
		glTransformFeedbackBufferBase(id, index, buffer);
	}
	
	void Draw(GLenum mode) const
	{
		glDrawTransformFeedback(mode, id);
	}
	
	void DrawInstanced(GLenum mode, GLsizei instanceCount) const
	{
		glDrawTransformFeedbackInstanced(mode, id, instanceCount);
	}
	
	void DrawStream(GLenum mode, GLuint stream) const
	{
		glDrawTransformFeedbackStream(mode, id, stream);
	}
	
	void DrawStreamInstanced(GLenum mode, GLuint stream, GLsizei instanceCount) const
	{
		glDrawTransformFeedbackStreamInstanced(mode, id, stream, instanceCount);
	}
	
#ifndef GLHPP_STRICT_API
	void Draw(GLenum mode, GLsizei instanceCount) const
	{
		DrawInstanced(mode, instanceCount);
	}

	void DrawStream(GLenum mode, GLuint stream, GLsizei instanceCount) const
	{
		DrawStreamInstanced(mode, stream, instanceCount);
	}
	void BufferRange(GLuint index, const Buffer& buf, GLintptr offset, GLsizei stride) const
	{
		BufferRange(index, static_cast<GLuint>(buf.name()), offset, stride);
	}
	
	void BufferBase(GLuint index, const Buffer& buf) const
	{
		BufferBase(index, static_cast<GLuint>(buf.name()));
	}
#endif
};
}

#endif
