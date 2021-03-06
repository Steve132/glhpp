#ifndef GLHPP_QUERY_HPP
#define GLHPP_QUERY_HPP

#include "Object.hpp"


//TODO: This needs a lot of work.  It needs to be refactored so that it uses overloads not specializations, also so that the undocumented GetQueryBufferObject functions are implemented,
//and that the getters are correct for the API and there's a strict/non strict separation
namespace gl
{
namespace impl
{
template<class TypeVal>
struct GetObjectImpl
{
	static void run(GLuint id,GLenum pname,TypeVal* out);
};
template<>
inline void GetObjectImpl<GLint>::run(GLuint id,GLuint pname,GLint* out)
{
	glGetQueryObjectiv(id,pname,out);
}
template<>
inline void GetObjectImpl<GLuint>::run(GLuint id,GLuint pname,GLuint* out)
{
	glGetQueryObjectuiv(id,pname,out);
}
template<>
inline void GetObjectImpl<GLint64>::run(GLuint id,GLuint pname,GLint64* out)
{
	glGetQueryObjecti64v(id,pname,out);
}
template<>
inline void GetObjectImpl<GLuint64>::run(GLuint id,GLuint pname,GLuint64* out)
{
	glGetQueryObjectui64v(id,pname,out);
}
}
class Query: public gl::impl::EnumerableObject<GL_QUERY>
{
protected:
	GLenum target;
public:
	Query(GLenum tgt):
		target(tgt)
	{
		glCreateQueries(target,1,&id);
		deleter_func=glDeleteQueries;
	}
	virtual GLboolean Is() const override
	{
		return glIsQuery(name());
	}
	void Begin(GLenum s) const //only for compatibility with the API.  
	{
		glBeginQuery(s,id);
	}
	void BeginIndexed(GLenum s,GLuint index) const
	{
		glBeginQueryIndexed(s,index,id);
	}
	void BeginConditionalRender(GLenum mode) const
	{
		glBeginConditionalRender(id, mode); 
	}
	void Begin() const
	{
		Begin(target);
	}
	void BeginIndexed(GLuint index) const
	{
		BeginIndexed(target,index);
	}
	void End(GLenum s) const //only for compatibility with the API.  
	{
		glEndQuery(s);
	}
	void End() const
	{
		End(target);
	}
	void EndIndexed(GLenum s,GLuint index) const
	{
		glEndQueryIndexed(s,index);
	}
	void EndIndexed(GLuint index) const
	{
		EndIndexed(target,index);
	}
	void EndConditionalRender() const
	{
		glEndConditionalRender(); 
	}
	
	void Get(GLenum s,GLuint pname, GLint* v) const
	{
		glGetQueryiv(s,pname,v);
	}
	void Get(GLuint pname, GLint* v) const
	{
		glGetQueryiv(target,pname,v);
	}
	GLint Get(GLenum s,GLuint pname) const
	{
		GLint out;Get(s,pname,&out);return out;
	}
	GLint Get(GLuint pname) const
	{
		return Get(target,pname);
	}
	GLint GetIndexed(GLenum s,GLuint index,GLuint pname) const
	{
		GLint out;glGetQueryIndexediv(s,index,pname,&out);return out;
	}
	GLint GetIndexed(GLuint index,GLuint pname) const
	{
		return GetIndexed(target,index,pname);
	}
	template<class IntType>
	IntType GetObject(GLuint pname) const
	{
		IntType out;
		impl::GetObjectImpl<IntType>::run(id,pname,&out);
		return out;
	}
	void Counter(GLenum ts=GL_TIMESTAMP) const
	{
		glQueryCounter(id,ts);
	}
};
	
}


#endif
