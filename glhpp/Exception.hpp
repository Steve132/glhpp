
#ifndef GLHPP_EXCEPTION_HPP
#define GLHPP_EXCEPTION_HPP


#include<stdexcept>

#define GLHPP_CUSTOM_EXCEPTION 0x0400
namespace gl
{
class Exception: public std::runtime_error
{
protected:
	static const char* _codeLookup(const GLenum cde)
	{
		switch(cde)
		{
			case GL_INVALID_ENUM: return "GL_INVALID_ENUM";
			case GL_INVALID_VALUE: return "GL_INVALID_VALUE";
			case GL_INVALID_OPERATION: return "GL_INVALID_OPERATION";
			case GL_STACK_OVERFLOW: return "GL_STACK_OVERFLOW";
			case GL_STACK_UNDERFLOW: return "GL_STACK_UNDERFLOW";
			case GL_OUT_OF_MEMORY: return "GL_OUT_OF_MEMORY";
			case GL_INVALID_FRAMEBUFFER_OPERATION: return "GL_INVALID_FRAMEBUFFER_OPERATION";
			case GL_CONTEXT_LOST: return "GL_CONTEXT_LOST";
			case GLHPP_CUSTOM_EXCEPTION: return "GLHPP_CUSTOM_EXCEPTION";
			//case GL_TABLE_TOO_LARGE: return "GL_TABLE_TOO_LARGE"; 
			default: return "GLHPP_UNKNOWN_ERROR_GLENUM";
		};
	}
public:
	Exception(GLenum cde,const std::string& wh):
		std::runtime_error(std::string(_codeLookup(cde))+":"+wh),
		code(cde)
	{}
	GLenum code;
};
}

#endif

