#ifndef GLHPP_FORMATS_HPP
#define GLHPP_FORMATS_HPP

namespace gl
{
namespace impl
{

	template<class I>
	struct ClientToGLType
	{
		static GLenum value;
	};
	
	template<> GLenum ClientToGLType<GLbyte>::value=GL_BYTE;
	template<> GLenum ClientToGLType<GLubyte>::value=GL_UNSIGNED_BYTE;
	template<> GLenum ClientToGLType<GLshort>::value=GL_SHORT;
	template<> GLenum ClientToGLType<GLushort>::value=GL_UNSIGNED_SHORT;
	template<> GLenum ClientToGLType<GLint>::value=GL_INT;
	template<> GLenum ClientToGLType<GLuint>::value=GL_UNSIGNED_INT;
	template<> GLenum ClientToGLType<GLint64>::value=GL_INT64_ARB;
	template<> GLenum ClientToGLType<GLuint64>::value=GL_UNSIGNED_INT64_ARB;
	//template<> GLenum ClientToGLType<GLhalf>::value=GL_HALF_FLOAT;
	template<> GLenum ClientToGLType<GLfloat>::value=GL_FLOAT;
	template<> GLenum ClientToGLType<GLdouble>::value=GL_DOUBLE;
	
	template<unsigned int l>
	struct ClientToChannelsFormat
	{
		static GLenum value;
	};
	template<> GLenum ClientToChannelsFormat<1>::value=GL_LUMINANCE;
	template<> GLenum ClientToChannelsFormat<2>::value=GL_LUMINANCE_ALPHA;
	template<> GLenum ClientToChannelsFormat<3>::value=GL_RGB;
	template<> GLenum ClientToChannelsFormat<4>::value=GL_RGBA;
	
	//GL_RED, GL_GREEN, GL_BLUE, GL_ALPHA, GL_RGB, GL_BGR, GL_RGBA, GL_BGRA, GL_LUMINANCE, and GL_LUMINANCE_ALPHA
}
}

#endif
