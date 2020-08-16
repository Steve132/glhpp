#ifndef GLHPP_PRIMITIVES_HPP
#define GLHPP_PRIMITIVES_HPP

namespace gl
{
	// Flatshading
	inline void ProvokingVertex(GLenum provokeMode)
	{
		glProvokingVertex(provokeMode);
	}
	
	inline void ClipControl(GLenum origin, GLenum depth)
	{
		glClipControl(origin, depth);
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
}

#endif
