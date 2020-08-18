
#ifndef GLHPP_GET_HPP
#define GLHPP_GET_HPP

namespace gl
{
	
	inline void Get(GLenum pname,GLboolean* v)
	{
		glGetBooleanv(pname,v);
	}
	inline void Get(GLenum pname,GLint* v)
	{
		glGetIntegerv(pname,v);
	}
	inline void Get(GLenum pname,GLint64* v)
	{
		glGetInteger64v(pname,v);
	}
	inline void Get(GLenum pname,GLfloat* v)
	{
		glGetFloatv(pname,v);
	}	
	inline void Get(GLenum pname,GLdouble* v)
	{
		glGetDoublev(pname,v);
	}
	
#ifndef GLHPP_STRICT_API
	inline void Get(GLenum pname,bool* v)
	{
		GLboolean out;Get(pname,&out);*v=out;
	}
	template<class T>
	inline T Get(GLenum pname)
	{
		T out;Get(pname,&out);return out;
	}
#endif

	inline void Get(GLenum pname,GLuint index,GLboolean* v)
	{
		glGetBooleani_v(pname,index,v);
	}
	inline void Get(GLenum pname,GLuint index,GLint* v)
	{
		glGetIntegeri_v(pname,index,v);
	}
	inline void Get(GLenum pname,GLuint index,GLint64* v)
	{
		glGetInteger64i_v(pname,index,v);
	}
	inline void Get(GLenum pname,GLuint index,GLfloat* v)
	{
		glGetFloati_v(pname,index,v);
	}	
	inline void Get(GLenum pname,GLuint index,GLdouble* v)
	{
		glGetDoublei_v(pname,index,v);
	}
#ifndef GLHPP_STRICT_API
	inline void Get(GLenum pname,GLuint index,bool* v)
	{
		GLboolean out;Get(pname,index,&out);*v=out;
	}
	template<class T>
	inline T Get(GLenum pname,GLuint index)
	{
		T out;Get(pname,index,&out);return out;
	}
#endif

	inline void Get(GLenum pname,GLvoid** v)
	{
		glGetPointerv(pname,v);
	}
#ifndef GLHPP_STRICT_API
	/*template<class C> TODO this conflicts
	inline void Get(GLenum pname,C* v) //overload for pointer types
	{
		Get(pname,(GLvoid**)&v);
	} //this should automatically create Get<unsigned*>() as Get<void*>() through the general Get<T>()
*/
#endif

	inline const GLubyte* GetString(GLenum pname)
	{
		return glGetString(pname);
	}
	inline const GLubyte* GetString(GLenum pname,GLuint index)
	{
		return glGetStringi(pname,index);
	}
#ifndef GLHPP_STRICT_API
	inline void Get(GLenum pname,std::string* v) //this should automatically create Get<std::string>() through the general Get<T>()*//
	{
		v->assign((const char*)GetString(pname));
	}
	inline void Get(GLenum pname,GLuint index,std::string* v)
	{
		v->assign((const char*)GetString(pname,index));
	}
#endif

inline void GetInternalformat(GLenum target,GLenum internalformat, GLenum pname,GLsizei bufSize, GLint *params)
{
	glGetInternalformativ(target,internalformat,pname,bufSize,params);
}

inline void GetInternalformat(GLenum target,GLenum internalformat, GLenum pname,GLsizei bufSize, GLint64 *params)
{
	glGetInternalformati64v(target,internalformat,pname,bufSize,params);
}
#ifndef GLHPP_STRICT_API
template<class T>
inline T GetInternalformat(GLenum target,GLenum internalformat, GLenum pname)
{
	if(pname == GL_SAMPLES) throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetInternalformat to query a multi-valued internalformat.  Try GetResource_Multi");
	
	T out;
	GetInternalformat(target,internalformat,pname,1,&out);
	return out;
}
template<class T>
inline std::vector<T> GetInternalformat_Multi(GLenum target,GLenum internalformat, GLenum pname)
{
	GLsizei count=1;
	if(pname == GL_SAMPLES) count=GetInternalformat<GLint>(target,internalformat,GL_NUM_SAMPLE_COUNTS); 
	std::vector<T> allvalues(count);
	GetInternalformat(target,internalformat,pname,count,allvalues.data());
	return allvalues;
}
#endif

//GetInternalFormat_Multi

}

#endif
