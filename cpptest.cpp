#define GL_GLEXT_PROTOTYPES
#include "legacy/generate/khronosgl/GL/glcorearb.h"

#include "glhpp/OpenGL.hpp"
#include<iostream>
#include<utility>

#define EXISTS 1
#if EXISTS
	void doSomeShit1() {}
#else
	void doSomeShit2() {}
#endif

int main(int argc,char** argv)
{

	return 0;
}
