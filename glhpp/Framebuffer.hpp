#ifndef GLHPP_FRAMEBUFFER_HPP
#define GLHPP_FRAMEBUFFER_HPP

#include "Object.hpp"
#include "Texture.hpp"
#include "Renderbuffer.hpp"
#include "Rasterization.hpp"

namespace gl
{
	class Framebuffer: public impl::DefaultableObject<Framebuffer,GL_FRAMEBUFFER>
	{
	protected:
		Framebuffer(impl::NullInitializerFlagType) {}
	public:
		Framebuffer(GLenum target)
		{
			id=0;
			glCreateFramebuffers(1,&id);
			deleter_func=glDeleteFramebuffers;
			is_func=glIsFramebuffer;
		}
		
		void Bind(GLenum target) const
		{
			glBindFramebuffer(target,id);
		}
		
		void Parameter(GLenum pname,GLint param)
		{
			glNamedFramebufferParameteri(id,pname,param);
		}
		void GetParameter(GLenum pname,GLint* params) const
		{
			glGetNamedFramebufferParameteriv(id,pname,params);
		}
#ifndef GLHPP_STRICT_API
		GLint GetParameter(GLenum pname) const
		{
			GLint z;GetParameter(pname,&z);
			return z;
		}
#endif
		void GetAttachmentParameter(GLenum attachment,GLenum pname,GLint* params) const
		{
			glGetNamedFramebufferAttachmentParameteriv(id,attachment,pname,params);
		}
#ifndef GLHPP_STRICT_API
		GLint GetAttachmentParameter(GLenum attachment,GLenum pname) const
		{
			GLint z;GetAttachmentParameter(attachment,pname,&z);
			return z;
		}
#endif
		void Renderbuffer(GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
		{
			glNamedFramebufferRenderbuffer(id,attachment,renderbuffertarget,renderbuffer);
		}
#ifndef GLHPP_STRICT_API
		void Renderbuffer(GLenum attachment,GLenum renderbuffertarget,const gl::Renderbuffer& rb)
		{
			Renderbuffer(attachment,renderbuffertarget,rb.name());
		}
#endif
		void Texture(GLenum attachment,GLuint texture,GLint level)
		{
			glNamedFramebufferTexture(id,attachment,texture,level);
		}
		void TextureLayer(GLenum attachment,GLuint texture,GLint level,GLint layer)
		{
			glNamedFramebufferTextureLayer(id,attachment,texture,level,layer);
		}
#ifndef GLHPP_STRICT_API
		void Texture(GLenum attachment,const gl::Texture& tex,GLint level)
		{
			Texture(attachment,tex.name(),level);
		}
		void TextureLayer(GLenum attachment,const gl::Texture& tex,GLint level,GLint layer)
		{
			TextureLayer(attachment,tex.name(),level,layer);
		}
#endif
		GLenum CheckStatus(GLenum target) const
		{
			return glCheckNamedFramebufferStatus(id,target);
		}
		void DrawBuffer(GLenum buf) const
		{
			glNamedFramebufferDrawBuffer(id,buf);
		}
		void DrawBuffers(GLsizei n,const GLenum* bufs) const
		{
			glNamedFramebufferDrawBuffers(id,n,bufs);
		}
#ifndef GLHPP_STRICT_API
		void DrawBuffers(const GLenum* be,const GLenum* ed) const
		{
			DrawBuffers(ed-be,be);
		}
		void DrawBuffers(std::initializer_list<GLenum> bufs) const
		{
			DrawBuffers(bufs.begin(),bufs.end());
		}
#endif
		void ClearBuffer(GLenum buf,GLint drawindex,const GLint* v)
		{
			glClearNamedFramebufferiv(id,buf,drawindex,v);
		}
		void ClearBuffer(GLenum buf,GLint drawindex,const GLfloat* v)
		{
			glClearNamedFramebufferfv(id,buf,drawindex,v);
		}
		void ClearBuffer(GLenum buf,GLint drawindex,const GLuint* v)
		{
			glClearNamedFramebufferuiv(id,buf,drawindex,v);
		}
		void ClearBuffer(GLenum buf,GLint drawindex,GLfloat depth,GLfloat stencil)
		{
			glClearNamedFramebufferfi(id,buf,drawindex,depth,stencil);
		}
		
		void InvalidateData(GLsizei numAttachments,const GLenum* attachments)
		{
			glInvalidateNamedFramebufferData(id,numAttachments,attachments);
		}
		void InvalidateSubData(GLsizei numAttachments,const GLenum* attachments,GLint x,GLint y,GLsizei width,GLsizei height)
		{
			glInvalidateNamedFramebufferSubData(id,numAttachments,attachments,x,y,width,height);
		}

#ifndef GLHPP_STRICT_API
		void InvalidateData(const GLenum* be,const GLenum* ed)
		{
			InvalidateData(ed-be,be);
		}
		void InvalidateData(std::initializer_list<GLenum> att)
		{
			InvalidateData(att.begin(),att.end());
		}
		void InvalidateSubData(const GLenum* be,const GLenum* ed,GLint x,GLint y,GLsizei width,GLsizei height)
		{
			InvalidateSubData(ed-be,be,x,y,width,height);
		}
		void InvalidateSubData(std::initializer_list<GLenum> att,GLint x,GLint y,GLsizei width,GLsizei height)
		{
			InvalidateSubData(att.begin(),att.end(),x,y,width,height);
		}
#endif 
		void ReadBuffer(GLenum src)
		{
			glNamedFramebufferReadBuffer(id,src);
		}
		//TODO ReadPixels, ReadnPixels
		void Blit(GLuint drawFramebuffer, 
					GLint srcX0,GLint srcY0, GLint srcX1, GLint srcY1, 
					GLint dstX0,GLint dstY0, GLint dstX1, GLint dstY1,
			GLbitfield mask, GLenum filter)
		{
			glBlitNamedFramebuffer(id,drawFramebuffer,srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter);
		}
#ifndef GLHPP_STRICT_API
		void Blit(Framebuffer& draw,GLint srcX0,GLint srcY0, GLint srcX1, GLint srcY1, 
		  GLint dstX0,GLint dstY0, GLint dstX1, GLint dstY1,
		  GLbitfield mask, GLenum filter)
		{
			glBlitNamedFramebuffer(id,draw.name(),srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter);
		}
#endif
	};
}

#endif
