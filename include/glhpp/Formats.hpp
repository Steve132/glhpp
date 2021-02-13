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
	
#ifndef GL_INT64_ARB
	#define GL_INT64_ARB 0x140E
#endif

#ifndef GL_UNSIGNED_INT64_ARB
	#define GL_UNSIGNED_INT64_ARB 0x140F
#endif

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
	template<> GLenum ClientToChannelsFormat<1>::value=GL_RED;
	template<> GLenum ClientToChannelsFormat<2>::value=GL_RG;
	template<> GLenum ClientToChannelsFormat<3>::value=GL_RGB;
	template<> GLenum ClientToChannelsFormat<4>::value=GL_RGBA;
	
	inline unsigned int FormatToChannels(GLenum format)
	{
		switch(format)
		{
			case GL_STENCIL_INDEX:
			case GL_DEPTH_COMPONENT:
			case GL_RED:
			case GL_GREEN:
			case GL_BLUE:
			case GL_RED_INTEGER:
			case GL_GREEN_INTEGER: 
			case GL_BLUE_INTEGER:
				return 1;
			
			case GL_DEPTH_STENCIL:
			case GL_RG:
			case GL_RG_INTEGER:
				return 2;
			case GL_RGB:
			case GL_BGR:
			case GL_RGB_INTEGER:
			case GL_BGR_INTEGER:
				return 3;
			case GL_RGBA_INTEGER: 
			case GL_BGRA_INTEGER:
			case GL_BGRA:
			case GL_RGBA:
				return 4;
		};
		return 0; //TODO not recognized?
	}
	inline bool TypeIsBasic(GLenum type)
	{
		switch(type)
		{
			case GL_BYTE:
			case GL_UNSIGNED_BYTE:
			case GL_SHORT:
			case GL_UNSIGNED_SHORT:
			case GL_INT:
			case GL_UNSIGNED_INT:
			case GL_INT64_ARB:
			case GL_UNSIGNED_INT64_ARB:
			case GL_HALF_FLOAT:
			case GL_FLOAT:
			case GL_DOUBLE:
				return true;
			default:
				return false;
		};
	}
	inline size_t ElementSize(GLenum format,GLenum type)
	{
		size_t out;
		switch(type)
		{
			case GL_UNSIGNED_BYTE:
			case GL_BYTE:
				out=1;break;
			case GL_UNSIGNED_SHORT:
			case GL_SHORT:
			case GL_HALF_FLOAT:
				out=2;break;
			case GL_UNSIGNED_INT:
			case GL_INT:
			case GL_FLOAT:
				out=4;break;
			case GL_INT64_ARB:
			case GL_UNSIGNED_INT64_ARB:
			case GL_DOUBLE:
				out=8;break;
			case GL_UNSIGNED_BYTE_3_3_2:			return 1;
			case GL_UNSIGNED_BYTE_2_3_3_REV:		return 1;
			case GL_UNSIGNED_SHORT_5_6_5:			return 2;
			case GL_UNSIGNED_SHORT_5_6_5_REV:		return 2;
			case GL_UNSIGNED_SHORT_4_4_4_4:			return 2;
			case GL_UNSIGNED_SHORT_4_4_4_4_REV:		return 2;
			case GL_UNSIGNED_SHORT_5_5_5_1:			return 2;
			case GL_UNSIGNED_SHORT_1_5_5_5_REV:		return 2;
			case GL_UNSIGNED_INT_8_8_8_8:			return 4;
			case GL_UNSIGNED_INT_8_8_8_8_REV:		return 4;
			case GL_UNSIGNED_INT_10_10_10_2:		return 4;
			case GL_UNSIGNED_INT_2_10_10_10_REV:	return 4;
			case GL_UNSIGNED_INT_24_8:				return 4;
			case GL_UNSIGNED_INT_10F_11F_11F_REV:	return 4;
			case GL_UNSIGNED_INT_5_9_9_9_REV:		return 4;
			case GL_FLOAT_32_UNSIGNED_INT_24_8_REV:	return 8;
			default:
				return 0;
		};
		return out*FormatToChannels(format);
	}
}
}

#endif
