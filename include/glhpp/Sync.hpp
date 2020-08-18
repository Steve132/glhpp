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
	}
	
public:
	virtual GLboolean Is() const override{
		return glIsSync(name());
	}
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
	
	void Label(GLsizei length,const char* dat)
	{
		glObjectPtrLabel(name(),length,dat);
	}
	void GetLabel(GLsizei bufSize,GLsizei* lenout,char* out) const
	{
		glGetObjectPtrLabel(name(),bufSize,lenout,out);
	}
#ifndef GLHPP_STRICT_API
	#if __cplusplus >= 201703L
	void Label(const std::string_view& str)
	{
		Label(str.length(),str.data());
	}
	#else
	void Label(const std::string& str)
	{
		Label(str.length(),str.c_str());
	}
	#endif
	std::string GetLabel() const
	{
		GLint mxsize;
		glGetIntegerv(GL_MAX_LABEL_LENGTH,&mxsize);
		GLsizei bufsize=mxsize;
		std::string out(bufsize+1,'\0');
		GLsizei lenout;
		GetLabel(bufsize,&lenout,const_cast<char*>(out.data()));
		out.resize(lenout);
		return out;
	}
#endif
};
	
}


#endif
