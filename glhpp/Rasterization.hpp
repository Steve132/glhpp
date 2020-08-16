#ifndef GLHPP_RASTERIZATION_HPP
#define GLHPP_RASTERIZATION_HPP

namespace gl
{
	
	// Controlling Viewport
	inline void DepthRangeArray(GLuint first, GLsizei count, const double* v)
	{
		glDepthRangeArrayv(first, count, v);
	}
	
	inline void DepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
	{
		glDepthRangeIndexed(index, n, f);
	}
	
	inline void DepthRange(GLdouble n, GLdouble f)
	{
		glDepthRange(n, f);
	}
	
	inline void DepthRange(GLfloat n, GLfloat f)
	{
		glDepthRangef(n, f);
	}
	
	inline void ViewportArray(GLuint first, GLsizei count, const GLfloat* v)
	{
		glViewportArrayv(first, count, v);
	}
	
	inline void ViewportIndexed(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
	{
		glViewportIndexedf(index, x, y, w, h);
	}
	
	inline void ViewportIndexed(GLuint index, const GLfloat* v)
	{
		glViewportIndexedfv(index, v);
	}
	
	inline void Viewport(GLint x, GLint y, GLsizei w, GLsizei h)
	{
		glViewport(x, y, w, h);
	}
	#ifndef GLHPP_STRICT_API
	struct viewport
	{
		GLfloat x,y,width,height;
	};
	inline void ViewportArray(GLuint first, const viewport* be,const viewport* ed)
	{
		ViewportArray(first, ed-be,reinterpret_cast<const GLfloat*>(be));
	}
	
	inline void ViewportIndexed(GLuint index,const viewport& vp)
	{
		ViewportIndexed(index, vp.x, vp.y, vp.width, vp.height);
	}
	
	inline void Viewport(const viewport& vp)
	{
		Viewport(vp.x, vp.y, vp.width, vp.height);
	}
	#endif
	// Multisample (not sure if fits into Sampler)
	inline void GetMultisample(GLenum pname, GLuint index, GLfloat* val)
	{
		glGetMultisamplefv(pname, index, val);
	}
	
	#ifndef GLHPP_STRICT_API
	inline std::array<GLfloat,2> GetMultisample(GLuint index)
	{
		std::array<GLfloat,2> val;
		GetMultisample(GL_SAMPLE_POSITION, index, &val[0]);
		return val;
	}
	#endif
	
	inline void MinSampleShading(GLfloat value)
	{
		glMinSampleShading(value);
	}
	
	
	
	// Scissor Test (first is index of viewport)
	inline void ScissorArray(GLuint first, GLsizei count, const GLint* v)
	{
		glScissorArrayv(first, count, v);
	}
	
	inline void ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
	{
		glScissorIndexed(index, left, bottom, width, height);
	}
	
	inline void ScissorIndexed(GLuint index, const GLint* v)
	{
		glScissorIndexedv(index, v);
	}
	
	inline void Scissor(GLint left, GLint bottom, GLsizei width, GLsizei height)
	{
		glScissor(left, bottom, width, height);
	}
	
	
	#ifndef GLHPP_STRICT_API
	struct box
	{
		GLint left,bottom,width,height;
	};
	using scissorBox=box;
	inline void ScissorArray(GLuint first, const scissorBox* be,const scissorBox* ed)
	{
		ScissorArray(first, ed-be, reinterpret_cast<const GLint*>(be));
	}
	
	inline void ScissorIndexed(GLuint index, const scissorBox& box)
	{
		ScissorIndexed(index, box.left, box.bottom,box.width,box.height);
	}
	
	inline void Scissor(const scissorBox& box)
	{
		Scissor(box.left,box.bottom,box.width,box.height);
	}
	#endif
	
	// Multisample Fragment Ops
	inline void SampleCoverage(GLfloat value, GLboolean invert)
	{
		glSampleCoverage(value, invert);
	}
	
	inline void SampleMask(GLuint maskNumber, GLbitfield mask)
	{
		glSampleMaski(maskNumber, mask);
	}
	
	// Stencil Test
	// func: never, always, less, greater, equal, lequal, gequal, notequal
	inline void StencilFunc(GLenum func, GLint ref, GLuint mask)
	{
		glStencilFunc(func, ref, mask);
	}
	
	inline void StencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
	{
		glStencilFuncSeparate(face, func, ref, mask);
	}
	
	inline void StencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
	{
		glStencilOpSeparate(face, sfail, dpfail, dppass);
	}
	
	inline void DepthFunc(GLenum func)
	{
		glDepthFunc(func);
	}
	
	// Blending
	inline void BlendEquation(GLenum mode)
	{
		glBlendEquation(mode);
	}
	
	inline void BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
	{
		glBlendEquationSeparate(modeRGB, modeAlpha);
	}
	
	inline void BlendEquation(GLuint draw_index, GLenum mode)
	{
		glBlendEquationi(draw_index, mode);
	}
	
	inline void BlendEquationSeparate(GLuint draw_index, GLenum modeRGB, GLenum modeAlpha)
	{
		glBlendEquationSeparatei(draw_index, modeRGB, modeAlpha);
	}
	
	inline void BlendFunc(GLenum src, GLenum dst)
	{
		glBlendFunc(src, dst);
	}
	
	inline void BlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
	{
		glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
	}
	
	inline void BlendFunc(GLuint draw_index,GLenum src, GLenum dst)
	{
		glBlendFunci(draw_index,src, dst);
	}
	
	inline void BlendFuncSeparate(GLuint draw_index,GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
	{
		glBlendFuncSeparatei(draw_index,srcRGB, dstRGB, srcAlpha, dstAlpha);
	}
	inline void BlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
	{
		glBlendColor(red, green, blue, alpha);
	}
	
	inline void LogicOp(GLenum op)
	{
		glLogicOp(op);
	}
	
	inline void ColorMask(GLboolean r,GLboolean g,GLboolean b,GLboolean a)
	{
		glColorMask(r,g,b,a);
	}
	inline void ColorMask(GLuint draw_index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
	{
		glColorMaski(draw_index,r,g,b,a);
	}
	inline void DepthMask(GLboolean mask)
	{
		glDepthMask(mask);
	}
	inline void StencilMask(GLuint mask)
	{
		glStencilMask(mask);
	}
	inline void StencilMaskSeparate(GLenum face,GLuint mask)
	{
		glStencilMaskSeparate(face,mask);
	}
	
	inline void Clear(GLbitfield buf)
	{
		glClear(buf);
	}
	inline void ClearColor(GLfloat r,GLfloat g,GLfloat b,GLfloat a)
	{
		glClearColor(r,g,b,a);
	}
	inline void ClearDepth(GLdouble d){
		glClearDepth(d);
	}
	inline void ClearStencil(GLint s){
		glClearStencil(s);
	}
	//Other generic clearbuffers are a part of Framebuffer.Default()
};

#endif
