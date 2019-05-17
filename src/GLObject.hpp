#ifndef GLHPP_GLOBJECT_HPP
#define GLHPP_GLOBJECT_HPP

namespace gl::_impl
{

template<class Base>
class DefaultZeroType: public Base
{
public:
	DefaultZeroType():Base(0)
	{}
};

template<class T>
class GLObject
{
protected:
	GLuint object;
	std::function<void(GLsizei,const GLuint*)> delete_func;
	bool direct_state_access_supported;

	static inline GLuint gfuncget(const char* objtype,const std::function<void(GLsizei, GLuint*)>& gfunc)
	{
		GLuint out;
		gfunc(1, &out);
		if (out== 0)
		{
			_handleError(GL_HPP_CUSTOM, std::string("There was an error getting a new OpenGL handle of type") + objtype);
		}
		return out;
	}
	
	GLObject(GLuint o,std::function<void(GLsizei,const GLuint*)> dfunc):
		object(o),
		name(object),
		delete_func(dfunc),
		direct_state_access_supported(gl::check_extension("GL_EXT_direct_state_access") || gl::check_extension("GL_ARB_direct_state_access"))
	{}

	GLObject(const char* objtype,
		std::function<void(GLsizei, GLuint*)> gfunc,
		std::function<void(GLsizei, const GLuint*)> dfunc
		) :
		GLObject(gfuncget(objtype,gfunc),dfunc)	//delegating constructor
	{}

public:
	const GLuint& name;
	
	~GLObject()
	{
		if(object!=0)
		{
			delete_func(1,&object);
		}
	}
	//non copyable.  Only movable. 
	GLObject(const GLObject&)=delete;
	GLObject()=delete;
	GLObject& operator=(const GLObject&)=delete;
	
	GLObject(GLObject&& o):
		name(object),
		delete_func(std::move(o.delete_func)),
		object(std::move(o.object)),
		direct_state_access_supported(std::move(o.direct_state_access_supported))
	{
		o.object=0;
	}
	
	GLObject& operator=(GLObject&& other)
	{
		if(this !=&other && object !=other.object)
		{
		///	delete_func(1,&object);
            object = std::move(other.object);
            direct_state_access_supported = other.direct_state_access_supported;
			other.object = 0;
		}
		delete_func=std::move(other.delete_func);
		
		return *this;
	}
	
	static T& Default()
	{
		static _impl::DefaultZeroType<T> dzt;
		return dzt;
	}
};

}

#endif
