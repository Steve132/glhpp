#ifndef GLHPP_SYNC_HPP
#define GLHPP_SYNC_HPP





/*TODO: figure this out...official GL wiki says emphatically "This is NOT an object"
 *      It should probably have a mutex interface or something
class Sync
{
public:
	Sync(GLenum condition=GL_SYNC_GPU_COMMANDS_COMPLETE,GLbitfield flags=0):
		name(object)
	{
		_impl::VersionDependency("create glSync",{"GL_VERSION_3_2","GL_ARB_sync"});
		object=glFenceSync(condition,flags);
		_impl::_checkError(GL_INVALID_ENUM,"glFenceSync() condition is not GL_SYNC_GPU_COMMANDS_COMPLETE.\n");
		_impl::_checkError(GL_INVALID_VALUE,"glFenceSync() flags is not zero.\n");
		if(object==0)
		{
			_impl::_handleError(GL_HPP_CUSTOM,"Fence sync failed to be created");
		}
	}
	void Wait()
	{
		glWaitSync(object,0,GL_TIMEOUT_IGNORED);
	}
	GLenum ClientWait(GLuint64 timeout=0)
	{
		return glClientWaitSync(object,GL_SYNC_FLUSH_COMMANDS_BIT,timeout);
	}
	GLint Get(GLenum pname) const
	{
		GLint p;
		GLsizei numwritten=0;
		glGetSynciv(object,pname,1,&numwritten,&p);	
		if(numwritten==0)
		{
			_impl::_handleError(GL_HPP_CUSTOM,"Error getting sync parameter");
		}
		_impl::_checkError(GL_INVALID_ENUM,"pname is not one of the accepted tokens");
		return p;	
	}
	const GLsync& name;
private:
	GLsync object;
};*/


#endif
