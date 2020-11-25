#define GL_GLEXT_PROTOTYPES
#define NOMINMAX

#include <glcorearb.h>
#include "glhpp/OpenGL.hpp"
#include<iostream>
#include<utility>
#include <GLFW.hpp>

class Application: protected glfw::Window
{
public:
	Application(const glfw::Window::Hints& h=glfw::Window::Hints()):
		glfw::Window(640,480,h,"Simple")
	{}
	void frame(){
		glColorMask (GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
		glClearColor(255.0f,0.0f,0.0f,255.0f);
		glClear(GL_COLOR_BUFFER_BIT);
	}
	void operator()(){
		while(glfw::Window::operator bool())
		{
			glfw::Events::Poll();
			
			frame();
			SwapBuffers();
		}
	}
};

int main(void)
{
	glfw::Window::Hints hnts{
		{GLFW_CONTEXT_VERSION_MAJOR,2},
		{GLFW_CONTEXT_VERSION_MINOR,1}};

	Application app(hnts);
	app();
	return 0;
}
