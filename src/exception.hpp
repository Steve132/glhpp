#ifndef GLHPP_EXCEPTION_HPP
#define GLHPP_EXCEPTION_HPP

namespace gl
{

class Exception: public std::runtime_error
{
public:
	Exception(GLenum cde,const std::string& wh);
	GLenum code;
};

}

#endif
