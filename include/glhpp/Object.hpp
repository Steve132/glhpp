#ifndef GLHPP_OBJECT_HPP
#define GLHPP_OBJECT_HPP

#include<memory>

namespace gl
{

namespace impl
{


template<class IDType>
class Resource
{
private:
	std::unique_ptr<int> objects_are_noncopyable;
	
protected:
	IDType id;
	typedef void (*DeleterFuncPtr)(GLsizei,const IDType*);
	DeleterFuncPtr deleter_func;
	static void NullDeleter(GLsizei,const IDType*) {};
public:
	Resource& operator=(Resource<IDType>&& other)
	{
		if (this != &other && id != other.id)
		{
			if (id != 0 && Is())
			{
				deleter_func(1, &id);
			}

			id = std::move(other.id);
			other.id = 0;
		}

		deleter_func = std::move(other.deleter_func);

		return *this;
	}
	Resource(Resource<IDType>&& other):Resource()
	{
		*this=std::move(other);
	}
	const IDType& name() const
	{
		return id;
	}
	
	virtual GLboolean Is() const=0;
	
protected:
	Resource(const IDType& tname=IDType(0)):
		id(tname)
	{}
	virtual ~Resource()  //This is required to be virtual in case anyone uses Object*
	{
		//TODO: technically call Is() but we need to do a function<> dispatch to do that
		if(id!=0/* && Is()*/) 
		{
			deleter_func(1,&id);
		}
	}
	
};

class Object: public Resource<GLuint>
{
protected:
	Object(GLuint tid=0):Resource(tid)
	{}
public:
};

struct NullInitializerFlagType {};

template<GLenum GLOBJECTENUM>
class EnumerableObject: public Object
{
protected:
	using Object::Object;
public:
	void Label(GLsizei length,const char* dat)
	{
		glObjectLabel(GLOBJECTENUM,name(),length,dat);
	}
	void GetLabel(GLsizei bufSize,const GLsizei* lenout,char* out) const
	{
		glGetObjectLabel(GLOBJECTENUM,name(),bufSize,lenout,out);
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
		
		GLsizei bufsize;
		GLint mxsize;
		glGetIntegerv(GL_MAX_LABEL_LENGTH,&mxsize);
		bufsize=mxsize;
		std::string out(bufsize+1,'\0');
		GLsizei lenout;
		GetLabel(bufsize,&lenout,const_cast<char*>(out.data()));
		out.resize(lenout);
		return out;
	}
#endif
	
};

template<class GLHPPTYPE,GLenum GLOBJECTENUM>
class DefaultableObject:public EnumerableObject<GLOBJECTENUM>
{
protected:
	using EnumerableObject<GLOBJECTENUM>::EnumerableObject;
public:
	static GLHPPTYPE& Default(){
		static GLHPPTYPE dzt((NullInitializerFlagType()));
		return dzt;
	}
};
}

}


#endif
