#define GL_GLEXT_PROTOTYPES
#define NOMINMAX

#include <glcorearb.h>
#include "glhpp/OpenGL.hpp"
#include<iostream>
#include<utility>
#include <GLFW.hpp>

class ApplicationGL : public glfw::Window
{
protected:
	static glfw::Window::Hints getHints()
	{
		glfw::Window::Hints hnts{
			{GLFW_CONTEXT_VERSION_MAJOR,4},
			{GLFW_CONTEXT_VERSION_MINOR,2},
			{GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE},
			{GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE}
		};
		return hnts;
	}


	
	ApplicationGL(int w,int h,const std::string& s):glfw::Window(w,h,getHints(),s)
	{}
};

class Application: protected ApplicationGL
{
protected:
	gl::Buffer vbo;
	gl::VertexArray vao;
	gl::Program prog;
	gl::Shader vs, fs;
public:
	Application():ApplicationGL(640,480,"Simple"),vs(GL_VERTEX_SHADER),fs(GL_FRAGMENT_SHADER)
	{
		
		vs.Source(R"SHADER(
			#version 430
			in vec3 pos;
			in vec3 norm;

			out vec3 norm_out;
			out vec3 pos_out;
			void main()
			{
				gl_Position=vec4(pos,1.0);
				norm_out=norm;
				pos_out=pos;
			}
			)SHADER");
		vs.Compile();
		fs.Source(R"SHADER(
			#version 430
			in vec3 pos_out;
			in vec3 norm_out;
			layout(location = 0) out vec4 diffuseColor;
			vec4 main()
			{
				diffuseColor=vec4(pos,1.0);
				norm_out=norm;
			}
			)SHADER");
		fs.Compile();
	
	}
	void frame(){
		glColorMask (GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
		glClearColor(255.0f,0.0f,0.0f,255.0f);
		glClear(GL_COLOR_BUFFER_BIT);
	}
	void operator()(){
		ApplicationGL::MakeContextCurrent();
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
	Application app;
	app();
	return 0;
}
