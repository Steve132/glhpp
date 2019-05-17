#ifndef GLHPP_GLOBJECT_HPP
#define GLHPP_GLOBJECT_HPP


//GL_HPP_ERROR_CHECKING
//Options
//GL_HPP_ERROR_CHECKING //if defined, calls check error after every state, otherwise only error handling is performed
//GL_HPP_DIRECT_STATE_ACCESS //if defined, assumes you have the DIRECT_STATE_ACCESS extension (this should be runtime, but whatever...)
//Note, semantics of gl3.hpp are equivalent to GL_HPP_DIRECT_STATE_ACCESS

/*#ifndef GL_HPP_COMMON_HPP
#error "This file needs to have an opengl API selected from glhpp and included before this file.  Such as #include<glhpp/gl3.1.hpp>"
#endif*/

#define GL_HPP_CUSTOM 0x0001

namespace gl
{
namespace _impl
{
void _handleError(GLenum errcode,const std::string& what);
void _checkError(GLenum errcode,const std::string& what);

}
}

#include "glerror.inl"

#endif 
