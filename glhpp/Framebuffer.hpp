#ifndef GLHPP_FRAMEBUFFER_HPP
#define GLHPP_FRAMEBUFFER_HPP

#include "Object.hpp"
#include "Texture.hpp"
#include "Renderbuffer.hpp"

namespace gl
{
	class Framebuffer: public impl::DefaultableObject<Framebuffer>
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
	};
}

#endif
