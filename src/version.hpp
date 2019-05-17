#ifndef GLHPP_GLOBJECT_HPP
#define GLHPP_GLOBJECT_HPP

namespace gl
{

#ifdef GL_ALT_API_NAME
inline bool check_version(unsigned int a,unsigned int b)
{
	return glaltCheckVersion(a,b) != 0;
}
inline bool check_extension(const std::string& ext)
{
	return glaltCheckExtension(ext.c_str()) != 0;
}
#endif

class ContextInfo
{
public:
	std::string vendor;
	std::string renderer;
	std::string version;
	std::string glsl_version;

	std::vector<std::string> gl_extensions; //alphabetical ordering

	GLuint versionmajor;
	GLuint versionminor;

	ContextInfo();
	bool has_extension(const std::string& s)
	{
		return std::binary_search(gl_extensions.begin(),gl_extensions.end(),s);
	}
};


namespace _impl
{

class VersionDependency
{
public:
	VersionDependency(const std::string& actionname,const std::initializer_list<std::string>& depstrings)
	{
		std::unordered_map<std::string,bool>::const_iterator ci=optcache().find(actionname);
		bool supported=false;
		if(ci==optcache().end())
		{
			for(auto dep_it=depstrings.begin();dep_it != depstrings.end() && !supported;++dep_it)
			{
				bool dsup=check_opt(*dep_it);
				supported|=dsup;
				optcache()[*dep_it]=dsup;
			}
		}
		else
		{
			supported=ci->second;
		}
		if(!supported)
		{
			std::ostringstream oss;
			oss << "Error, the active OpenGL context has insufficient OpenGL compatibility needed to \'"+actionname+"\'\n.  This action requires one of:\n";
			for(auto dep_it=depstrings.begin();dep_it != depstrings.end();++dep_it)
			{
				oss << '\t' << *dep_it << '\n';
			}
			throw std::runtime_error(oss.str());
		}
	}
private:
	static bool check_opt(const std::string& dep)
	{
		if(dep.find("VERSION")!=std::string::npos)
		{
			return gl::check_version(dep[11]-'0',dep[13]-'0');
		}
		else
		{
			return gl::check_extension(dep);
		}
	}
	static std::unordered_map<std::string,bool>& optcache()
	{
		static std::unordered_map<std::string,bool> opcsh(128);
		return opcsh;
	}
};

}


}

std::ostream& operator<<(std::ostream& out,const gl::ContextInfo& ci);


#endif

