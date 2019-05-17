#ifndef GLHPP_TEXTURE_HPP
#define GLHPP_TEXTURE_HPP

namespace gl
{




    
#ifdef GL_ALT_FUNDEF_GenTextures
class Texture:public _impl::GLObject<Texture>
{
private:
    
    #ifdef GL_EXT_direct_state_access
        #define texture_function_dsa(dsafunc,...) texture_function_dsaf(dsafunc, __VA_ARGS__)
    #else
        #define texture_function_dsa(dsafunc,ndsafunc,...) texture_function_ndsaf(ndsafunc,__VA_ARGS__)
    #endif
    
	void TexImageErrorCheck()
	{
		//TODO: texture error handling"
	}
    #if defined(GL_ALT_FUNDEF_GetIntegerv)
	GLint tbinding_query(GLenum targ);
    GLenum tbinding_query_enum(GLenum target);
    #endif
    
    template<typename Callable1,typename Callable2, typename... Types>
    void texture_function_dsaf(Callable1,Callable2,GLenum targ,Types... params);
    
    template<typename Callable2, typename... Types>
    void texture_function_ndsaf(Callable2,GLenum targ,Types... params);
    
	GLenum m_target,m_target_binding;
public:
	const GLenum& target;

    Texture(Texture&& texture) : _impl::GLObject<Texture>(std::move(texture)), m_target(texture.m_target), m_target_binding(texture.m_target_binding),target(m_target){}

    Texture& operator=(Texture&& texture)
    {
        _impl::GLObject<Texture>::operator=(std::move(texture));
        m_target = texture.target;
        m_target_binding = texture.m_target_binding;
        return *this;
    }

    Texture():
		_impl::GLObject<Texture>("GLTexture",glGenTextures,glDeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_target_binding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}

    #if defined(GL_ALT_FUNDEF_BindTexture)
    void Bind(GLenum targ)
	{
		glBindTexture(targ,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
	void Bind()
	{
		glBindTexture(m_target,object);
		_impl::_checkError(GL_INVALID_ENUM,"target is not one of the allowable values.");
		_impl::_checkError(GL_INVALID_OPERATION,"texture was previously created with a target that doesn't match that of target.");
	}
    #endif

    #if defined(GL_ALT_FUNDEF_BindMultiTextureEXT) && defined(GL_ALT_FUNDEF_ActiveTexture)
    void BindMulti(GLuint unit, GLenum targ = 0);
    #endif

    #if defined(GL_ALT_FUNDEF_TexImage1D) || defined(GL_ALT_FUNDEF_TextureImage1DEXT)
    void Image1D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage1DEXT,glTexImage1D,targ,level,internalformat,width,border,format,type,data);
	}
    
	void Image1D(GLint level,GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = GL_TEXTURE_1D;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage1DEXT, glTexImage1D, m_target, level, internalformat, width, border, format, type, data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexImage2D) || defined(GL_ALT_FUNDEF_TextureImage2DEXT)
	void Image2D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage2DEXT, glTexImage2D, targ, level, internalformat, width, height, border, format, type, data);
	}
	void Image2D(GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = GL_TEXTURE_2D;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage2DEXT, glTexImage2D, m_target, level, internalformat, width, height, border, format, type, data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexImage3D) || defined(GL_ALT_FUNDEF_TextureImage3DEXT) || defined(GL_ALT_FUNDEF_TexImage3DEXT)
    
    #if defined(GL_ALT_FUNDEF_TexImage3D)
    #define TexImage3DFunc glTexImage3D
    #elif defined(GL_ALT_FUNDEF_TexImage3DEXT)
    #define TexImage3DFunc glTexImage3DEXT
    #else
    #error no declaration of glTexImage3D found
    #endif
    
	void Image3D(GLenum targ,GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage3DEXT,TexImage3DFunc,targ,level,internalformat,width,height,depth,border,format,type,data);
	}
	void Image3D(GLint level,GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,GLint border, GLenum format, GLenum type, const GLvoid *data)
	{
		m_target = GL_TEXTURE_3D;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(glTextureImage3DEXT,TexImage3DFunc,m_target,level,internalformat,width,height,depth,border,format,type,data);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_CopyTexImage1D) || defined(GL_ALT_FUNDEF_CopyTextureImage1DEXT)
	void CopyImage1D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(glCopyTextureImage1DEXT,glCopyTexImage1D,targ,level,internalformat,x,y,width,border);
	}

	void CopyImage1D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLint border)
	{
		texture_function_dsa(glCopyTextureImage1DEXT, glCopyTexImage1D, m_target, level, internalformat, x, y, width, border);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CopyTexImage2D) || defined(GL_ALT_FUNDEF_CopyTextureImage2DEXT)

	void CopyImage2D(GLenum targ,GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(glCopyTextureImage2DEXT, glCopyTexImage2D, targ, level, internalformat, x, y, width, height, border);
	}
	void CopyImage2D(GLint level, GLenum internalformat, GLint x,GLint y, GLsizei width, GLsizei height,GLint border)
	{
		texture_function_dsa(glCopyTextureImage2DEXT, glCopyTexImage2D, m_target, level, internalformat, x, y, width, height, border);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_TexSubImage1D) || defined(GL_ALT_FUNDEF_TextureSubImage1DEXT)
	void SubImage1D(GLenum targ, GLint level, GLint xoffset, GLsizei width, GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage1DEXT,glTexSubImage1D,targ,level,xoffset,width,format,type,data);
	}
	void SubImage1D(GLint level, GLint xoffset, GLsizei width, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage1DEXT,glTexSubImage1D,m_target,level,xoffset,width,format,type,data);
	}
    #endif

    #if defined(GL_ALT_FUNDEF_TexSubImage2D) || defined(GL_ALT_FUNDEF_TextureSubImage2DEXT)
	void SubImage2D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage2DEXT,glTexSubImage2D,targ,level,xoffset,yoffset,width,height,format,type,data);
	}
	void SubImage2D(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage2DEXT,glTexSubImage2D,m_target,level,xoffset,yoffset,width,height,format,type,data);
	}
  #endif

    #if defined(GL_ALT_FUNDEF_TexSubImage3D) || defined(GL_ALT_FUNDEF_TextureSubImage3DEXT) || defined(GL_ALT_FUNDEF_TexSubImage3DEXT)
    
    #if defined(GL_ALT_FUNDEF_TexSubImage3D)
    #define TexSubImage3DFunc glTexSubImage3D
    #elif defined(GL_ALT_FUNDEF_TexSubImage3DEXT)
    #define TexSubImage3DFunc glTexSubImage3DEXT
    #else
    #error no declaration of glTexSubImage3D found
    #endif
    
	void SubImage3D(GLenum targ, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format,
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage3DEXT,TexSubImage3DFunc,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
	void SubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, 
GLenum type, const GLvoid *data)
	{
		texture_function_dsa(glTextureSubImage3DEXT,TexSubImage3DFunc,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
	}
    #endif
	
    
    #if defined(GL_ALT_FUNDEF_CopyTexSubImage1D) || defined(GL_ALT_FUNDEF_CopyTextureSubImage1DEXT)
	void CopySubImage1D(GLenum targ,GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(glCopyTextureSubImage1DEXT,glCopyTexSubImage1D,targ,level,xoffset,x,y,width);
	}
	void CopySubImage1D(GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	{
		texture_function_dsa(glCopyTextureSubImage1DEXT,glCopyTexSubImage1D,m_target,level,xoffset,x,y,width);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CopyTexSubImage1D) || defined(GL_ALT_FUNDEF_CopyTextureSubImage1DEXT)
	void CopySubImage2D(GLenum targ,GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage2DEXT,glCopyTexSubImage2D,targ,level,xoffset,yoffset,x,y,width,height);
	}
	void CopySubImage2D(GLint level, GLint xoffset, GLint yoffset,GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage2DEXT,glCopyTexSubImage2D,m_target,level,xoffset,yoffset,x,y,width,height);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CopyTexSubImage3D) || defined(GL_ALT_FUNDEF_CopyTextureSubImage3DEXT) || defined(GL_ALT_FUNDEF_CopyTexSubImage3DEXT)
    
    #if defined(GL_ALT_FUNDEF_CopyTexSubImage3D)
    #define CopyTexSubImage3DFunc glCopyTexSubImage3D
    #elif defined(GL_ALT_FUNDEF_CopyTexSubImage3DEXT)
    #define CopyTexSubImage3DFunc glCopyTexSubImage3DEXT
    #else
    #error no declaration of CopyTexSubImage3D found
    #endif
    
    
	void CopySubImage3D(GLenum targ,GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage3DEXT,CopyTexSubImage3DFunc,targ,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
	void CopySubImage3D(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	{
		texture_function_dsa(glCopyTextureSubImage3DEXT,CopyTexSubImage3DFunc,m_target,level,xoffset,yoffset,zoffset,x,y,width,height);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexImage1D) || defined(GL_ALT_FUNDEF_CompressedTextureImage1DEXT) || defined(GL_ALT_FUNDEF_CompressedTexImage1DARB)
    
    #if defined(GL_ALT_FUNDEF_CompressedTexImage1D)
        #define CompressedTexImage1DFunc glCompressedTexImage1D
    #elif defined(GL_ALT_FUNDEF_CompressedTexImage1DARB)
        #define CompressedTexImage1DFunc glCompressedTexImage1DARB
    #else
        #error no declaration of CompressedTexImage1D found
    #endif
    
	void CompressedImage1D(GLenum targ,GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(glCompressedTextureImage1DEXT, CompressedTexImage1DFunc, targ, level, internalformat, width, border, imagesize, data);
	}
	void CompressedImage1D(GLint level,GLenum internalformat,GLsizei width, GLint border, GLsizei imagesize,const void* data)
	{
		texture_function_dsa(glCompressedTextureImage1DEXT, CompressedTexImage1DFunc, m_target, level, internalformat, width, border, imagesize, data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexImage2D) || defined(GL_ALT_FUNDEF_CompressedTextureImage2DEXT) || defined(GL_ALT_FUNDEF_CompressedTexImage2DARB)

    #if defined(GL_ALT_FUNDEF_CompressedTexImage2D)
    #define CompressedTexImage2DFunc glCompressedTexImage2D
    #elif defined(GL_ALT_FUNDEF_CompressedTexImage2DARB)
    #define CompressedTexImage2DFunc glCompressedTexImage2DARB
    #else
    #error no declaration of CompressedTexImage2D found
    #endif
    
	void CompressedImage2D(GLenum targ,GLint level, GLenum internalformat,
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage2DEXT, CompressedTexImage2DFunc, targ, level, internalformat, width, height, border, imagesize, data);
	}
	void CompressedImage2D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage2DEXT, CompressedTexImage2DFunc, m_target, level, internalformat, width, height, border, imagesize, data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexImage3D) || defined(GL_ALT_FUNDEF_CompressedTextureImage3DEXT) || defined(GL_ALT_FUNDEF_CompressedTexImage3DARB)
    
    
    #if defined(GL_ALT_FUNDEF_CompressedTexImage3D)
    #define CompressedTexImage3DFunc glCompressedTexImage3D
    #elif defined(GL_ALT_FUNDEF_CompressedTexImage3DARB)
    #define CompressedTexImage3DFunc glCompressedTexImage3DARB
    #else
    #error no declaration of CompressedTexImage3D found
    #endif
    
	void CompressedImage3D(GLenum targ,GLint level, GLenum internalformat,
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage3DEXT, CompressedTexImage3DFunc, targ, level, internalformat, width, height, depth, border, imagesize, data);
	}
	void CompressedImage3D(GLint level, GLenum internalformat, 
GLsizei width, GLsizei height, GLsizei depth, GLint border, 
GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureImage3DEXT, CompressedTexImage3DFunc, m_target, level, internalformat, width, height, depth, border, imagesize, data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage1D) || defined(GL_ALT_FUNDEF_CompressedTextureSubImage1DEXT) ||defined(GL_ALT_FUNDEF_CompressedTexSubImage1DARB)
    
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage1D)
    #define CompressedTexSubImage1DFunc glCompressedTexSubImage1D
    #elif defined(GL_ALT_FUNDEF_CompressedTexSubImage1DARB)
    #define CompressedTexSubImage1DFunc glCompressedTexSubImage1DARB
    #else
    #error no declaration of CompressedTexSubImage1D found
    #endif
    
    
	void CompressedSubImage1D(GLenum targ, GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage1DEXT,CompressedTexSubImage1DFunc,targ,level,xoffset,width,format,imagesize,data);
	}
	void CompressedSubImage1D(GLint level, GLint xoffset,GLsizei width, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage1DEXT,CompressedTexSubImage1DFunc,m_target,level,xoffset,width,format,imagesize,data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage2D) || defined(GL_ALT_FUNDEF_CompressedTextureSubImage2DEXT) || defined(GL_ALT_FUNDEF_CompressedTexSubImage2DARB)
    
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage2D)
    #define CompressedTexSubImage2DFunc glCompressedTexSubImage2D
    #elif defined(GL_ALT_FUNDEF_CompressedTexSubImage2DARB)
    #define CompressedTexSubImage2DFunc glCompressedTexSubImage2DARB
    #else
    #error no declaration of CompressedTexSubImage2D found
    #endif
    
    void CompressedSubImage2D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage2DEXT,CompressedTexSubImage2DFunc,targ,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
	void CompressedSubImage2D(GLint level, GLint xoffset,GLint yoffset,GLsizei width,GLsizei height, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage2DEXT,CompressedTexSubImage2DFunc,m_target,level,xoffset,yoffset,width,height,format,imagesize,data);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage3D) || defined(GL_ALT_FUNDEF_CompressedTextureSubImage3DEXT) || defined(GL_ALT_FUNDEF_CompressedTexSubImage3DARB)
    
    #if defined(GL_ALT_FUNDEF_CompressedTexSubImage3D)
    #define CompressedTexSubImage3DFunc glCompressedTexSubImage3D
    #elif defined(GL_ALT_FUNDEF_CompressedTexSubImage3DARB)
    #define CompressedTexSubImage3DFunc glCompressedTexSubImage3DARB
    #else
    #error no declaration of CompressedTexSubImage3D found
    #endif
    
	void CompressedSubImage3D(GLenum targ, GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage3DEXT,CompressedTexSubImage3DFunc,targ,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
	void CompressedSubImage3D(GLint level, GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth,GLenum format, GLsizei imagesize, const void *data)
	{
		texture_function_dsa(glCompressedTextureSubImage3DEXT,CompressedTexSubImage3DFunc,m_target,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,data);
	}
    #endif
    
	/*TODO: cannot be dsaed
	 * void Image2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
	{
		
	}
	void TexImage3DMultisample(enum target, 

sizei samples, int internalformat, 

sizei width, sizei height, sizei depth, 

boolean fixedsamplelocations);

	*/
    
    #if defined(GL_ALT_FUNDEF_TexBuffer) || defined(GL_ALT_FUNDEF_TextureBufferEXT) || defined(GL_ALT_FUNDEF_TexBufferEXT)
    
    #if defined(GL_ALT_FUNDEF_TexBuffer)
    #define GL_ALT_TexBufferFunc glTexBuffer
    #elif defined(GL_ALT_FUNDEF_TexBufferEXT)
    #define GL_ALT_TexBufferFunc glTexBufferEXT
    #else
    #error No declaration of glTexBuffer found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
	void Buffer(GLenum targ,GLenum internalformat, GLuint buffer)
    {
		texture_function_dsa(glTextureBufferEXT,GL_ALT_TexBufferFunc,targ,internalformat,buffer);
	}
    
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void Buffer(GLenum targ,GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(targ,internalformat,buf.name);
	}
    #endif
    
	void Buffer(GLenum internalformat, GLuint buffer)
	{
		texture_function_dsa(glTextureBufferEXT,GL_ALT_TexBufferFunc,m_target,internalformat,buffer);
	}
    
    #if defined(GL_ALT_FUNDEF_GenBuffers)
	void Buffer(GLenum internalformat,const gl::Buffer& buf)
	{
		this->Buffer(m_target,internalformat,buf.name);
	}
    #endif
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexBufferRange) || defined(GL_ALT_FUNDEF_TextureBufferRangeEXT)
	void BufferRange(GLenum targ,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(glTextureBufferRangeEXT,glTexBufferRange,targ,internalformat,buffer,offset,size);
	}
	
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void BufferRange(GLenum targ,GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(targ,internalformat,buf.name,offset,size);
	}
    #endif
    
	void BufferRange(GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
	{
		texture_function_dsa(glTextureBufferRangeEXT,glTexBufferRange,m_target,internalformat,buffer,offset,size);
	}
	
    #if defined(GL_ALT_FUNDEF_GenBuffers)
    void BufferRange(GLenum internalformat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
	{
		BufferRange(m_target,internalformat,buf.name,offset,size);
	}
    #endif
    
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexParameteri) || defined(GL_ALT_FUNDEF_TextureParameteriEXT)
	void Parameter(GLenum targ,GLenum pname,GLint i)
	{
		texture_function_dsa(&glTextureParameteriEXT,&glTexParameteri,targ,pname,i);
	}
	void Parameter(GLenum pname,GLint i)
	{
		texture_function_dsa(&glTextureParameteriEXT,&glTexParameteri,m_target,pname,i);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexParameterf) || defined(GL_ALT_FUNDEF_TextureParameterfEXT)
	void Parameter(GLenum targ,GLenum pname,GLfloat f)
	{
		texture_function_dsa(&glTextureParameterfEXT,&glTexParameterf,targ,pname,f);
	}
	void Parameter(GLenum pname,GLfloat f)
	{
		texture_function_dsa(&glTextureParameterfEXT,&glTexParameterf,m_target,pname,f);
	}
    #endif
    
    
    #if defined(GL_ALT_FUNDEF_TexParameteriv) || defined(GL_ALT_FUNDEF_TextureParameterivEXT)
	void Parameter(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterivEXT,&glTexParameteriv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterivEXT,&glTexParameteriv,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexParameterfv) || defined(GL_ALT_FUNDEF_TextureParameterfvEXT)
	void Parameter(GLenum targ,GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&glTextureParameterfvEXT,&glTexParameterfv,targ,pname,params);
	}
	void Parameter(GLenum pname,const GLfloat* params)
	{
		texture_function_dsa(&glTextureParameterfvEXT,&glTexParameterfv,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexParameterIiv) || defined(GL_ALT_FUNDEF_TextureParameterIivEXT) || defined(GL_ALT_FUNDEF_TexParameterIivEXT)
    
    #if defined(GL_ALT_FUNDEF_TexParameterIiv)
    #define GL_ALT_TexParameterIivFunc glTexParameterIiv
    #else
    #if defined(GL_ALT_FUNDEF_TexParameterIivEXT)
    #define GL_ALT_TexParameterIivFunc glTexParameterIivEXT
    #else
    #error no declaration found for TexParameterIiv
    #endif
    #endif
	void ParameterI(GLenum targ,GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterIivEXT,&GL_ALT_TexParameterIivFunc,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLint* params)
	{
		texture_function_dsa(&glTextureParameterIivEXT,&GL_ALT_TexParameterIivFunc,m_target,pname,params);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexParameterIuiv) || defined(GL_ALT_FUNDEF_TextureParameterIuivEXT)|| defined(GL_ALT_FUNDEF_TexParameterIuivEXT)
    
    #if defined(GL_ALT_FUNDEF_TexParameterIuiv)
    #define GL_ALT_TexParameterIiuvFunc glTexParameterIuiv
    #else
    #if defined(GL_ALT_FUNDEF_TexParameterIuivEXT)
    #define GL_ALT_TexParameterIiuvFunc glTexParameterIuivEXT
    #else
    #error no declaration found for TexParameterIuiv
    #endif
    #endif
    
	void ParameterI(GLenum targ,GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&glTextureParameterIuivEXT,&GL_ALT_TexParameterIiuvFunc,targ,pname,params);
	}
	void ParameterI(GLenum pname,const GLuint* params)
	{
		texture_function_dsa(&glTextureParameterIuivEXT,&GL_ALT_TexParameterIiuvFunc,m_target,pname,params);
	}
    #endif
	
	template<typename Type>
	Type GetParameter(GLenum targ,GLenum pname);
	
	template<typename Type>
	Type GetParameter(GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum targ,GLenum pname);
	
	template<typename Type>
	Type GetParameterI(GLenum pname);
	
	template<typename Type>
	Type GetLevelParameter(GLenum targ, GLint lod, GLenum value);
	
	template<typename Type>
	Type GetLevelParameter(GLint lod, GLenum value);
	
    #if defined(GL_ALT_FUNDEF_GetTexImage) || defined(GL_ALT_FUNDEF_GetTextureImageEXT)
	void GetImage(GLenum tex, GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&glGetTextureImageEXT,&glGetTexImage,tex,lod,format,type,img);
	}
	void GetImage(GLint lod, GLenum format, GLenum type, GLvoid *img)
	{
		texture_function_dsa(&glGetTextureImageEXT,&glGetTexImage,m_target,lod,format,type,img);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_GetCompressedTexImage) || defined(GL_ALT_FUNDEF_GetCompressedTextureImage)  || defined(GL_ALT_FUNDEF_GetCompressedTexImageARB)
    
    #if defined(GL_ALT_FUNDEF_GetCompressedTexImage)
    #define GetCompressedTexImageFunc glGetCompressedTexImage
    #elif defined(GL_ALT_FUNDEF_GetCompressedTexImageARB)
    #define GetCompressedTexImageFunc glGetCompressedTexImageARB
    #else
    #error no declaration of GetCompressedTexImage found
    #endif
    
	void GetCompressedImage(GLenum targ,GLint lod, GLvoid *img)
	{
		texture_function_dsa(&glGetCompressedTextureImage,&GetCompressedTexImageFunc,targ,lod,img);
	}
	void GetCompressedImage(GLint lod, GLvoid *img)
	{
		texture_function_dsa(&glGetCompressedTextureImage,&GetCompressedTexImageFunc,m_target,lod,img);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_GenerateMipmap) || defined(GL_ALT_FUNDEF_GenerateTextureMipmapEXT)
	void GenerateMipmap(GLenum targ)
	{
		texture_function_dsa(&glGenerateTextureMipmapEXT,&glGenerateMipmap,targ);
	}
	void GenerateMipmap()
	{
		texture_function_dsa(&glGenerateTextureMipmapEXT,&glGenerateMipmap,m_target);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TextureView)
    void View(GLenum targ,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,targ,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,m_target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	
	void View(GLenum targ,const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,targ,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
	void View(const Texture& otex,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
	{
		glTextureView(object,m_target,otex.name,internalformat,minlevel,numlevels,minlayer,numlayers);
	}
    #endif
	
    #if defined(GL_ALT_FUNDEF_TexStorage1D) || defined(GL_ALT_FUNDEF_TextureStorage1DEXT) || defined(GL_ALT_FUNDEF_TexStorage1DEXT)
    
    #if defined(GL_ALT_FUNDEF_TexStorage1D)
    #define GL_ALT_TexStorage1DFunc glTexStorage1D
    #elif defined(GL_ALT_FUNDEF_TexStorage1DEXT)
    #define GL_ALT_TexStorage1DFunc glTexStorage1DEXT
    #else
    #error No declaration of glTexStorage1D found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
    
	void Storage1D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(&glTextureStorage1DEXT,&GL_ALT_TexStorage1DFunc,targ,levels,internalformat,width);
	}
	void Storage1D(GLsizei levels, GLenum internalformat, GLsizei width)
	{
		texture_function_dsa(&glTextureStorage1DEXT,&GL_ALT_TexStorage1DFunc,m_target,levels,internalformat,width);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexStorage2D) || defined(GL_ALT_FUNDEF_TextureStorage2DEXT) || defined(GL_ALT_FUNDEF_TexStorage2DEXT)
    
    
    
    #if defined(GL_ALT_FUNDEF_TexStorage2D)
    #define GL_ALT_TexStorage2DFunc glTexStorage2D
    #elif defined(GL_ALT_FUNDEF_TexStorage2DEXT)
    #define GL_ALT_TexStorage2DFunc glTexStorage2DEXT
    #else
    #error No declaration of glTexStorage2D found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
	void Storage2D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(&glTextureStorage2DEXT,&GL_ALT_TexStorage2DFunc,targ,levels,internalformat,width,height);
	}
	void Storage2D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height)
	{
		texture_function_dsa(&glTextureStorage2DEXT,&GL_ALT_TexStorage2DFunc,m_target,levels,internalformat,width,height);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_TexStorage3D) || defined(GL_ALT_FUNDEF_TextureStorage3DEXT) || defined(GL_ALT_FUNDEF_TexStorage3D)
    
    #if defined(GL_ALT_FUNDEF_TexStorage3D)
    #define GL_ALT_TexStorage3DFunc glTexStorage3D
    #elif defined(GL_ALT_FUNDEF_TexStorage3DEXT)
    #define GL_ALT_TexStorage3DFunc glTexStorage3DEXT
    #else
    #error No declaration of glTexStorage3D found ///\todo overload the dsa funcs to allow dsa only mode
    #endif
    
	void Storage3D(GLenum targ, GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		m_target = targ;
        m_target_binding = (GLenum)tbinding_query_enum(m_target);
		texture_function_dsa(&glTextureStorage3DEXT,&GL_ALT_TexStorage3DFunc,targ,levels,internalformat,width,height,depth);
	}
	void Storage3D(GLsizei levels, GLenum internalformat, GLsizei width,GLsizei height,GLsizei depth)
	{
		texture_function_dsa(&glTextureStorage3DEXT,&GL_ALT_TexStorage3DFunc,m_target,levels,internalformat,width,height,depth);
	}
    #endif
	/*Can't be dsaed
void TexStorage2DMultisample(

enum target, sizei samples, enum 

internalformat, sizei width, sizei height, 

boolean fixedsamplelocations);

target: {PROXY_}TEXTURE_2D_MULTISAMPLE

void TexStorage3DMultisample(

enum target, sizei samples, 

enum internalformat, sizei width, 

sizei height, sizei depth, 

boolean fixedsamplelocations);

target: {PROXY_}TEXTURE_2D_MULTISAMPLE_ARRAY

Invalidating Texture Image Data [8.20]
*/
    #if defined(GL_ALT_FUNDEF_InvalidateTexSubImage)
	void InvalidateSubImage(GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height, GLsizei depth)
	{
		glInvalidateTexSubImage(object,level,xoffset,yoffset,zoffset,width,height,depth);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_InvalidateTexImage)
    void InvalidateImage(GLint level)
	{
		glInvalidateTexImage(object,level);
	}
    #endif
    
    #if defined(GL_ALT_FUNDEF_BindImageTexture)
    void BindImage(GLuint index,GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
	{
		glBindImageTexture(index,object,level,layered,layer,access,format);
	}
    #endif
    
protected:
	explicit Texture(GLuint o):
		_impl::GLObject<Texture>(o,glDeleteTextures),
		m_target(GL_TEXTURE_2D),
		m_target_binding(GL_TEXTURE_BINDING_2D),
		target(m_target)
	{}
};

#endif

}

#endif
