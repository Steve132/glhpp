 
namespace gl
{
inline ContextInfo::ContextInfo():
		vendor(Get<std::string>(GL_VENDOR)),
		renderer(Get<std::string>(GL_RENDERER)),
		version(Get<std::string>(GL_VERSION))
		
        #if defined(GL_SHADING_LANGUAGE_VERSION)
        ,glsl_version(Get<std::string>(GL_SHADING_LANGUAGE_VERSION))
        #else
        ,glsl_version("")
        #endif
    
        #if defined(GL_NUM_EXTENSIONS)
        ,gl_extensions(Get<GLint>(GL_NUM_EXTENSIONS))
        #endif
        #if defined(GL_MAJOR_VERSION) && defined(GL_MINOR_VERSION)
        ,versionmajor(Get<GLint>(GL_MAJOR_VERSION)),
		versionminor(Get<GLint>(GL_MINOR_VERSION))
        #endif
	{
        //chris
		for(auto vi=gl_extensions.begin();vi!=gl_extensions.end();++vi)
		{
            *vi=Get<std::string>(GL_EXTENSIONS,static_cast<GLsizei>(vi-gl_extensions.begin()));
		}
	}

}

inline std::ostream& operator<<(std::ostream& out,const gl::ContextInfo& ci)
{
	out << "OpenGL Vendor: " << ci.vendor << "\n"
		<< "OpenGL Renderer: " << ci.renderer << "\n"
		<< "OpenGL Version String: " << ci.version << "\n"
		<< "Shading Language Version: " << ci.glsl_version << "\n"
		<< "Supported GL Extensions:\n";
	for(auto vi=ci.gl_extensions.cbegin();vi!=ci.gl_extensions.cend();++vi)
	{
		out << "\t" << *vi << "\n";
	}
	return out;
}
