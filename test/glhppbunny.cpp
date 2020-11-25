#define GL_GLEXT_PROTOTYPES
#define NOMINMAX

#include <glcorearb.h>
#include "glhpp/OpenGL.hpp"
#include<iostream>
#include<utility>
#include <GLFW.hpp>


extern "C"
{
	void gen_bunny_interleaved_array(
		float* out_vertices,
		size_t* out_indices,
		size_t* num_vertices,
		size_t* num_indices);
}

struct bunny_data_t
{
	std::vector<float> verts;  //interleaved x,y,z,Nx,Ny,Nz
	std::vector<size_t> indices;
	bunny_data_t()
	{
		size_t vN, iN;
		gen_bunny_interleaved_array(nullptr, nullptr, &vN, &iN);
		verts.resize(vN);
		indices.resize(iN);
		gen_bunny_interleaved_array(verts.data(), indices.data(), nullptr, nullptr);
	}
};

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
public:
	Application():ApplicationGL(640,480,"Simple")
	{}
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
