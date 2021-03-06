#ifndef GLHPP_GENERAL_HPP
#define GLHPP_GENERAL_HPP

namespace gl
{
	// Primitive Clipping
	inline void Enable(GLenum cap)
	{
		glEnable(cap);
	}
	
	inline void Enable(GLenum cap, GLuint index)
	{
		glEnablei(cap, index);
	}
	
	inline void Disable(GLenum cap)
	{
		glDisable(cap);
	}
	
	inline void Disable(GLenum cap, GLuint index)
	{
		glDisablei(cap, index);
	}
	inline GLboolean IsEnabled(GLenum cap)
	{
		return glIsEnabled(cap);
	}
	inline GLboolean IsEnabled(GLenum cap,GLuint index)
	{
		return glIsEnabledi(cap,index);
	}
	inline void Hint(GLenum target, GLenum hint)
	{
		glHint(target, hint);
	}
	inline void Flush()
	{
		glFlush();
	}
	inline void Finish()
	{
		glFinish();
	}
}

#endif
