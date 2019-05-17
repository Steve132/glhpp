namespace gl
{

	

//////////////////////////////////////////////////////////////////////////////////////
//Buffer
#ifdef GL_ALT_FUNDEF_GenBuffers
inline void Buffer::Bind(GLenum bt) const 
{
	glBindBuffer(bt,object);
	_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Buffer: Buffer target is not one of the allowable values.");
}

#ifdef GL_ALT_FUNDEF_BindBufferRange
inline void Buffer::BindRange(GLenum target, GLuint index,GLintptr offset, GLsizeiptr size) const
{
	glBindBufferRange(target,index,object,offset,size);
	_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_TRANSFORM_FEEDBACK_BUFFER or GL_UNIFORM_BUFFER.");
	_impl::_checkError(GL_INVALID_VALUE,"Is generated if index is greater than or equal to the number of target-specific indexed binding points. OR size is less than or equal to zero, or if offset + size is greater than the value of GL_BUFFER_SIZE.");
}
#endif

#ifdef GL_ALT_FUNDEF_BindBufferBase
inline void Buffer::BindBase(GLenum target,GLuint index) const
{
	glBindBufferBase(target,index,object);
	
	_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_TRANSFORM_FEEDBACK_BUFFER or GL_UNIFORM_BUFFER.");
	_impl::_checkError(GL_INVALID_VALUE,"Is generated if index is greater than or equal to the number of target-specific indexed binding points. OR size is less than or equal to zero or it doesn't have a data store");
}
#endif
    
#if defined(GL_ALT_FUNDEF_FlushMappedNamedBufferRangeEXT) || defined(GL_ALT_FUNDEF_FlushMappedBufferRange)
inline void Buffer::FlushMappedRange(GLintptr offset,GLsizeiptr sz) const
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glFlushMappedNamedBufferRangeEXT(object,offset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or length is negative, or offset + length exceeds the size of the mapping.");
		_impl::_checkError(GL_INVALID_OPERATION,"Zero Buffer is bound to target, or the buffer bound to target is not mapped, or is mapped without the GL_MAP_FLUSH_EXPLICIT flag.");
	}
	else
    #endif
	{
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glFlushMappedBufferRange(bufferTarget,offset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or length is negative, or offset + length exceeds the size of the mapping.");
		_impl::_checkError(GL_INVALID_OPERATION,"Zero Buffer is bound to target, or the buffer bound to target is not mapped, or is mapped without the GL_MAP_FLUSH_EXPLICIT flag.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
}
#endif

#if defined(GL_ALT_FUNDEF_GetNamedBufferSubDataEXT) || defined(GL_ALT_FUNDEF_GetBufferSubData)
inline void Buffer::GetSubData(GLintptr offset,GLsizeiptr size,void* output_buffer) const
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glGetNamedBufferSubDataEXT(object,offset,size,output_buffer);
		_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER, GL_PIXEL_PACK_BUFFER, or GL_PIXEL_UNPACK_BUFFER.");
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or if together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target. OR The buffer object being queried is already mapped.");

	}
	else
    #endif
    {
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glGetBufferSubData(bufferTarget,offset,size,output_buffer);
		_impl::_checkError(GL_INVALID_ENUM,"Target is not GL_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER, GL_PIXEL_PACK_BUFFER, or GL_PIXEL_UNPACK_BUFFER.");
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or if together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target. OR The buffer object being queried is already mapped.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
}
#endif
    
#if defined(GL_ALT_FUNDEF_GetNamedBufferPointervEXT) || defined(GL_ALT_FUNDEF_GetBufferPointerv)
inline void* Buffer::GetMappedPointer() const
{
	void* p;
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glGetNamedBufferPointervEXT(object, GL_BUFFER_MAP_POINTER,&p);
		_impl::_checkError(GL_INVALID_ENUM,"Target or pname is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target.");
	}
	else
    #endif
    {
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glGetBufferPointerv(bufferTarget, GL_BUFFER_MAP_POINTER,&p);
		_impl::_checkError(GL_INVALID_ENUM,"Target or pname is not an accepted value.");
		_impl::_checkError(GL_INVALID_OPERATION,"The reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
	return p;
}
#endif
    
#if defined(GL_ALT_FUNDEF_GetNamedBufferParameterivEXT) || defined(GL_ALT_FUNDEF_GetBufferParameteriv)
inline GLint Buffer::Get(GLenum value) const
{
	GLint p;
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glGetNamedBufferParameterivEXT(object,value,&p);
		_impl::_checkError(GL_INVALID_ENUM,"target or value is not an accepted value");
		_impl::_checkError(GL_INVALID_OPERATION,"Reserved buffer object name 0 is bound to target.");
	}
	else
    #endif
	{
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glGetBufferParameteriv(bufferTarget,value,&p);
		_impl::_checkError(GL_INVALID_ENUM,"target or value is not an accepted value");
		_impl::_checkError(GL_INVALID_OPERATION,"Reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
	return p;
}
#endif

    
#if defined(GL_ALT_FUNDEF_NamedBufferDataEXT) || defined(GL_ALT_FUNDEF_BindBuffer)
inline void Buffer::Data(GLsizeiptr sz,const GLvoid* data,GLenum usage)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glNamedBufferDataEXT(object,sz,data,usage);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the accepted buffer targets OR usage is not GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY, GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.");
		_impl::_checkError(GL_INVALID_VALUE,"size is negative.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot bind the reserved buffer name 0 to anything.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to create a data store with the specified size.");
	}
	else
    #endif
	{
        
        #if defined(GL_PIXEL_PACK_BUFFER)
		const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
		const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
		
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glBufferData(bufferTarget,sz,data,usage);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the accepted buffer targets OR usage is not GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY, GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.");
		_impl::_checkError(GL_INVALID_VALUE,"size is negative.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot bind the reserved buffer name 0 to anything.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to create a data store with the specified size.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
}


template<class T>
inline void Buffer::Data(const T* b,const T* e,GLenum usage)
{
	GLsizeiptr sz=(e-b);
	Data(sz*sizeof(T),reinterpret_cast<const GLvoid*>(b),usage);
}
    
#endif
    
#if defined(GL_ALT_FUNDEF_NamedBufferSubDataEXT) || defined(GL_ALT_FUNDEF_BufferSubData)
inline void Buffer::SubData(GLintptr offset,GLsizeiptr size,const GLvoid* data)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glNamedBufferSubDataEXT(object,offset,size,data);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The buffer object being updated is currently mapped, or the reserved buffer object name 0 is bound to target.");
	}
	else
    #endif
	{
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		glBufferSubData(bufferTarget,offset,size,data);
		_impl::_checkError(GL_INVALID_VALUE,"Offset or size is negative, or together they define a region of memory that extends beyond the buffer object's allocated data store.");
		_impl::_checkError(GL_INVALID_OPERATION,"The buffer object being updated is currently mapped, or the reserved buffer object name 0 is bound to target.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
}
    
template<class T>
inline void Buffer::SubData(GLintptr offset,const T* b,const T* e)
{
    GLsizeiptr sz=(e-b);
    SubData(offset*sizeof(T),sz*sizeof(T),reinterpret_cast<const GLvoid*>(b));
}
#endif
    
#ifdef GL_ALT_FUNDEF_ClearBufferData
inline void Buffer::ClearData(GLenum internalformat,GLenum format,GLenum type,const void* data)
{
    
    #if defined(GL_PIXEL_PACK_BUFFER)
    const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
    const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
    #else
    const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
    const GLenum bufferTarget = GL_ARRAY_BUFFER;
    #endif
    
	GLint ppb_binding=gl::Get<GLint>(targetBinding);
	if(ppb_binding!=object)
	{
		glBindBuffer(bufferTarget,object);
	}
	glClearBufferData(targetBinding,internalformat,format,type,data);
			
	_impl::_checkError(GL_INVALID_ENUM,"internalformat is not a sized internal format.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the buffer's data stor,e is mapped with glMapBufferRange or glMapBuffer.");
	
	if(ppb_binding!=object)
	{
		glBindBuffer(bufferTarget,ppb_binding);
	}
}
#endif

#ifdef GL_ALT_FUNDEF_ClearBufferSubData
inline void Buffer::ClearSubData(GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void* data)
{
    
#if defined(GL_PIXEL_PACK_BUFFER)
    const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
    const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
#else
    const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
    const GLenum bufferTarget = GL_ARRAY_BUFFER;
#endif
    
	GLint ppb_binding=gl::Get<GLint>(targetBinding);
	if(ppb_binding!=object)
	{
		glBindBuffer(bufferTarget,object);
	}
	glClearBufferSubData(targetBinding,internalformat,offset,size,format,type,data);
	
	_impl::_checkError(GL_INVALID_ENUM,"Target not one of the generic buffer binding targets, or internalformat is not a sized internal format.");
	_impl::_checkError(GL_INVALID_VALUE,"No buffer is bound to GL_PIXEL_PACK_BUFFER_BINDING. OR offset or range are not multiples of the number of basic machine units per-element for the internal format specified by internalformat. OR  offset or size is less than zero, or if offset + size is greater than the value of GL_BUFFER_SIZE for the buffer bound to target.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the specified buffer range is mapped with glMapBufferRange or glMapBuffer.");
	
	if(ppb_binding!=object)
	{
		glBindBuffer(bufferTarget,ppb_binding);
	}
}
#endif

#ifdef GL_ALT_FUNDEF_InvalidateBufferData
inline void Buffer::InvalidateData()
{
	glInvalidateBufferData(object);
	_impl::_checkError(GL_INVALID_OPERATION,"Part of the buffer is currently mapped.");
}
#endif
    
#ifdef GL_ALT_FUNDEF_InvalidateBufferSubData
inline void Buffer::InvalidateSubData(GLintptr offset,GLsizeiptr length)
{
	glInvalidateBufferSubData(object,offset,length);
	_impl::_checkError(GL_INVALID_VALUE,"offset or length is negative, or if offset + length is greater than the value of GL_BUFFER_SIZE for buffer.");
	_impl::_checkError(GL_INVALID_OPERATION,"Part of buffer is currently mapped.");
}
#endif



#if defined(GL_ALT_FUNDEF_MapBuffer) || defined(GL_ALT_FUNDEF_MapNamedBufferEXT)
inline void* Buffer::Map(GLenum access)
{
    
#if defined(GL_PIXEL_PACK_BUFFER)
    const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
    const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
#else
    const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
    const GLenum bufferTarget = GL_ARRAY_BUFFER;
#endif
    
	void *p;
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		p=glMapNamedBufferEXT(targetBinding,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
	}
	else
    #endif
	{
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		p=glMapBuffer(bufferTarget,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
	return p;
}

template<GLenum ac>
inline typename _impl::BufferMapType<ac>::ptrtype Buffer::Map()
{
	return reinterpret_cast<typename _impl::BufferMapType<ac>::ptrtype>(Map(ac));
}
    
#endif

    
#if defined(GL_ALT_FUNDEF_UnmapNamedBufferEXT) || defined(GL_ALT_FUNDEF_UnmapBuffer)
inline bool Buffer::Unmap()
{
	bool p;
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		p=glUnmapNamedBufferEXT(object) == GL_TRUE;
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot unmap a buffer object whose data store is not mapped.");
	}
	else
    #endif
    {
        
        #if defined(GL_PIXEL_PACK_BUFFER)
        const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
        const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
        #else
        const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
        const GLenum bufferTarget = GL_ARRAY_BUFFER;
        #endif
        
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}

		p=glUnmapBuffer(bufferTarget) == GL_TRUE;
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot unmap a buffer object whose data store is not mapped.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
	return p;
}
#endif

#if defined(GL_ALT_FUNDEF_MapBufferRange) || defined(GL_ALT_FUNDEF_MapNamedBufferRangeEXT)
inline void* Buffer::MapRange(GLintptr offset,GLsizeiptr length,GLbitfield access)
{
    
#if defined(GL_PIXEL_PACK_BUFFER)
    const GLenum targetBinding = GL_PIXEL_PACK_BUFFER_BINDING;
    const GLenum bufferTarget = GL_PIXEL_PACK_BUFFER;
#else
    const GLenum targetBinding = GL_ARRAY_BUFFER_BINDING;
    const GLenum bufferTarget = GL_ARRAY_BUFFER;
#endif
    
	void *p;
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		p=glMapNamedBufferRangeEXT(object,offset,length,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
	}
	else
    #endif
	{
		GLint ppb_binding=gl::Get<GLint>(targetBinding);
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,object);
		}
		p=glMapBufferRange(targetBinding,offset,length,access);
		_impl::_checkError(GL_INVALID_ENUM,"Access flag is incorrect is not GL_READ_ONLY, GL_WRITE_ONLY, or GL_READ_WRITE.");
		_impl::_checkError(GL_OUT_OF_MEMORY,"The GL is unable to map the buffer object's data store. This may occur for a variety of system-specific reasons, such as the absence of sufficient remaining virtual memory.");
		_impl::_checkError(GL_INVALID_OPERATION,"Cannot remap a buffer object whose data store is already mapped.");
		if(ppb_binding!=object)
		{
			glBindBuffer(bufferTarget,ppb_binding);
		}
	}
	return p;
}


template<GLbitfield ac>
    inline typename _impl::BufferMapType<ac & GL_MAP_WRITE_BIT>::ptrtype
Buffer::MapRange(GLintptr offset,GLsizeiptr length)
{
	return reinterpret_cast<typename _impl::BufferMapType<ac & GL_MAP_WRITE_BIT>::ptrtype>(
		MapRange(offset,length,ac)
		);
}
    
#endif
    
#if defined(GL_ALT_FUNDEF_NamedCopyBufferSubDataEXT) || defined(GL_ALT_FUNDEF_CopyBufferSubData)
inline void Buffer::CopySubData(const Buffer& read,GLintptr readoffset,GLintptr writeoffset,GLsizeiptr sz)
{
    #ifdef GL_EXT_direct_state_access
	if(direct_state_access_supported)
	{
		glNamedCopyBufferSubDataEXT(read.object,object,readoffset,writeoffset,sz);
		_impl::_checkError(GL_INVALID_VALUE,"Any of readoffset, writeoffset or size is negative, if readoffset + size exceeds the size of the buffer object bound to readtarget or if writeoffset + size exceeds the size of the buffer object bound to writetarget, OR the same buffer object is bound to both readtarget and writetarget and the ranges [readoffset, readoffset + size) and [writeoffset, writeoffset + size) overlap.");
		_impl::_checkError(GL_INVALID_OPERATION," is generated if zero is bound to readtarget or writetarget. or the buffer object bound to either readtarget or writetarget is mapped.");
	}
	else
    #endif
	{
		glBindBuffer(GL_COPY_READ_BUFFER,read.object);
		_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Read Buffer: Buffer target is not one of the allowable values.");
		glBindBuffer(GL_COPY_WRITE_BUFFER,object);
		_impl::_checkError(GL_INVALID_ENUM,"Cannot Bind Write Buffer: Buffer target is not one of the allowable values.");
		glCopyBufferSubData(GL_COPY_READ_BUFFER,GL_COPY_WRITE_BUFFER,readoffset,writeoffset,sz);

		_impl::_checkError(GL_INVALID_VALUE,"Any of readoffset, writeoffset or size is negative, if readoffset + size exceeds the size of the buffer object bound to readtarget or if writeoffset + size exceeds the size of the buffer object bound to writetarget, OR the same buffer object is bound to both readtarget and writetarget and the ranges [readoffset, readoffset + size) and [writeoffset, writeoffset + size) overlap.");
		_impl::_checkError(GL_INVALID_OPERATION," is generated if zero is bound to readtarget or writetarget. or the buffer object bound to either readtarget or writetarget is mapped.");
	}
}
#endif
    
#endif //end buffer definitions


}
