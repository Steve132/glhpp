/*

Copyright (c) 2012 Steven Braeger

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, 
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software
is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice 
shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef GL_HPP_COMMON_HPP
#define GL_HPP_COMMON_HPP

#include<string>
#include<sstream>
#include<iterator>

#if __cplusplus >= 201103L || defined(__GXX_EXPERIMENTAL_CXX0X__)  //if C++0x, then use hash set instead for speed.
#include<unordered_set>
typedef std::unordered_set<std::string> EXTENSION_SET;
#define CONSTRUCT_EXTENSION_SET(x) std::unordered_set<std::string> x(128)
#else
#include<set>
typedef std::set<std::string> EXTENSION_SET;
#define CONSTRUCT_EXTENSION_SET(x) std::set<std::string> x;
#endif


#include<stdexcept>
#include<utility>

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include<windows.h>
#endif

//DEFINE PLATFORM GET PROCEDURE CALL



#include <stddef.h>
#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef void GLvoid;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLclampx;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void *GLeglImageOES;
typedef char GLchar;
typedef char GLcharARB;
#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
#endif
typedef unsigned short GLhalfARB;
typedef unsigned short GLhalf;
typedef GLint GLfixed;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;
typedef int64_t GLint64;
typedef uint64_t GLuint64;
typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;
typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;
typedef struct __GLsync *GLsync;
struct _cl_context;
struct _cl_event;
typedef void (GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
typedef unsigned short GLhalfNV;
typedef GLintptr GLvdpauSurfaceNV;


#ifndef GL_HPP_GLES_API
#define GL_HPP_GLES_API 0xf168
#endif
#ifndef GL_HPP_GL_API
#define GL_HPP_GL_API 0xcce4
#endif





#if defined(__sgi) || defined(__sun) || (defined(__APPLE__) && defined(GLHPP_APPLE_GLX))
#include<dlfcn.h>

typedef void* (*_dl_gpa_func)(const char*);
struct _dl_prim_xpa:
{
	void* h_image;
	_dl_gpa_func x_get_proc_address;
	_dl_prim_xpa():
		h_image(nullptr),
		x_get_proc_address(nullptr)
	{
		h=dlopen(NULL,RTLD_LAZY | RTLD_LOCAL);
		if(h)
		{
			x_get_proc_address=dlsym(h,"glXGetProcAddress");
		}
	}
	void* get(const char* name)
	{
		if(x_get_proc_address)
		{
			return x_get_proc_address(name);
		}
		if(h)
		{
			return dlsym(h,name);
		}
		return nullptr;
	}
};

#elif defined(__APPLE__)

typedef void* (*_dl_gpa_func)(const char*);
struct _dl_prim_xpa:
{
	void* get(const char*)
	{
		return nullptr;
	}
};
#endif

//begin procedure calls.

#if defined(_WIN32)

static inline void* _prim_GetProcAddress(const char* name)
{
	return wglGetProcAddress((LPCSTR)name);
}

#elif defined(__APPLE__)

#include <AvailabilityMacros.h>
#include <mach-o/dyld.h>

#ifdef GLHPP_REGAL
#define GLHPP_APPLE_DYLIB "libRegal.dylib"
#else
#define GLHPP_APPLE_DYLIB "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
#endif

inline void* _apple_dl_get2(const char* name)
{
	static _dl_prim_xpa dxpa;
	return dxpa.get(name);
}

struct _apple_dl_image
{
#ifdef MAC_OS_X_VERSION_10_3
	void* image;
	_apple_dl_image():image(nullptr)
	{
		image=dlopen(GLHPP_APPLE_DYLIB,RTLD_LAZY);
	}
	void* get(const char* name)
	{
		if(!image) 
		{
			return nullptr;
		}
		void* addr=dlsym(image,name);
		if(addr)
		{
			return addr;
		}
		return _apple_dl_get2(name);
	}
#else
	const struct mach_header* image;
	_apple_dl_image():image(nullptr)
	{
		image=NSAddImage(GLHPP_APPLE_DYLIB,NSADDIMAGE_OPTION_RETURN_ON_ERROR);
	}
	static void* get2(const char* name)
	{
		static _dl_prim_xpa dxpa;
		return dxpa.get(name);
	}
	void* get(const char* name)
	{
		std::string symbolname("_");
		symbolname+=name;
		NSSymbol symbol=image ? NSLookupSymbolInImage(image,symbolname.c_str(),NSLOOKUPSYMBOLINIMAGE_OPTION_BIND | NSLOOKUPSYMBOLINIMAGE_OPTION_RETURN_ON_ERROR) : nullptr;
		if(symbol)
			return NSAddressOfSymbol(symbol);
		return _apple_dl_get2(name);
	}
#endif	
};

static inline void* _prim_GetProcAddress(const char* name)
{
	static _apple_dl_image adi;
	return adi.get(name);
}
#elif defined(__sun) || defined(__sgi)

static inline void* _prim_GetProcAddress(const char* name)
{
	static _dl_prim_xpa dxpa;
	return dxpa.get(name);
}

#else

extern "C"
{
void *glXGetProcAddressARB(const GLubyte *procName);
}

static inline void* _prim_GetProcAddress(const char* name)
{
	return glXGetProcAddressARB(reinterpret_cast<const GLubyte*>(name));
}

#endif




#define GLHPP_GL_VERSION                        0x1F02
#define GLHPP_GL_EXTENSIONS			0x1F03
#define GLHPP_GL_NUM_EXTENSIONS                 0x821D
extern "C"
{
extern const GLubyte* glGetString(GLenum name);
extern void glGetIntegerv(GLenum pname,GLint *params);
}
//define Opengl
namespace gl
{
class ProcedureNotFound: public std::runtime_error
{
public:
	explicit ProcedureNotFound(const std::string& s):
		std::runtime_error(s)
	{}	
};

typedef std::pair<unsigned int,unsigned int> version_info;

bool check_extension(const std::string& extname);
bool check_version(unsigned int vmaj,unsigned int vmin);
bool check_version(const version_info& version);
const version_info& get_version();
void* get_proc_address(const std::string& funcname);
void* get_proc_address(const std::string& funcname,const std::string& extname);
const EXTENSION_SET& get_extensions();



namespace _impl
{

inline version_info _get_version()
{
	const char* vs=reinterpret_cast<const char*>(glGetString(GLHPP_GL_VERSION));
	std::istringstream iss(vs);
	unsigned int maj,min;
	iss >> maj;
	iss.ignore();
	iss >> min;
	return std::make_pair(maj,min);
}
typedef const GLubyte* (*PFNGLGETSTRINGIPROC_PRIV)(GLenum name, GLuint index);

inline EXTENSION_SET _get_extensions()
{
	CONSTRUCT_EXTENSION_SET(extlist);
	GLint extmax;
	if(check_version(3,0))
	{
		static PFNGLGETSTRINGIPROC_PRIV gsi=reinterpret_cast<PFNGLGETSTRINGIPROC_PRIV>(_prim_GetProcAddress("glGetStringi"));
		glGetIntegerv(GLHPP_GL_NUM_EXTENSIONS,&extmax);
		for(GLint i=0;i<extmax;i++)
		{
			extlist.insert((const char*)gsi(GLHPP_GL_EXTENSIONS,i));
		}
	}
	else
	{
		std::istringstream extstream((const char*)glGetString(GLHPP_GL_EXTENSIONS));
		extlist.insert(std::istream_iterator<std::string>(extstream),std::istream_iterator<std::string>());
	}
	
	return extlist;
}

inline void* _get_proc_address(const char* frequest,const char* extext)
{
	if(check_extension(extext))
	{
		void* fptr=_prim_GetProcAddress(frequest);
		if(fptr)
			return fptr;
		else
		{
			std::ostringstream oss;
			oss << "Error, " << extext << " is supported, but " << frequest << " was not found in the context.";
			throw ProcedureNotFound(oss.str());
		}
	}
	else
	{	
		std::ostringstream oss;
		oss << "Error, " << extext << " is not supported, so " << frequest << " was not found in the context.";
		throw ProcedureNotFound(oss.str());
	}
}
inline void* _get_proc_address(const char* frequest,unsigned int vmaj,unsigned int vmin)
{
	if(check_version(vmaj,vmin))
	{
		void* fptr=_prim_GetProcAddress(frequest);
		if(fptr)
			return fptr;
		else
		{
			std::ostringstream oss;
			oss << "Error, OpenGL Version " << vmaj << '.' << vmin << " is supported, but " << frequest << " was not found in the context.  Could this function be deprecated in this context?";
			throw ProcedureNotFound(oss.str());
		}
	}
	else
	{
		std::ostringstream oss;
		oss << "Error, OpenGL Version " << vmaj << '.' << vmin << " is not supported, so " << frequest << " could not be found in the context.";
		throw ProcedureNotFound(oss.str());
	}
}
}

inline bool check_extension(const std::string& extname)
{
	static const EXTENSION_SET& extarray=get_extensions();
	return extarray.find(extname)!=extarray.end();
}

inline const version_info& get_version()
{
	static version_info v=_impl::_get_version();
	return v;
}
inline bool check_version(unsigned int vmaj,unsigned int vmin)
{
	static const version_info& v=get_version();
	return (vmaj*10+vmin) <= (v.first*10+v.second);
}
inline bool check_version(const version_info& v)
{
	return check_version(v.first,v.second);
}
inline void* get_proc_address(const std::string& funcname)
{
	void* fptr=_prim_GetProcAddress(funcname.c_str());
	if(fptr)
		return fptr;
	else
	{
		std::ostringstream oss;
		oss << "Error, " << funcname << " was not found in the context.";
		throw ProcedureNotFound(oss.str());
	}
}
inline void* get_proc_address(const std::string& funcname,const std::string& extname)
{
	return _impl::_get_proc_address(funcname.c_str(),extname.c_str());
}
inline const EXTENSION_SET& get_extensions()
{
	static EXTENSION_SET extarray=_impl::_get_extensions();
	return extarray;
}
}

#endif
