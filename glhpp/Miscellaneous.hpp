#ifndef GLHPP_MISCELLANEOUS_HPP
#define GLHPP_MISCELLANEOUS_HPP

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
	inline void DepthRangeArrayv(GLuint first, GLsizei count, const double* v)
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
	
	inline void ViewportArrayv(GLuint first, GLsizei count, const GLfloat* v)
	{
		glViewportArrayv(first, count, v);
	}

	inline void ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
	{
		glViewportIndexedf(index, x, y, w, h);
	}

	inline void ViewportIndexedfv(GLuint index, const GLfloat* v)
	{
		glViewportIndexedfv(index, v);
	}

	inline void Viewport(GLint x, GLint y, GLsizei w, GLsizei h)
	{
		glViewport(x, y, w, h);
	}

	// Multisample (not sure if fits into Sampler)
	inline void GetMultisample(GLenum pname, GLuint index, GLfloat* val)
	{
		glGetMultisamplefv(pname, index, val);
	}
	
#ifndef GLHPP_STRICT_API
	inline std::vector<GLfloat> GetMultisample(GLuint index)
	{
		std::vector<GLfloat> val(2);
		GetMultisample(GL_SAMPLE_POSITION, index, val.data());
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

	inline void PointParameterv(GLenum pname, GLint* params)
	{
		glPointParameteriv(pname, params);
	}
	
	inline void PointParameterv(GLenum pname, GLfloat* params)
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

}

#endif
