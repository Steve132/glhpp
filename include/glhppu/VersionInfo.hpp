#ifndef GLHPPU_VERSION_INFO_HPP
#define GLHPPU_VERSION_INFO_HPP

#include<string>

namespace glhppu
{
	struct VersionInfo
	{
		unsigned major;
		unsigned minor;
		unsigned release;
		
		VersionInfo():major(0),minor(0),release(0){}
		VersionInfo(const std::string& st);
	};
}

#endif

