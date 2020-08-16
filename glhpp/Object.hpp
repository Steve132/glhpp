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
	typedef void (*DeleterFuncPtr)(GLsizei,const IDType*);
	typedef GLboolean (*IsFuncPtr)(IDType);

	IDType id;
	DeleterFuncPtr deleter_func;
	IsFuncPtr is_func;

public:
	Resource& operator=(Resource<IDType>&& other)
	{
		cleanup();
		id=other.id;
		deleter_func=other.deleter_func;
		is_func=other.is_func;
		other.id=0;
		other.cleanup();
	}
	Resource(Resource<IDType>&& other):Resource()
	{
		*this=std::move(other);
	}
	const IDType& name() const
	{
		return id;
	}
	
	GLboolean Is() const
	{
		return is_func(name());
	}

#ifndef GLHPP_STRICT_API
	operator bool() const { return Is(); }
#endif

private:
	void cleanup()
	{
		if(id!=0) 
		{
			deleter_func(1,&id);
			id=0;
		}
		deleter_func=NullDeleter;
		is_func=NullIsFunction;
	}
protected:
	static void NullDeleter(GLsizei,const IDType*) {};
	static GLboolean NullIsFunction(IDType) { return false; };
	
	Resource(const IDType& tname=0):
		id(tname),
		deleter_func(NullDeleter),
		is_func(NullIsFunction)
	{}
	~Resource()
	{
		cleanup();
	}
	
};

class Object: public Resource<GLuint>
{
protected:
	
public:

};

struct NullInitializerFlagType {};

template<GLenum GLOBJECTENUM>
class EnumerableObject: public Object
{
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
	static GLHPPTYPE& Default(){
		static GLHPPTYPE dzt((NullInitializerFlagType()));
		return dzt;
	}
};
}

}


#endif
