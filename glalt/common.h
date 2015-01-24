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

#ifndef GL_ALT_COMMON_H
#define GL_ALT_COMMON_H

#if defined(__gl_h_) || defined(__GL_H__) || defined(__X_GL_H)
#error gl.h included before glalt
#endif
#if defined(__REGAL_H__)
#error Regal.h included before glalt
#endif
#if defined(__glext_h_) || defined(__GLEXT_H_)
#error glext.h included before glalt
#endif
#if defined(__gl_ATI_h_)
#error glATI.h included before glalt
#endif

#define __gl_h_
#define __GL_H__
#define __REGAL_H__
#define __X_GL_H
#define __glext_h_
#define __GLEXT_H_
#define __gl_ATI_h_


#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include<windows.h>
#endif

//DEFINE PLATFORM GET PROCEDURE CALL

#ifdef __cplusplus
#define CGUARDBEGIN extern "C" {
#define CGUARDEND }
#else
#define CGUARDBEGIN
#define CGUARDEND
#endif

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
typedef void (GLALTDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLALTDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLALTDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLALTDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
typedef unsigned short GLhalfNV;
typedef GLintptr GLvdpauSurfaceNV;

#ifndef GL_HEADER_GL_API
#define GL_HEADER_GL_API 0xcce4
#endif
#ifndef GL_HEADER_GLES_API
#define GL_HEADER_GLES_API 0xf168
#endif


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#if defined(__sgi) || defined(__sun) || (defined(__APPLE__) && defined(GLALT_APPLE_GLX))
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

static inline void* _glalt_prim_GetProcAddress(const char* name)
{
	return wglGetProcAddress((LPCSTR)name);
}

#elif defined(__APPLE__)

#include <AvailabilityMacros.h>
#include <mach-o/dyld.h>

#ifdef GLALT_REGAL
#define GLALT_APPLE_DYLIB "libRegal.dylib"
#else
#define GLALT_APPLE_DYLIB "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
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
		image=dlopen(GLALT_APPLE_DYLIB,RTLD_LAZY);
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
		image=NSAddImage(GLALT_APPLE_DYLIB,NSADDIMAGE_OPTION_RETURN_ON_ERROR);
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

static inline void* _glalt_prim_GetProcAddress(const char* name)
{
	static _apple_dl_image adi;
	return adi.get(name);
}
#elif defined(__sun) || defined(__sgi)

static inline void* _glalt_prim_GetProcAddress(const char* name)
{
	static _dl_prim_xpa dxpa;
	return dxpa.get(name);
}

#else

#include<GL/glx.h>
CGUARDBEGIN
//void *glXGetProcAddressARB(const GLubyte *procName);
CGUARDEND

static inline void* _glalt_prim_GetProcAddress(const char* name)
{
	return (void*)glXGetProcAddressARB((const GLubyte*)name);
}

#endif

#define GLALT_GL_VERSION                        0x1F02
#define GLALT_GL_EXTENSIONS			0x1F03
#define GLALT_GL_NUM_EXTENSIONS                 0x821D

CGUARDBEGIN
extern const GLubyte* glGetString(GLenum name);
extern void glGetIntegerv(GLenum pname,GLint *params);
CGUARDEND


typedef struct _glalt_version_info_t
{
	unsigned int first;
	unsigned int second;
} glalt_version_info;


typedef struct _glalt_extension_set_t
{
	char* extensionstringmemory;
	const char** extensionstringbeginnings;
	size_t num_extensions;
	#ifdef __cplusplus
	~_glalt_extension_set_t()
	{
		free(extensionstringmemory);
		free(extensionstringbeginnings);
	}
	#endif
} glalt_extension_set;

int glaltCheckExtension(const char* extname);
int glaltCheckVersion(unsigned int vmaj,unsigned int vmin);

void* glaltGetProcAddress(const char* funcname);
void* glaltGetProcAddressExtension(const char* funcname,const char* extname);
void* glaltGetProcAddressVersion(const char* funcname,unsigned int vmaj,unsigned int vmin);

const glalt_extension_set* glaltGetExtensions();
const glalt_version_info* glaltGetVersion();

typedef void (*_glalt_error_callback_func)(void* userdata,const char* msgformat,const char* extname,const char* extfunc);
inline void _glaltDefaultError(void* userdata,const char* msgformat,const char* extname,const char* extfunc)
{
	fprintf(stderr, msgformat,extname,extfunc);
}

inline void _glaltErrorCallbackBackend(void* userdata,const char* msgformat,const char* extname,const char* extfunc,_glalt_error_callback_func cbfnew)
{
	static _glalt_error_callback_func ecb=&_glaltDefaultError;
#ifdef __cplusplus
	static void* ud=userdata;
#else
	static void* ud=NULL;if(!ud){ud=userdata;}
#endif
	if(cbfnew)
	{
		ecb=cbfnew;
		ud=userdata;
	}
	else
	{
		return ecb(ud,msgformat,extname,extfunc);
	}
}

inline void glaltError(const char* msgformat,const char* extname,const char* extfunc)
{
	_glaltErrorCallbackBackend(NULL,msgformat,extname,extfunc,NULL);
}
inline void glaltSetError(_glalt_error_callback_func cbfnew,void* ud)
{
	_glaltErrorCallbackBackend(ud,NULL,NULL,NULL,cbfnew);
}

static inline int _glalt_extelemcmp(const void* a,const void* b)
{
	const char* astr=*(const char**)a;
	const char* bstr=*(const char**)b;
	
	int alen=*(astr++);
	int blen=*(bstr++);
	int cmpval=memcmp(astr,bstr,alen > blen ? blen : alen);
	if(cmpval==0)
	{
		return memcmp(&alen,&blen,1);
	}
	else
	{
		return cmpval;
	}
}
static inline glalt_version_info _get_version()
{
	const char* vs=(const char*)glGetString(GLALT_GL_VERSION);
	
	glalt_version_info vis;
	vis.first = (int)(vs[0]-'0');
	vis.second= (int)(vs[2]-'0');
	return vis;
}
typedef const GLubyte* (*PFNGLGETSTRINGIPROC_PRIV)(GLenum name, GLuint index);

inline glalt_extension_set _get_extensions()
{
	glalt_extension_set extlist;
	GLint isversion=glaltCheckVersion(3,0);
	GLint i;

	if(isversion)
	{
		GLint extmax;
		char* extstring;
		char* extstringhead;
		size_t bufsize=0;
		size_t bufbackingsize=0;
#ifdef __cplusplus
		static PFNGLGETSTRINGIPROC_PRIV gsi=(PFNGLGETSTRINGIPROC_PRIV)_glalt_prim_GetProcAddress("glGetStringi");
#else
		static PFNGLGETSTRINGIPROC_PRIV gsi=NULL;
		if(!gsi){ gsi=(PFNGLGETSTRINGIPROC_PRIV)_glalt_prim_GetProcAddress("glGetStringi");}
#endif

		glGetIntegerv(GLALT_GL_NUM_EXTENSIONS,&extmax);
		static const size_t AVG_EXTNAME_BYTES=12;
		bufbackingsize=AVG_EXTNAME_BYTES*extmax; //estimate size to minimize reallocs to approximately 3
		extstring=(char*)malloc(bufbackingsize);
		extstringhead=extstring;

		for(i=0;i<extmax;i++)
		{
			const char* curstringname=(const char*)gsi(GLALT_GL_EXTENSIONS,i);
			size_t csnl=strlen(curstringname)+1;
			if(extstringhead+csnl >= extstring+bufbackingsize)
			{
				bufbackingsize<<=1;
				size_t offset=extstringhead-extstring;
				extstring=(char*)realloc(extstring,bufbackingsize);
				extstringhead=extstring+offset;
			}
			strncpy(extstringhead+1,curstringname,csnl);
			extstringhead[0]=(char)(csnl);//the length of the string to the next marker
			extstringhead+=csnl;
		}
		extlist.num_extensions=extmax;
		extlist.extensionstringmemory=extstring;
		memset(extstringhead,0,extstring+bufbackingsize - extstringhead);
	}
	else
	{
		const char* extother=(const char*)glGetString(GLALT_GL_EXTENSIONS);
		size_t extslen=strlen(extother);
		char* pch;
		extlist.extensionstringmemory=(char*)malloc(extslen+1); //empty at the beginning
		memcpy(extlist.extensionstringmemory+1,extother,extslen);
		extlist.extensionstringmemory[extslen+1]=' ';//last whitespace at the end

		for(pch=extlist.extensionstringmemory;pch!=NULL;pch=strchr(pch+1,' '))
		{
			size_t sz=strcspn(pch+1," ")+1;
			*pch=(char)sz;
			extlist.num_extensions++;
		}
	}
	const char** extindices=(const char**)malloc(extlist.num_extensions*sizeof(const char*));
	const char** extindiceshead=extindices;
	char* pch=extlist.extensionstringmemory;
	for(i=0;i<extlist.num_extensions;i++)
	{
		*(extindiceshead++)=pch;
		pch+=*pch;//the first element of the array is the size offset
	}
	//binary sort the extindices for searching later
	qsort(extindices,extlist.num_extensions,sizeof(const char*),_glalt_extelemcmp);
	extlist.extensionstringbeginnings=extindices;
	return extlist;
}
inline int _es_contains(const char* namecheck)
{
#ifdef __cplusplus
	static const glalt_extension_set* es=glaltGetExtensions();
#else
	static const glalt_extension_set* es=NULL;if(!es) {es=glaltGetExtensions();};
#endif
	return bsearch(&namecheck,es->extensionstringbeginnings,es->num_extensions,sizeof(const char*),_glalt_extelemcmp)!=NULL;
}

inline int glaltCheckExtension(const char* extname)
{
	return _es_contains(extname);
}

inline const glalt_version_info* glaltGetVersion()
{
#ifdef __cplusplus
	static glalt_version_info v=_get_version();
#else
	static glalt_version_info v={0,0};
	if(v.first == 0) v=_get_version();
#endif
	return &v;
}
inline const glalt_extension_set* glaltGetExtensions()
{
#ifdef __cplusplus
	static glalt_extension_set extarray=_get_extensions();
#else
	static glalt_extension_set extarray={NULL,NULL,0};
	if(extarray.num_extensions==0){ extarray=_get_extensions();}
#endif
	return &extarray;
}
inline int glaltCheckVersion(unsigned int vmaj,unsigned int vmin)
{
#ifdef __cplusplus
	static const glalt_version_info* v=glaltGetVersion();
#else
	static const glalt_version_info* v=NULL;
	if(!v){v=glaltGetVersion();}
#endif
	return (vmaj*10+vmin) <= (v->first*10+v->second);
}
inline void* glaltGetProcAddress(const char* funcname)
{
	void* fptr=_glalt_prim_GetProcAddress(funcname);
	if(fptr)
		return fptr;
	else
	{
		glaltError("Error, %s was not found in this context %s\n",funcname,"");
	}
}

inline void* glaltGetProcAddressExtension(const char* frequest,const char* extext)
{
	if(glaltCheckExtension(extext))
	{
		void* fptr=_glalt_prim_GetProcAddress(frequest);
		if(fptr)
			return fptr;
		else
		{
			glaltError("Error, %s was not found in this context even though %s is supported\n",frequest,extext);
		}
	}
	else
	{	
		glaltError("Error, %s was not found in this context because %s is not supported\n",frequest,extext);
	}
}
inline void* glaltGetProcAddressVersion(const char* frequest,unsigned int vmaj,unsigned int vmin)
{
	char vstring[]="X.X";
	vstring[0]=(char)('0'+vmaj);
	vstring[2]=(char)('0'+vmin);
	if(glaltCheckVersion(vmaj,vmin))
	{
		void* fptr=_glalt_prim_GetProcAddress(frequest);
		if(fptr)
			return fptr;
		else
		{
			glaltError("Error, %s was not found in this context even though GL version %s\n",frequest,vstring);
		}
	}
	else
	{
		glaltError("Error, %s was not found in this context because GL version %s is not supported by this context\n",frequest,vstring);
	}
}


#endif
