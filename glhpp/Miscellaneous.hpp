#ifndef GLHPP_MISCELLANEOUS_HPP
#define GLHPP_MISCELLANEOUS_HPP

#include "Buffer.hpp"

namespace gl
{
	// Flatshading
	inline void ProvokingVertex(GLenum provokeMode)
	{
		glProvokingVertex(provokeMode);
	}

	// Primitive Clipping
	inline void Enable(GLenum cap)
	{
		glEnable(cap);
	}

	inline void Enable(GLenum cap, GLuint index)
	{
		glEnablei(cap, index);
	}

	inline void Disable(GLenum cap)
	{
		glDisable(cap);
	}

	inline void Disable(GLenum cap, GLuint index)
	{
		glDisablei(cap, index);
	}
	
	inline void ClipControl(GLenum origin, GLenum depth)
	{
		glClipControl(origin, depth);
	}

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
		GLfloat x,y,w,h;
	};
	inline void ViewportArray(GLuint first, const viewport* be,const viewport* ed)
	{
		ViewportArray(first, ed-be,reinterpret_cast<const GLfloat*>(be));
	}
	
	inline void ViewportIndexed(GLuint index,const viewport& vp)
	{
		ViewportIndexed(index, vp.x, vp.y, vp.w, vp.h);
	}
	
	inline void Viewport(const viewport& vp)
	{
		Viewport(vp.x, vp.y, vp.w, vp.h);
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
	
	// Points
	inline void PointSize(GLfloat size)
	{
		glPointSize(size);
	}

	inline void PointParameter(GLenum pname, GLint param)
	{
		glPointParameteri(pname, param);
	}

	inline void PointParameter(GLenum pname, GLfloat param)
	{
		glPointParameterf(pname, param);
	}

	inline void PointParameter(GLenum pname, GLint* params)
	{
		glPointParameteriv(pname, params);
	}
	
	inline void PointParameter(GLenum pname, GLfloat* params)
	{
		glPointParameterfv(pname, params);
	}
	
	inline void LineWidth(GLfloat width)
	{
		glLineWidth(width);
	}
	
	// Polygons
	inline void FrontFace(GLenum dir)
	{
		glFrontFace(dir);
	}
	
	inline void CullFace(GLenum mode)
	{
		glCullFace(mode);
	}
	
	inline void PolygonMode(GLenum face, GLenum mode)
	{
		glPolygonMode(face, mode);
	}
	
	inline void PolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp)
	{
		glPolygonOffsetClamp(factor, units, clamp);
	}
	
	inline void PolygonOffset(GLfloat factor, GLfloat units)
	{
		glPolygonOffset(factor, units);
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
	struct scissorBox
	{
		GLint left,bottom,width,height;
	};
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
	
	inline void Hint(GLenum target, GLenum hint)
	{
		glHint(target, hint);
	}
}

#endif
