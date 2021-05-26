#ifndef GLHPP_BUFFER_HPP
#define GLHPP_BUFFER_HPP

#include "Object.hpp"
#include "Formats.hpp"

namespace gl
{
class Buffer: public gl::impl::DefaultableObject<Buffer,GL_BUFFER>
{
public:
	Buffer()
	{
		glCreateBuffers(1,&id);
		deleter_func=glDeleteBuffers;
	}
	virtual GLboolean Is() const override{ return glIsBuffer(id); }
	
	void Bind(GLenum tgt) const
	{
		glBindBuffer(tgt,id);
	}
	
	void BindRange(GLenum target,GLuint index, GLintptr offset,GLsizeiptr size) const
	{
		glBindBufferRange(target,index,id,offset,size);
	}
	void BindBase(GLenum target,GLuint index) const
	{
		glBindBufferBase(target,index,id);
	}
	//TODO: plural versions of the above
	void Storage(GLsizeiptr size, const void *data,GLbitfield flags)
	{
		glNamedBufferStorage(id,size,data,flags);
	}
	
	void Data(GLsizeiptr size, const void *data, GLenum usage)
	{
		glNamedBufferData(id,size,data,usage);
	}
	void SubData(GLintptr offset, GLsizeiptr size,const void *data)
	{
		glNamedBufferSubData(id,offset,size,data);
	}
	void ClearData(GLenum internalformat,GLenum format,GLenum type,const void *data)
	{
		glClearNamedBufferData(id,internalformat,format,type,data);
	}
	void ClearSubData(GLenum internalFormat,GLintptr offset, GLsizeiptr size, GLenum format,GLenum type, const void *data)
	{	
		glClearNamedBufferSubData(id,internalFormat,offset,size,format,type,data);
	}
	void* Map(GLenum access)
	{
		return glMapNamedBuffer(id,access);
	}
	void* MapRange(GLintptr offset,GLsizeiptr length,GLbitfield access)
	{
		return glMapNamedBufferRange(id,offset,length,access);
	}
	void FlushMappedRange(GLintptr offset, GLsizeiptr length)
	{
		glFlushMappedNamedBufferRange(id,offset,length);
	}
	GLboolean Unmap()
	{
		return glUnmapNamedBuffer(id);
	}
	void InvalidateSubData(GLintptr offset,GLsizeiptr length)
	{
		glInvalidateBufferSubData(id,offset,length);
	}
	void InvalidateData()
	{
		glInvalidateBufferData(id);
	}
	void GetSubData(GLintptr offset,GLsizeiptr size,void* data) const
	{
		glGetNamedBufferSubData(id,offset,size,data);
	}
	void GetParameter(GLenum pname,GLint* data) const
	{
		glGetNamedBufferParameteriv(id,pname,data);
	}
	void GetParameter(GLenum pname,GLint64* data) const
	{
		glGetNamedBufferParameteri64v(id,pname,data);
	}
	void GetPointer(GLenum pname,void** params) const
	{
		glGetNamedBufferPointerv(id,pname,params);
	}
	void CopySubData(Buffer& target,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size) const
	{
		glCopyNamedBufferSubData(id,target.id,readOffset,writeOffset,size);
	}
#ifndef GLHPP_STRICT_API
	template<class T>
	void Storage(const T* dbegin,const T* dend,GLbitfield flags)
	{
		Storage(sizeof(T)*(dend-dbegin),dbegin,flags);
	}
	template<class T>
	void Data(const T* dbegin,const T* dend,GLenum usage)
	{
		Data(sizeof(T)*(dend-dbegin),dbegin,usage);
	}
	template<class T>
	void SubData(GLintptr offset,const T* dbegin,const T* dend)
	{
		SubData(sizeof(T)*(dend-dbegin),dbegin);
	}
	template<class V>
	void ClearData(GLenum internalformat,const V& element)
	{
		ClearData(internalformat,impl::ClientToChannelsFormat<sizeof(element)/sizeof(element[0])>::value,impl::ClientToGLType<decltype(element[0])>::value,&element);
	}
	template<class V>
	void ClearSubData(GLenum internalformat,GLintptr offset,GLsizeiptr size,const V& element)
	{
		ClearSubData(internalformat,offset,size,impl::ClientToChannelsFormat<sizeof(element)/sizeof(element[0])>::value,impl::ClientToGLType<decltype(element[0])>::value,&element);
	}
	template<class T>
	void GetSubData(GLintptr offset,T* dbegin,T* dend) const
	{
		GetSubData(offset,sizeof(T)*(dend-dbegin),dbegin);
	}
	template<class T>
	void GetParameter(GLenum pname) const
	{
		T out;GetParameter(pname,&out);return out;
	}
	void* GetPointer(GLenum pname=GL_BUFFER_MAP_POINTER) const
	{
		void* out; GetPointer(pname,&out); return out;
	}
	template<class T>
	T GetPointer(GLenum pname=GL_BUFFER_MAP_POINTER) const
	{
		void* out; GetPointer(pname,&out);
		return static_cast<T>(out);
	}
#endif

};
}

#endif

//Confirmed checked against glcorearb4.6
