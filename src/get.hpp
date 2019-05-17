#ifndef GLHPP_GET_HPP
#define GLHPP_GET_HPP


namespace gl
{
//These should only exist in their specializations
template<class T> 
T Get(GLenum v);

template<class T>
T Get(GLenum v, GLsizei i);

}



#endif
