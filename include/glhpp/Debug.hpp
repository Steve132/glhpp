#ifndef GLHPP_DEBUG_HPP
#define GLHPP_DEBUG_HPP

#include<functional>

namespace gl
{
	inline GLenum GetError()
	{
		return glGetError();
	}
	inline GLenum GetGraphicsResetStatus()
	{
		return glGetGraphicsResetStatus();
	}
	void DebugMessageCallback(GLDEBUGPROC proc,const void* userParam){
		glDebugMessageCallback(proc,userParam);
	}
	using debugCallbackFunc=std::function<void (GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam)>;
	
	namespace {
		void debugCallbackFuncImplStatic(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam) {
			debugCallbackFunc& funcref=*reinterpret_cast<debugCallbackFunc*>(userParam);
			func(source,id,severity,length,message,userParam);
		}
	}
#ifndef GLHPP_STRICT_API
	void DebugMessageCallback(debugCallbackFunc& cbfunc)
	{
		debugCallbackFunc* funcptr=&cbfunc;
		DebugMessageCallback(debugCallbackFuncImplStatic,funcptr);
	}
#endif
	//TODO: The rest of debug
}

#endif
