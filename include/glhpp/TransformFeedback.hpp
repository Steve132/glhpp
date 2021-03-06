#ifndef GLHPP_TRANSFORMFEEDBACK_HPP
#define GLHPP_TRANSFORMFEEDBACK_HPP

#include "Object.hpp"
#include "Buffer.hpp"

namespace gl
{
class TransformFeedback: public gl::impl::DefaultableObject<TransformFeedback,GL_TRANSFORM_FEEDBACK>
{
public:
	TransformFeedback()
	{
		glCreateTransformFeedbacks(1,&id);
		deleter_func=glDeleteTransformFeedbacks;
	}
	virtual GLboolean Is() const override { return glIsTransformFeedback(id); }
	
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

	void Get(GLenum pname,GLint* out) const
	{
		glGetTransformFeedbackiv(id,pname,out);
	}
	void Get(GLenum pname,GLint index,GLint* out) const
	{
		glGetTransformFeedbacki_v(id,pname,index,out);
	}
	void Get(GLenum pname,GLint index,GLint64* out) const
	{
		glGetTransformFeedbacki64_v(id,pname,index,out);
	}
#ifndef GLHPP_STRICT_API
	GLint Get(GLenum pname) const
	{
		GLint out;
		Get(pname,&out);
		return out;
	}
	template<class T>
	T Get(GLenum pname) const;
	
	template<class T>
	T Get(GLenum pname,GLint index) const;
#endif
};


#ifndef GLHPP_STRICT_API
template<>
inline GLint TransformFeedback::Get(GLenum pname) const { return Get(pname); }

template<>
inline GLint TransformFeedback::Get(GLenum pname,GLint index) const
{
	GLint out;
	Get(pname,index,&out);
	return out;
}
template<>
inline GLint64 TransformFeedback::Get(GLenum pname,GLint index) const
{
	GLint64 out;
	Get(pname,index,&out);
	return out;
}
#endif


}

#endif
