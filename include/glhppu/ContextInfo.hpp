#ifndef GLHPPU_CONTEXT_INFO_HPP
#define GLHPPU_CONTEXT_INFO_HPP

#include<glhpp/OpenGL.hpp>
#include "VersionInfo.hpp"

namespace glhppu
{
class ContextInfo
{
public:
	std::string vendor;
	std::string renderer;
	VersionInfo glsl_version;
	VersionInfo version;
	
	ExtensionInfo extensions;
	CapabilitiesInfo capabilities;
	
	ContextInfo():
		vendor(gl::Get<std::string>(GL_VENDOR)),
		renderer(gl::Get<std::string>(GL_RENDERER)),
		glsl_version(gl::Get<std::string>(GL_SHADING_LANGUAGE_VERSION)),
		version(gl::Get<std::string>(GL_VERSION))
	{}
};
}

#endif
