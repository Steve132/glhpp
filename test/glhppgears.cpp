#define GL_GLEXT_PROTOTYPES
#include "legacy/glcorearb.h"
#include "glhpp/OpenGL.hpp"
#include<iostream>
#include<utility>

#include <GLFW.hpp>

int main(void)
{
	glfw::Window::Hints hnts;
	glfw::Window wind(640,480,hnts,"Simple");
	return 0;
}
