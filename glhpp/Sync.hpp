#ifndef GLHPP_SYNC_HPP
#define GLHPP_SYNC_HPP

#include "Object.hpp"

namespace gl
{
//You can't make a sync without Fence() so this isnt' an object.	
class Sync: public gl::impl::Resource<GLsync>
{
protected:
	static void deleteSync(GLsizei,const GLsync* incoming){ glDeleteSync(*const_cast<GLsync*>(incoming)); }
	Sync(GLsync incoming):gl::impl::Resource<GLsync>(incoming)
	{
		deleter_func=deleteSync;
		is_func=glIsSync;
	}
public:
	static Sync Fence(GLenum condition=GL_SYNC_GPU_COMMANDS_COMPLETE,GLbitfield flags=0)
	{
		return Sync(glFenceSync(condition,flags));
	}
	GLenum ClientWait(GLbitfield flags=0, GLuint64 timeout_ns=GL_TIMEOUT_IGNORED) const
	{
		return glClientWaitSync(name(),flags,timeout_ns);
	}
	void Wait(GLbitfield flags=0,GLuint64 timeout=GL_TIMEOUT_IGNORED) const
	{
		return glWaitSync(name(),flags,timeout);
	}
	void Get(GLenum pname,GLsizei bufSize,GLsizei *length, GLint *values) const
	{
		glGetSynciv(name(),pname,bufSize,length,values);
	}
	GLint Get(GLenum pname) const
	{
		int out;
		GLsizei N;
		Get(pname,1,&N,&out);
		return out;
	}
	
};
	
}


#endif
