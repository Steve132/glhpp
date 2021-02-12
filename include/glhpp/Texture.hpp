
#ifndef GLHPP_TEXTURE_HPP
#define GLHPP_TEXTURE_HPP

#include "Object.hpp"
#include "Buffer.hpp"
#include <vector>
#include <algorithm>
#include "ClientImage.hpp"
#include <limits>
#include "ImageBase.hpp"

namespace gl
{
	class Texture: public impl::DefaultableObject<Texture,GL_TEXTURE>, public impl::ImageBase
	{
	protected:
		Texture(impl::NullInitializerFlagType) {}
		GLenum m_target;
		virtual GLenum target() const override { return m_target; }
		virtual GLuint image_name() const override { return id; }
	public:
		Texture(GLenum target):m_target(target)
		{
			id=0;
			glCreateTextures(target,1,&id);
			deleter_func=glDeleteTextures;
		}
		virtual GLboolean Is() const override{ return glIsTexture(id); }
		
		static void Active(GLenum unit)
		{
			if(unit < GL_TEXTURE0) unit+=GL_TEXTURE0;
			glActiveTexture(GL_TEXTURE+unit);
		}
		void Bind(GLenum target) const
		{
			glBindTexture(target,id);
		}
		void BindUnit(GLuint unit) const
		{
			glBindTextureUnit(unit,id);
		}
		static void Bind(GLuint first, GLsizei count,const GLuint *textures)
		{
			glBindTextures(first,count,textures);
		}
#ifndef GLHPP_STRICT_API
		void Bind() const
		{
			Bind(m_target);
		}
		static void Bind(GLuint first, GLsizei count,const Texture* tbegin,const Texture* tend)
		{
			std::vector<GLuint> vals(tend-tbegin);
			for(size_t i=0;i < vals.size();i++) vals[i]=tbegin[i].name();
			Bind(first,count,vals.data());
		}
#endif
		void SubImage3D(GLint level,GLint xoffset, GLint yoffset, GLint zoffset,
					GLsizei width,GLsizei height,GLsizei depth,
					GLenum format,GLenum type,const void *data)
		{
			glTextureSubImage3D(id,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
		}
		void SubImage2D(GLint level,GLint xoffset, GLint yoffset,
						GLsizei width,GLsizei height,
				  GLenum format,GLenum type,const void *data)
		{
			glTextureSubImage2D(id,level,xoffset,yoffset,width,height,format,type,data);
		}
		void SubImage1D(GLint level,GLint xoffset,
						GLsizei width,
				  GLenum format,GLenum type,const void *data)
		{
			glTextureSubImage1D(id,level,xoffset,width,format,type,data);
		}
#ifndef GLHPP_STRICT_API
		template<class iV,class sV,class T> 
		void SubImage3D(GLint level,const iV& offset,const sV& size,GLenum format,const T* data)
		{
			SubImage3D(level,offset[0],offset[1],offset[2],size[0],size[1],size[2],format,impl::ClientToGLType<T>::value,data);
		}
		template<class iV,class sV,class T> 
		void SubImage2D(GLint level,const iV& offset,const sV& size,GLenum format,const T* data)
		{
			SubImage2D(level,offset[0],offset[1],size[0],size[1],format,impl::ClientToGLType<T>::value,data);
		}
		template<class iV,class sV,class T> 
		void SubImage1D(GLint level,const iV& offset,const sV& size,GLenum format,const T* data)
		{
			SubImage1D(level,offset[0],size[0],format,impl::ClientToGLType<T>::value,data);
		}
		template<class T> void SubImage1D(GLint level,const GLint offset,const GLsizei& size,GLenum format,const T* data)
		{
			SubImage1D(level,offset,size,format,impl::ClientToGLType<T>::value,data);
		}
		
		void SubImage(GLint level,const std::array<GLint,3>& offset,const glhpp::ClientImage& img)
		{
			auto shape=img.shape();
			switch(img.dims())
			{
				case 1: 
				{
					SubImage1D(level,offset[0], (GLsizei)shape[0],img.format(),img.type(),img.data());
					break;
				}
				case 2: 
				{
					SubImage2D(level,offset[0],offset[1], (GLsizei)shape[0], (GLsizei)shape[1],img.format(),img.type(),img.data());
					break;
				}
				case 3: 
				{
					SubImage3D(level,offset[0],offset[1],offset[2], (GLsizei)shape[0], (GLsizei)shape[1], (GLsizei)shape[2],img.format(),img.type(),img.data());
					break;
				}
				default:
				{
					throw std::invalid_argument("Cannot load an empty image into the data stream");
				}
			};
		}
#endif
		void CopySubImage3D(GLint level,GLint xoffset, GLint yoffset, GLint zoffset,
						GLint x,GLint y,
						GLsizei width,GLsizei height)
		{
			glCopyTextureSubImage3D(id,level,xoffset,yoffset,zoffset,x,y,width,height);
		}
		void CopySubImage2D(GLint level,GLint xoffset, GLint yoffset,
						GLint x,GLint y,
						GLsizei width,GLsizei height)
		{
			glCopyTextureSubImage2D(id,level,xoffset,yoffset,x,y,width,height);
		}
		void CopySubImage1D(GLint level,GLint xoffset,GLint x,GLint y,GLsizei width)
		{
			glCopyTextureSubImage1D(id,level,xoffset,x,y,width);
		}
#ifndef GLHPP_STRICT_API
		template<class iV,class iV2,class sV2> 
		void CopySubImage3D(GLint level,const iV& offset,const iV2& src,const sV2& size)
		{
			CopySubImage3D(level,offset[0],offset[1],offset[2],src[0],src[1],size[0],size[1]);
		}
		template<class iV,class iV2,class sV2> 
		void CopySubImage2D(GLint level,const iV& offset,const iV2& src,const sV2& size)
		{
			CopySubImage2D(level,offset[0],offset[1],src[0],src[1],size[0],size[1]);
		}
		template<class iV,class iV2,class sV2> 
		void CopySubImage1D(GLint level,const iV& offset,const iV2& src,const sV2& size)
		{
			CopySubImage1D(level,offset[0],src[0],src[1],size[0]);
		}

#endif
		void CompressedSubImage3D(GLint level,GLint xoffset, GLint yoffset, GLint zoffset,
						GLsizei width,GLsizei height,GLsizei depth,
						GLenum format,GLsizei size,const void *data)
		{
			glCompressedTextureSubImage3D(id,level,xoffset,yoffset,zoffset,width,height,depth,format,size,data);
		}
		void CompressedSubImage2D(GLint level,GLint xoffset, GLint yoffset,
						GLsizei width,GLsizei height,
						GLenum format,GLsizei size,const void *data)
		{
			glCompressedTextureSubImage2D(id,level,xoffset,yoffset,width,height,format,size,data);
		}
		void CompressedSubImage1D(GLint level,GLint xoffset,
						GLsizei width,
						GLenum format,GLsizei size,const void *data)
		{
			glCompressedTextureSubImage1D(id,level,xoffset,width,format,size,data);
		}
#ifndef GLHPP_STRICT_API
		void CompressedSubImage3D(GLint level,const std::array<GLint,3>& offset,const std::array<GLsizei,3>& size,GLenum format,GLsizei len,const void* data)
		{
			CompressedSubImage3D(level,offset[0],offset[1],offset[2],size[0],size[1],size[2],format,len,data);
		}
		void CompressedSubImage2D(GLint level,const std::array<GLint,2>& offset,const std::array<GLsizei,2>& size,GLenum format,GLsizei len,const void* data)
		{
			CompressedSubImage2D(level,offset[0],offset[1],size[0],size[1],format,len,data);
		}
		void CompressedSubImage1D(GLint level,const std::array<GLint,1>& offset,const std::array<GLsizei,1>& size,GLenum format,GLsizei len,const void* data)
		{
			CompressedSubImage1D(level,offset[0],size[0],format,len,data);
		}
		void CompressedSubImage(GLint level,const std::array<GLint,3>& offset,
								const glhpp::ClientCompressedImage& clim)
		{
			auto shape=clim.shape();
			switch(clim.dims())
			{
				case 1:
				{
					CompressedSubImage1D(level,offset[0],(GLsizei)shape[0],clim.internalformat(), (GLsizei)clim.size(),clim.data());
					break;
				}
				case 2:
				{
					CompressedSubImage2D(level,offset[0],offset[1], (GLsizei)shape[0], (GLsizei)shape[1],
										 clim.internalformat(), (GLsizei)clim.size(),clim.data());
					break;
				}
				case 3:
				{
					CompressedSubImage3D(level,offset[0],offset[1],offset[2], (GLsizei)shape[0], (GLsizei)shape[1], (GLsizei)shape[2],
										 clim.internalformat(), (GLsizei)clim.size(),clim.data());
					break;
				}
				default:
				{
					throw std::invalid_argument("Cannot load an empty image into the data stream");
				}
			};
		}
#endif
		void BufferRange(GLenum internalFormat,GLuint buffer,GLintptr offset,GLsizeiptr size)
		{
			glTextureBufferRange(id,internalFormat,buffer,offset,size);
		}
		void Buffer(GLenum internalFormat,GLuint buffer)
		{
			glTextureBuffer(id,internalFormat,buffer);
		}
#ifndef GLHPP_STRICT_API
		void BufferRange(GLenum internalFormat,const gl::Buffer& buf,GLintptr offset,GLsizeiptr size)
		{
			BufferRange(internalFormat,buf.name(),offset,size);
		}
		void Buffer(GLenum internalFormat,const gl::Buffer& buf)
		{
			Buffer(internalFormat,buf.name());
		}
#endif
		void Parameter(GLenum pname,GLint param)
		{
			glTextureParameteri(id,pname,param);
		}
		void Parameter(GLenum pname,GLfloat param)
		{
			glTextureParameterf(id,pname,param);
		}
		void Parameter(GLenum pname,const GLint* param)
		{
			glTextureParameteriv(id,pname,param);
		}
		void Parameter(GLenum pname,const GLfloat* param)
		{
			glTextureParameterfv(id,pname,param);
		}
		void ParameterI(GLenum pname,const GLint* param)
		{
			glTextureParameterIiv(id,pname,param);
		}
		void ParameterI(GLenum pname,const GLuint* param)
		{
			glTextureParameterIuiv(id,pname,param);
		}
#ifndef GLHPP_STRICT_API
		template<class T,unsigned int sz> 
		void Parameter(GLenum pname,const std::array<T,sz>& arr)
		{
			Parameter(pname,&arr[0]);
		}
		template<class T,unsigned int sz>
		void ParameterI(GLenum pname,const std::array<T,sz>& arr)
		{
			ParameterI(pname,&arr[0]);
		}
#endif
		void GetParameter(GLenum pname,GLint* params) const
		{
			glGetTextureParameteriv(id,pname,params);
		}
		void GetParameter(GLenum pname,GLfloat* params) const
		{
			glGetTextureParameterfv(id,pname,params);
		}
		void GetParameterI(GLenum pname,GLint* params) const
		{
			glGetTextureParameterIiv(id,pname,params);
		}
		void GetParameterI(GLenum pname,GLuint* params) const
		{
			glGetTextureParameterIuiv(id,pname,params);
		}
#ifndef GLHPP_STRICT_API
		template<class T> 
		T GetParameter(GLenum pname) const
		{
			T output={};
			GetParameter(pname,&output);
			return output;
		}
		template<class T> 
		T GetParameterI(GLenum pname) const
		{
			T output={};
			GetParameter(pname,&output);
			return output;
		}
#endif
		void GetLevelParameter(GLint level,GLenum pname,GLint* params) const
		{
			glGetTextureLevelParameteriv(id,level,pname,params);
		}
		void GetLevelParameter(GLint level,GLenum pname,GLfloat* params) const
		{
			glGetTextureLevelParameterfv(id,level,pname,params);
		}
#ifndef GLHPP_STRICT_API
		template<class T> 
		T GetLevelParameter(GLint level,GLenum pname) const
		{
			T output={};
			GetLevelParameter(level,pname,&output);
			return output;
		}
#endif
		void GetImage(GLint level,GLenum format,GLenum type,GLsizei bufSize,GLvoid* pixels) const
		{
			glGetTextureImage(id,level,format,type,bufSize,pixels);
		}
		void GetSubImage(GLint level,
						 GLint xoffset,GLint yoffset,GLint zoffset,
						 GLsizei width, GLsizei height, GLsizei depth,
						 GLenum format,GLenum type,
						 GLsizei bufSize,void* pixels) const
		{
			glGetTextureSubImage(id,level,xoffset,yoffset,zoffset,width,height,depth,format,type,bufSize,pixels);
		}
		void GetCompressedImage(GLint level,GLsizei bufSize,GLvoid* pixels) const
		{
			glGetCompressedTextureImage(id,level,bufSize,pixels);
		}
		void GetCompressedSubImage(
								GLint level,
								GLint xoffset,GLint yoffset,GLint zoffset,
								GLsizei width,GLsizei height,GLsizei depth,
								GLsizei bufSize,GLvoid* pixels) const
		{
			glGetCompressedTextureSubImage(id,level,xoffset,yoffset,zoffset,width,height,depth,bufSize,pixels);
		}
#ifndef GLHPP_STRICT_API
		glhpp::ClientImage GetImage(GLint level,GLenum format,GLenum type) const
		{
			if(GetParameter<GLint>(GL_TEXTURE_COMPRESSED))
			{
				throw std::runtime_error("This texture is compressed!");
			}
			std::array<size_t,3> texsize;
			texsize[0]=GetLevelParameter<GLint>(level,GL_TEXTURE_WIDTH);
			texsize[1]=GetLevelParameter<GLint>(level,GL_TEXTURE_HEIGHT);
			texsize[2]=GetLevelParameter<GLint>(level,GL_TEXTURE_DEPTH);
			
			glhpp::ClientImage climg(format,type,texsize);
			
			GetImage(level,format,type, (GLsizei)climg.size(),climg.data());
			return climg;
		}
		glhpp::ClientImage GetSubImage(GLint level,const std::array<GLint,3>& offset,const std::array<GLsizei,3>& shape,GLenum format,GLenum type) const
		{
			if(GetParameter<GLint>(GL_TEXTURE_COMPRESSED))
			{
				throw std::runtime_error("This texture is compressed!");
			}
			std::array<size_t,3> texsize;
			texsize[0]=shape[0];texsize[1]=shape[1];texsize[2]=shape[2];
			
			glhpp::ClientImage climg(format,type,texsize);
			
			GetSubImage(level,
				offset[0],offset[1],offset[2],
				(GLsizei)shape[0], (GLsizei)shape[1], (GLsizei)shape[2],
				format,type,
				(GLsizei)climg.size(),climg.data()
			);
			return climg;
		}

			
		glhpp::ClientCompressedImage GetCompressedImage(GLint level) const
		{
			if(!GetParameter<GLint>(GL_TEXTURE_COMPRESSED))
			{
				throw std::runtime_error("This texture is not compressed!");
			}
			std::array<size_t,3> texsize;
			texsize[0]=GetLevelParameter<GLint>(level,GL_TEXTURE_WIDTH);
			texsize[1]=GetLevelParameter<GLint>(level,GL_TEXTURE_HEIGHT);
			texsize[2]=GetLevelParameter<GLint>(level,GL_TEXTURE_DEPTH);
			size_t compressed_sz=GetLevelParameter<GLint>(level,GL_TEXTURE_COMPRESSED_IMAGE_SIZE);
			GLenum internalformat=GetLevelParameter<GLint>(level,GL_TEXTURE_INTERNAL_FORMAT);
			glhpp::ClientCompressedImage climg(internalformat,compressed_sz,texsize);
			GetCompressedImage(level,(GLsizei)climg.size(),climg.data());
			return climg;
		}
		glhpp::ClientCompressedImage GetCompressedSubImage(GLint level,const std::array<GLint,3>& offset,const std::array<GLsizei,3>& shape) const
		{
			if(!GetParameter<GLint>(GL_TEXTURE_COMPRESSED))
			{
				throw std::runtime_error("This texture is not compressed!");
			}
			throw std::runtime_error("Getting a compressed texture subimage is not implemented yet.");//TODO implement
			/*std::array<size_t,3> texsize;
			texsize[0]=offset[0];
			texsize[1]=offset[1];
			texsize[2]=offset[2];
			size_t compressed_sz=GetLevelParameter<GLint>(level,GL_TEXTURE_COMPRESSED_IMAGE_SIZE);
			GLenum internalformat=GetLevelParamter<GLint>(level,GL_TEXTURE_INTERNAL_FORMAT);
			glhpp::ClientCompressedImage climg(internalformat,compressed_sz,texsize);
			GetCompressedSubImage(level,
				offset[0],offset[1],offset[2],
				offset.size(),climg.data());*/
			//return climg;
		}

#endif
		//TODO: Easy mode API
		//TODO: specialize with protected inheritance to different types, like Texture2D,Texture1D,CompressedTexture, etc.?
		
		void GenerateMipmap()
		{
			glGenerateTextureMipmap(id);
		}
		void View(GLenum target,GLuint origtexture,GLenum internalformat,
			GLuint minlevel=0,GLuint numlevels=std::numeric_limits<GLuint>::max(),
			GLuint minlayer=0,GLuint numlayers=std::numeric_limits<GLuint>::max())
		{
			glTextureView(id,target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);
		}
#ifndef GLHPP_STRICT_API
		void View(GLenum target,const Texture& other,GLenum internalformat,
				  GLuint minlevel=0,GLuint numlevels=std::numeric_limits<GLuint>::max(),
				  GLuint minlayer=0,GLuint numlayers=std::numeric_limits<GLuint>::max())
		{
			View(target,other.id,internalformat,minlevel,numlevels,minlayer,numlayers);
		}
		Texture GetView(GLenum target,GLenum internalformat,
				GLuint minlevel=0,GLuint numlevels=std::numeric_limits<GLuint>::max(),
				GLuint minlayer=0,GLuint numlayers=std::numeric_limits<GLuint>::max()) const
		{
			Texture tx(target);
			tx.View(target,id,internalformat,minlevel,numlevels,minlayer,numlayers);
			return tx;
		}
#endif
		void Storage1D(GLsizei levels,GLenum internalformat,GLsizei width)
		{
			glTextureStorage1D(id,levels,internalformat,width);
		}
		void Storage2D(GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
		{
			glTextureStorage2D(id,levels,internalformat,width,height);
		}
		void Storage3D(GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
		{
			glTextureStorage3D(id,levels,internalformat,width,height,depth);
		}
		void Storage2DMultisample(GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,bool fixedsamplelocations)
		{
			glTextureStorage2DMultisample(id,samples,internalformat,width,height,fixedsamplelocations);
		}
		void Storage3DMultisample(GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,bool fixedsamplelocations)
		{
			glTextureStorage3DMultisample(id,samples,internalformat,width,height,depth,fixedsamplelocations);
		}
#ifndef GLHPP_STRICT_API 
		template<class sV>
		void Storage1D(GLsizei levels,GLenum internalformat,const sV& sz)
		{
			Storage1D(levels,internalformat,sz[0]);
		}
		template<class sV>
		void Storage2D(GLsizei levels,GLenum internalformat,const sV& sz)
		{
			Storage2D(levels,internalformat,sz[0],sz[1]);
		}
		template<class sV>
		void Storage3D(GLsizei levels,GLenum internalformat,const sV& sz)
		{
			Storage3D(levels,internalformat,sz[0],sz[1],sz[2]);
		}
		template<class sV>
		void Storage2DMultisample(GLsizei samples,GLenum internalformat,const sV& sz,bool fixedsamplelocations)
		{
			Storage2DMultisample(samples,internalformat,sz[0],sz[1],fixedsamplelocations);
		}
		template<class sV>
		void Storage3DMultisample(GLsizei samples,GLenum internalformat,const sV& sz,bool fixedsamplelocations)
		{
			Storage2DMultisample(samples,internalformat,sz[0],sz[1],sz[2],fixedsamplelocations);
		}
#endif
		void InvalidateSubImage(GLint level,
					GLint xoffset,GLint yoffset,GLint zoffset,
					GLsizei width,GLsizei height,GLsizei depth)
		{
			glInvalidateTexSubImage(id,level,xoffset,yoffset,zoffset,width,height,depth);
		}
		void InvalidateImage(GLint level)
		{
			glInvalidateTexImage(id,level);
		}
		void ClearSubImage(GLint level,
						GLint xoffset,GLint yoffset,GLint zoffset,
						GLsizei width,GLsizei height,GLsizei depth,
						GLenum format,GLenum type,const GLvoid* data
  						)
		{
			glClearTexSubImage(id,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);
		}
		void ClearImage(GLint level,GLenum format,GLenum type,const void* data)
		{
			glClearTexImage(id,level,format,type,data);
		}
#ifndef GLHPP_STRICT_API
		void InvalidateSubImage(GLint level,
								const std::array<GLint,3>& offset,
								const std::array<GLsizei,3>& shape)
		{
			InvalidateSubImage(level,offset[0],offset[1],offset[2],shape[0],shape[1],shape[2]);
		}
		template<class T,unsigned int D> 
		void ClearSubImage(GLint level,const std::array<GLint,3>& offset,const std::array<GLsizei,3>& shape,
			const std::array<T,D>& value={})
		{
			ClearSubImage(level,offset[0],offset[1],offset[2],shape[0],shape[1],shape[2],
				impl::ClientToChannelsFormat<D>::value,impl::ClientToGLType<T>::value,&value[0]);
		}
		template<class T,unsigned int D> 
		void ClearImage(GLint level,const std::array<T,D>& value={})
		{
			ClearImage(level,impl::ClientToChannelsFormat<D>::value,
					   impl::ClientToGLType<T>::value,
			  &value[0]);
		}				   
#endif
		void BindImage(GLint index,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format)
		{
			glBindImageTexture(index,id,level,layered,layer,access,format);
		}
		static void Barrier()
		{
			glTextureBarrier();
		}
	};
}

#endif
