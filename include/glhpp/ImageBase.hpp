#ifndef GLHPP_IMAGE_BASE_HPP
#define GLHPP_IMAGE_BASE_HPP

namespace gl
{
namespace impl
{
class ImageBase
{
protected:
	virtual GLenum target() const=0;
	virtual GLuint image_name() const=0;
	
public:
	void CopyImageSubData(GLint srcLevel,
						  GLint srcX,
					   GLint srcY,
					   GLint srcZ,
					   GLuint dstName,
					   GLenum dstTarget,
					   GLint dstLevel,
					   GLint dstX,
					   GLint dstY,
					   GLint dstZ,
					   GLsizei srcWidth,
					   GLsizei srcHeight,
					   GLsizei srcDepth) const
	{
		glCopyImageSubData(target(),image_name(),srcLevel,srcX,srcY,srcZ,dstName,dstTarget,dstLevel,dstX,dstY,dstZ,srcWidth,srcHeight,srcDepth);
	}
#ifndef GLHPP_STRICT_API
		void CopyImageSubData(
								GLint srcLevel,
								GLint srcX,
								GLint srcY,
								GLint srcZ,
								ImageBase& dst,
								GLint dstLevel,
								GLint dstX,
								GLint dstY,
								GLint dstZ,
								GLsizei srcWidth,
								GLsizei srcHeight,
								GLsizei srcDepth) const
		{
			CopyImageSubData(srcLevel,srcX,srcY,srcZ,dst.image_name(),dst.target(),dstLevel,dstX,dstY,dstZ,srcWidth,srcHeight,srcDepth);
		}
		void CopyImageSubData(
			GLint srcLevel,
			const std::array<GLint,3>& srcOffset,
			ImageBase& dst,
			GLint dstLevel,
			const std::array<GLint,3>& dstOffset,
			const std::array<GLint,3>& shape) const
		{
			CopyImageSubData(srcLevel,
								srcOffset[0],srcOffset[1],srcOffset[2],
								dst.image_name(),dst.target(),
								dstLevel,
								dstOffset[0],dstOffset[1],dstOffset[2],
								shape[0],shape[1],shape[2]);
		}
		void CopyImageSubData(
			GLint srcLevel,
			const std::array<GLint,2>& srcOffset,
			ImageBase& dst,
			GLint dstLevel,
			const std::array<GLint,2>& dstOffset,
			const std::array<GLint,2>& shape) const
		{
			CopyImageSubData(srcLevel,
								srcOffset[0],srcOffset[1],0,
					dst.image_name(),dst.target(),
								dstLevel,
					dstOffset[0],dstOffset[1],0,
					shape[0],shape[1],1);
		}
#endif
};
}
}

#endif
