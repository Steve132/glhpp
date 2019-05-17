#ifndef GLHPP_BUFFER_HPP
#define GLHPP_BUFFER_HPP

namespace gl::_impl
{

template<GLenum ac=0>
struct BufferMapType
{
	typedef const void* ptrtype;
};

#ifdef GL_MAP_WRITE_BIT
template<>
struct BufferMapType<GL_MAP_WRITE_BIT>
{
	typedef void* ptrtype;
};
#endif


    
#ifdef GL_ALT_FUNDEF_GenBuffers
class Buffer: public _impl::GLObject<Buffer>
{
public:
    
    Buffer(Buffer&& buffer) : _impl::GLObject<Buffer>(std::move(buffer)){}
    
    #if defined(GL_ALT_FUNDEF_BindBuffer)
 	void Bind(GLenum bt) const;
    #endif

    #if defined GL_ALT_FUNDEF_BindBufferRange
	void BindRange(GLenum target, GLuint index,GLintptr offset, GLsizeiptr size) const;
    #endif
    
    #ifdef GL_ALT_FUNDEF_BindBufferBase
    void BindBase(GLenum target,GLuint index) const;
    #endif
    
    #if defined(GL_ALT_FUNDEF_FlushMappedNamedBufferRangeEXT) || defined(GL_ALT_FUNDEF_FlushMappedBufferRange)
	void FlushMappedRange(GLintptr offset,GLsizeiptr sz) const;
    #endif
	
    #if defined(GL_ALT_FUNDEF_GetNamedBufferSubDataEXT) || defined(GL_ALT_FUNDEF_GetBufferSubData)
    void GetSubData(GLintptr offset,GLsizeiptr size,void* output_buffer) const;
    #endif
    
    #if defined(GL_ALT_FUNDEF_GetNamedBufferPointervEXT) || defined(GL_ALT_FUNDEF_GetBufferPointerv)
    void* GetMappedPointer() const;
    #endif
    
    #if defined(GL_ALT_FUNDEF_GetNamedBufferParameterivEXT) || defined(GL_ALT_FUNDEF_GetBufferParameteriv)
	GLint Get(GLenum value) const;
    #endif

    #if defined(GL_ALT_FUNDEF_NamedBufferDataEXT) || defined(GL_ALT_FUNDEF_BindBuffer)
    void Data(GLsizeiptr sz,const GLvoid* data,GLenum usage);
    
    template<class T>
	void Data(const T* b,const T* e,GLenum usage);
    #endif

    #if defined(GL_ALT_FUNDEF_NamedBufferSubDataEXT) || defined(GL_ALT_FUNDEF_BufferSubData)
	void SubData(GLintptr offset,GLsizeiptr size,const GLvoid* data);
    #endif
    
    #ifdef GL_ALT_FUNDEF_ClearBufferData
	void ClearData(GLenum internalformat,GLenum format,GLenum type,const void* data);
    #endif
    
    #ifdef GL_ALT_FUNDEF_ClearBufferSubData
    void ClearSubData(GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void* data);
    #endif
	
	#ifdef GL_ALT_FUNDEF_InvalidateBufferData
    void InvalidateData();
    #endif
    
    #ifdef GL_ALT_FUNDEF_InvalidateBufferSubData
	void InvalidateSubData(GLintptr offset,GLsizeiptr length);
    #endif
    
	template<class T>
	void SubData(GLintptr offset,const T* b,const T* e);

    
    #if defined(GL_ALT_FUNDEF_MapBuffer) || defined(GL_ALT_FUNDEF_MapNamedBufferEXT)
	void* Map(GLenum access);
    
	template<GLenum ac>
	typename _impl::BufferMapType<ac>::ptrtype Map();

    #endif
    
    #if defined(GL_ALT_FUNDEF_UnmapNamedBufferEXT) || defined(GL_ALT_FUNDEF_UnmapBuffer)
	bool Unmap();
    #endif

    #if defined(GL_ALT_FUNDEF_MapBufferRange) || defined(GL_ALT_FUNDEF_MapNamedBufferRangeEXT)
	void* MapRange(GLintptr offset,GLsizeiptr length,GLbitfield access);

    template<GLbitfield ac>
	typename _impl::BufferMapType<ac & GL_MAP_WRITE_BIT>::ptrtype
	MapRange(GLintptr offset,GLsizeiptr length);
    #endif
    
    #if defined(GL_ALT_FUNDEF_NamedCopyBufferSubDataEXT) || defined(GL_ALT_FUNDEF_CopyBufferSubData)
	void CopySubData(const Buffer& read,GLintptr readoffset,GLintptr writeoffset,GLsizeiptr sz);
    #endif
    
	Buffer():
		_impl::GLObject<Buffer>("GLBuffer",glGenBuffers,glDeleteBuffers)
	{}
	
protected:
	explicit Buffer(GLuint o):
		_impl::GLObject<Buffer>(o,glDeleteBuffers)
	{}
};
#endif
    
    


}


#endif
