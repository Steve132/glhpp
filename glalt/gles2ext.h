#ifndef GL_ALT_gles2EXT_ALT
#define GL_ALT_gles2EXT_ALT
#include "common.h"


#ifndef GL_AMD_compressed_3DC_texture
#define GL_AMD_compressed_3DC_texture
#ifndef GL_3DC_X_AMD
#define GL_3DC_X_AMD 0x87F9
#endif //GL_3DC_X_AMD
#ifndef GL_3DC_XY_AMD
#define GL_3DC_XY_AMD 0x87FA
#endif //GL_3DC_XY_AMD
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_AMD_compressed_ATC_texture
#define GL_AMD_compressed_ATC_texture
#ifndef GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE
#endif //GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD
#ifndef GL_ATC_RGB_AMD
#define GL_ATC_RGB_AMD 0x8C92
#endif //GL_ATC_RGB_AMD
#ifndef GL_ATC_RGBA_EXPLICIT_ALPHA_AMD
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD 0x8C93
#endif //GL_ATC_RGBA_EXPLICIT_ALPHA_AMD
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor
#ifndef GL_COUNTER_TYPE_AMD
#define GL_COUNTER_TYPE_AMD 0x8BC0
#endif //GL_COUNTER_TYPE_AMD
#ifndef GL_COUNTER_RANGE_AMD
#define GL_COUNTER_RANGE_AMD 0x8BC1
#endif //GL_COUNTER_RANGE_AMD
#ifndef GL_UNSIGNED_INT64_AMD
#define GL_UNSIGNED_INT64_AMD 0x8BC2
#endif //GL_UNSIGNED_INT64_AMD
#ifndef GL_PERCENTAGE_AMD
#define GL_PERCENTAGE_AMD 0x8BC3
#endif //GL_PERCENTAGE_AMD
#ifndef GL_PERFMON_RESULT_AVAILABLE_AMD
#define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#endif //GL_PERFMON_RESULT_AVAILABLE_AMD
#ifndef GL_PERFMON_RESULT_SIZE_AMD
#define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#endif //GL_PERFMON_RESULT_SIZE_AMD
#ifndef GL_PERFMON_RESULT_AMD
#define GL_PERFMON_RESULT_AMD 0x8BC6
#endif //GL_PERFMON_RESULT_AMD
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BeginPerfMonitorAMD
#define GL_ALT_FUNDEF_BeginPerfMonitorAMD
typedef void (*PFNGLBEGINPERFMONITORAMDPROC_ALT)(GLuint);
static inline void glBeginPerfMonitorAMD(GLuint monitor1)
{
#ifdef __cplusplus
	static PFNGLBEGINPERFMONITORAMDPROC_ALT fn=(PFNGLBEGINPERFMONITORAMDPROC_ALT)glaltGetProcAddressExtension("glBeginPerfMonitorAMD","GL_AMD_performance_monitor");
#else
	static PFNGLBEGINPERFMONITORAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBEGINPERFMONITORAMDPROC_ALT)glaltGetProcAddressExtension("glBeginPerfMonitorAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(monitor1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeletePerfMonitorsAMD
#define GL_ALT_FUNDEF_DeletePerfMonitorsAMD
typedef void (*PFNGLDELETEPERFMONITORSAMDPROC_ALT)(GLsizei,GLuint *);
static inline void glDeletePerfMonitorsAMD(GLsizei n1,GLuint * monitors1)
{
#ifdef __cplusplus
	static PFNGLDELETEPERFMONITORSAMDPROC_ALT fn=(PFNGLDELETEPERFMONITORSAMDPROC_ALT)glaltGetProcAddressExtension("glDeletePerfMonitorsAMD","GL_AMD_performance_monitor");
#else
	static PFNGLDELETEPERFMONITORSAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEPERFMONITORSAMDPROC_ALT)glaltGetProcAddressExtension("glDeletePerfMonitorsAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(n1,monitors1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EndPerfMonitorAMD
#define GL_ALT_FUNDEF_EndPerfMonitorAMD
typedef void (*PFNGLENDPERFMONITORAMDPROC_ALT)(GLuint);
static inline void glEndPerfMonitorAMD(GLuint monitor1)
{
#ifdef __cplusplus
	static PFNGLENDPERFMONITORAMDPROC_ALT fn=(PFNGLENDPERFMONITORAMDPROC_ALT)glaltGetProcAddressExtension("glEndPerfMonitorAMD","GL_AMD_performance_monitor");
#else
	static PFNGLENDPERFMONITORAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENDPERFMONITORAMDPROC_ALT)glaltGetProcAddressExtension("glEndPerfMonitorAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(monitor1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenPerfMonitorsAMD
#define GL_ALT_FUNDEF_GenPerfMonitorsAMD
typedef void (*PFNGLGENPERFMONITORSAMDPROC_ALT)(GLsizei,GLuint *);
static inline void glGenPerfMonitorsAMD(GLsizei n1,GLuint * monitors1)
{
#ifdef __cplusplus
	static PFNGLGENPERFMONITORSAMDPROC_ALT fn=(PFNGLGENPERFMONITORSAMDPROC_ALT)glaltGetProcAddressExtension("glGenPerfMonitorsAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGENPERFMONITORSAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENPERFMONITORSAMDPROC_ALT)glaltGetProcAddressExtension("glGenPerfMonitorsAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(n1,monitors1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorCounterDataAMD
#define GL_ALT_FUNDEF_GetPerfMonitorCounterDataAMD
typedef void (*PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_ALT)(GLuint,GLenum,GLsizei,GLuint *,GLint *);
static inline void glGetPerfMonitorCounterDataAMD(GLuint monitor1,GLenum pname1,GLsizei dataSize1,GLuint * data1,GLint * bytesWritten1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_ALT fn=(PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterDataAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterDataAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(monitor1,pname1,dataSize1,data1,bytesWritten1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorCounterInfoAMD
#define GL_ALT_FUNDEF_GetPerfMonitorCounterInfoAMD
typedef void (*PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_ALT)(GLuint,GLuint,GLenum,void *);
static inline void glGetPerfMonitorCounterInfoAMD(GLuint group1,GLuint counter1,GLenum pname1,void * data1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_ALT fn=(PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterInfoAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterInfoAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(group1,counter1,pname1,data1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorCounterStringAMD
#define GL_ALT_FUNDEF_GetPerfMonitorCounterStringAMD
typedef void (*PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_ALT)(GLuint,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetPerfMonitorCounterStringAMD(GLuint group1,GLuint counter1,GLsizei bufSize1,GLsizei * length1,GLchar * counterString1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_ALT fn=(PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterStringAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCounterStringAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(group1,counter1,bufSize1,length1,counterString1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorCountersAMD
#define GL_ALT_FUNDEF_GetPerfMonitorCountersAMD
typedef void (*PFNGLGETPERFMONITORCOUNTERSAMDPROC_ALT)(GLuint,GLint *,GLint *,GLsizei,GLuint *);
static inline void glGetPerfMonitorCountersAMD(GLuint group1,GLint * numCounters1,GLint * maxActiveCounters1,GLsizei counterSize1,GLuint * counters1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORCOUNTERSAMDPROC_ALT fn=(PFNGLGETPERFMONITORCOUNTERSAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCountersAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORCOUNTERSAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORCOUNTERSAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorCountersAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(group1,numCounters1,maxActiveCounters1,counterSize1,counters1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorGroupStringAMD
#define GL_ALT_FUNDEF_GetPerfMonitorGroupStringAMD
typedef void (*PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_ALT)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetPerfMonitorGroupStringAMD(GLuint group1,GLsizei bufSize1,GLsizei * length1,GLchar * groupString1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_ALT fn=(PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorGroupStringAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorGroupStringAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(group1,bufSize1,length1,groupString1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfMonitorGroupsAMD
#define GL_ALT_FUNDEF_GetPerfMonitorGroupsAMD
typedef void (*PFNGLGETPERFMONITORGROUPSAMDPROC_ALT)(GLint *,GLsizei,GLuint *);
static inline void glGetPerfMonitorGroupsAMD(GLint * numGroups1,GLsizei groupsSize1,GLuint * groups1)
{
#ifdef __cplusplus
	static PFNGLGETPERFMONITORGROUPSAMDPROC_ALT fn=(PFNGLGETPERFMONITORGROUPSAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorGroupsAMD","GL_AMD_performance_monitor");
#else
	static PFNGLGETPERFMONITORGROUPSAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFMONITORGROUPSAMDPROC_ALT)glaltGetProcAddressExtension("glGetPerfMonitorGroupsAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(numGroups1,groupsSize1,groups1);
}
#endif

#ifndef	GL_ALT_FUNDEF_SelectPerfMonitorCountersAMD
#define GL_ALT_FUNDEF_SelectPerfMonitorCountersAMD
typedef void (*PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_ALT)(GLuint,GLboolean,GLuint,GLint,GLuint *);
static inline void glSelectPerfMonitorCountersAMD(GLuint monitor1,GLboolean enable1,GLuint group1,GLint numCounters1,GLuint * counterList1)
{
#ifdef __cplusplus
	static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_ALT fn=(PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_ALT)glaltGetProcAddressExtension("glSelectPerfMonitorCountersAMD","GL_AMD_performance_monitor");
#else
	static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_ALT)glaltGetProcAddressExtension("glSelectPerfMonitorCountersAMD","GL_AMD_performance_monitor"); }
#endif
	 fn(monitor1,enable1,group1,numCounters1,counterList1);
}
#endif
CGUARDEND

#endif

#ifndef GL_AMD_program_binary_Z400
#define GL_AMD_program_binary_Z400
#ifndef GL_Z400_BINARY_AMD
#define GL_Z400_BINARY_AMD 0x8740
#endif //GL_Z400_BINARY_AMD
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANDROID_extension_pack_es31a
#define GL_ANDROID_extension_pack_es31a
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_depth_texture
#define GL_ANGLE_depth_texture
#ifndef GL_UNSIGNED_SHORT
#define GL_UNSIGNED_SHORT 0x1403
#endif //GL_UNSIGNED_SHORT
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif //GL_UNSIGNED_INT
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT 0x1902
#endif //GL_DEPTH_COMPONENT
#ifndef GL_DEPTH_COMPONENT16
#define GL_DEPTH_COMPONENT16 0x81A5
#endif //GL_DEPTH_COMPONENT16
#ifndef GL_DEPTH_COMPONENT32_OES
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#endif //GL_DEPTH_COMPONENT32_OES
#ifndef GL_DEPTH_STENCIL_OES
#define GL_DEPTH_STENCIL_OES 0x84F9
#endif //GL_DEPTH_STENCIL_OES
#ifndef GL_UNSIGNED_INT_24_8_OES
#define GL_UNSIGNED_INT_24_8_OES 0x84FA
#endif //GL_UNSIGNED_INT_24_8_OES
#ifndef GL_DEPTH24_STENCIL8_OES
#define GL_DEPTH24_STENCIL8_OES 0x88F0
#endif //GL_DEPTH24_STENCIL8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_framebuffer_blit
#define GL_ANGLE_framebuffer_blit
#ifndef GL_DRAW_FRAMEBUFFER_BINDING_ANGLE
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#endif //GL_DRAW_FRAMEBUFFER_BINDING_ANGLE
#ifndef GL_READ_FRAMEBUFFER_ANGLE
#define GL_READ_FRAMEBUFFER_ANGLE 0x8CA8
#endif //GL_READ_FRAMEBUFFER_ANGLE
#ifndef GL_DRAW_FRAMEBUFFER_ANGLE
#define GL_DRAW_FRAMEBUFFER_ANGLE 0x8CA9
#endif //GL_DRAW_FRAMEBUFFER_ANGLE
#ifndef GL_READ_FRAMEBUFFER_BINDING_ANGLE
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA
#endif //GL_READ_FRAMEBUFFER_BINDING_ANGLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlitFramebufferANGLE
#define GL_ALT_FUNDEF_BlitFramebufferANGLE
typedef void (*PFNGLBLITFRAMEBUFFERANGLEPROC_ALT)(GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLbitfield,GLenum);
static inline void glBlitFramebufferANGLE(GLint srcX01,GLint srcY01,GLint srcX11,GLint srcY11,GLint dstX01,GLint dstY01,GLint dstX11,GLint dstY11,GLbitfield mask1,GLenum filter1)
{
#ifdef __cplusplus
	static PFNGLBLITFRAMEBUFFERANGLEPROC_ALT fn=(PFNGLBLITFRAMEBUFFERANGLEPROC_ALT)glaltGetProcAddressExtension("glBlitFramebufferANGLE","GL_ANGLE_framebuffer_blit");
#else
	static PFNGLBLITFRAMEBUFFERANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLITFRAMEBUFFERANGLEPROC_ALT)glaltGetProcAddressExtension("glBlitFramebufferANGLE","GL_ANGLE_framebuffer_blit"); }
#endif
	 fn(srcX01,srcY01,srcX11,srcY11,dstX01,dstY01,dstX11,dstY11,mask1,filter1);
}
#endif
CGUARDEND

#endif

#ifndef GL_ANGLE_framebuffer_multisample
#define GL_ANGLE_framebuffer_multisample
#ifndef GL_RENDERBUFFER_SAMPLES_ANGLE
#define GL_RENDERBUFFER_SAMPLES_ANGLE 0x8CAB
#endif //GL_RENDERBUFFER_SAMPLES_ANGLE
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#endif //GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE
#ifndef GL_MAX_SAMPLES_ANGLE
#define GL_MAX_SAMPLES_ANGLE 0x8D57
#endif //GL_MAX_SAMPLES_ANGLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleANGLE
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleANGLE
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleANGLE(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleANGLE","GL_ANGLE_framebuffer_multisample");
#else
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleANGLE","GL_ANGLE_framebuffer_multisample"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif
CGUARDEND

#endif

#ifndef GL_ANGLE_instanced_arrays
#define GL_ANGLE_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawArraysInstancedANGLE
#define GL_ALT_FUNDEF_DrawArraysInstancedANGLE
typedef void (*PFNGLDRAWARRAYSINSTANCEDANGLEPROC_ALT)(GLenum,GLint,GLsizei,GLsizei);
static inline void glDrawArraysInstancedANGLE(GLenum mode1,GLint first1,GLsizei count1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWARRAYSINSTANCEDANGLEPROC_ALT fn=(PFNGLDRAWARRAYSINSTANCEDANGLEPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedANGLE","GL_ANGLE_instanced_arrays");
#else
	static PFNGLDRAWARRAYSINSTANCEDANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWARRAYSINSTANCEDANGLEPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedANGLE","GL_ANGLE_instanced_arrays"); }
#endif
	 fn(mode1,first1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DrawElementsInstancedANGLE
#define GL_ALT_FUNDEF_DrawElementsInstancedANGLE
typedef void (*PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_ALT)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void glDrawElementsInstancedANGLE(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_ALT fn=(PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedANGLE","GL_ANGLE_instanced_arrays");
#else
	static PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedANGLE","GL_ANGLE_instanced_arrays"); }
#endif
	 fn(mode1,count1,type1,indices1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_VertexAttribDivisorANGLE
#define GL_ALT_FUNDEF_VertexAttribDivisorANGLE
typedef void (*PFNGLVERTEXATTRIBDIVISORANGLEPROC_ALT)(GLuint,GLuint);
static inline void glVertexAttribDivisorANGLE(GLuint index1,GLuint divisor1)
{
#ifdef __cplusplus
	static PFNGLVERTEXATTRIBDIVISORANGLEPROC_ALT fn=(PFNGLVERTEXATTRIBDIVISORANGLEPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorANGLE","GL_ANGLE_instanced_arrays");
#else
	static PFNGLVERTEXATTRIBDIVISORANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLVERTEXATTRIBDIVISORANGLEPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorANGLE","GL_ANGLE_instanced_arrays"); }
#endif
	 fn(index1,divisor1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_ANGLE_pack_reverse_row_order
#define GL_ANGLE_pack_reverse_row_order
#ifndef GL_PACK_REVERSE_ROW_ORDER_ANGLE
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE 0x93A4
#endif //GL_PACK_REVERSE_ROW_ORDER_ANGLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_program_binary
#define GL_ANGLE_program_binary
#ifndef GL_PROGRAM_BINARY_ANGLE
#define GL_PROGRAM_BINARY_ANGLE 0x93A6
#endif //GL_PROGRAM_BINARY_ANGLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_texture_compression_dxt3
#define GL_ANGLE_texture_compression_dxt3
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2
#endif //GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_texture_compression_dxt5
#define GL_ANGLE_texture_compression_dxt5
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3
#endif //GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_texture_usage
#define GL_ANGLE_texture_usage
#ifndef GL_TEXTURE_USAGE_ANGLE
#define GL_TEXTURE_USAGE_ANGLE 0x93A2
#endif //GL_TEXTURE_USAGE_ANGLE
#ifndef GL_FRAMEBUFFER_ATTACHMENT_ANGLE
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE 0x93A3
#endif //GL_FRAMEBUFFER_ATTACHMENT_ANGLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ANGLE_translated_shader_source
#define GL_ANGLE_translated_shader_source
#ifndef GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0
#endif //GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetTranslatedShaderSourceANGLE
#define GL_ALT_FUNDEF_GetTranslatedShaderSourceANGLE
typedef void (*PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_ALT)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetTranslatedShaderSourceANGLE(GLuint shader1,GLsizei bufsize1,GLsizei * length1,GLchar * source1)
{
#ifdef __cplusplus
	static PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_ALT fn=(PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_ALT)glaltGetProcAddressExtension("glGetTranslatedShaderSourceANGLE","GL_ANGLE_translated_shader_source");
#else
	static PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_ALT)glaltGetProcAddressExtension("glGetTranslatedShaderSourceANGLE","GL_ANGLE_translated_shader_source"); }
#endif
	 fn(shader1,bufsize1,length1,source1);
}
#endif
CGUARDEND

#endif

#ifndef GL_APPLE_copy_texture_levels
#define GL_APPLE_copy_texture_levels
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CopyTextureLevelsAPPLE
#define GL_ALT_FUNDEF_CopyTextureLevelsAPPLE
typedef void (*PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT)(GLuint,GLuint,GLint,GLsizei);
static inline void glCopyTextureLevelsAPPLE(GLuint destinationTexture1,GLuint sourceTexture1,GLint sourceBaseLevel1,GLsizei sourceLevelCount1)
{
#ifdef __cplusplus
	static PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT fn=(PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT)glaltGetProcAddressExtension("glCopyTextureLevelsAPPLE","GL_APPLE_copy_texture_levels");
#else
	static PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT)glaltGetProcAddressExtension("glCopyTextureLevelsAPPLE","GL_APPLE_copy_texture_levels"); }
#endif
	 fn(destinationTexture1,sourceTexture1,sourceBaseLevel1,sourceLevelCount1);
}
#endif
CGUARDEND

#endif

#ifndef GL_APPLE_framebuffer_multisample
#define GL_APPLE_framebuffer_multisample
#ifndef GL_DRAW_FRAMEBUFFER_BINDING_APPLE
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#endif //GL_DRAW_FRAMEBUFFER_BINDING_APPLE
#ifndef GL_READ_FRAMEBUFFER_APPLE
#define GL_READ_FRAMEBUFFER_APPLE 0x8CA8
#endif //GL_READ_FRAMEBUFFER_APPLE
#ifndef GL_DRAW_FRAMEBUFFER_APPLE
#define GL_DRAW_FRAMEBUFFER_APPLE 0x8CA9
#endif //GL_DRAW_FRAMEBUFFER_APPLE
#ifndef GL_READ_FRAMEBUFFER_BINDING_APPLE
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA
#endif //GL_READ_FRAMEBUFFER_BINDING_APPLE
#ifndef GL_RENDERBUFFER_SAMPLES_APPLE
#define GL_RENDERBUFFER_SAMPLES_APPLE 0x8CAB
#endif //GL_RENDERBUFFER_SAMPLES_APPLE
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#endif //GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE
#ifndef GL_MAX_SAMPLES_APPLE
#define GL_MAX_SAMPLES_APPLE 0x8D57
#endif //GL_MAX_SAMPLES_APPLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleAPPLE
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleAPPLE
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleAPPLE(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleAPPLE","GL_APPLE_framebuffer_multisample");
#else
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleAPPLE","GL_APPLE_framebuffer_multisample"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ResolveMultisampleFramebufferAPPLE
#define GL_ALT_FUNDEF_ResolveMultisampleFramebufferAPPLE
typedef void (*PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT)();
static inline void glResolveMultisampleFramebufferAPPLE()
{
#ifdef __cplusplus
	static PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT fn=(PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT)glaltGetProcAddressExtension("glResolveMultisampleFramebufferAPPLE","GL_APPLE_framebuffer_multisample");
#else
	static PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT)glaltGetProcAddressExtension("glResolveMultisampleFramebufferAPPLE","GL_APPLE_framebuffer_multisample"); }
#endif
	 fn();
}
#endif
CGUARDEND

#endif

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422
#ifndef GL_UNSIGNED_SHORT_8_8_APPLE
#define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#endif //GL_UNSIGNED_SHORT_8_8_APPLE
#ifndef GL_UNSIGNED_SHORT_8_8_REV_APPLE
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB
#endif //GL_UNSIGNED_SHORT_8_8_REV_APPLE
#ifndef GL_RGB_422_APPLE
#define GL_RGB_422_APPLE 0x8A1F
#endif //GL_RGB_422_APPLE
#ifndef GL_RGB_RAW_422_APPLE
#define GL_RGB_RAW_422_APPLE 0x8A51
#endif //GL_RGB_RAW_422_APPLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_APPLE_sync
#define GL_APPLE_sync
#ifndef GL_SYNC_FLUSH_COMMANDS_BIT_APPLE
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE 0x00000001
#endif //GL_SYNC_FLUSH_COMMANDS_BIT_APPLE
#ifndef GL_SYNC_OBJECT_APPLE
#define GL_SYNC_OBJECT_APPLE 0x8A53
#endif //GL_SYNC_OBJECT_APPLE
#ifndef GL_MAX_SERVER_WAIT_TIMEOUT_APPLE
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE 0x9111
#endif //GL_MAX_SERVER_WAIT_TIMEOUT_APPLE
#ifndef GL_OBJECT_TYPE_APPLE
#define GL_OBJECT_TYPE_APPLE 0x9112
#endif //GL_OBJECT_TYPE_APPLE
#ifndef GL_SYNC_CONDITION_APPLE
#define GL_SYNC_CONDITION_APPLE 0x9113
#endif //GL_SYNC_CONDITION_APPLE
#ifndef GL_SYNC_STATUS_APPLE
#define GL_SYNC_STATUS_APPLE 0x9114
#endif //GL_SYNC_STATUS_APPLE
#ifndef GL_SYNC_FLAGS_APPLE
#define GL_SYNC_FLAGS_APPLE 0x9115
#endif //GL_SYNC_FLAGS_APPLE
#ifndef GL_SYNC_FENCE_APPLE
#define GL_SYNC_FENCE_APPLE 0x9116
#endif //GL_SYNC_FENCE_APPLE
#ifndef GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE 0x9117
#endif //GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE
#ifndef GL_UNSIGNALED_APPLE
#define GL_UNSIGNALED_APPLE 0x9118
#endif //GL_UNSIGNALED_APPLE
#ifndef GL_SIGNALED_APPLE
#define GL_SIGNALED_APPLE 0x9119
#endif //GL_SIGNALED_APPLE
#ifndef GL_ALREADY_SIGNALED_APPLE
#define GL_ALREADY_SIGNALED_APPLE 0x911A
#endif //GL_ALREADY_SIGNALED_APPLE
#ifndef GL_TIMEOUT_EXPIRED_APPLE
#define GL_TIMEOUT_EXPIRED_APPLE 0x911B
#endif //GL_TIMEOUT_EXPIRED_APPLE
#ifndef GL_CONDITION_SATISFIED_APPLE
#define GL_CONDITION_SATISFIED_APPLE 0x911C
#endif //GL_CONDITION_SATISFIED_APPLE
#ifndef GL_WAIT_FAILED_APPLE
#define GL_WAIT_FAILED_APPLE 0x911D
#endif //GL_WAIT_FAILED_APPLE
#ifndef GL_TIMEOUT_IGNORED_APPLE
#define GL_TIMEOUT_IGNORED_APPLE 0xFFFFFFFFFFFFFFFF
#endif //GL_TIMEOUT_IGNORED_APPLE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ClientWaitSyncAPPLE
#define GL_ALT_FUNDEF_ClientWaitSyncAPPLE
typedef GLenum (*PFNGLCLIENTWAITSYNCAPPLEPROC_ALT)(GLsync,GLbitfield,GLuint64);
static inline GLenum glClientWaitSyncAPPLE(GLsync sync1,GLbitfield flags1,GLuint64 timeout1)
{
#ifdef __cplusplus
	static PFNGLCLIENTWAITSYNCAPPLEPROC_ALT fn=(PFNGLCLIENTWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glClientWaitSyncAPPLE","GL_APPLE_sync");
#else
	static PFNGLCLIENTWAITSYNCAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLIENTWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glClientWaitSyncAPPLE","GL_APPLE_sync"); }
#endif
	return fn(sync1,flags1,timeout1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DeleteSyncAPPLE
#define GL_ALT_FUNDEF_DeleteSyncAPPLE
typedef void (*PFNGLDELETESYNCAPPLEPROC_ALT)(GLsync);
static inline void glDeleteSyncAPPLE(GLsync sync1)
{
#ifdef __cplusplus
	static PFNGLDELETESYNCAPPLEPROC_ALT fn=(PFNGLDELETESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glDeleteSyncAPPLE","GL_APPLE_sync");
#else
	static PFNGLDELETESYNCAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glDeleteSyncAPPLE","GL_APPLE_sync"); }
#endif
	 fn(sync1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_FenceSyncAPPLE
#define GL_ALT_FUNDEF_FenceSyncAPPLE
typedef GLsync (*PFNGLFENCESYNCAPPLEPROC_ALT)(GLenum,GLbitfield);
static inline GLsync glFenceSyncAPPLE(GLenum condition1,GLbitfield flags1)
{
#ifdef __cplusplus
	static PFNGLFENCESYNCAPPLEPROC_ALT fn=(PFNGLFENCESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glFenceSyncAPPLE","GL_APPLE_sync");
#else
	static PFNGLFENCESYNCAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFENCESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glFenceSyncAPPLE","GL_APPLE_sync"); }
#endif
	return fn(condition1,flags1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetInteger64vAPPLE
#define GL_ALT_FUNDEF_GetInteger64vAPPLE
typedef void (*PFNGLGETINTEGER64VAPPLEPROC_ALT)(GLenum,GLint64 *);
static inline void glGetInteger64vAPPLE(GLenum pname1,GLint64 * params1)
{
#ifdef __cplusplus
	static PFNGLGETINTEGER64VAPPLEPROC_ALT fn=(PFNGLGETINTEGER64VAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetInteger64vAPPLE","GL_APPLE_sync");
#else
	static PFNGLGETINTEGER64VAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETINTEGER64VAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetInteger64vAPPLE","GL_APPLE_sync"); }
#endif
	 fn(pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetSyncivAPPLE
#define GL_ALT_FUNDEF_GetSyncivAPPLE
typedef void (*PFNGLGETSYNCIVAPPLEPROC_ALT)(GLsync,GLenum,GLsizei,GLsizei *,GLint *);
static inline void glGetSyncivAPPLE(GLsync sync1,GLenum pname1,GLsizei bufSize1,GLsizei * length1,GLint * values1)
{
#ifdef __cplusplus
	static PFNGLGETSYNCIVAPPLEPROC_ALT fn=(PFNGLGETSYNCIVAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetSyncivAPPLE","GL_APPLE_sync");
#else
	static PFNGLGETSYNCIVAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETSYNCIVAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetSyncivAPPLE","GL_APPLE_sync"); }
#endif
	 fn(sync1,pname1,bufSize1,length1,values1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_IsSyncAPPLE
#define GL_ALT_FUNDEF_IsSyncAPPLE
typedef GLboolean (*PFNGLISSYNCAPPLEPROC_ALT)(GLsync);
static inline GLboolean glIsSyncAPPLE(GLsync sync1)
{
#ifdef __cplusplus
	static PFNGLISSYNCAPPLEPROC_ALT fn=(PFNGLISSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glIsSyncAPPLE","GL_APPLE_sync");
#else
	static PFNGLISSYNCAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glIsSyncAPPLE","GL_APPLE_sync"); }
#endif
	return fn(sync1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_WaitSyncAPPLE
#define GL_ALT_FUNDEF_WaitSyncAPPLE
typedef void (*PFNGLWAITSYNCAPPLEPROC_ALT)(GLsync,GLbitfield,GLuint64);
static inline void glWaitSyncAPPLE(GLsync sync1,GLbitfield flags1,GLuint64 timeout1)
{
#ifdef __cplusplus
	static PFNGLWAITSYNCAPPLEPROC_ALT fn=(PFNGLWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glWaitSyncAPPLE","GL_APPLE_sync");
#else
	static PFNGLWAITSYNCAPPLEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glWaitSyncAPPLE","GL_APPLE_sync"); }
#endif
	 fn(sync1,flags1,timeout1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT 0x80E1
#endif //GL_BGRA_EXT
#ifndef GL_BGRA8_EXT
#define GL_BGRA8_EXT 0x93A1
#endif //GL_BGRA8_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level
#ifndef GL_TEXTURE_MAX_LEVEL_APPLE
#define GL_TEXTURE_MAX_LEVEL_APPLE 0x813D
#endif //GL_TEXTURE_MAX_LEVEL_APPLE
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ARM_mali_program_binary
#define GL_ARM_mali_program_binary
#ifndef GL_MALI_PROGRAM_BINARY_ARM
#define GL_MALI_PROGRAM_BINARY_ARM 0x8F61
#endif //GL_MALI_PROGRAM_BINARY_ARM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ARM_mali_shader_binary
#define GL_ARM_mali_shader_binary
#ifndef GL_MALI_SHADER_BINARY_ARM
#define GL_MALI_SHADER_BINARY_ARM 0x8F60
#endif //GL_MALI_SHADER_BINARY_ARM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ARM_shader_framebuffer_fetch
#define GL_ARM_shader_framebuffer_fetch
#ifndef GL_FETCH_PER_SAMPLE_ARM
#define GL_FETCH_PER_SAMPLE_ARM 0x8F65
#endif //GL_FETCH_PER_SAMPLE_ARM
#ifndef GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66
#endif //GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_ARM_shader_framebuffer_fetch_depth_stencil
#define GL_ARM_shader_framebuffer_fetch_depth_stencil
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_DMP_shader_binary
#define GL_DMP_shader_binary
#ifndef GL_SHADER_BINARY_DMP
#define GL_SHADER_BINARY_DMP 0x9250
#endif //GL_SHADER_BINARY_DMP
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax
#ifndef GL_FUNC_ADD_EXT
#define GL_FUNC_ADD_EXT 0x8006
#endif //GL_FUNC_ADD_EXT
#ifndef GL_MIN_EXT
#define GL_MIN_EXT 0x8007
#endif //GL_MIN_EXT
#ifndef GL_MAX_EXT
#define GL_MAX_EXT 0x8008
#endif //GL_MAX_EXT
#ifndef GL_BLEND_EQUATION_EXT
#define GL_BLEND_EQUATION_EXT 0x8009
#endif //GL_BLEND_EQUATION_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendEquationEXT
#define GL_ALT_FUNDEF_BlendEquationEXT
typedef void (*PFNGLBLENDEQUATIONEXTPROC_ALT)(GLenum);
static inline void glBlendEquationEXT(GLenum mode1)
{
#ifdef __cplusplus
	static PFNGLBLENDEQUATIONEXTPROC_ALT fn=(PFNGLBLENDEQUATIONEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationEXT","GL_EXT_blend_minmax");
#else
	static PFNGLBLENDEQUATIONEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDEQUATIONEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationEXT","GL_EXT_blend_minmax"); }
#endif
	 fn(mode1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_color_buffer_half_float
#define GL_EXT_color_buffer_half_float
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT 0x8211
#endif //GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT
#ifndef GL_R16F_EXT
#define GL_R16F_EXT 0x822D
#endif //GL_R16F_EXT
#ifndef GL_RG16F_EXT
#define GL_RG16F_EXT 0x822F
#endif //GL_RG16F_EXT
#ifndef GL_RGBA16F_EXT
#define GL_RGBA16F_EXT 0x881A
#endif //GL_RGBA16F_EXT
#ifndef GL_RGB16F_EXT
#define GL_RGB16F_EXT 0x881B
#endif //GL_RGB16F_EXT
#ifndef GL_UNSIGNED_NORMALIZED_EXT
#define GL_UNSIGNED_NORMALIZED_EXT 0x8C17
#endif //GL_UNSIGNED_NORMALIZED_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_copy_image
#define GL_EXT_copy_image
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CopyImageSubDataEXT
#define GL_ALT_FUNDEF_CopyImageSubDataEXT
typedef void (*PFNGLCOPYIMAGESUBDATAEXTPROC_ALT)(GLuint,GLenum,GLint,GLint,GLint,GLint,GLuint,GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei);
static inline void glCopyImageSubDataEXT(GLuint srcName1,GLenum srcTarget1,GLint srcLevel1,GLint srcX1,GLint srcY1,GLint srcZ1,GLuint dstName1,GLenum dstTarget1,GLint dstLevel1,GLint dstX1,GLint dstY1,GLint dstZ1,GLsizei srcWidth1,GLsizei srcHeight1,GLsizei srcDepth1)
{
#ifdef __cplusplus
	static PFNGLCOPYIMAGESUBDATAEXTPROC_ALT fn=(PFNGLCOPYIMAGESUBDATAEXTPROC_ALT)glaltGetProcAddressExtension("glCopyImageSubDataEXT","GL_EXT_copy_image");
#else
	static PFNGLCOPYIMAGESUBDATAEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOPYIMAGESUBDATAEXTPROC_ALT)glaltGetProcAddressExtension("glCopyImageSubDataEXT","GL_EXT_copy_image"); }
#endif
	 fn(srcName1,srcTarget1,srcLevel1,srcX1,srcY1,srcZ1,dstName1,dstTarget1,dstLevel1,dstX1,dstY1,dstZ1,srcWidth1,srcHeight1,srcDepth1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label
#ifndef GL_SAMPLER
#define GL_SAMPLER 0x82E6
#endif //GL_SAMPLER
#ifndef GL_PROGRAM_PIPELINE_OBJECT_EXT
#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F
#endif //GL_PROGRAM_PIPELINE_OBJECT_EXT
#ifndef GL_PROGRAM_OBJECT_EXT
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#endif //GL_PROGRAM_OBJECT_EXT
#ifndef GL_SHADER_OBJECT_EXT
#define GL_SHADER_OBJECT_EXT 0x8B48
#endif //GL_SHADER_OBJECT_EXT
#ifndef GL_TRANSFORM_FEEDBACK
#define GL_TRANSFORM_FEEDBACK 0x8E22
#endif //GL_TRANSFORM_FEEDBACK
#ifndef GL_BUFFER_OBJECT_EXT
#define GL_BUFFER_OBJECT_EXT 0x9151
#endif //GL_BUFFER_OBJECT_EXT
#ifndef GL_QUERY_OBJECT_EXT
#define GL_QUERY_OBJECT_EXT 0x9153
#endif //GL_QUERY_OBJECT_EXT
#ifndef GL_VERTEX_ARRAY_OBJECT_EXT
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154
#endif //GL_VERTEX_ARRAY_OBJECT_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetObjectLabelEXT
#define GL_ALT_FUNDEF_GetObjectLabelEXT
typedef void (*PFNGLGETOBJECTLABELEXTPROC_ALT)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetObjectLabelEXT(GLenum type1,GLuint object1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLGETOBJECTLABELEXTPROC_ALT fn=(PFNGLGETOBJECTLABELEXTPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabelEXT","GL_EXT_debug_label");
#else
	static PFNGLGETOBJECTLABELEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETOBJECTLABELEXTPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabelEXT","GL_EXT_debug_label"); }
#endif
	 fn(type1,object1,bufSize1,length1,label1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LabelObjectEXT
#define GL_ALT_FUNDEF_LabelObjectEXT
typedef void (*PFNGLLABELOBJECTEXTPROC_ALT)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void glLabelObjectEXT(GLenum type1,GLuint object1,GLsizei length1,const GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLLABELOBJECTEXTPROC_ALT fn=(PFNGLLABELOBJECTEXTPROC_ALT)glaltGetProcAddressExtension("glLabelObjectEXT","GL_EXT_debug_label");
#else
	static PFNGLLABELOBJECTEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLABELOBJECTEXTPROC_ALT)glaltGetProcAddressExtension("glLabelObjectEXT","GL_EXT_debug_label"); }
#endif
	 fn(type1,object1,length1,label1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_InsertEventMarkerEXT
#define GL_ALT_FUNDEF_InsertEventMarkerEXT
typedef void (*PFNGLINSERTEVENTMARKEREXTPROC_ALT)(GLsizei,const GLchar *);
static inline void glInsertEventMarkerEXT(GLsizei length1,const GLchar * marker1)
{
#ifdef __cplusplus
	static PFNGLINSERTEVENTMARKEREXTPROC_ALT fn=(PFNGLINSERTEVENTMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glInsertEventMarkerEXT","GL_EXT_debug_marker");
#else
	static PFNGLINSERTEVENTMARKEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLINSERTEVENTMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glInsertEventMarkerEXT","GL_EXT_debug_marker"); }
#endif
	 fn(length1,marker1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PopGroupMarkerEXT
#define GL_ALT_FUNDEF_PopGroupMarkerEXT
typedef void (*PFNGLPOPGROUPMARKEREXTPROC_ALT)();
static inline void glPopGroupMarkerEXT()
{
#ifdef __cplusplus
	static PFNGLPOPGROUPMARKEREXTPROC_ALT fn=(PFNGLPOPGROUPMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glPopGroupMarkerEXT","GL_EXT_debug_marker");
#else
	static PFNGLPOPGROUPMARKEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOPGROUPMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glPopGroupMarkerEXT","GL_EXT_debug_marker"); }
#endif
	 fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_PushGroupMarkerEXT
#define GL_ALT_FUNDEF_PushGroupMarkerEXT
typedef void (*PFNGLPUSHGROUPMARKEREXTPROC_ALT)(GLsizei,const GLchar *);
static inline void glPushGroupMarkerEXT(GLsizei length1,const GLchar * marker1)
{
#ifdef __cplusplus
	static PFNGLPUSHGROUPMARKEREXTPROC_ALT fn=(PFNGLPUSHGROUPMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glPushGroupMarkerEXT","GL_EXT_debug_marker");
#else
	static PFNGLPUSHGROUPMARKEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPUSHGROUPMARKEREXTPROC_ALT)glaltGetProcAddressExtension("glPushGroupMarkerEXT","GL_EXT_debug_marker"); }
#endif
	 fn(length1,marker1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_discard_framebuffer
#define GL_EXT_discard_framebuffer
#ifndef GL_COLOR_EXT
#define GL_COLOR_EXT 0x1800
#endif //GL_COLOR_EXT
#ifndef GL_DEPTH_EXT
#define GL_DEPTH_EXT 0x1801
#endif //GL_DEPTH_EXT
#ifndef GL_STENCIL_EXT
#define GL_STENCIL_EXT 0x1802
#endif //GL_STENCIL_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DiscardFramebufferEXT
#define GL_ALT_FUNDEF_DiscardFramebufferEXT
typedef void (*PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT)(GLenum,GLsizei,const GLenum *);
static inline void glDiscardFramebufferEXT(GLenum target1,GLsizei numAttachments1,const GLenum * attachments1)
{
#ifdef __cplusplus
	static PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT fn=(PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT)glaltGetProcAddressExtension("glDiscardFramebufferEXT","GL_EXT_discard_framebuffer");
#else
	static PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT)glaltGetProcAddressExtension("glDiscardFramebufferEXT","GL_EXT_discard_framebuffer"); }
#endif
	 fn(target1,numAttachments1,attachments1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_disjoint_timer_query
#define GL_EXT_disjoint_timer_query
#ifndef GL_QUERY_COUNTER_BITS_EXT
#define GL_QUERY_COUNTER_BITS_EXT 0x8864
#endif //GL_QUERY_COUNTER_BITS_EXT
#ifndef GL_CURRENT_QUERY_EXT
#define GL_CURRENT_QUERY_EXT 0x8865
#endif //GL_CURRENT_QUERY_EXT
#ifndef GL_QUERY_RESULT_EXT
#define GL_QUERY_RESULT_EXT 0x8866
#endif //GL_QUERY_RESULT_EXT
#ifndef GL_QUERY_RESULT_AVAILABLE_EXT
#define GL_QUERY_RESULT_AVAILABLE_EXT 0x8867
#endif //GL_QUERY_RESULT_AVAILABLE_EXT
#ifndef GL_TIME_ELAPSED_EXT
#define GL_TIME_ELAPSED_EXT 0x88BF
#endif //GL_TIME_ELAPSED_EXT
#ifndef GL_TIMESTAMP_EXT
#define GL_TIMESTAMP_EXT 0x8E28
#endif //GL_TIMESTAMP_EXT
#ifndef GL_GPU_DISJOINT_EXT
#define GL_GPU_DISJOINT_EXT 0x8FBB
#endif //GL_GPU_DISJOINT_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BeginQueryEXT
#define GL_ALT_FUNDEF_BeginQueryEXT
typedef void (*PFNGLBEGINQUERYEXTPROC_ALT)(GLenum,GLuint);
static inline void glBeginQueryEXT(GLenum target1,GLuint id1)
{
#ifdef __cplusplus
	static PFNGLBEGINQUERYEXTPROC_ALT fn=(PFNGLBEGINQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glBeginQueryEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLBEGINQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBEGINQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glBeginQueryEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(target1,id1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeleteQueriesEXT
#define GL_ALT_FUNDEF_DeleteQueriesEXT
typedef void (*PFNGLDELETEQUERIESEXTPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteQueriesEXT(GLsizei n1,const GLuint * ids1)
{
#ifdef __cplusplus
	static PFNGLDELETEQUERIESEXTPROC_ALT fn=(PFNGLDELETEQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteQueriesEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLDELETEQUERIESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteQueriesEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(n1,ids1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EndQueryEXT
#define GL_ALT_FUNDEF_EndQueryEXT
typedef void (*PFNGLENDQUERYEXTPROC_ALT)(GLenum);
static inline void glEndQueryEXT(GLenum target1)
{
#ifdef __cplusplus
	static PFNGLENDQUERYEXTPROC_ALT fn=(PFNGLENDQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glEndQueryEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLENDQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENDQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glEndQueryEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(target1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenQueriesEXT
#define GL_ALT_FUNDEF_GenQueriesEXT
typedef void (*PFNGLGENQUERIESEXTPROC_ALT)(GLsizei,GLuint *);
static inline void glGenQueriesEXT(GLsizei n1,GLuint * ids1)
{
#ifdef __cplusplus
	static PFNGLGENQUERIESEXTPROC_ALT fn=(PFNGLGENQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glGenQueriesEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGENQUERIESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glGenQueriesEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(n1,ids1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetQueryObjecti64vEXT
#define GL_ALT_FUNDEF_GetQueryObjecti64vEXT
typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC_ALT)(GLuint,GLenum,GLint64 *);
static inline void glGetQueryObjecti64vEXT(GLuint id1,GLenum pname1,GLint64 * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYOBJECTI64VEXTPROC_ALT fn=(PFNGLGETQUERYOBJECTI64VEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjecti64vEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGETQUERYOBJECTI64VEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYOBJECTI64VEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjecti64vEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(id1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetQueryObjectivEXT
#define GL_ALT_FUNDEF_GetQueryObjectivEXT
typedef void (*PFNGLGETQUERYOBJECTIVEXTPROC_ALT)(GLuint,GLenum,GLint *);
static inline void glGetQueryObjectivEXT(GLuint id1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYOBJECTIVEXTPROC_ALT fn=(PFNGLGETQUERYOBJECTIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectivEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGETQUERYOBJECTIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYOBJECTIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectivEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(id1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetQueryObjectui64vEXT
#define GL_ALT_FUNDEF_GetQueryObjectui64vEXT
typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC_ALT)(GLuint,GLenum,GLuint64 *);
static inline void glGetQueryObjectui64vEXT(GLuint id1,GLenum pname1,GLuint64 * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYOBJECTUI64VEXTPROC_ALT fn=(PFNGLGETQUERYOBJECTUI64VEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectui64vEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGETQUERYOBJECTUI64VEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYOBJECTUI64VEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectui64vEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(id1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetQueryObjectuivEXT
#define GL_ALT_FUNDEF_GetQueryObjectuivEXT
typedef void (*PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)(GLuint,GLenum,GLuint *);
static inline void glGetQueryObjectuivEXT(GLuint id1,GLenum pname1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYOBJECTUIVEXTPROC_ALT fn=(PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectuivEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGETQUERYOBJECTUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectuivEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(id1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetQueryivEXT
#define GL_ALT_FUNDEF_GetQueryivEXT
typedef void (*PFNGLGETQUERYIVEXTPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetQueryivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYIVEXTPROC_ALT fn=(PFNGLGETQUERYIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryivEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLGETQUERYIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryivEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsQueryEXT
#define GL_ALT_FUNDEF_IsQueryEXT
typedef GLboolean (*PFNGLISQUERYEXTPROC_ALT)(GLuint);
static inline GLboolean glIsQueryEXT(GLuint id1)
{
#ifdef __cplusplus
	static PFNGLISQUERYEXTPROC_ALT fn=(PFNGLISQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glIsQueryEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLISQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glIsQueryEXT","GL_EXT_disjoint_timer_query"); }
#endif
	return fn(id1);
}
#endif

#ifndef	GL_ALT_FUNDEF_QueryCounterEXT
#define GL_ALT_FUNDEF_QueryCounterEXT
typedef void (*PFNGLQUERYCOUNTEREXTPROC_ALT)(GLuint,GLenum);
static inline void glQueryCounterEXT(GLuint id1,GLenum target1)
{
#ifdef __cplusplus
	static PFNGLQUERYCOUNTEREXTPROC_ALT fn=(PFNGLQUERYCOUNTEREXTPROC_ALT)glaltGetProcAddressExtension("glQueryCounterEXT","GL_EXT_disjoint_timer_query");
#else
	static PFNGLQUERYCOUNTEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLQUERYCOUNTEREXTPROC_ALT)glaltGetProcAddressExtension("glQueryCounterEXT","GL_EXT_disjoint_timer_query"); }
#endif
	 fn(id1,target1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_draw_buffers
#define GL_EXT_draw_buffers
#ifndef GL_MAX_DRAW_BUFFERS_EXT
#define GL_MAX_DRAW_BUFFERS_EXT 0x8824
#endif //GL_MAX_DRAW_BUFFERS_EXT
#ifndef GL_DRAW_BUFFER0_EXT
#define GL_DRAW_BUFFER0_EXT 0x8825
#endif //GL_DRAW_BUFFER0_EXT
#ifndef GL_DRAW_BUFFER1_EXT
#define GL_DRAW_BUFFER1_EXT 0x8826
#endif //GL_DRAW_BUFFER1_EXT
#ifndef GL_DRAW_BUFFER2_EXT
#define GL_DRAW_BUFFER2_EXT 0x8827
#endif //GL_DRAW_BUFFER2_EXT
#ifndef GL_DRAW_BUFFER3_EXT
#define GL_DRAW_BUFFER3_EXT 0x8828
#endif //GL_DRAW_BUFFER3_EXT
#ifndef GL_DRAW_BUFFER4_EXT
#define GL_DRAW_BUFFER4_EXT 0x8829
#endif //GL_DRAW_BUFFER4_EXT
#ifndef GL_DRAW_BUFFER5_EXT
#define GL_DRAW_BUFFER5_EXT 0x882A
#endif //GL_DRAW_BUFFER5_EXT
#ifndef GL_DRAW_BUFFER6_EXT
#define GL_DRAW_BUFFER6_EXT 0x882B
#endif //GL_DRAW_BUFFER6_EXT
#ifndef GL_DRAW_BUFFER7_EXT
#define GL_DRAW_BUFFER7_EXT 0x882C
#endif //GL_DRAW_BUFFER7_EXT
#ifndef GL_DRAW_BUFFER8_EXT
#define GL_DRAW_BUFFER8_EXT 0x882D
#endif //GL_DRAW_BUFFER8_EXT
#ifndef GL_DRAW_BUFFER9_EXT
#define GL_DRAW_BUFFER9_EXT 0x882E
#endif //GL_DRAW_BUFFER9_EXT
#ifndef GL_DRAW_BUFFER10_EXT
#define GL_DRAW_BUFFER10_EXT 0x882F
#endif //GL_DRAW_BUFFER10_EXT
#ifndef GL_DRAW_BUFFER11_EXT
#define GL_DRAW_BUFFER11_EXT 0x8830
#endif //GL_DRAW_BUFFER11_EXT
#ifndef GL_DRAW_BUFFER12_EXT
#define GL_DRAW_BUFFER12_EXT 0x8831
#endif //GL_DRAW_BUFFER12_EXT
#ifndef GL_DRAW_BUFFER13_EXT
#define GL_DRAW_BUFFER13_EXT 0x8832
#endif //GL_DRAW_BUFFER13_EXT
#ifndef GL_DRAW_BUFFER14_EXT
#define GL_DRAW_BUFFER14_EXT 0x8833
#endif //GL_DRAW_BUFFER14_EXT
#ifndef GL_DRAW_BUFFER15_EXT
#define GL_DRAW_BUFFER15_EXT 0x8834
#endif //GL_DRAW_BUFFER15_EXT
#ifndef GL_MAX_COLOR_ATTACHMENTS_EXT
#define GL_MAX_COLOR_ATTACHMENTS_EXT 0x8CDF
#endif //GL_MAX_COLOR_ATTACHMENTS_EXT
#ifndef GL_COLOR_ATTACHMENT0_EXT
#define GL_COLOR_ATTACHMENT0_EXT 0x8CE0
#endif //GL_COLOR_ATTACHMENT0_EXT
#ifndef GL_COLOR_ATTACHMENT1_EXT
#define GL_COLOR_ATTACHMENT1_EXT 0x8CE1
#endif //GL_COLOR_ATTACHMENT1_EXT
#ifndef GL_COLOR_ATTACHMENT2_EXT
#define GL_COLOR_ATTACHMENT2_EXT 0x8CE2
#endif //GL_COLOR_ATTACHMENT2_EXT
#ifndef GL_COLOR_ATTACHMENT3_EXT
#define GL_COLOR_ATTACHMENT3_EXT 0x8CE3
#endif //GL_COLOR_ATTACHMENT3_EXT
#ifndef GL_COLOR_ATTACHMENT4_EXT
#define GL_COLOR_ATTACHMENT4_EXT 0x8CE4
#endif //GL_COLOR_ATTACHMENT4_EXT
#ifndef GL_COLOR_ATTACHMENT5_EXT
#define GL_COLOR_ATTACHMENT5_EXT 0x8CE5
#endif //GL_COLOR_ATTACHMENT5_EXT
#ifndef GL_COLOR_ATTACHMENT6_EXT
#define GL_COLOR_ATTACHMENT6_EXT 0x8CE6
#endif //GL_COLOR_ATTACHMENT6_EXT
#ifndef GL_COLOR_ATTACHMENT7_EXT
#define GL_COLOR_ATTACHMENT7_EXT 0x8CE7
#endif //GL_COLOR_ATTACHMENT7_EXT
#ifndef GL_COLOR_ATTACHMENT8_EXT
#define GL_COLOR_ATTACHMENT8_EXT 0x8CE8
#endif //GL_COLOR_ATTACHMENT8_EXT
#ifndef GL_COLOR_ATTACHMENT9_EXT
#define GL_COLOR_ATTACHMENT9_EXT 0x8CE9
#endif //GL_COLOR_ATTACHMENT9_EXT
#ifndef GL_COLOR_ATTACHMENT10_EXT
#define GL_COLOR_ATTACHMENT10_EXT 0x8CEA
#endif //GL_COLOR_ATTACHMENT10_EXT
#ifndef GL_COLOR_ATTACHMENT11_EXT
#define GL_COLOR_ATTACHMENT11_EXT 0x8CEB
#endif //GL_COLOR_ATTACHMENT11_EXT
#ifndef GL_COLOR_ATTACHMENT12_EXT
#define GL_COLOR_ATTACHMENT12_EXT 0x8CEC
#endif //GL_COLOR_ATTACHMENT12_EXT
#ifndef GL_COLOR_ATTACHMENT13_EXT
#define GL_COLOR_ATTACHMENT13_EXT 0x8CED
#endif //GL_COLOR_ATTACHMENT13_EXT
#ifndef GL_COLOR_ATTACHMENT14_EXT
#define GL_COLOR_ATTACHMENT14_EXT 0x8CEE
#endif //GL_COLOR_ATTACHMENT14_EXT
#ifndef GL_COLOR_ATTACHMENT15_EXT
#define GL_COLOR_ATTACHMENT15_EXT 0x8CEF
#endif //GL_COLOR_ATTACHMENT15_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawBuffersEXT
#define GL_ALT_FUNDEF_DrawBuffersEXT
typedef void (*PFNGLDRAWBUFFERSEXTPROC_ALT)(GLsizei,const GLenum *);
static inline void glDrawBuffersEXT(GLsizei n1,const GLenum * bufs1)
{
#ifdef __cplusplus
	static PFNGLDRAWBUFFERSEXTPROC_ALT fn=(PFNGLDRAWBUFFERSEXTPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersEXT","GL_EXT_draw_buffers");
#else
	static PFNGLDRAWBUFFERSEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWBUFFERSEXTPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersEXT","GL_EXT_draw_buffers"); }
#endif
	 fn(n1,bufs1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_draw_buffers_indexed
#define GL_EXT_draw_buffers_indexed
#ifndef GL_ZERO
#define GL_ZERO 0
#endif //GL_ZERO
#ifndef GL_SRC_COLOR
#define GL_SRC_COLOR 0x0300
#endif //GL_SRC_COLOR
#ifndef GL_ONE_MINUS_SRC_COLOR
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#endif //GL_ONE_MINUS_SRC_COLOR
#ifndef GL_SRC_ALPHA
#define GL_SRC_ALPHA 0x0302
#endif //GL_SRC_ALPHA
#ifndef GL_ONE_MINUS_SRC_ALPHA
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#endif //GL_ONE_MINUS_SRC_ALPHA
#ifndef GL_DST_ALPHA
#define GL_DST_ALPHA 0x0304
#endif //GL_DST_ALPHA
#ifndef GL_ONE_MINUS_DST_ALPHA
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#endif //GL_ONE_MINUS_DST_ALPHA
#ifndef GL_DST_COLOR
#define GL_DST_COLOR 0x0306
#endif //GL_DST_COLOR
#ifndef GL_ONE_MINUS_DST_COLOR
#define GL_ONE_MINUS_DST_COLOR 0x0307
#endif //GL_ONE_MINUS_DST_COLOR
#ifndef GL_SRC_ALPHA_SATURATE
#define GL_SRC_ALPHA_SATURATE 0x0308
#endif //GL_SRC_ALPHA_SATURATE
#ifndef GL_BLEND
#define GL_BLEND 0x0BE2
#endif //GL_BLEND
#ifndef GL_COLOR_WRITEMASK
#define GL_COLOR_WRITEMASK 0x0C23
#endif //GL_COLOR_WRITEMASK
#ifndef GL_CONSTANT_COLOR
#define GL_CONSTANT_COLOR 0x8001
#endif //GL_CONSTANT_COLOR
#ifndef GL_ONE_MINUS_CONSTANT_COLOR
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#endif //GL_ONE_MINUS_CONSTANT_COLOR
#ifndef GL_CONSTANT_ALPHA
#define GL_CONSTANT_ALPHA 0x8003
#endif //GL_CONSTANT_ALPHA
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#endif //GL_ONE_MINUS_CONSTANT_ALPHA
#ifndef GL_FUNC_ADD
#define GL_FUNC_ADD 0x8006
#endif //GL_FUNC_ADD
#ifndef GL_MIN
#define GL_MIN 0x8007
#endif //GL_MIN
#ifndef GL_MAX
#define GL_MAX 0x8008
#endif //GL_MAX
#ifndef GL_BLEND_EQUATION_RGB
#define GL_BLEND_EQUATION_RGB 0x8009
#endif //GL_BLEND_EQUATION_RGB
#ifndef GL_FUNC_SUBTRACT
#define GL_FUNC_SUBTRACT 0x800A
#endif //GL_FUNC_SUBTRACT
#ifndef GL_FUNC_REVERSE_SUBTRACT
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif //GL_FUNC_REVERSE_SUBTRACT
#ifndef GL_BLEND_DST_RGB
#define GL_BLEND_DST_RGB 0x80C8
#endif //GL_BLEND_DST_RGB
#ifndef GL_BLEND_SRC_RGB
#define GL_BLEND_SRC_RGB 0x80C9
#endif //GL_BLEND_SRC_RGB
#ifndef GL_BLEND_DST_ALPHA
#define GL_BLEND_DST_ALPHA 0x80CA
#endif //GL_BLEND_DST_ALPHA
#ifndef GL_BLEND_SRC_ALPHA
#define GL_BLEND_SRC_ALPHA 0x80CB
#endif //GL_BLEND_SRC_ALPHA
#ifndef GL_BLEND_EQUATION_ALPHA
#define GL_BLEND_EQUATION_ALPHA 0x883D
#endif //GL_BLEND_EQUATION_ALPHA
#ifndef GL_ONE
#define GL_ONE 1
#endif //GL_ONE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendEquationSeparateiEXT
#define GL_ALT_FUNDEF_BlendEquationSeparateiEXT
typedef void (*PFNGLBLENDEQUATIONSEPARATEIEXTPROC_ALT)(GLuint,GLenum,GLenum);
static inline void glBlendEquationSeparateiEXT(GLuint buf1,GLenum modeRGB1,GLenum modeAlpha1)
{
#ifdef __cplusplus
	static PFNGLBLENDEQUATIONSEPARATEIEXTPROC_ALT fn=(PFNGLBLENDEQUATIONSEPARATEIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationSeparateiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLBLENDEQUATIONSEPARATEIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDEQUATIONSEPARATEIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationSeparateiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(buf1,modeRGB1,modeAlpha1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_BlendEquationiEXT
#define GL_ALT_FUNDEF_BlendEquationiEXT
typedef void (*PFNGLBLENDEQUATIONIEXTPROC_ALT)(GLuint,GLenum);
static inline void glBlendEquationiEXT(GLuint buf1,GLenum mode1)
{
#ifdef __cplusplus
	static PFNGLBLENDEQUATIONIEXTPROC_ALT fn=(PFNGLBLENDEQUATIONIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLBLENDEQUATIONIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDEQUATIONIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(buf1,mode1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_BlendFuncSeparateiEXT
#define GL_ALT_FUNDEF_BlendFuncSeparateiEXT
typedef void (*PFNGLBLENDFUNCSEPARATEIEXTPROC_ALT)(GLuint,GLenum,GLenum,GLenum,GLenum);
static inline void glBlendFuncSeparateiEXT(GLuint buf1,GLenum srcRGB1,GLenum dstRGB1,GLenum srcAlpha1,GLenum dstAlpha1)
{
#ifdef __cplusplus
	static PFNGLBLENDFUNCSEPARATEIEXTPROC_ALT fn=(PFNGLBLENDFUNCSEPARATEIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendFuncSeparateiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLBLENDFUNCSEPARATEIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDFUNCSEPARATEIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendFuncSeparateiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(buf1,srcRGB1,dstRGB1,srcAlpha1,dstAlpha1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_BlendFunciEXT
#define GL_ALT_FUNDEF_BlendFunciEXT
typedef void (*PFNGLBLENDFUNCIEXTPROC_ALT)(GLuint,GLenum,GLenum);
static inline void glBlendFunciEXT(GLuint buf1,GLenum src1,GLenum dst1)
{
#ifdef __cplusplus
	static PFNGLBLENDFUNCIEXTPROC_ALT fn=(PFNGLBLENDFUNCIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendFunciEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLBLENDFUNCIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDFUNCIEXTPROC_ALT)glaltGetProcAddressExtension("glBlendFunciEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(buf1,src1,dst1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ColorMaskiEXT
#define GL_ALT_FUNDEF_ColorMaskiEXT
typedef void (*PFNGLCOLORMASKIEXTPROC_ALT)(GLuint,GLboolean,GLboolean,GLboolean,GLboolean);
static inline void glColorMaskiEXT(GLuint index1,GLboolean r1,GLboolean g1,GLboolean b1,GLboolean a1)
{
#ifdef __cplusplus
	static PFNGLCOLORMASKIEXTPROC_ALT fn=(PFNGLCOLORMASKIEXTPROC_ALT)glaltGetProcAddressExtension("glColorMaskiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLCOLORMASKIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOLORMASKIEXTPROC_ALT)glaltGetProcAddressExtension("glColorMaskiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(index1,r1,g1,b1,a1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DisableiEXT
#define GL_ALT_FUNDEF_DisableiEXT
typedef void (*PFNGLDISABLEIEXTPROC_ALT)(GLenum,GLuint);
static inline void glDisableiEXT(GLenum target1,GLuint index1)
{
#ifdef __cplusplus
	static PFNGLDISABLEIEXTPROC_ALT fn=(PFNGLDISABLEIEXTPROC_ALT)glaltGetProcAddressExtension("glDisableiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLDISABLEIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDISABLEIEXTPROC_ALT)glaltGetProcAddressExtension("glDisableiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(target1,index1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_EnableiEXT
#define GL_ALT_FUNDEF_EnableiEXT
typedef void (*PFNGLENABLEIEXTPROC_ALT)(GLenum,GLuint);
static inline void glEnableiEXT(GLenum target1,GLuint index1)
{
#ifdef __cplusplus
	static PFNGLENABLEIEXTPROC_ALT fn=(PFNGLENABLEIEXTPROC_ALT)glaltGetProcAddressExtension("glEnableiEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLENABLEIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENABLEIEXTPROC_ALT)glaltGetProcAddressExtension("glEnableiEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	 fn(target1,index1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_IsEnablediEXT
#define GL_ALT_FUNDEF_IsEnablediEXT
typedef GLboolean (*PFNGLISENABLEDIEXTPROC_ALT)(GLenum,GLuint);
static inline GLboolean glIsEnablediEXT(GLenum target1,GLuint index1)
{
#ifdef __cplusplus
	static PFNGLISENABLEDIEXTPROC_ALT fn=(PFNGLISENABLEDIEXTPROC_ALT)glaltGetProcAddressExtension("glIsEnablediEXT","GL_EXT_draw_buffers_indexed");
#else
	static PFNGLISENABLEDIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISENABLEDIEXTPROC_ALT)glaltGetProcAddressExtension("glIsEnablediEXT","GL_EXT_draw_buffers_indexed"); }
#endif
	return fn(target1,index1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawArraysInstancedEXT
#define GL_ALT_FUNDEF_DrawArraysInstancedEXT
typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)(GLenum,GLint,GLsizei,GLsizei);
static inline void glDrawArraysInstancedEXT(GLenum mode1,GLint start1,GLsizei count1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT fn=(PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedEXT","GL_EXT_draw_instanced");
#else
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedEXT","GL_EXT_draw_instanced"); }
#endif
	 fn(mode1,start1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DrawElementsInstancedEXT
#define GL_ALT_FUNDEF_DrawElementsInstancedEXT
typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void glDrawElementsInstancedEXT(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT fn=(PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedEXT","GL_EXT_draw_instanced");
#else
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedEXT","GL_EXT_draw_instanced"); }
#endif
	 fn(mode1,count1,type1,indices1,primcount1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_geometry_point_size
#define GL_EXT_geometry_point_size
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_geometry_shader
#define GL_EXT_geometry_shader
#ifndef GL_GEOMETRY_SHADER_BIT_EXT
#define GL_GEOMETRY_SHADER_BIT_EXT 0x00000004
#endif //GL_GEOMETRY_SHADER_BIT_EXT
#ifndef GL_LINES_ADJACENCY_EXT
#define GL_LINES_ADJACENCY_EXT 0x000A
#endif //GL_LINES_ADJACENCY_EXT
#ifndef GL_LINE_STRIP_ADJACENCY_EXT
#define GL_LINE_STRIP_ADJACENCY_EXT 0x000B
#endif //GL_LINE_STRIP_ADJACENCY_EXT
#ifndef GL_TRIANGLES_ADJACENCY_EXT
#define GL_TRIANGLES_ADJACENCY_EXT 0x000C
#endif //GL_TRIANGLES_ADJACENCY_EXT
#ifndef GL_TRIANGLE_STRIP_ADJACENCY_EXT
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT 0x000D
#endif //GL_TRIANGLE_STRIP_ADJACENCY_EXT
#ifndef GL_LAYER_PROVOKING_VERTEX_EXT
#define GL_LAYER_PROVOKING_VERTEX_EXT 0x825E
#endif //GL_LAYER_PROVOKING_VERTEX_EXT
#ifndef GL_UNDEFINED_VERTEX_EXT
#define GL_UNDEFINED_VERTEX_EXT 0x8260
#endif //GL_UNDEFINED_VERTEX_EXT
#ifndef GL_GEOMETRY_SHADER_INVOCATIONS_EXT
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT 0x887F
#endif //GL_GEOMETRY_SHADER_INVOCATIONS_EXT
#ifndef GL_GEOMETRY_LINKED_VERTICES_OUT_EXT
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT 0x8916
#endif //GL_GEOMETRY_LINKED_VERTICES_OUT_EXT
#ifndef GL_GEOMETRY_LINKED_INPUT_TYPE_EXT
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT 0x8917
#endif //GL_GEOMETRY_LINKED_INPUT_TYPE_EXT
#ifndef GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT 0x8918
#endif //GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT
#ifndef GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT 0x8A2C
#endif //GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT
#ifndef GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8A32
#endif //GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT
#ifndef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#endif //GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT
#ifndef GL_PRIMITIVES_GENERATED_EXT
#define GL_PRIMITIVES_GENERATED_EXT 0x8C87
#endif //GL_PRIMITIVES_GENERATED_EXT
#ifndef GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#endif //GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#endif //GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT
#ifndef GL_GEOMETRY_SHADER_EXT
#define GL_GEOMETRY_SHADER_EXT 0x8DD9
#endif //GL_GEOMETRY_SHADER_EXT
#ifndef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#endif //GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT
#ifndef GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#endif //GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT
#ifndef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#endif //GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT
#ifndef GL_FIRST_VERTEX_CONVENTION_EXT
#define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#endif //GL_FIRST_VERTEX_CONVENTION_EXT
#ifndef GL_LAST_VERTEX_CONVENTION_EXT
#define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#endif //GL_LAST_VERTEX_CONVENTION_EXT
#ifndef GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT 0x8E5A
#endif //GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT
#ifndef GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT 0x90CD
#endif //GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT
#ifndef GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT 0x90D7
#endif //GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT
#ifndef GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT 0x9123
#endif //GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT
#ifndef GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT 0x9124
#endif //GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT
#ifndef GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT 0x92CF
#endif //GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT
#ifndef GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT 0x92D5
#endif //GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT
#ifndef GL_REFERENCED_BY_GEOMETRY_SHADER_EXT
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT 0x9309
#endif //GL_REFERENCED_BY_GEOMETRY_SHADER_EXT
#ifndef GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT 0x9312
#endif //GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT
#ifndef GL_MAX_FRAMEBUFFER_LAYERS_EXT
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT 0x9317
#endif //GL_MAX_FRAMEBUFFER_LAYERS_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_FramebufferTextureEXT
#define GL_ALT_FUNDEF_FramebufferTextureEXT
typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC_ALT)(GLenum,GLenum,GLuint,GLint);
static inline void glFramebufferTextureEXT(GLenum target1,GLenum attachment1,GLuint texture1,GLint level1)
{
#ifdef __cplusplus
	static PFNGLFRAMEBUFFERTEXTUREEXTPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTUREEXTPROC_ALT)glaltGetProcAddressExtension("glFramebufferTextureEXT","GL_EXT_geometry_shader");
#else
	static PFNGLFRAMEBUFFERTEXTUREEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRAMEBUFFERTEXTUREEXTPROC_ALT)glaltGetProcAddressExtension("glFramebufferTextureEXT","GL_EXT_geometry_shader"); }
#endif
	 fn(target1,attachment1,texture1,level1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_gpu_shader5
#define GL_EXT_gpu_shader5
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_instanced_arrays
#define GL_EXT_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawArraysInstancedEXT
#define GL_ALT_FUNDEF_DrawArraysInstancedEXT
typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)(GLenum,GLint,GLsizei,GLsizei);
static inline void glDrawArraysInstancedEXT(GLenum mode1,GLint start1,GLsizei count1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT fn=(PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedEXT","GL_EXT_instanced_arrays");
#else
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWARRAYSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedEXT","GL_EXT_instanced_arrays"); }
#endif
	 fn(mode1,start1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DrawElementsInstancedEXT
#define GL_ALT_FUNDEF_DrawElementsInstancedEXT
typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void glDrawElementsInstancedEXT(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT fn=(PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedEXT","GL_EXT_instanced_arrays");
#else
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWELEMENTSINSTANCEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedEXT","GL_EXT_instanced_arrays"); }
#endif
	 fn(mode1,count1,type1,indices1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_VertexAttribDivisorEXT
#define GL_ALT_FUNDEF_VertexAttribDivisorEXT
typedef void (*PFNGLVERTEXATTRIBDIVISOREXTPROC_ALT)(GLuint,GLuint);
static inline void glVertexAttribDivisorEXT(GLuint index1,GLuint divisor1)
{
#ifdef __cplusplus
	static PFNGLVERTEXATTRIBDIVISOREXTPROC_ALT fn=(PFNGLVERTEXATTRIBDIVISOREXTPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorEXT","GL_EXT_instanced_arrays");
#else
	static PFNGLVERTEXATTRIBDIVISOREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLVERTEXATTRIBDIVISOREXTPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorEXT","GL_EXT_instanced_arrays"); }
#endif
	 fn(index1,divisor1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_map_buffer_range
#define GL_EXT_map_buffer_range
#ifndef GL_MAP_READ_BIT_EXT
#define GL_MAP_READ_BIT_EXT 0x0001
#endif //GL_MAP_READ_BIT_EXT
#ifndef GL_MAP_WRITE_BIT_EXT
#define GL_MAP_WRITE_BIT_EXT 0x0002
#endif //GL_MAP_WRITE_BIT_EXT
#ifndef GL_MAP_INVALIDATE_RANGE_BIT_EXT
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT 0x0004
#endif //GL_MAP_INVALIDATE_RANGE_BIT_EXT
#ifndef GL_MAP_INVALIDATE_BUFFER_BIT_EXT
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT 0x0008
#endif //GL_MAP_INVALIDATE_BUFFER_BIT_EXT
#ifndef GL_MAP_FLUSH_EXPLICIT_BIT_EXT
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT 0x0010
#endif //GL_MAP_FLUSH_EXPLICIT_BIT_EXT
#ifndef GL_MAP_UNSYNCHRONIZED_BIT_EXT
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT 0x0020
#endif //GL_MAP_UNSYNCHRONIZED_BIT_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_FlushMappedBufferRangeEXT
#define GL_ALT_FUNDEF_FlushMappedBufferRangeEXT
typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT)(GLenum,GLintptr,GLsizeiptr);
static inline void glFlushMappedBufferRangeEXT(GLenum target1,GLintptr offset1,GLsizeiptr length1)
{
#ifdef __cplusplus
	static PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT fn=(PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glFlushMappedBufferRangeEXT","GL_EXT_map_buffer_range");
#else
	static PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glFlushMappedBufferRangeEXT","GL_EXT_map_buffer_range"); }
#endif
	 fn(target1,offset1,length1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MapBufferRangeEXT
#define GL_ALT_FUNDEF_MapBufferRangeEXT
typedef void * (*PFNGLMAPBUFFERRANGEEXTPROC_ALT)(GLenum,GLintptr,GLsizeiptr,GLbitfield);
static inline void * glMapBufferRangeEXT(GLenum target1,GLintptr offset1,GLsizeiptr length1,GLbitfield access1)
{
#ifdef __cplusplus
	static PFNGLMAPBUFFERRANGEEXTPROC_ALT fn=(PFNGLMAPBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glMapBufferRangeEXT","GL_EXT_map_buffer_range");
#else
	static PFNGLMAPBUFFERRANGEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMAPBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glMapBufferRangeEXT","GL_EXT_map_buffer_range"); }
#endif
	return fn(target1,offset1,length1,access1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_MultiDrawArraysEXT
#define GL_ALT_FUNDEF_MultiDrawArraysEXT
typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC_ALT)(GLenum,const GLint *,const GLsizei *,GLsizei);
static inline void glMultiDrawArraysEXT(GLenum mode1,const GLint * first1,const GLsizei * count1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLMULTIDRAWARRAYSEXTPROC_ALT fn=(PFNGLMULTIDRAWARRAYSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawArraysEXT","GL_EXT_multi_draw_arrays");
#else
	static PFNGLMULTIDRAWARRAYSEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMULTIDRAWARRAYSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawArraysEXT","GL_EXT_multi_draw_arrays"); }
#endif
	 fn(mode1,first1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MultiDrawElementsEXT
#define GL_ALT_FUNDEF_MultiDrawElementsEXT
typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC_ALT)(GLenum,const GLsizei *,GLenum,const void *const*,GLsizei);
static inline void glMultiDrawElementsEXT(GLenum mode1,const GLsizei * count1,GLenum type1,const void *const* indices1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLMULTIDRAWELEMENTSEXTPROC_ALT fn=(PFNGLMULTIDRAWELEMENTSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawElementsEXT","GL_EXT_multi_draw_arrays");
#else
	static PFNGLMULTIDRAWELEMENTSEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMULTIDRAWELEMENTSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawElementsEXT","GL_EXT_multi_draw_arrays"); }
#endif
	 fn(mode1,count1,type1,indices1,primcount1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_multisampled_render_to_texture
#define GL_EXT_multisampled_render_to_texture
#ifndef GL_RENDERBUFFER_SAMPLES_EXT
#define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#endif //GL_RENDERBUFFER_SAMPLES_EXT
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#endif //GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT
#ifndef GL_MAX_SAMPLES_EXT
#define GL_MAX_SAMPLES_EXT 0x8D57
#endif //GL_MAX_SAMPLES_EXT
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_FramebufferTexture2DMultisampleEXT
#define GL_ALT_FUNDEF_FramebufferTexture2DMultisampleEXT
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT)(GLenum,GLenum,GLenum,GLuint,GLint,GLsizei);
static inline void glFramebufferTexture2DMultisampleEXT(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLsizei samples1)
{
#ifdef __cplusplus
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleEXT","GL_EXT_multisampled_render_to_texture");
#else
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleEXT","GL_EXT_multisampled_render_to_texture"); }
#endif
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleEXT(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleEXT","GL_EXT_multisampled_render_to_texture");
#else
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleEXT","GL_EXT_multisampled_render_to_texture"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_multiview_draw_buffers
#define GL_EXT_multiview_draw_buffers
#ifndef GL_DRAW_BUFFER_EXT
#define GL_DRAW_BUFFER_EXT 0x0C01
#endif //GL_DRAW_BUFFER_EXT
#ifndef GL_READ_BUFFER_EXT
#define GL_READ_BUFFER_EXT 0x0C02
#endif //GL_READ_BUFFER_EXT
#ifndef GL_COLOR_ATTACHMENT_EXT
#define GL_COLOR_ATTACHMENT_EXT 0x90F0
#endif //GL_COLOR_ATTACHMENT_EXT
#ifndef GL_MULTIVIEW_EXT
#define GL_MULTIVIEW_EXT 0x90F1
#endif //GL_MULTIVIEW_EXT
#ifndef GL_MAX_MULTIVIEW_BUFFERS_EXT
#define GL_MAX_MULTIVIEW_BUFFERS_EXT 0x90F2
#endif //GL_MAX_MULTIVIEW_BUFFERS_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawBuffersIndexedEXT
#define GL_ALT_FUNDEF_DrawBuffersIndexedEXT
typedef void (*PFNGLDRAWBUFFERSINDEXEDEXTPROC_ALT)(GLint,const GLenum *,const GLint *);
static inline void glDrawBuffersIndexedEXT(GLint n1,const GLenum * location1,const GLint * indices1)
{
#ifdef __cplusplus
	static PFNGLDRAWBUFFERSINDEXEDEXTPROC_ALT fn=(PFNGLDRAWBUFFERSINDEXEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersIndexedEXT","GL_EXT_multiview_draw_buffers");
#else
	static PFNGLDRAWBUFFERSINDEXEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWBUFFERSINDEXEDEXTPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersIndexedEXT","GL_EXT_multiview_draw_buffers"); }
#endif
	 fn(n1,location1,indices1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetIntegeri_vEXT
#define GL_ALT_FUNDEF_GetIntegeri_vEXT
typedef void (*PFNGLGETINTEGERI_VEXTPROC_ALT)(GLenum,GLuint,GLint *);
static inline void glGetIntegeri_vEXT(GLenum target1,GLuint index1,GLint * data1)
{
#ifdef __cplusplus
	static PFNGLGETINTEGERI_VEXTPROC_ALT fn=(PFNGLGETINTEGERI_VEXTPROC_ALT)glaltGetProcAddressExtension("glGetIntegeri_vEXT","GL_EXT_multiview_draw_buffers");
#else
	static PFNGLGETINTEGERI_VEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETINTEGERI_VEXTPROC_ALT)glaltGetProcAddressExtension("glGetIntegeri_vEXT","GL_EXT_multiview_draw_buffers"); }
#endif
	 fn(target1,index1,data1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ReadBufferIndexedEXT
#define GL_ALT_FUNDEF_ReadBufferIndexedEXT
typedef void (*PFNGLREADBUFFERINDEXEDEXTPROC_ALT)(GLenum,GLint);
static inline void glReadBufferIndexedEXT(GLenum src1,GLint index1)
{
#ifdef __cplusplus
	static PFNGLREADBUFFERINDEXEDEXTPROC_ALT fn=(PFNGLREADBUFFERINDEXEDEXTPROC_ALT)glaltGetProcAddressExtension("glReadBufferIndexedEXT","GL_EXT_multiview_draw_buffers");
#else
	static PFNGLREADBUFFERINDEXEDEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLREADBUFFERINDEXEDEXTPROC_ALT)glaltGetProcAddressExtension("glReadBufferIndexedEXT","GL_EXT_multiview_draw_buffers"); }
#endif
	 fn(src1,index1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_occlusion_query_boolean
#define GL_EXT_occlusion_query_boolean
#ifndef GL_CURRENT_QUERY_EXT
#define GL_CURRENT_QUERY_EXT 0x8865
#endif //GL_CURRENT_QUERY_EXT
#ifndef GL_QUERY_RESULT_EXT
#define GL_QUERY_RESULT_EXT 0x8866
#endif //GL_QUERY_RESULT_EXT
#ifndef GL_QUERY_RESULT_AVAILABLE_EXT
#define GL_QUERY_RESULT_AVAILABLE_EXT 0x8867
#endif //GL_QUERY_RESULT_AVAILABLE_EXT
#ifndef GL_ANY_SAMPLES_PASSED_EXT
#define GL_ANY_SAMPLES_PASSED_EXT 0x8C2F
#endif //GL_ANY_SAMPLES_PASSED_EXT
#ifndef GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT 0x8D6A
#endif //GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BeginQueryEXT
#define GL_ALT_FUNDEF_BeginQueryEXT
typedef void (*PFNGLBEGINQUERYEXTPROC_ALT)(GLenum,GLuint);
static inline void glBeginQueryEXT(GLenum target1,GLuint id1)
{
#ifdef __cplusplus
	static PFNGLBEGINQUERYEXTPROC_ALT fn=(PFNGLBEGINQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glBeginQueryEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLBEGINQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBEGINQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glBeginQueryEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(target1,id1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeleteQueriesEXT
#define GL_ALT_FUNDEF_DeleteQueriesEXT
typedef void (*PFNGLDELETEQUERIESEXTPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteQueriesEXT(GLsizei n1,const GLuint * ids1)
{
#ifdef __cplusplus
	static PFNGLDELETEQUERIESEXTPROC_ALT fn=(PFNGLDELETEQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteQueriesEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLDELETEQUERIESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteQueriesEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(n1,ids1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EndQueryEXT
#define GL_ALT_FUNDEF_EndQueryEXT
typedef void (*PFNGLENDQUERYEXTPROC_ALT)(GLenum);
static inline void glEndQueryEXT(GLenum target1)
{
#ifdef __cplusplus
	static PFNGLENDQUERYEXTPROC_ALT fn=(PFNGLENDQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glEndQueryEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLENDQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENDQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glEndQueryEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(target1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenQueriesEXT
#define GL_ALT_FUNDEF_GenQueriesEXT
typedef void (*PFNGLGENQUERIESEXTPROC_ALT)(GLsizei,GLuint *);
static inline void glGenQueriesEXT(GLsizei n1,GLuint * ids1)
{
#ifdef __cplusplus
	static PFNGLGENQUERIESEXTPROC_ALT fn=(PFNGLGENQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glGenQueriesEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLGENQUERIESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENQUERIESEXTPROC_ALT)glaltGetProcAddressExtension("glGenQueriesEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(n1,ids1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetQueryObjectuivEXT
#define GL_ALT_FUNDEF_GetQueryObjectuivEXT
typedef void (*PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)(GLuint,GLenum,GLuint *);
static inline void glGetQueryObjectuivEXT(GLuint id1,GLenum pname1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYOBJECTUIVEXTPROC_ALT fn=(PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectuivEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLGETQUERYOBJECTUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYOBJECTUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryObjectuivEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(id1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetQueryivEXT
#define GL_ALT_FUNDEF_GetQueryivEXT
typedef void (*PFNGLGETQUERYIVEXTPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetQueryivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETQUERYIVEXTPROC_ALT fn=(PFNGLGETQUERYIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryivEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLGETQUERYIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETQUERYIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetQueryivEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsQueryEXT
#define GL_ALT_FUNDEF_IsQueryEXT
typedef GLboolean (*PFNGLISQUERYEXTPROC_ALT)(GLuint);
static inline GLboolean glIsQueryEXT(GLuint id1)
{
#ifdef __cplusplus
	static PFNGLISQUERYEXTPROC_ALT fn=(PFNGLISQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glIsQueryEXT","GL_EXT_occlusion_query_boolean");
#else
	static PFNGLISQUERYEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISQUERYEXTPROC_ALT)glaltGetProcAddressExtension("glIsQueryEXT","GL_EXT_occlusion_query_boolean"); }
#endif
	return fn(id1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_primitive_bounding_box
#define GL_EXT_primitive_bounding_box
#ifndef GL_PRIMITIVE_BOUNDING_BOX_EXT
#define GL_PRIMITIVE_BOUNDING_BOX_EXT 0x92BE
#endif //GL_PRIMITIVE_BOUNDING_BOX_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_PrimitiveBoundingBoxEXT
#define GL_ALT_FUNDEF_PrimitiveBoundingBoxEXT
typedef void (*PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glPrimitiveBoundingBoxEXT(GLfloat minX1,GLfloat minY1,GLfloat minZ1,GLfloat minW1,GLfloat maxX1,GLfloat maxY1,GLfloat maxZ1,GLfloat maxW1)
{
#ifdef __cplusplus
	static PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_ALT fn=(PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_ALT)glaltGetProcAddressExtension("glPrimitiveBoundingBoxEXT","GL_EXT_primitive_bounding_box");
#else
	static PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_ALT)glaltGetProcAddressExtension("glPrimitiveBoundingBoxEXT","GL_EXT_primitive_bounding_box"); }
#endif
	 fn(minX1,minY1,minZ1,minW1,maxX1,maxY1,maxZ1,maxW1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_pvrtc_sRGB
#define GL_EXT_pvrtc_sRGB
#ifndef GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT
#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT 0x8A54
#endif //GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT
#ifndef GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT 0x8A55
#endif //GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT
#ifndef GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT 0x8A56
#endif //GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT
#ifndef GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT 0x8A57
#endif //GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT
#ifndef GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG 0x93F0
#endif //GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG
#ifndef GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG 0x93F1
#endif //GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_read_format_bgra
#define GL_EXT_read_format_bgra
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT 0x80E1
#endif //GL_BGRA_EXT
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#endif //GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT
#ifndef GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366
#endif //GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_robustness
#define GL_EXT_robustness
#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif //GL_NO_ERROR
#ifndef GL_LOSE_CONTEXT_ON_RESET_EXT
#define GL_LOSE_CONTEXT_ON_RESET_EXT 0x8252
#endif //GL_LOSE_CONTEXT_ON_RESET_EXT
#ifndef GL_GUILTY_CONTEXT_RESET_EXT
#define GL_GUILTY_CONTEXT_RESET_EXT 0x8253
#endif //GL_GUILTY_CONTEXT_RESET_EXT
#ifndef GL_INNOCENT_CONTEXT_RESET_EXT
#define GL_INNOCENT_CONTEXT_RESET_EXT 0x8254
#endif //GL_INNOCENT_CONTEXT_RESET_EXT
#ifndef GL_UNKNOWN_CONTEXT_RESET_EXT
#define GL_UNKNOWN_CONTEXT_RESET_EXT 0x8255
#endif //GL_UNKNOWN_CONTEXT_RESET_EXT
#ifndef GL_RESET_NOTIFICATION_STRATEGY_EXT
#define GL_RESET_NOTIFICATION_STRATEGY_EXT 0x8256
#endif //GL_RESET_NOTIFICATION_STRATEGY_EXT
#ifndef GL_NO_RESET_NOTIFICATION_EXT
#define GL_NO_RESET_NOTIFICATION_EXT 0x8261
#endif //GL_NO_RESET_NOTIFICATION_EXT
#ifndef GL_CONTEXT_ROBUST_ACCESS_EXT
#define GL_CONTEXT_ROBUST_ACCESS_EXT 0x90F3
#endif //GL_CONTEXT_ROBUST_ACCESS_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetGraphicsResetStatusEXT
#define GL_ALT_FUNDEF_GetGraphicsResetStatusEXT
typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT)();
static inline GLenum glGetGraphicsResetStatusEXT()
{
#ifdef __cplusplus
	static PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT fn=(PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatusEXT","GL_EXT_robustness");
#else
	static PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatusEXT","GL_EXT_robustness"); }
#endif
	return fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformfvEXT
#define GL_ALT_FUNDEF_GetnUniformfvEXT
typedef void (*PFNGLGETNUNIFORMFVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLfloat *);
static inline void glGetnUniformfvEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMFVEXTPROC_ALT fn=(PFNGLGETNUNIFORMFVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfvEXT","GL_EXT_robustness");
#else
	static PFNGLGETNUNIFORMFVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMFVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfvEXT","GL_EXT_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformivEXT
#define GL_ALT_FUNDEF_GetnUniformivEXT
typedef void (*PFNGLGETNUNIFORMIVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLint *);
static inline void glGetnUniformivEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMIVEXTPROC_ALT fn=(PFNGLGETNUNIFORMIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformivEXT","GL_EXT_robustness");
#else
	static PFNGLGETNUNIFORMIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformivEXT","GL_EXT_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ReadnPixelsEXT
#define GL_ALT_FUNDEF_ReadnPixelsEXT
typedef void (*PFNGLREADNPIXELSEXTPROC_ALT)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void glReadnPixelsEXT(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
#ifdef __cplusplus
	static PFNGLREADNPIXELSEXTPROC_ALT fn=(PFNGLREADNPIXELSEXTPROC_ALT)glaltGetProcAddressExtension("glReadnPixelsEXT","GL_EXT_robustness");
#else
	static PFNGLREADNPIXELSEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLREADNPIXELSEXTPROC_ALT)glaltGetProcAddressExtension("glReadnPixelsEXT","GL_EXT_robustness"); }
#endif
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_sRGB
#define GL_EXT_sRGB
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT 0x8210
#endif //GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT
#ifndef GL_SRGB_EXT
#define GL_SRGB_EXT 0x8C40
#endif //GL_SRGB_EXT
#ifndef GL_SRGB_ALPHA_EXT
#define GL_SRGB_ALPHA_EXT 0x8C42
#endif //GL_SRGB_ALPHA_EXT
#ifndef GL_SRGB8_ALPHA8_EXT
#define GL_SRGB8_ALPHA8_EXT 0x8C43
#endif //GL_SRGB8_ALPHA8_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_sRGB_write_control
#define GL_EXT_sRGB_write_control
#ifndef GL_FRAMEBUFFER_SRGB_EXT
#define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9
#endif //GL_FRAMEBUFFER_SRGB_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects
#ifndef GL_VERTEX_SHADER_BIT_EXT
#define GL_VERTEX_SHADER_BIT_EXT 0x00000001
#endif //GL_VERTEX_SHADER_BIT_EXT
#ifndef GL_FRAGMENT_SHADER_BIT_EXT
#define GL_FRAGMENT_SHADER_BIT_EXT 0x00000002
#endif //GL_FRAGMENT_SHADER_BIT_EXT
#ifndef GL_PROGRAM_SEPARABLE_EXT
#define GL_PROGRAM_SEPARABLE_EXT 0x8258
#endif //GL_PROGRAM_SEPARABLE_EXT
#ifndef GL_PROGRAM_PIPELINE_BINDING_EXT
#define GL_PROGRAM_PIPELINE_BINDING_EXT 0x825A
#endif //GL_PROGRAM_PIPELINE_BINDING_EXT
#ifndef GL_ACTIVE_PROGRAM_EXT
#define GL_ACTIVE_PROGRAM_EXT 0x8B8D
#endif //GL_ACTIVE_PROGRAM_EXT
#ifndef GL_ALL_SHADER_BITS_EXT
#define GL_ALL_SHADER_BITS_EXT 0xFFFFFFFF
#endif //GL_ALL_SHADER_BITS_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ActiveProgramEXT
#define GL_ALT_FUNDEF_ActiveProgramEXT
typedef void (*PFNGLACTIVEPROGRAMEXTPROC_ALT)(GLuint);
static inline void glActiveProgramEXT(GLuint program1)
{
#ifdef __cplusplus
	static PFNGLACTIVEPROGRAMEXTPROC_ALT fn=(PFNGLACTIVEPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glActiveProgramEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLACTIVEPROGRAMEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLACTIVEPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glActiveProgramEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ActiveShaderProgramEXT
#define GL_ALT_FUNDEF_ActiveShaderProgramEXT
typedef void (*PFNGLACTIVESHADERPROGRAMEXTPROC_ALT)(GLuint,GLuint);
static inline void glActiveShaderProgramEXT(GLuint pipeline1,GLuint program1)
{
#ifdef __cplusplus
	static PFNGLACTIVESHADERPROGRAMEXTPROC_ALT fn=(PFNGLACTIVESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glActiveShaderProgramEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLACTIVESHADERPROGRAMEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLACTIVESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glActiveShaderProgramEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1,program1);
}
#endif

#ifndef	GL_ALT_FUNDEF_BindProgramPipelineEXT
#define GL_ALT_FUNDEF_BindProgramPipelineEXT
typedef void (*PFNGLBINDPROGRAMPIPELINEEXTPROC_ALT)(GLuint);
static inline void glBindProgramPipelineEXT(GLuint pipeline1)
{
#ifdef __cplusplus
	static PFNGLBINDPROGRAMPIPELINEEXTPROC_ALT fn=(PFNGLBINDPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glBindProgramPipelineEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLBINDPROGRAMPIPELINEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBINDPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glBindProgramPipelineEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1);
}
#endif

#ifndef	GL_ALT_FUNDEF_CreateShaderProgramEXT
#define GL_ALT_FUNDEF_CreateShaderProgramEXT
typedef GLuint (*PFNGLCREATESHADERPROGRAMEXTPROC_ALT)(GLenum,const GLchar *);
static inline GLuint glCreateShaderProgramEXT(GLenum type1,const GLchar * string1)
{
#ifdef __cplusplus
	static PFNGLCREATESHADERPROGRAMEXTPROC_ALT fn=(PFNGLCREATESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glCreateShaderProgramEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLCREATESHADERPROGRAMEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCREATESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glCreateShaderProgramEXT","GL_EXT_separate_shader_objects"); }
#endif
	return fn(type1,string1);
}
#endif

#ifndef	GL_ALT_FUNDEF_CreateShaderProgramvEXT
#define GL_ALT_FUNDEF_CreateShaderProgramvEXT
typedef GLuint (*PFNGLCREATESHADERPROGRAMVEXTPROC_ALT)(GLenum,GLsizei,const GLchar **);
static inline GLuint glCreateShaderProgramvEXT(GLenum type1,GLsizei count1,const GLchar ** strings1)
{
#ifdef __cplusplus
	static PFNGLCREATESHADERPROGRAMVEXTPROC_ALT fn=(PFNGLCREATESHADERPROGRAMVEXTPROC_ALT)glaltGetProcAddressExtension("glCreateShaderProgramvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLCREATESHADERPROGRAMVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCREATESHADERPROGRAMVEXTPROC_ALT)glaltGetProcAddressExtension("glCreateShaderProgramvEXT","GL_EXT_separate_shader_objects"); }
#endif
	return fn(type1,count1,strings1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeleteProgramPipelinesEXT
#define GL_ALT_FUNDEF_DeleteProgramPipelinesEXT
typedef void (*PFNGLDELETEPROGRAMPIPELINESEXTPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteProgramPipelinesEXT(GLsizei n1,const GLuint * pipelines1)
{
#ifdef __cplusplus
	static PFNGLDELETEPROGRAMPIPELINESEXTPROC_ALT fn=(PFNGLDELETEPROGRAMPIPELINESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteProgramPipelinesEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLDELETEPROGRAMPIPELINESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEPROGRAMPIPELINESEXTPROC_ALT)glaltGetProcAddressExtension("glDeleteProgramPipelinesEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(n1,pipelines1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenProgramPipelinesEXT
#define GL_ALT_FUNDEF_GenProgramPipelinesEXT
typedef void (*PFNGLGENPROGRAMPIPELINESEXTPROC_ALT)(GLsizei,GLuint *);
static inline void glGenProgramPipelinesEXT(GLsizei n1,GLuint * pipelines1)
{
#ifdef __cplusplus
	static PFNGLGENPROGRAMPIPELINESEXTPROC_ALT fn=(PFNGLGENPROGRAMPIPELINESEXTPROC_ALT)glaltGetProcAddressExtension("glGenProgramPipelinesEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLGENPROGRAMPIPELINESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENPROGRAMPIPELINESEXTPROC_ALT)glaltGetProcAddressExtension("glGenProgramPipelinesEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(n1,pipelines1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetProgramPipelineInfoLogEXT
#define GL_ALT_FUNDEF_GetProgramPipelineInfoLogEXT
typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_ALT)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetProgramPipelineInfoLogEXT(GLuint pipeline1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
#ifdef __cplusplus
	static PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_ALT fn=(PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_ALT)glaltGetProcAddressExtension("glGetProgramPipelineInfoLogEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_ALT)glaltGetProcAddressExtension("glGetProgramPipelineInfoLogEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1,bufSize1,length1,infoLog1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetProgramPipelineivEXT
#define GL_ALT_FUNDEF_GetProgramPipelineivEXT
typedef void (*PFNGLGETPROGRAMPIPELINEIVEXTPROC_ALT)(GLuint,GLenum,GLint *);
static inline void glGetProgramPipelineivEXT(GLuint pipeline1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETPROGRAMPIPELINEIVEXTPROC_ALT fn=(PFNGLGETPROGRAMPIPELINEIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetProgramPipelineivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLGETPROGRAMPIPELINEIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPROGRAMPIPELINEIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetProgramPipelineivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsProgramPipelineEXT
#define GL_ALT_FUNDEF_IsProgramPipelineEXT
typedef GLboolean (*PFNGLISPROGRAMPIPELINEEXTPROC_ALT)(GLuint);
static inline GLboolean glIsProgramPipelineEXT(GLuint pipeline1)
{
#ifdef __cplusplus
	static PFNGLISPROGRAMPIPELINEEXTPROC_ALT fn=(PFNGLISPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glIsProgramPipelineEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLISPROGRAMPIPELINEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glIsProgramPipelineEXT","GL_EXT_separate_shader_objects"); }
#endif
	return fn(pipeline1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ProgramParameteriEXT
#define GL_ALT_FUNDEF_ProgramParameteriEXT
typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC_ALT)(GLuint,GLenum,GLint);
static inline void glProgramParameteriEXT(GLuint program1,GLenum pname1,GLint value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMPARAMETERIEXTPROC_ALT fn=(PFNGLPROGRAMPARAMETERIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramParameteriEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMPARAMETERIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMPARAMETERIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramParameteriEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,pname1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1fEXT
#define GL_ALT_FUNDEF_ProgramUniform1fEXT
typedef void (*PFNGLPROGRAMUNIFORM1FEXTPROC_ALT)(GLuint,GLint,GLfloat);
static inline void glProgramUniform1fEXT(GLuint program1,GLint location1,GLfloat v01)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1FEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1fEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1FEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1fEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1fvEXT
#define GL_ALT_FUNDEF_ProgramUniform1fvEXT
typedef void (*PFNGLPROGRAMUNIFORM1FVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void glProgramUniform1fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1iEXT
#define GL_ALT_FUNDEF_ProgramUniform1iEXT
typedef void (*PFNGLPROGRAMUNIFORM1IEXTPROC_ALT)(GLuint,GLint,GLint);
static inline void glProgramUniform1iEXT(GLuint program1,GLint location1,GLint v01)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1IEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1iEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1IEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1iEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1ivEXT
#define GL_ALT_FUNDEF_ProgramUniform1ivEXT
typedef void (*PFNGLPROGRAMUNIFORM1IVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLint *);
static inline void glProgramUniform1ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1IVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1ivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1IVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1ivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1uiEXT
#define GL_ALT_FUNDEF_ProgramUniform1uiEXT
typedef void (*PFNGLPROGRAMUNIFORM1UIEXTPROC_ALT)(GLuint,GLint,GLuint);
static inline void glProgramUniform1uiEXT(GLuint program1,GLint location1,GLuint v01)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1UIEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1uiEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1UIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1uiEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform1uivEXT
#define GL_ALT_FUNDEF_ProgramUniform1uivEXT
typedef void (*PFNGLPROGRAMUNIFORM1UIVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLuint *);
static inline void glProgramUniform1uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM1UIVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM1UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1uivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM1UIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM1UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform1uivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2fEXT
#define GL_ALT_FUNDEF_ProgramUniform2fEXT
typedef void (*PFNGLPROGRAMUNIFORM2FEXTPROC_ALT)(GLuint,GLint,GLfloat,GLfloat);
static inline void glProgramUniform2fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2FEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2fEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2FEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2fEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2fvEXT
#define GL_ALT_FUNDEF_ProgramUniform2fvEXT
typedef void (*PFNGLPROGRAMUNIFORM2FVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void glProgramUniform2fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2iEXT
#define GL_ALT_FUNDEF_ProgramUniform2iEXT
typedef void (*PFNGLPROGRAMUNIFORM2IEXTPROC_ALT)(GLuint,GLint,GLint,GLint);
static inline void glProgramUniform2iEXT(GLuint program1,GLint location1,GLint v01,GLint v11)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2IEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2iEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2IEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2iEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2ivEXT
#define GL_ALT_FUNDEF_ProgramUniform2ivEXT
typedef void (*PFNGLPROGRAMUNIFORM2IVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLint *);
static inline void glProgramUniform2ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2IVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2ivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2IVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2ivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2uiEXT
#define GL_ALT_FUNDEF_ProgramUniform2uiEXT
typedef void (*PFNGLPROGRAMUNIFORM2UIEXTPROC_ALT)(GLuint,GLint,GLuint,GLuint);
static inline void glProgramUniform2uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2UIEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2uiEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2UIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2uiEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform2uivEXT
#define GL_ALT_FUNDEF_ProgramUniform2uivEXT
typedef void (*PFNGLPROGRAMUNIFORM2UIVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLuint *);
static inline void glProgramUniform2uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM2UIVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM2UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2uivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM2UIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM2UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform2uivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3fEXT
#define GL_ALT_FUNDEF_ProgramUniform3fEXT
typedef void (*PFNGLPROGRAMUNIFORM3FEXTPROC_ALT)(GLuint,GLint,GLfloat,GLfloat,GLfloat);
static inline void glProgramUniform3fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11,GLfloat v21)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3FEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3fEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3FEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3fEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3fvEXT
#define GL_ALT_FUNDEF_ProgramUniform3fvEXT
typedef void (*PFNGLPROGRAMUNIFORM3FVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void glProgramUniform3fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3iEXT
#define GL_ALT_FUNDEF_ProgramUniform3iEXT
typedef void (*PFNGLPROGRAMUNIFORM3IEXTPROC_ALT)(GLuint,GLint,GLint,GLint,GLint);
static inline void glProgramUniform3iEXT(GLuint program1,GLint location1,GLint v01,GLint v11,GLint v21)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3IEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3iEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3IEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3iEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3ivEXT
#define GL_ALT_FUNDEF_ProgramUniform3ivEXT
typedef void (*PFNGLPROGRAMUNIFORM3IVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLint *);
static inline void glProgramUniform3ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3IVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3ivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3IVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3ivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3uiEXT
#define GL_ALT_FUNDEF_ProgramUniform3uiEXT
typedef void (*PFNGLPROGRAMUNIFORM3UIEXTPROC_ALT)(GLuint,GLint,GLuint,GLuint,GLuint);
static inline void glProgramUniform3uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11,GLuint v21)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3UIEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3uiEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3UIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3uiEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform3uivEXT
#define GL_ALT_FUNDEF_ProgramUniform3uivEXT
typedef void (*PFNGLPROGRAMUNIFORM3UIVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLuint *);
static inline void glProgramUniform3uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM3UIVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM3UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3uivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM3UIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM3UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform3uivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4fEXT
#define GL_ALT_FUNDEF_ProgramUniform4fEXT
typedef void (*PFNGLPROGRAMUNIFORM4FEXTPROC_ALT)(GLuint,GLint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glProgramUniform4fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11,GLfloat v21,GLfloat v31)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4FEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4fEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4FEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4FEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4fEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21,v31);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4fvEXT
#define GL_ALT_FUNDEF_ProgramUniform4fvEXT
typedef void (*PFNGLPROGRAMUNIFORM4FVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void glProgramUniform4fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4iEXT
#define GL_ALT_FUNDEF_ProgramUniform4iEXT
typedef void (*PFNGLPROGRAMUNIFORM4IEXTPROC_ALT)(GLuint,GLint,GLint,GLint,GLint,GLint);
static inline void glProgramUniform4iEXT(GLuint program1,GLint location1,GLint v01,GLint v11,GLint v21,GLint v31)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4IEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4iEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4IEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4IEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4iEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21,v31);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4ivEXT
#define GL_ALT_FUNDEF_ProgramUniform4ivEXT
typedef void (*PFNGLPROGRAMUNIFORM4IVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLint *);
static inline void glProgramUniform4ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4IVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4ivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4IVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4IVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4ivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4uiEXT
#define GL_ALT_FUNDEF_ProgramUniform4uiEXT
typedef void (*PFNGLPROGRAMUNIFORM4UIEXTPROC_ALT)(GLuint,GLint,GLuint,GLuint,GLuint,GLuint);
static inline void glProgramUniform4uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11,GLuint v21,GLuint v31)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4UIEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4uiEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4UIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4UIEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4uiEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,v01,v11,v21,v31);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniform4uivEXT
#define GL_ALT_FUNDEF_ProgramUniform4uivEXT
typedef void (*PFNGLPROGRAMUNIFORM4UIVEXTPROC_ALT)(GLuint,GLint,GLsizei,const GLuint *);
static inline void glProgramUniform4uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORM4UIVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORM4UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4uivEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORM4UIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORM4UIVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniform4uivEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix2fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix2fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix2x3fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix2x3fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix2x3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2x3fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2x3fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix2x4fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix2x4fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix2x4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2x4fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix2x4fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix3fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix3fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix3x2fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix3x2fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix3x2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3x2fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3x2fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix3x4fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix3x4fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix3x4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3x4fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix3x4fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix4fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix4fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix4x2fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix4x2fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix4x2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4x2fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4x2fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramUniformMatrix4x3fvEXT
#define GL_ALT_FUNDEF_ProgramUniformMatrix4x3fvEXT
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glProgramUniformMatrix4x3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_ALT fn=(PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4x3fvEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_ALT)glaltGetProcAddressExtension("glProgramUniformMatrix4x3fvEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(program1,location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UseProgramStagesEXT
#define GL_ALT_FUNDEF_UseProgramStagesEXT
typedef void (*PFNGLUSEPROGRAMSTAGESEXTPROC_ALT)(GLuint,GLbitfield,GLuint);
static inline void glUseProgramStagesEXT(GLuint pipeline1,GLbitfield stages1,GLuint program1)
{
#ifdef __cplusplus
	static PFNGLUSEPROGRAMSTAGESEXTPROC_ALT fn=(PFNGLUSEPROGRAMSTAGESEXTPROC_ALT)glaltGetProcAddressExtension("glUseProgramStagesEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLUSEPROGRAMSTAGESEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUSEPROGRAMSTAGESEXTPROC_ALT)glaltGetProcAddressExtension("glUseProgramStagesEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1,stages1,program1);
}
#endif

#ifndef	GL_ALT_FUNDEF_UseShaderProgramEXT
#define GL_ALT_FUNDEF_UseShaderProgramEXT
typedef void (*PFNGLUSESHADERPROGRAMEXTPROC_ALT)(GLenum,GLuint);
static inline void glUseShaderProgramEXT(GLenum type1,GLuint program1)
{
#ifdef __cplusplus
	static PFNGLUSESHADERPROGRAMEXTPROC_ALT fn=(PFNGLUSESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glUseShaderProgramEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLUSESHADERPROGRAMEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUSESHADERPROGRAMEXTPROC_ALT)glaltGetProcAddressExtension("glUseShaderProgramEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(type1,program1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ValidateProgramPipelineEXT
#define GL_ALT_FUNDEF_ValidateProgramPipelineEXT
typedef void (*PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_ALT)(GLuint);
static inline void glValidateProgramPipelineEXT(GLuint pipeline1)
{
#ifdef __cplusplus
	static PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_ALT fn=(PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glValidateProgramPipelineEXT","GL_EXT_separate_shader_objects");
#else
	static PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_ALT)glaltGetProcAddressExtension("glValidateProgramPipelineEXT","GL_EXT_separate_shader_objects"); }
#endif
	 fn(pipeline1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_shader_framebuffer_fetch
#define GL_EXT_shader_framebuffer_fetch
#ifndef GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#endif //GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shader_implicit_conversions
#define GL_EXT_shader_implicit_conversions
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shader_io_blocks
#define GL_EXT_shader_io_blocks
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shader_pixel_local_storage
#define GL_EXT_shader_pixel_local_storage
#ifndef GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT 0x8F63
#endif //GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT
#ifndef GL_SHADER_PIXEL_LOCAL_STORAGE_EXT
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT 0x8F64
#endif //GL_SHADER_PIXEL_LOCAL_STORAGE_EXT
#ifndef GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT 0x8F67
#endif //GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shader_texture_lod
#define GL_EXT_shader_texture_lod
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_shadow_samplers
#define GL_EXT_shadow_samplers
#ifndef GL_TEXTURE_COMPARE_MODE_EXT
#define GL_TEXTURE_COMPARE_MODE_EXT 0x884C
#endif //GL_TEXTURE_COMPARE_MODE_EXT
#ifndef GL_TEXTURE_COMPARE_FUNC_EXT
#define GL_TEXTURE_COMPARE_FUNC_EXT 0x884D
#endif //GL_TEXTURE_COMPARE_FUNC_EXT
#ifndef GL_COMPARE_REF_TO_TEXTURE_EXT
#define GL_COMPARE_REF_TO_TEXTURE_EXT 0x884E
#endif //GL_COMPARE_REF_TO_TEXTURE_EXT
#ifndef GL_SAMPLER_2D_SHADOW_EXT
#define GL_SAMPLER_2D_SHADOW_EXT 0x8B62
#endif //GL_SAMPLER_2D_SHADOW_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_tessellation_point_size
#define GL_EXT_tessellation_point_size
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_tessellation_shader
#define GL_EXT_tessellation_shader
#ifndef GL_TESS_CONTROL_SHADER_BIT_EXT
#define GL_TESS_CONTROL_SHADER_BIT_EXT 0x00000008
#endif //GL_TESS_CONTROL_SHADER_BIT_EXT
#ifndef GL_TESS_EVALUATION_SHADER_BIT_EXT
#define GL_TESS_EVALUATION_SHADER_BIT_EXT 0x00000010
#endif //GL_TESS_EVALUATION_SHADER_BIT_EXT
#ifndef GL_TRIANGLES
#define GL_TRIANGLES 0x0004
#endif //GL_TRIANGLES
#ifndef GL_QUADS_EXT
#define GL_QUADS_EXT 0x0007
#endif //GL_QUADS_EXT
#ifndef GL_PATCHES_EXT
#define GL_PATCHES_EXT 0x000E
#endif //GL_PATCHES_EXT
#ifndef GL_EQUAL
#define GL_EQUAL 0x0202
#endif //GL_EQUAL
#ifndef GL_CW
#define GL_CW 0x0900
#endif //GL_CW
#ifndef GL_CCW
#define GL_CCW 0x0901
#endif //GL_CCW
#ifndef GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#endif //GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED
#ifndef GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT 0x886C
#endif //GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT
#ifndef GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT 0x886D
#endif //GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT
#ifndef GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E1E
#endif //GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT
#ifndef GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E1F
#endif //GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT
#ifndef GL_PATCH_VERTICES_EXT
#define GL_PATCH_VERTICES_EXT 0x8E72
#endif //GL_PATCH_VERTICES_EXT
#ifndef GL_TESS_CONTROL_OUTPUT_VERTICES_EXT
#define GL_TESS_CONTROL_OUTPUT_VERTICES_EXT 0x8E75
#endif //GL_TESS_CONTROL_OUTPUT_VERTICES_EXT
#ifndef GL_TESS_GEN_MODE_EXT
#define GL_TESS_GEN_MODE_EXT 0x8E76
#endif //GL_TESS_GEN_MODE_EXT
#ifndef GL_TESS_GEN_SPACING_EXT
#define GL_TESS_GEN_SPACING_EXT 0x8E77
#endif //GL_TESS_GEN_SPACING_EXT
#ifndef GL_TESS_GEN_VERTEX_ORDER_EXT
#define GL_TESS_GEN_VERTEX_ORDER_EXT 0x8E78
#endif //GL_TESS_GEN_VERTEX_ORDER_EXT
#ifndef GL_TESS_GEN_POINT_MODE_EXT
#define GL_TESS_GEN_POINT_MODE_EXT 0x8E79
#endif //GL_TESS_GEN_POINT_MODE_EXT
#ifndef GL_ISOLINES_EXT
#define GL_ISOLINES_EXT 0x8E7A
#endif //GL_ISOLINES_EXT
#ifndef GL_FRACTIONAL_ODD_EXT
#define GL_FRACTIONAL_ODD_EXT 0x8E7B
#endif //GL_FRACTIONAL_ODD_EXT
#ifndef GL_FRACTIONAL_EVEN_EXT
#define GL_FRACTIONAL_EVEN_EXT 0x8E7C
#endif //GL_FRACTIONAL_EVEN_EXT
#ifndef GL_MAX_PATCH_VERTICES_EXT
#define GL_MAX_PATCH_VERTICES_EXT 0x8E7D
#endif //GL_MAX_PATCH_VERTICES_EXT
#ifndef GL_MAX_TESS_GEN_LEVEL_EXT
#define GL_MAX_TESS_GEN_LEVEL_EXT 0x8E7E
#endif //GL_MAX_TESS_GEN_LEVEL_EXT
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E7F
#endif //GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E80
#endif //GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT
#ifndef GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT 0x8E81
#endif //GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT
#ifndef GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT 0x8E82
#endif //GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT
#ifndef GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT 0x8E83
#endif //GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT
#ifndef GL_MAX_TESS_PATCH_COMPONENTS_EXT
#define GL_MAX_TESS_PATCH_COMPONENTS_EXT 0x8E84
#endif //GL_MAX_TESS_PATCH_COMPONENTS_EXT
#ifndef GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT 0x8E85
#endif //GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT
#ifndef GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT 0x8E86
#endif //GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT
#ifndef GL_TESS_EVALUATION_SHADER_EXT
#define GL_TESS_EVALUATION_SHADER_EXT 0x8E87
#endif //GL_TESS_EVALUATION_SHADER_EXT
#ifndef GL_TESS_CONTROL_SHADER_EXT
#define GL_TESS_CONTROL_SHADER_EXT 0x8E88
#endif //GL_TESS_CONTROL_SHADER_EXT
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT 0x8E89
#endif //GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT 0x8E8A
#endif //GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT
#ifndef GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT 0x90CB
#endif //GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT
#ifndef GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT 0x90CC
#endif //GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT
#ifndef GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT 0x90D8
#endif //GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT
#ifndef GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT 0x90D9
#endif //GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT
#ifndef GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT 0x92CD
#endif //GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT
#ifndef GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT 0x92CE
#endif //GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT
#ifndef GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT 0x92D3
#endif //GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT
#ifndef GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT 0x92D4
#endif //GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT
#ifndef GL_IS_PER_PATCH_EXT
#define GL_IS_PER_PATCH_EXT 0x92E7
#endif //GL_IS_PER_PATCH_EXT
#ifndef GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT 0x9307
#endif //GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT
#ifndef GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT 0x9308
#endif //GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_PatchParameteriEXT
#define GL_ALT_FUNDEF_PatchParameteriEXT
typedef void (*PFNGLPATCHPARAMETERIEXTPROC_ALT)(GLenum,GLint);
static inline void glPatchParameteriEXT(GLenum pname1,GLint value1)
{
#ifdef __cplusplus
	static PFNGLPATCHPARAMETERIEXTPROC_ALT fn=(PFNGLPATCHPARAMETERIEXTPROC_ALT)glaltGetProcAddressExtension("glPatchParameteriEXT","GL_EXT_tessellation_shader");
#else
	static PFNGLPATCHPARAMETERIEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPATCHPARAMETERIEXTPROC_ALT)glaltGetProcAddressExtension("glPatchParameteriEXT","GL_EXT_tessellation_shader"); }
#endif
	 fn(pname1,value1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_texture_border_clamp
#define GL_EXT_texture_border_clamp
#ifndef GL_TEXTURE_BORDER_COLOR_EXT
#define GL_TEXTURE_BORDER_COLOR_EXT 0x1004
#endif //GL_TEXTURE_BORDER_COLOR_EXT
#ifndef GL_CLAMP_TO_BORDER_EXT
#define GL_CLAMP_TO_BORDER_EXT 0x812D
#endif //GL_CLAMP_TO_BORDER_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetSamplerParameterIivEXT
#define GL_ALT_FUNDEF_GetSamplerParameterIivEXT
typedef void (*PFNGLGETSAMPLERPARAMETERIIVEXTPROC_ALT)(GLuint,GLenum,GLint *);
static inline void glGetSamplerParameterIivEXT(GLuint sampler1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETSAMPLERPARAMETERIIVEXTPROC_ALT fn=(PFNGLGETSAMPLERPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetSamplerParameterIivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLGETSAMPLERPARAMETERIIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETSAMPLERPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetSamplerParameterIivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(sampler1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetSamplerParameterIuivEXT
#define GL_ALT_FUNDEF_GetSamplerParameterIuivEXT
typedef void (*PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_ALT)(GLuint,GLenum,GLuint *);
static inline void glGetSamplerParameterIuivEXT(GLuint sampler1,GLenum pname1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_ALT fn=(PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetSamplerParameterIuivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetSamplerParameterIuivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(sampler1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetTexParameterIivEXT
#define GL_ALT_FUNDEF_GetTexParameterIivEXT
typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetTexParameterIivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETTEXPARAMETERIIVEXTPROC_ALT fn=(PFNGLGETTEXPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterIivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLGETTEXPARAMETERIIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETTEXPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterIivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetTexParameterIuivEXT
#define GL_ALT_FUNDEF_GetTexParameterIuivEXT
typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC_ALT)(GLenum,GLenum,GLuint *);
static inline void glGetTexParameterIuivEXT(GLenum target1,GLenum pname1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETTEXPARAMETERIUIVEXTPROC_ALT fn=(PFNGLGETTEXPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterIuivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLGETTEXPARAMETERIUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETTEXPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterIuivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_SamplerParameterIivEXT
#define GL_ALT_FUNDEF_SamplerParameterIivEXT
typedef void (*PFNGLSAMPLERPARAMETERIIVEXTPROC_ALT)(GLuint,GLenum,const GLint *);
static inline void glSamplerParameterIivEXT(GLuint sampler1,GLenum pname1,const GLint * param1)
{
#ifdef __cplusplus
	static PFNGLSAMPLERPARAMETERIIVEXTPROC_ALT fn=(PFNGLSAMPLERPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glSamplerParameterIivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLSAMPLERPARAMETERIIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSAMPLERPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glSamplerParameterIivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(sampler1,pname1,param1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_SamplerParameterIuivEXT
#define GL_ALT_FUNDEF_SamplerParameterIuivEXT
typedef void (*PFNGLSAMPLERPARAMETERIUIVEXTPROC_ALT)(GLuint,GLenum,const GLuint *);
static inline void glSamplerParameterIuivEXT(GLuint sampler1,GLenum pname1,const GLuint * param1)
{
#ifdef __cplusplus
	static PFNGLSAMPLERPARAMETERIUIVEXTPROC_ALT fn=(PFNGLSAMPLERPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glSamplerParameterIuivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLSAMPLERPARAMETERIUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSAMPLERPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glSamplerParameterIuivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(sampler1,pname1,param1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexParameterIivEXT
#define GL_ALT_FUNDEF_TexParameterIivEXT
typedef void (*PFNGLTEXPARAMETERIIVEXTPROC_ALT)(GLenum,GLenum,const GLint *);
static inline void glTexParameterIivEXT(GLenum target1,GLenum pname1,const GLint * params1)
{
#ifdef __cplusplus
	static PFNGLTEXPARAMETERIIVEXTPROC_ALT fn=(PFNGLTEXPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glTexParameterIivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLTEXPARAMETERIIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXPARAMETERIIVEXTPROC_ALT)glaltGetProcAddressExtension("glTexParameterIivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexParameterIuivEXT
#define GL_ALT_FUNDEF_TexParameterIuivEXT
typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC_ALT)(GLenum,GLenum,const GLuint *);
static inline void glTexParameterIuivEXT(GLenum target1,GLenum pname1,const GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLTEXPARAMETERIUIVEXTPROC_ALT fn=(PFNGLTEXPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glTexParameterIuivEXT","GL_EXT_texture_border_clamp");
#else
	static PFNGLTEXPARAMETERIUIVEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXPARAMETERIUIVEXTPROC_ALT)glaltGetProcAddressExtension("glTexParameterIuivEXT","GL_EXT_texture_border_clamp"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_texture_buffer
#define GL_EXT_texture_buffer
#ifndef GL_TEXTURE_BUFFER_BINDING_EXT
#define GL_TEXTURE_BUFFER_BINDING_EXT 0x8C2A
#endif //GL_TEXTURE_BUFFER_BINDING_EXT
#ifndef GL_TEXTURE_BUFFER_EXT
#define GL_TEXTURE_BUFFER_EXT 0x8C2A
#endif //GL_TEXTURE_BUFFER_EXT
#ifndef GL_MAX_TEXTURE_BUFFER_SIZE_EXT
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#endif //GL_MAX_TEXTURE_BUFFER_SIZE_EXT
#ifndef GL_TEXTURE_BINDING_BUFFER_EXT
#define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#endif //GL_TEXTURE_BINDING_BUFFER_EXT
#ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#endif //GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT
#ifndef GL_SAMPLER_BUFFER_EXT
#define GL_SAMPLER_BUFFER_EXT 0x8DC2
#endif //GL_SAMPLER_BUFFER_EXT
#ifndef GL_INT_SAMPLER_BUFFER_EXT
#define GL_INT_SAMPLER_BUFFER_EXT 0x8DD0
#endif //GL_INT_SAMPLER_BUFFER_EXT
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#endif //GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT
#ifndef GL_IMAGE_BUFFER_EXT
#define GL_IMAGE_BUFFER_EXT 0x9051
#endif //GL_IMAGE_BUFFER_EXT
#ifndef GL_INT_IMAGE_BUFFER_EXT
#define GL_INT_IMAGE_BUFFER_EXT 0x905C
#endif //GL_INT_IMAGE_BUFFER_EXT
#ifndef GL_UNSIGNED_INT_IMAGE_BUFFER_EXT
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT 0x9067
#endif //GL_UNSIGNED_INT_IMAGE_BUFFER_EXT
#ifndef GL_TEXTURE_BUFFER_OFFSET_EXT
#define GL_TEXTURE_BUFFER_OFFSET_EXT 0x919D
#endif //GL_TEXTURE_BUFFER_OFFSET_EXT
#ifndef GL_TEXTURE_BUFFER_SIZE_EXT
#define GL_TEXTURE_BUFFER_SIZE_EXT 0x919E
#endif //GL_TEXTURE_BUFFER_SIZE_EXT
#ifndef GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT 0x919F
#endif //GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_TexBufferEXT
#define GL_ALT_FUNDEF_TexBufferEXT
typedef void (*PFNGLTEXBUFFEREXTPROC_ALT)(GLenum,GLenum,GLuint);
static inline void glTexBufferEXT(GLenum target1,GLenum internalformat1,GLuint buffer1)
{
#ifdef __cplusplus
	static PFNGLTEXBUFFEREXTPROC_ALT fn=(PFNGLTEXBUFFEREXTPROC_ALT)glaltGetProcAddressExtension("glTexBufferEXT","GL_EXT_texture_buffer");
#else
	static PFNGLTEXBUFFEREXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXBUFFEREXTPROC_ALT)glaltGetProcAddressExtension("glTexBufferEXT","GL_EXT_texture_buffer"); }
#endif
	 fn(target1,internalformat1,buffer1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexBufferRangeEXT
#define GL_ALT_FUNDEF_TexBufferRangeEXT
typedef void (*PFNGLTEXBUFFERRANGEEXTPROC_ALT)(GLenum,GLenum,GLuint,GLintptr,GLsizeiptr);
static inline void glTexBufferRangeEXT(GLenum target1,GLenum internalformat1,GLuint buffer1,GLintptr offset1,GLsizeiptr size1)
{
#ifdef __cplusplus
	static PFNGLTEXBUFFERRANGEEXTPROC_ALT fn=(PFNGLTEXBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glTexBufferRangeEXT","GL_EXT_texture_buffer");
#else
	static PFNGLTEXBUFFERRANGEEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glTexBufferRangeEXT","GL_EXT_texture_buffer"); }
#endif
	 fn(target1,internalformat1,buffer1,offset1,size1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_texture_compression_dxt1
#define GL_EXT_texture_compression_dxt1
#ifndef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#endif //GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#endif //GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc
#ifndef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#endif //GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#endif //GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#endif //GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3
#endif //GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_cube_map_array
#define GL_EXT_texture_cube_map_array
#ifndef GL_TEXTURE_CUBE_MAP_ARRAY_EXT
#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT 0x9009
#endif //GL_TEXTURE_CUBE_MAP_ARRAY_EXT
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT 0x900A
#endif //GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_EXT
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900C
#endif //GL_SAMPLER_CUBE_MAP_ARRAY_EXT
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT 0x900D
#endif //GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT
#ifndef GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900E
#endif //GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900F
#endif //GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT
#ifndef GL_IMAGE_CUBE_MAP_ARRAY_EXT
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT 0x9054
#endif //GL_IMAGE_CUBE_MAP_ARRAY_EXT
#ifndef GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x905F
#endif //GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#endif //GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic
#ifndef GL_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#endif //GL_TEXTURE_MAX_ANISOTROPY_EXT
#ifndef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif //GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_format_BGRA8888
#define GL_EXT_texture_format_BGRA8888
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT 0x80E1
#endif //GL_BGRA_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_rg
#define GL_EXT_texture_rg
#ifndef GL_RED_EXT
#define GL_RED_EXT 0x1903
#endif //GL_RED_EXT
#ifndef GL_RG_EXT
#define GL_RG_EXT 0x8227
#endif //GL_RG_EXT
#ifndef GL_R8_EXT
#define GL_R8_EXT 0x8229
#endif //GL_R8_EXT
#ifndef GL_RG8_EXT
#define GL_RG8_EXT 0x822B
#endif //GL_RG8_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode
#ifndef GL_TEXTURE_SRGB_DECODE_EXT
#define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#endif //GL_TEXTURE_SRGB_DECODE_EXT
#ifndef GL_DECODE_EXT
#define GL_DECODE_EXT 0x8A49
#endif //GL_DECODE_EXT
#ifndef GL_SKIP_DECODE_EXT
#define GL_SKIP_DECODE_EXT 0x8A4A
#endif //GL_SKIP_DECODE_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_storage
#define GL_EXT_texture_storage
#ifndef GL_ALPHA8_EXT
#define GL_ALPHA8_EXT 0x803C
#endif //GL_ALPHA8_EXT
#ifndef GL_LUMINANCE8_EXT
#define GL_LUMINANCE8_EXT 0x8040
#endif //GL_LUMINANCE8_EXT
#ifndef GL_LUMINANCE8_ALPHA8_EXT
#define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#endif //GL_LUMINANCE8_ALPHA8_EXT
#ifndef GL_RGB10_EXT
#define GL_RGB10_EXT 0x8052
#endif //GL_RGB10_EXT
#ifndef GL_RGB10_A2_EXT
#define GL_RGB10_A2_EXT 0x8059
#endif //GL_RGB10_A2_EXT
#ifndef GL_R8_EXT
#define GL_R8_EXT 0x8229
#endif //GL_R8_EXT
#ifndef GL_RG8_EXT
#define GL_RG8_EXT 0x822B
#endif //GL_RG8_EXT
#ifndef GL_R16F_EXT
#define GL_R16F_EXT 0x822D
#endif //GL_R16F_EXT
#ifndef GL_R32F_EXT
#define GL_R32F_EXT 0x822E
#endif //GL_R32F_EXT
#ifndef GL_RG16F_EXT
#define GL_RG16F_EXT 0x822F
#endif //GL_RG16F_EXT
#ifndef GL_RG32F_EXT
#define GL_RG32F_EXT 0x8230
#endif //GL_RG32F_EXT
#ifndef GL_RGBA32F_EXT
#define GL_RGBA32F_EXT 0x8814
#endif //GL_RGBA32F_EXT
#ifndef GL_RGB32F_EXT
#define GL_RGB32F_EXT 0x8815
#endif //GL_RGB32F_EXT
#ifndef GL_ALPHA32F_EXT
#define GL_ALPHA32F_EXT 0x8816
#endif //GL_ALPHA32F_EXT
#ifndef GL_LUMINANCE32F_EXT
#define GL_LUMINANCE32F_EXT 0x8818
#endif //GL_LUMINANCE32F_EXT
#ifndef GL_LUMINANCE_ALPHA32F_EXT
#define GL_LUMINANCE_ALPHA32F_EXT 0x8819
#endif //GL_LUMINANCE_ALPHA32F_EXT
#ifndef GL_RGBA16F_EXT
#define GL_RGBA16F_EXT 0x881A
#endif //GL_RGBA16F_EXT
#ifndef GL_RGB16F_EXT
#define GL_RGB16F_EXT 0x881B
#endif //GL_RGB16F_EXT
#ifndef GL_ALPHA16F_EXT
#define GL_ALPHA16F_EXT 0x881C
#endif //GL_ALPHA16F_EXT
#ifndef GL_LUMINANCE16F_EXT
#define GL_LUMINANCE16F_EXT 0x881E
#endif //GL_LUMINANCE16F_EXT
#ifndef GL_LUMINANCE_ALPHA16F_EXT
#define GL_LUMINANCE_ALPHA16F_EXT 0x881F
#endif //GL_LUMINANCE_ALPHA16F_EXT
#ifndef GL_TEXTURE_IMMUTABLE_FORMAT_EXT
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT 0x912F
#endif //GL_TEXTURE_IMMUTABLE_FORMAT_EXT
#ifndef GL_BGRA8_EXT
#define GL_BGRA8_EXT 0x93A1
#endif //GL_BGRA8_EXT
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_TexStorage1DEXT
#define GL_ALT_FUNDEF_TexStorage1DEXT
typedef void (*PFNGLTEXSTORAGE1DEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei);
static inline void glTexStorage1DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1)
{
#ifdef __cplusplus
	static PFNGLTEXSTORAGE1DEXTPROC_ALT fn=(PFNGLTEXSTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage1DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXSTORAGE1DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXSTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage1DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(target1,levels1,internalformat1,width1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexStorage2DEXT
#define GL_ALT_FUNDEF_TexStorage2DEXT
typedef void (*PFNGLTEXSTORAGE2DEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glTexStorage2DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLTEXSTORAGE2DEXTPROC_ALT fn=(PFNGLTEXSTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage2DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXSTORAGE2DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXSTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage2DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(target1,levels1,internalformat1,width1,height1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexStorage3DEXT
#define GL_ALT_FUNDEF_TexStorage3DEXT
typedef void (*PFNGLTEXSTORAGE3DEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void glTexStorage3DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
#ifdef __cplusplus
	static PFNGLTEXSTORAGE3DEXTPROC_ALT fn=(PFNGLTEXSTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage3DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXSTORAGE3DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXSTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage3DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(target1,levels1,internalformat1,width1,height1,depth1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TextureStorage1DEXT
#define GL_ALT_FUNDEF_TextureStorage1DEXT
typedef void (*PFNGLTEXTURESTORAGE1DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei);
static inline void glTextureStorage1DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1)
{
#ifdef __cplusplus
	static PFNGLTEXTURESTORAGE1DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage1DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXTURESTORAGE1DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXTURESTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage1DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(texture1,target1,levels1,internalformat1,width1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TextureStorage2DEXT
#define GL_ALT_FUNDEF_TextureStorage2DEXT
typedef void (*PFNGLTEXTURESTORAGE2DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glTextureStorage2DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLTEXTURESTORAGE2DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage2DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXTURESTORAGE2DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXTURESTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage2DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(texture1,target1,levels1,internalformat1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TextureStorage3DEXT
#define GL_ALT_FUNDEF_TextureStorage3DEXT
typedef void (*PFNGLTEXTURESTORAGE3DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void glTextureStorage3DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
#ifdef __cplusplus
	static PFNGLTEXTURESTORAGE3DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage3DEXT","GL_EXT_texture_storage");
#else
	static PFNGLTEXTURESTORAGE3DEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXTURESTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage3DEXT","GL_EXT_texture_storage"); }
#endif
	 fn(texture1,target1,levels1,internalformat1,width1,height1,depth1);
}
#endif
CGUARDEND

#endif

#ifndef GL_EXT_texture_type_2_10_10_10_REV
#define GL_EXT_texture_type_2_10_10_10_REV
#ifndef GL_UNSIGNED_INT_2_10_10_10_REV_EXT
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368
#endif //GL_UNSIGNED_INT_2_10_10_10_REV_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_EXT_texture_view
#define GL_EXT_texture_view
#ifndef GL_TEXTURE_VIEW_MIN_LEVEL_EXT
#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT 0x82DB
#endif //GL_TEXTURE_VIEW_MIN_LEVEL_EXT
#ifndef GL_TEXTURE_VIEW_NUM_LEVELS_EXT
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT 0x82DC
#endif //GL_TEXTURE_VIEW_NUM_LEVELS_EXT
#ifndef GL_TEXTURE_VIEW_MIN_LAYER_EXT
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT 0x82DD
#endif //GL_TEXTURE_VIEW_MIN_LAYER_EXT
#ifndef GL_TEXTURE_VIEW_NUM_LAYERS_EXT
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT 0x82DE
#endif //GL_TEXTURE_VIEW_NUM_LAYERS_EXT
#ifndef GL_TEXTURE_IMMUTABLE_LEVELS
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF
#endif //GL_TEXTURE_IMMUTABLE_LEVELS
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_TextureViewEXT
#define GL_ALT_FUNDEF_TextureViewEXT
typedef void (*PFNGLTEXTUREVIEWEXTPROC_ALT)(GLuint,GLenum,GLuint,GLenum,GLuint,GLuint,GLuint,GLuint);
static inline void glTextureViewEXT(GLuint texture1,GLenum target1,GLuint origtexture1,GLenum internalformat1,GLuint minlevel1,GLuint numlevels1,GLuint minlayer1,GLuint numlayers1)
{
#ifdef __cplusplus
	static PFNGLTEXTUREVIEWEXTPROC_ALT fn=(PFNGLTEXTUREVIEWEXTPROC_ALT)glaltGetProcAddressExtension("glTextureViewEXT","GL_EXT_texture_view");
#else
	static PFNGLTEXTUREVIEWEXTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXTUREVIEWEXTPROC_ALT)glaltGetProcAddressExtension("glTextureViewEXT","GL_EXT_texture_view"); }
#endif
	 fn(texture1,target1,origtexture1,internalformat1,minlevel1,numlevels1,minlayer1,numlayers1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_EXT_unpack_subimage
#define GL_EXT_unpack_subimage
#ifndef GL_UNPACK_ROW_LENGTH_EXT
#define GL_UNPACK_ROW_LENGTH_EXT 0x0CF2
#endif //GL_UNPACK_ROW_LENGTH_EXT
#ifndef GL_UNPACK_SKIP_ROWS_EXT
#define GL_UNPACK_SKIP_ROWS_EXT 0x0CF3
#endif //GL_UNPACK_SKIP_ROWS_EXT
#ifndef GL_UNPACK_SKIP_PIXELS_EXT
#define GL_UNPACK_SKIP_PIXELS_EXT 0x0CF4
#endif //GL_UNPACK_SKIP_PIXELS_EXT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_FJ_shader_binary_GCCSO
#define GL_FJ_shader_binary_GCCSO
#ifndef GL_GCCSO_SHADER_BINARY_FJ
#define GL_GCCSO_SHADER_BINARY_FJ 0x9260
#endif //GL_GCCSO_SHADER_BINARY_FJ
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_multisampled_render_to_texture
#define GL_IMG_multisampled_render_to_texture
#ifndef GL_RENDERBUFFER_SAMPLES_IMG
#define GL_RENDERBUFFER_SAMPLES_IMG 0x9133
#endif //GL_RENDERBUFFER_SAMPLES_IMG
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG 0x9134
#endif //GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG
#ifndef GL_MAX_SAMPLES_IMG
#define GL_MAX_SAMPLES_IMG 0x9135
#endif //GL_MAX_SAMPLES_IMG
#ifndef GL_TEXTURE_SAMPLES_IMG
#define GL_TEXTURE_SAMPLES_IMG 0x9136
#endif //GL_TEXTURE_SAMPLES_IMG
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_FramebufferTexture2DMultisampleIMG
#define GL_ALT_FUNDEF_FramebufferTexture2DMultisampleIMG
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT)(GLenum,GLenum,GLenum,GLuint,GLint,GLsizei);
static inline void glFramebufferTexture2DMultisampleIMG(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLsizei samples1)
{
#ifdef __cplusplus
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleIMG","GL_IMG_multisampled_render_to_texture");
#else
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleIMG","GL_IMG_multisampled_render_to_texture"); }
#endif
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleIMG
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleIMG
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleIMG(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleIMG","GL_IMG_multisampled_render_to_texture");
#else
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleIMG","GL_IMG_multisampled_render_to_texture"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif
CGUARDEND

#endif

#ifndef GL_IMG_program_binary
#define GL_IMG_program_binary
#ifndef GL_SGX_PROGRAM_BINARY_IMG
#define GL_SGX_PROGRAM_BINARY_IMG 0x9130
#endif //GL_SGX_PROGRAM_BINARY_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_read_format
#define GL_IMG_read_format
#ifndef GL_BGRA_IMG
#define GL_BGRA_IMG 0x80E1
#endif //GL_BGRA_IMG
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365
#endif //GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_shader_binary
#define GL_IMG_shader_binary
#ifndef GL_SGX_BINARY_IMG
#define GL_SGX_BINARY_IMG 0x8C0A
#endif //GL_SGX_BINARY_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_texture_compression_pvrtc
#define GL_IMG_texture_compression_pvrtc
#ifndef GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG
#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG 0x8C00
#endif //GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG
#ifndef GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG 0x8C01
#endif //GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG
#ifndef GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG 0x8C02
#endif //GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
#ifndef GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG 0x8C03
#endif //GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_texture_compression_pvrtc2
#define GL_IMG_texture_compression_pvrtc2
#ifndef GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG 0x9137
#endif //GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG
#ifndef GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG 0x9138
#endif //GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_INTEL_performance_query
#define GL_INTEL_performance_query
#ifndef GL_PERFQUERY_SINGLE_CONTEXT_INTEL
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#endif //GL_PERFQUERY_SINGLE_CONTEXT_INTEL
#ifndef GL_PERFQUERY_GLOBAL_CONTEXT_INTEL
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#endif //GL_PERFQUERY_GLOBAL_CONTEXT_INTEL
#ifndef GL_PERFQUERY_DONOT_FLUSH_INTEL
#define GL_PERFQUERY_DONOT_FLUSH_INTEL 0x83F9
#endif //GL_PERFQUERY_DONOT_FLUSH_INTEL
#ifndef GL_PERFQUERY_FLUSH_INTEL
#define GL_PERFQUERY_FLUSH_INTEL 0x83FA
#endif //GL_PERFQUERY_FLUSH_INTEL
#ifndef GL_PERFQUERY_WAIT_INTEL
#define GL_PERFQUERY_WAIT_INTEL 0x83FB
#endif //GL_PERFQUERY_WAIT_INTEL
#ifndef GL_PERFQUERY_COUNTER_EVENT_INTEL
#define GL_PERFQUERY_COUNTER_EVENT_INTEL 0x94F0
#endif //GL_PERFQUERY_COUNTER_EVENT_INTEL
#ifndef GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#endif //GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL
#ifndef GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#endif //GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL
#ifndef GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#endif //GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL
#ifndef GL_PERFQUERY_COUNTER_RAW_INTEL
#define GL_PERFQUERY_COUNTER_RAW_INTEL 0x94F4
#endif //GL_PERFQUERY_COUNTER_RAW_INTEL
#ifndef GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#endif //GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL
#ifndef GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#endif //GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL
#ifndef GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#endif //GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL
#ifndef GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#endif //GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL
#ifndef GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#endif //GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL
#ifndef GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#endif //GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL
#ifndef GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#endif //GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL
#ifndef GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#endif //GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL
#ifndef GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#endif //GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL
#ifndef GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
#endif //GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BeginPerfQueryINTEL
#define GL_ALT_FUNDEF_BeginPerfQueryINTEL
typedef void (*PFNGLBEGINPERFQUERYINTELPROC_ALT)(GLuint);
static inline void glBeginPerfQueryINTEL(GLuint queryHandle1)
{
#ifdef __cplusplus
	static PFNGLBEGINPERFQUERYINTELPROC_ALT fn=(PFNGLBEGINPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glBeginPerfQueryINTEL","GL_INTEL_performance_query");
#else
	static PFNGLBEGINPERFQUERYINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBEGINPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glBeginPerfQueryINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryHandle1);
}
#endif

#ifndef	GL_ALT_FUNDEF_CreatePerfQueryINTEL
#define GL_ALT_FUNDEF_CreatePerfQueryINTEL
typedef void (*PFNGLCREATEPERFQUERYINTELPROC_ALT)(GLuint,GLuint *);
static inline void glCreatePerfQueryINTEL(GLuint queryId1,GLuint * queryHandle1)
{
#ifdef __cplusplus
	static PFNGLCREATEPERFQUERYINTELPROC_ALT fn=(PFNGLCREATEPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glCreatePerfQueryINTEL","GL_INTEL_performance_query");
#else
	static PFNGLCREATEPERFQUERYINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCREATEPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glCreatePerfQueryINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryId1,queryHandle1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeletePerfQueryINTEL
#define GL_ALT_FUNDEF_DeletePerfQueryINTEL
typedef void (*PFNGLDELETEPERFQUERYINTELPROC_ALT)(GLuint);
static inline void glDeletePerfQueryINTEL(GLuint queryHandle1)
{
#ifdef __cplusplus
	static PFNGLDELETEPERFQUERYINTELPROC_ALT fn=(PFNGLDELETEPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glDeletePerfQueryINTEL","GL_INTEL_performance_query");
#else
	static PFNGLDELETEPERFQUERYINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glDeletePerfQueryINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryHandle1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EndPerfQueryINTEL
#define GL_ALT_FUNDEF_EndPerfQueryINTEL
typedef void (*PFNGLENDPERFQUERYINTELPROC_ALT)(GLuint);
static inline void glEndPerfQueryINTEL(GLuint queryHandle1)
{
#ifdef __cplusplus
	static PFNGLENDPERFQUERYINTELPROC_ALT fn=(PFNGLENDPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glEndPerfQueryINTEL","GL_INTEL_performance_query");
#else
	static PFNGLENDPERFQUERYINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENDPERFQUERYINTELPROC_ALT)glaltGetProcAddressExtension("glEndPerfQueryINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryHandle1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFirstPerfQueryIdINTEL
#define GL_ALT_FUNDEF_GetFirstPerfQueryIdINTEL
typedef void (*PFNGLGETFIRSTPERFQUERYIDINTELPROC_ALT)(GLuint *);
static inline void glGetFirstPerfQueryIdINTEL(GLuint * queryId1)
{
#ifdef __cplusplus
	static PFNGLGETFIRSTPERFQUERYIDINTELPROC_ALT fn=(PFNGLGETFIRSTPERFQUERYIDINTELPROC_ALT)glaltGetProcAddressExtension("glGetFirstPerfQueryIdINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETFIRSTPERFQUERYIDINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETFIRSTPERFQUERYIDINTELPROC_ALT)glaltGetProcAddressExtension("glGetFirstPerfQueryIdINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryId1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetNextPerfQueryIdINTEL
#define GL_ALT_FUNDEF_GetNextPerfQueryIdINTEL
typedef void (*PFNGLGETNEXTPERFQUERYIDINTELPROC_ALT)(GLuint,GLuint *);
static inline void glGetNextPerfQueryIdINTEL(GLuint queryId1,GLuint * nextQueryId1)
{
#ifdef __cplusplus
	static PFNGLGETNEXTPERFQUERYIDINTELPROC_ALT fn=(PFNGLGETNEXTPERFQUERYIDINTELPROC_ALT)glaltGetProcAddressExtension("glGetNextPerfQueryIdINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETNEXTPERFQUERYIDINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNEXTPERFQUERYIDINTELPROC_ALT)glaltGetProcAddressExtension("glGetNextPerfQueryIdINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryId1,nextQueryId1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfCounterInfoINTEL
#define GL_ALT_FUNDEF_GetPerfCounterInfoINTEL
typedef void (*PFNGLGETPERFCOUNTERINFOINTELPROC_ALT)(GLuint,GLuint,GLuint,GLchar *,GLuint,GLchar *,GLuint *,GLuint *,GLuint *,GLuint *,GLuint64 *);
static inline void glGetPerfCounterInfoINTEL(GLuint queryId1,GLuint counterId1,GLuint counterNameLength1,GLchar * counterName1,GLuint counterDescLength1,GLchar * counterDesc1,GLuint * counterOffset1,GLuint * counterDataSize1,GLuint * counterTypeEnum1,GLuint * counterDataTypeEnum1,GLuint64 * rawCounterMaxValue1)
{
#ifdef __cplusplus
	static PFNGLGETPERFCOUNTERINFOINTELPROC_ALT fn=(PFNGLGETPERFCOUNTERINFOINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfCounterInfoINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETPERFCOUNTERINFOINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFCOUNTERINFOINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfCounterInfoINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryId1,counterId1,counterNameLength1,counterName1,counterDescLength1,counterDesc1,counterOffset1,counterDataSize1,counterTypeEnum1,counterDataTypeEnum1,rawCounterMaxValue1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfQueryDataINTEL
#define GL_ALT_FUNDEF_GetPerfQueryDataINTEL
typedef void (*PFNGLGETPERFQUERYDATAINTELPROC_ALT)(GLuint,GLuint,GLsizei,GLvoid *,GLuint *);
static inline void glGetPerfQueryDataINTEL(GLuint queryHandle1,GLuint flags1,GLsizei dataSize1,GLvoid * data1,GLuint * bytesWritten1)
{
#ifdef __cplusplus
	static PFNGLGETPERFQUERYDATAINTELPROC_ALT fn=(PFNGLGETPERFQUERYDATAINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryDataINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETPERFQUERYDATAINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFQUERYDATAINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryDataINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryHandle1,flags1,dataSize1,data1,bytesWritten1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfQueryIdByNameINTEL
#define GL_ALT_FUNDEF_GetPerfQueryIdByNameINTEL
typedef void (*PFNGLGETPERFQUERYIDBYNAMEINTELPROC_ALT)(GLchar *,GLuint *);
static inline void glGetPerfQueryIdByNameINTEL(GLchar * queryName1,GLuint * queryId1)
{
#ifdef __cplusplus
	static PFNGLGETPERFQUERYIDBYNAMEINTELPROC_ALT fn=(PFNGLGETPERFQUERYIDBYNAMEINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryIdByNameINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETPERFQUERYIDBYNAMEINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFQUERYIDBYNAMEINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryIdByNameINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryName1,queryId1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPerfQueryInfoINTEL
#define GL_ALT_FUNDEF_GetPerfQueryInfoINTEL
typedef void (*PFNGLGETPERFQUERYINFOINTELPROC_ALT)(GLuint,GLuint,GLchar *,GLuint *,GLuint *,GLuint *,GLuint *);
static inline void glGetPerfQueryInfoINTEL(GLuint queryId1,GLuint queryNameLength1,GLchar * queryName1,GLuint * dataSize1,GLuint * noCounters1,GLuint * noInstances1,GLuint * capsMask1)
{
#ifdef __cplusplus
	static PFNGLGETPERFQUERYINFOINTELPROC_ALT fn=(PFNGLGETPERFQUERYINFOINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryInfoINTEL","GL_INTEL_performance_query");
#else
	static PFNGLGETPERFQUERYINFOINTELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPERFQUERYINFOINTELPROC_ALT)glaltGetProcAddressExtension("glGetPerfQueryInfoINTEL","GL_INTEL_performance_query"); }
#endif
	 fn(queryId1,queryNameLength1,queryName1,dataSize1,noCounters1,noInstances1,capsMask1);
}
#endif
CGUARDEND

#endif

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced
#ifndef GL_MULTIPLY_KHR
#define GL_MULTIPLY_KHR 0x9294
#endif //GL_MULTIPLY_KHR
#ifndef GL_SCREEN_KHR
#define GL_SCREEN_KHR 0x9295
#endif //GL_SCREEN_KHR
#ifndef GL_OVERLAY_KHR
#define GL_OVERLAY_KHR 0x9296
#endif //GL_OVERLAY_KHR
#ifndef GL_DARKEN_KHR
#define GL_DARKEN_KHR 0x9297
#endif //GL_DARKEN_KHR
#ifndef GL_LIGHTEN_KHR
#define GL_LIGHTEN_KHR 0x9298
#endif //GL_LIGHTEN_KHR
#ifndef GL_COLORDODGE_KHR
#define GL_COLORDODGE_KHR 0x9299
#endif //GL_COLORDODGE_KHR
#ifndef GL_COLORBURN_KHR
#define GL_COLORBURN_KHR 0x929A
#endif //GL_COLORBURN_KHR
#ifndef GL_HARDLIGHT_KHR
#define GL_HARDLIGHT_KHR 0x929B
#endif //GL_HARDLIGHT_KHR
#ifndef GL_SOFTLIGHT_KHR
#define GL_SOFTLIGHT_KHR 0x929C
#endif //GL_SOFTLIGHT_KHR
#ifndef GL_DIFFERENCE_KHR
#define GL_DIFFERENCE_KHR 0x929E
#endif //GL_DIFFERENCE_KHR
#ifndef GL_EXCLUSION_KHR
#define GL_EXCLUSION_KHR 0x92A0
#endif //GL_EXCLUSION_KHR
#ifndef GL_HSL_HUE_KHR
#define GL_HSL_HUE_KHR 0x92AD
#endif //GL_HSL_HUE_KHR
#ifndef GL_HSL_SATURATION_KHR
#define GL_HSL_SATURATION_KHR 0x92AE
#endif //GL_HSL_SATURATION_KHR
#ifndef GL_HSL_COLOR_KHR
#define GL_HSL_COLOR_KHR 0x92AF
#endif //GL_HSL_COLOR_KHR
#ifndef GL_HSL_LUMINOSITY_KHR
#define GL_HSL_LUMINOSITY_KHR 0x92B0
#endif //GL_HSL_LUMINOSITY_KHR
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendBarrierKHR
#define GL_ALT_FUNDEF_BlendBarrierKHR
typedef void (*PFNGLBLENDBARRIERKHRPROC_ALT)();
static inline void glBlendBarrierKHR()
{
#ifdef __cplusplus
	static PFNGLBLENDBARRIERKHRPROC_ALT fn=(PFNGLBLENDBARRIERKHRPROC_ALT)glaltGetProcAddressExtension("glBlendBarrierKHR","GL_KHR_blend_equation_advanced");
#else
	static PFNGLBLENDBARRIERKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDBARRIERKHRPROC_ALT)glaltGetProcAddressExtension("glBlendBarrierKHR","GL_KHR_blend_equation_advanced"); }
#endif
	 fn();
}
#endif
CGUARDEND

#endif

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent
#ifndef GL_BLEND_ADVANCED_COHERENT_KHR
#define GL_BLEND_ADVANCED_COHERENT_KHR 0x9285
#endif //GL_BLEND_ADVANCED_COHERENT_KHR
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control
#ifndef GL_NONE
#define GL_NONE 0
#endif //GL_NONE
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR_KHR
#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR 0x82FB
#endif //GL_CONTEXT_RELEASE_BEHAVIOR_KHR
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR
#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#endif //GL_CONTEXT_RELEASE_BEHAVIOR
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR 0x82FC
#endif //GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
#endif //GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_KHR_debug
#define GL_KHR_debug
#ifndef GL_CONTEXT_FLAG_DEBUG_BIT
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#endif //GL_CONTEXT_FLAG_DEBUG_BIT
#ifndef GL_CONTEXT_FLAG_DEBUG_BIT_KHR
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR 0x00000002
#endif //GL_CONTEXT_FLAG_DEBUG_BIT_KHR
#ifndef GL_STACK_OVERFLOW_KHR
#define GL_STACK_OVERFLOW_KHR 0x0503
#endif //GL_STACK_OVERFLOW_KHR
#ifndef GL_STACK_OVERFLOW
#define GL_STACK_OVERFLOW 0x0503
#endif //GL_STACK_OVERFLOW
#ifndef GL_STACK_UNDERFLOW_KHR
#define GL_STACK_UNDERFLOW_KHR 0x0504
#endif //GL_STACK_UNDERFLOW_KHR
#ifndef GL_STACK_UNDERFLOW
#define GL_STACK_UNDERFLOW 0x0504
#endif //GL_STACK_UNDERFLOW
#ifndef GL_VERTEX_ARRAY_KHR
#define GL_VERTEX_ARRAY_KHR 0x8074
#endif //GL_VERTEX_ARRAY_KHR
#ifndef GL_VERTEX_ARRAY
#define GL_VERTEX_ARRAY 0x8074
#endif //GL_VERTEX_ARRAY
#ifndef GL_DEBUG_OUTPUT_SYNCHRONOUS
#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#endif //GL_DEBUG_OUTPUT_SYNCHRONOUS
#ifndef GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR 0x8242
#endif //GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR
#ifndef GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#endif //GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH
#ifndef GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR 0x8243
#endif //GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR
#ifndef GL_DEBUG_CALLBACK_FUNCTION_KHR
#define GL_DEBUG_CALLBACK_FUNCTION_KHR 0x8244
#endif //GL_DEBUG_CALLBACK_FUNCTION_KHR
#ifndef GL_DEBUG_CALLBACK_FUNCTION
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#endif //GL_DEBUG_CALLBACK_FUNCTION
#ifndef GL_DEBUG_CALLBACK_USER_PARAM
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#endif //GL_DEBUG_CALLBACK_USER_PARAM
#ifndef GL_DEBUG_CALLBACK_USER_PARAM_KHR
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR 0x8245
#endif //GL_DEBUG_CALLBACK_USER_PARAM_KHR
#ifndef GL_DEBUG_SOURCE_API_KHR
#define GL_DEBUG_SOURCE_API_KHR 0x8246
#endif //GL_DEBUG_SOURCE_API_KHR
#ifndef GL_DEBUG_SOURCE_API
#define GL_DEBUG_SOURCE_API 0x8246
#endif //GL_DEBUG_SOURCE_API
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#endif //GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#endif //GL_DEBUG_SOURCE_WINDOW_SYSTEM
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER_KHR
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#endif //GL_DEBUG_SOURCE_SHADER_COMPILER_KHR
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#endif //GL_DEBUG_SOURCE_SHADER_COMPILER
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY_KHR
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR 0x8249
#endif //GL_DEBUG_SOURCE_THIRD_PARTY_KHR
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#endif //GL_DEBUG_SOURCE_THIRD_PARTY
#ifndef GL_DEBUG_SOURCE_APPLICATION_KHR
#define GL_DEBUG_SOURCE_APPLICATION_KHR 0x824A
#endif //GL_DEBUG_SOURCE_APPLICATION_KHR
#ifndef GL_DEBUG_SOURCE_APPLICATION
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#endif //GL_DEBUG_SOURCE_APPLICATION
#ifndef GL_DEBUG_SOURCE_OTHER_KHR
#define GL_DEBUG_SOURCE_OTHER_KHR 0x824B
#endif //GL_DEBUG_SOURCE_OTHER_KHR
#ifndef GL_DEBUG_SOURCE_OTHER
#define GL_DEBUG_SOURCE_OTHER 0x824B
#endif //GL_DEBUG_SOURCE_OTHER
#ifndef GL_DEBUG_TYPE_ERROR
#define GL_DEBUG_TYPE_ERROR 0x824C
#endif //GL_DEBUG_TYPE_ERROR
#ifndef GL_DEBUG_TYPE_ERROR_KHR
#define GL_DEBUG_TYPE_ERROR_KHR 0x824C
#endif //GL_DEBUG_TYPE_ERROR_KHR
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#endif //GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#endif //GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#endif //GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#endif //GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR
#ifndef GL_DEBUG_TYPE_PORTABILITY
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#endif //GL_DEBUG_TYPE_PORTABILITY
#ifndef GL_DEBUG_TYPE_PORTABILITY_KHR
#define GL_DEBUG_TYPE_PORTABILITY_KHR 0x824F
#endif //GL_DEBUG_TYPE_PORTABILITY_KHR
#ifndef GL_DEBUG_TYPE_PERFORMANCE_KHR
#define GL_DEBUG_TYPE_PERFORMANCE_KHR 0x8250
#endif //GL_DEBUG_TYPE_PERFORMANCE_KHR
#ifndef GL_DEBUG_TYPE_PERFORMANCE
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#endif //GL_DEBUG_TYPE_PERFORMANCE
#ifndef GL_DEBUG_TYPE_OTHER_KHR
#define GL_DEBUG_TYPE_OTHER_KHR 0x8251
#endif //GL_DEBUG_TYPE_OTHER_KHR
#ifndef GL_DEBUG_TYPE_OTHER
#define GL_DEBUG_TYPE_OTHER 0x8251
#endif //GL_DEBUG_TYPE_OTHER
#ifndef GL_DEBUG_TYPE_MARKER
#define GL_DEBUG_TYPE_MARKER 0x8268
#endif //GL_DEBUG_TYPE_MARKER
#ifndef GL_DEBUG_TYPE_MARKER_KHR
#define GL_DEBUG_TYPE_MARKER_KHR 0x8268
#endif //GL_DEBUG_TYPE_MARKER_KHR
#ifndef GL_DEBUG_TYPE_PUSH_GROUP_KHR
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR 0x8269
#endif //GL_DEBUG_TYPE_PUSH_GROUP_KHR
#ifndef GL_DEBUG_TYPE_PUSH_GROUP
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#endif //GL_DEBUG_TYPE_PUSH_GROUP
#ifndef GL_DEBUG_TYPE_POP_GROUP
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#endif //GL_DEBUG_TYPE_POP_GROUP
#ifndef GL_DEBUG_TYPE_POP_GROUP_KHR
#define GL_DEBUG_TYPE_POP_GROUP_KHR 0x826A
#endif //GL_DEBUG_TYPE_POP_GROUP_KHR
#ifndef GL_DEBUG_SEVERITY_NOTIFICATION_KHR
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#endif //GL_DEBUG_SEVERITY_NOTIFICATION_KHR
#ifndef GL_DEBUG_SEVERITY_NOTIFICATION
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#endif //GL_DEBUG_SEVERITY_NOTIFICATION
#ifndef GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR 0x826C
#endif //GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR
#ifndef GL_MAX_DEBUG_GROUP_STACK_DEPTH
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#endif //GL_MAX_DEBUG_GROUP_STACK_DEPTH
#ifndef GL_DEBUG_GROUP_STACK_DEPTH_KHR
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR 0x826D
#endif //GL_DEBUG_GROUP_STACK_DEPTH_KHR
#ifndef GL_DEBUG_GROUP_STACK_DEPTH
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#endif //GL_DEBUG_GROUP_STACK_DEPTH
#ifndef GL_BUFFER_KHR
#define GL_BUFFER_KHR 0x82E0
#endif //GL_BUFFER_KHR
#ifndef GL_BUFFER
#define GL_BUFFER 0x82E0
#endif //GL_BUFFER
#ifndef GL_SHADER_KHR
#define GL_SHADER_KHR 0x82E1
#endif //GL_SHADER_KHR
#ifndef GL_SHADER
#define GL_SHADER 0x82E1
#endif //GL_SHADER
#ifndef GL_PROGRAM
#define GL_PROGRAM 0x82E2
#endif //GL_PROGRAM
#ifndef GL_PROGRAM_KHR
#define GL_PROGRAM_KHR 0x82E2
#endif //GL_PROGRAM_KHR
#ifndef GL_QUERY
#define GL_QUERY 0x82E3
#endif //GL_QUERY
#ifndef GL_QUERY_KHR
#define GL_QUERY_KHR 0x82E3
#endif //GL_QUERY_KHR
#ifndef GL_PROGRAM_PIPELINE
#define GL_PROGRAM_PIPELINE 0x82E4
#endif //GL_PROGRAM_PIPELINE
#ifndef GL_SAMPLER_KHR
#define GL_SAMPLER_KHR 0x82E6
#endif //GL_SAMPLER_KHR
#ifndef GL_SAMPLER
#define GL_SAMPLER 0x82E6
#endif //GL_SAMPLER
#ifndef GL_MAX_LABEL_LENGTH
#define GL_MAX_LABEL_LENGTH 0x82E8
#endif //GL_MAX_LABEL_LENGTH
#ifndef GL_MAX_LABEL_LENGTH_KHR
#define GL_MAX_LABEL_LENGTH_KHR 0x82E8
#endif //GL_MAX_LABEL_LENGTH_KHR
#ifndef GL_MAX_DEBUG_MESSAGE_LENGTH
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#endif //GL_MAX_DEBUG_MESSAGE_LENGTH
#ifndef GL_MAX_DEBUG_MESSAGE_LENGTH_KHR
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR 0x9143
#endif //GL_MAX_DEBUG_MESSAGE_LENGTH_KHR
#ifndef GL_MAX_DEBUG_LOGGED_MESSAGES
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#endif //GL_MAX_DEBUG_LOGGED_MESSAGES
#ifndef GL_MAX_DEBUG_LOGGED_MESSAGES_KHR
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR 0x9144
#endif //GL_MAX_DEBUG_LOGGED_MESSAGES_KHR
#ifndef GL_DEBUG_LOGGED_MESSAGES
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#endif //GL_DEBUG_LOGGED_MESSAGES
#ifndef GL_DEBUG_LOGGED_MESSAGES_KHR
#define GL_DEBUG_LOGGED_MESSAGES_KHR 0x9145
#endif //GL_DEBUG_LOGGED_MESSAGES_KHR
#ifndef GL_DEBUG_SEVERITY_HIGH
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#endif //GL_DEBUG_SEVERITY_HIGH
#ifndef GL_DEBUG_SEVERITY_HIGH_KHR
#define GL_DEBUG_SEVERITY_HIGH_KHR 0x9146
#endif //GL_DEBUG_SEVERITY_HIGH_KHR
#ifndef GL_DEBUG_SEVERITY_MEDIUM_KHR
#define GL_DEBUG_SEVERITY_MEDIUM_KHR 0x9147
#endif //GL_DEBUG_SEVERITY_MEDIUM_KHR
#ifndef GL_DEBUG_SEVERITY_MEDIUM
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#endif //GL_DEBUG_SEVERITY_MEDIUM
#ifndef GL_DEBUG_SEVERITY_LOW_KHR
#define GL_DEBUG_SEVERITY_LOW_KHR 0x9148
#endif //GL_DEBUG_SEVERITY_LOW_KHR
#ifndef GL_DEBUG_SEVERITY_LOW
#define GL_DEBUG_SEVERITY_LOW 0x9148
#endif //GL_DEBUG_SEVERITY_LOW
#ifndef GL_DEBUG_OUTPUT
#define GL_DEBUG_OUTPUT 0x92E0
#endif //GL_DEBUG_OUTPUT
#ifndef GL_DEBUG_OUTPUT_KHR
#define GL_DEBUG_OUTPUT_KHR 0x92E0
#endif //GL_DEBUG_OUTPUT_KHR
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DebugMessageCallback
#define GL_ALT_FUNDEF_DebugMessageCallback
typedef void (*PFNGLDEBUGMESSAGECALLBACKPROC_ALT)(GLALTDEBUGPROC,const void *);
static inline void glDebugMessageCallback(GLALTDEBUGPROC callback1,const void * userParam1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGECALLBACKPROC_ALT fn=(PFNGLDEBUGMESSAGECALLBACKPROC_ALT)glaltGetProcAddressExtension("glDebugMessageCallback","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGECALLBACKPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGECALLBACKPROC_ALT)glaltGetProcAddressExtension("glDebugMessageCallback","GL_KHR_debug"); }
#endif
	 fn(callback1,userParam1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DebugMessageCallbackKHR
#define GL_ALT_FUNDEF_DebugMessageCallbackKHR
typedef void (*PFNGLDEBUGMESSAGECALLBACKKHRPROC_ALT)(GLALTDEBUGPROCKHR,const void *);
static inline void glDebugMessageCallbackKHR(GLALTDEBUGPROCKHR callback1,const void * userParam1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGECALLBACKKHRPROC_ALT fn=(PFNGLDEBUGMESSAGECALLBACKKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageCallbackKHR","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGECALLBACKKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGECALLBACKKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageCallbackKHR","GL_KHR_debug"); }
#endif
	 fn(callback1,userParam1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DebugMessageControl
#define GL_ALT_FUNDEF_DebugMessageControl
typedef void (*PFNGLDEBUGMESSAGECONTROLPROC_ALT)(GLenum,GLenum,GLenum,GLsizei,const GLuint *,GLboolean);
static inline void glDebugMessageControl(GLenum source1,GLenum type1,GLenum severity1,GLsizei count1,const GLuint * ids1,GLboolean enabled1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGECONTROLPROC_ALT fn=(PFNGLDEBUGMESSAGECONTROLPROC_ALT)glaltGetProcAddressExtension("glDebugMessageControl","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGECONTROLPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGECONTROLPROC_ALT)glaltGetProcAddressExtension("glDebugMessageControl","GL_KHR_debug"); }
#endif
	 fn(source1,type1,severity1,count1,ids1,enabled1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DebugMessageControlKHR
#define GL_ALT_FUNDEF_DebugMessageControlKHR
typedef void (*PFNGLDEBUGMESSAGECONTROLKHRPROC_ALT)(GLenum,GLenum,GLenum,GLsizei,const GLuint *,GLboolean);
static inline void glDebugMessageControlKHR(GLenum source1,GLenum type1,GLenum severity1,GLsizei count1,const GLuint * ids1,GLboolean enabled1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGECONTROLKHRPROC_ALT fn=(PFNGLDEBUGMESSAGECONTROLKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageControlKHR","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGECONTROLKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGECONTROLKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageControlKHR","GL_KHR_debug"); }
#endif
	 fn(source1,type1,severity1,count1,ids1,enabled1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DebugMessageInsert
#define GL_ALT_FUNDEF_DebugMessageInsert
typedef void (*PFNGLDEBUGMESSAGEINSERTPROC_ALT)(GLenum,GLenum,GLuint,GLenum,GLsizei,const GLchar *);
static inline void glDebugMessageInsert(GLenum source1,GLenum type1,GLuint id1,GLenum severity1,GLsizei length1,const GLchar * buf1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGEINSERTPROC_ALT fn=(PFNGLDEBUGMESSAGEINSERTPROC_ALT)glaltGetProcAddressExtension("glDebugMessageInsert","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGEINSERTPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGEINSERTPROC_ALT)glaltGetProcAddressExtension("glDebugMessageInsert","GL_KHR_debug"); }
#endif
	 fn(source1,type1,id1,severity1,length1,buf1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DebugMessageInsertKHR
#define GL_ALT_FUNDEF_DebugMessageInsertKHR
typedef void (*PFNGLDEBUGMESSAGEINSERTKHRPROC_ALT)(GLenum,GLenum,GLuint,GLenum,GLsizei,const GLchar *);
static inline void glDebugMessageInsertKHR(GLenum source1,GLenum type1,GLuint id1,GLenum severity1,GLsizei length1,const GLchar * buf1)
{
#ifdef __cplusplus
	static PFNGLDEBUGMESSAGEINSERTKHRPROC_ALT fn=(PFNGLDEBUGMESSAGEINSERTKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageInsertKHR","GL_KHR_debug");
#else
	static PFNGLDEBUGMESSAGEINSERTKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEBUGMESSAGEINSERTKHRPROC_ALT)glaltGetProcAddressExtension("glDebugMessageInsertKHR","GL_KHR_debug"); }
#endif
	 fn(source1,type1,id1,severity1,length1,buf1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetDebugMessageLog
#define GL_ALT_FUNDEF_GetDebugMessageLog
typedef GLuint (*PFNGLGETDEBUGMESSAGELOGPROC_ALT)(GLuint,GLsizei,GLenum *,GLenum *,GLuint *,GLenum *,GLsizei *,GLchar *);
static inline GLuint glGetDebugMessageLog(GLuint count1,GLsizei bufSize1,GLenum * sources1,GLenum * types1,GLuint * ids1,GLenum * severities1,GLsizei * lengths1,GLchar * messageLog1)
{
#ifdef __cplusplus
	static PFNGLGETDEBUGMESSAGELOGPROC_ALT fn=(PFNGLGETDEBUGMESSAGELOGPROC_ALT)glaltGetProcAddressExtension("glGetDebugMessageLog","GL_KHR_debug");
#else
	static PFNGLGETDEBUGMESSAGELOGPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETDEBUGMESSAGELOGPROC_ALT)glaltGetProcAddressExtension("glGetDebugMessageLog","GL_KHR_debug"); }
#endif
	return fn(count1,bufSize1,sources1,types1,ids1,severities1,lengths1,messageLog1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetDebugMessageLogKHR
#define GL_ALT_FUNDEF_GetDebugMessageLogKHR
typedef GLuint (*PFNGLGETDEBUGMESSAGELOGKHRPROC_ALT)(GLuint,GLsizei,GLenum *,GLenum *,GLuint *,GLenum *,GLsizei *,GLchar *);
static inline GLuint glGetDebugMessageLogKHR(GLuint count1,GLsizei bufSize1,GLenum * sources1,GLenum * types1,GLuint * ids1,GLenum * severities1,GLsizei * lengths1,GLchar * messageLog1)
{
#ifdef __cplusplus
	static PFNGLGETDEBUGMESSAGELOGKHRPROC_ALT fn=(PFNGLGETDEBUGMESSAGELOGKHRPROC_ALT)glaltGetProcAddressExtension("glGetDebugMessageLogKHR","GL_KHR_debug");
#else
	static PFNGLGETDEBUGMESSAGELOGKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETDEBUGMESSAGELOGKHRPROC_ALT)glaltGetProcAddressExtension("glGetDebugMessageLogKHR","GL_KHR_debug"); }
#endif
	return fn(count1,bufSize1,sources1,types1,ids1,severities1,lengths1,messageLog1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetObjectLabel
#define GL_ALT_FUNDEF_GetObjectLabel
typedef void (*PFNGLGETOBJECTLABELPROC_ALT)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetObjectLabel(GLenum identifier1,GLuint name1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLGETOBJECTLABELPROC_ALT fn=(PFNGLGETOBJECTLABELPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabel","GL_KHR_debug");
#else
	static PFNGLGETOBJECTLABELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETOBJECTLABELPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabel","GL_KHR_debug"); }
#endif
	 fn(identifier1,name1,bufSize1,length1,label1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetObjectLabelKHR
#define GL_ALT_FUNDEF_GetObjectLabelKHR
typedef void (*PFNGLGETOBJECTLABELKHRPROC_ALT)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetObjectLabelKHR(GLenum identifier1,GLuint name1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLGETOBJECTLABELKHRPROC_ALT fn=(PFNGLGETOBJECTLABELKHRPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabelKHR","GL_KHR_debug");
#else
	static PFNGLGETOBJECTLABELKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETOBJECTLABELKHRPROC_ALT)glaltGetProcAddressExtension("glGetObjectLabelKHR","GL_KHR_debug"); }
#endif
	 fn(identifier1,name1,bufSize1,length1,label1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetObjectPtrLabel
#define GL_ALT_FUNDEF_GetObjectPtrLabel
typedef void (*PFNGLGETOBJECTPTRLABELPROC_ALT)(const void *,GLsizei,GLsizei *,GLchar *);
static inline void glGetObjectPtrLabel(const void * ptr1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLGETOBJECTPTRLABELPROC_ALT fn=(PFNGLGETOBJECTPTRLABELPROC_ALT)glaltGetProcAddressExtension("glGetObjectPtrLabel","GL_KHR_debug");
#else
	static PFNGLGETOBJECTPTRLABELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETOBJECTPTRLABELPROC_ALT)glaltGetProcAddressExtension("glGetObjectPtrLabel","GL_KHR_debug"); }
#endif
	 fn(ptr1,bufSize1,length1,label1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetObjectPtrLabelKHR
#define GL_ALT_FUNDEF_GetObjectPtrLabelKHR
typedef void (*PFNGLGETOBJECTPTRLABELKHRPROC_ALT)(const void *,GLsizei,GLsizei *,GLchar *);
static inline void glGetObjectPtrLabelKHR(const void * ptr1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLGETOBJECTPTRLABELKHRPROC_ALT fn=(PFNGLGETOBJECTPTRLABELKHRPROC_ALT)glaltGetProcAddressExtension("glGetObjectPtrLabelKHR","GL_KHR_debug");
#else
	static PFNGLGETOBJECTPTRLABELKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETOBJECTPTRLABELKHRPROC_ALT)glaltGetProcAddressExtension("glGetObjectPtrLabelKHR","GL_KHR_debug"); }
#endif
	 fn(ptr1,bufSize1,length1,label1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetPointerv
#define GL_ALT_FUNDEF_GetPointerv
typedef void (*PFNGLGETPOINTERVPROC_ALT)(GLenum,void **);
static inline void glGetPointerv(GLenum pname1,void ** params1)
{
#ifdef __cplusplus
	static PFNGLGETPOINTERVPROC_ALT fn=(PFNGLGETPOINTERVPROC_ALT)glaltGetProcAddressExtension("glGetPointerv","GL_KHR_debug");
#else
	static PFNGLGETPOINTERVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPOINTERVPROC_ALT)glaltGetProcAddressExtension("glGetPointerv","GL_KHR_debug"); }
#endif
	 fn(pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPointervKHR
#define GL_ALT_FUNDEF_GetPointervKHR
typedef void (*PFNGLGETPOINTERVKHRPROC_ALT)(GLenum,void **);
static inline void glGetPointervKHR(GLenum pname1,void ** params1)
{
#ifdef __cplusplus
	static PFNGLGETPOINTERVKHRPROC_ALT fn=(PFNGLGETPOINTERVKHRPROC_ALT)glaltGetProcAddressExtension("glGetPointervKHR","GL_KHR_debug");
#else
	static PFNGLGETPOINTERVKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPOINTERVKHRPROC_ALT)glaltGetProcAddressExtension("glGetPointervKHR","GL_KHR_debug"); }
#endif
	 fn(pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ObjectLabel
#define GL_ALT_FUNDEF_ObjectLabel
typedef void (*PFNGLOBJECTLABELPROC_ALT)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void glObjectLabel(GLenum identifier1,GLuint name1,GLsizei length1,const GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLOBJECTLABELPROC_ALT fn=(PFNGLOBJECTLABELPROC_ALT)glaltGetProcAddressExtension("glObjectLabel","GL_KHR_debug");
#else
	static PFNGLOBJECTLABELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLOBJECTLABELPROC_ALT)glaltGetProcAddressExtension("glObjectLabel","GL_KHR_debug"); }
#endif
	 fn(identifier1,name1,length1,label1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ObjectLabelKHR
#define GL_ALT_FUNDEF_ObjectLabelKHR
typedef void (*PFNGLOBJECTLABELKHRPROC_ALT)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void glObjectLabelKHR(GLenum identifier1,GLuint name1,GLsizei length1,const GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLOBJECTLABELKHRPROC_ALT fn=(PFNGLOBJECTLABELKHRPROC_ALT)glaltGetProcAddressExtension("glObjectLabelKHR","GL_KHR_debug");
#else
	static PFNGLOBJECTLABELKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLOBJECTLABELKHRPROC_ALT)glaltGetProcAddressExtension("glObjectLabelKHR","GL_KHR_debug"); }
#endif
	 fn(identifier1,name1,length1,label1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ObjectPtrLabel
#define GL_ALT_FUNDEF_ObjectPtrLabel
typedef void (*PFNGLOBJECTPTRLABELPROC_ALT)(const void *,GLsizei,const GLchar *);
static inline void glObjectPtrLabel(const void * ptr1,GLsizei length1,const GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLOBJECTPTRLABELPROC_ALT fn=(PFNGLOBJECTPTRLABELPROC_ALT)glaltGetProcAddressExtension("glObjectPtrLabel","GL_KHR_debug");
#else
	static PFNGLOBJECTPTRLABELPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLOBJECTPTRLABELPROC_ALT)glaltGetProcAddressExtension("glObjectPtrLabel","GL_KHR_debug"); }
#endif
	 fn(ptr1,length1,label1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ObjectPtrLabelKHR
#define GL_ALT_FUNDEF_ObjectPtrLabelKHR
typedef void (*PFNGLOBJECTPTRLABELKHRPROC_ALT)(const void *,GLsizei,const GLchar *);
static inline void glObjectPtrLabelKHR(const void * ptr1,GLsizei length1,const GLchar * label1)
{
#ifdef __cplusplus
	static PFNGLOBJECTPTRLABELKHRPROC_ALT fn=(PFNGLOBJECTPTRLABELKHRPROC_ALT)glaltGetProcAddressExtension("glObjectPtrLabelKHR","GL_KHR_debug");
#else
	static PFNGLOBJECTPTRLABELKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLOBJECTPTRLABELKHRPROC_ALT)glaltGetProcAddressExtension("glObjectPtrLabelKHR","GL_KHR_debug"); }
#endif
	 fn(ptr1,length1,label1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_PopDebugGroup
#define GL_ALT_FUNDEF_PopDebugGroup
typedef void (*PFNGLPOPDEBUGGROUPPROC_ALT)();
static inline void glPopDebugGroup()
{
#ifdef __cplusplus
	static PFNGLPOPDEBUGGROUPPROC_ALT fn=(PFNGLPOPDEBUGGROUPPROC_ALT)glaltGetProcAddressExtension("glPopDebugGroup","GL_KHR_debug");
#else
	static PFNGLPOPDEBUGGROUPPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOPDEBUGGROUPPROC_ALT)glaltGetProcAddressExtension("glPopDebugGroup","GL_KHR_debug"); }
#endif
	 fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_PopDebugGroupKHR
#define GL_ALT_FUNDEF_PopDebugGroupKHR
typedef void (*PFNGLPOPDEBUGGROUPKHRPROC_ALT)();
static inline void glPopDebugGroupKHR()
{
#ifdef __cplusplus
	static PFNGLPOPDEBUGGROUPKHRPROC_ALT fn=(PFNGLPOPDEBUGGROUPKHRPROC_ALT)glaltGetProcAddressExtension("glPopDebugGroupKHR","GL_KHR_debug");
#else
	static PFNGLPOPDEBUGGROUPKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOPDEBUGGROUPKHRPROC_ALT)glaltGetProcAddressExtension("glPopDebugGroupKHR","GL_KHR_debug"); }
#endif
	 fn();
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_PushDebugGroup
#define GL_ALT_FUNDEF_PushDebugGroup
typedef void (*PFNGLPUSHDEBUGGROUPPROC_ALT)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void glPushDebugGroup(GLenum source1,GLuint id1,GLsizei length1,const GLchar * message1)
{
#ifdef __cplusplus
	static PFNGLPUSHDEBUGGROUPPROC_ALT fn=(PFNGLPUSHDEBUGGROUPPROC_ALT)glaltGetProcAddressExtension("glPushDebugGroup","GL_KHR_debug");
#else
	static PFNGLPUSHDEBUGGROUPPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPUSHDEBUGGROUPPROC_ALT)glaltGetProcAddressExtension("glPushDebugGroup","GL_KHR_debug"); }
#endif
	 fn(source1,id1,length1,message1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PushDebugGroupKHR
#define GL_ALT_FUNDEF_PushDebugGroupKHR
typedef void (*PFNGLPUSHDEBUGGROUPKHRPROC_ALT)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void glPushDebugGroupKHR(GLenum source1,GLuint id1,GLsizei length1,const GLchar * message1)
{
#ifdef __cplusplus
	static PFNGLPUSHDEBUGGROUPKHRPROC_ALT fn=(PFNGLPUSHDEBUGGROUPKHRPROC_ALT)glaltGetProcAddressExtension("glPushDebugGroupKHR","GL_KHR_debug");
#else
	static PFNGLPUSHDEBUGGROUPKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPUSHDEBUGGROUPKHRPROC_ALT)glaltGetProcAddressExtension("glPushDebugGroupKHR","GL_KHR_debug"); }
#endif
	 fn(source1,id1,length1,message1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_KHR_robustness
#define GL_KHR_robustness
#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif //GL_NO_ERROR
#ifndef GL_CONTEXT_LOST
#define GL_CONTEXT_LOST 0x0507
#endif //GL_CONTEXT_LOST
#ifndef GL_CONTEXT_LOST_KHR
#define GL_CONTEXT_LOST_KHR 0x0507
#endif //GL_CONTEXT_LOST_KHR
#ifndef GL_LOSE_CONTEXT_ON_RESET_KHR
#define GL_LOSE_CONTEXT_ON_RESET_KHR 0x8252
#endif //GL_LOSE_CONTEXT_ON_RESET_KHR
#ifndef GL_LOSE_CONTEXT_ON_RESET
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#endif //GL_LOSE_CONTEXT_ON_RESET
#ifndef GL_GUILTY_CONTEXT_RESET
#define GL_GUILTY_CONTEXT_RESET 0x8253
#endif //GL_GUILTY_CONTEXT_RESET
#ifndef GL_GUILTY_CONTEXT_RESET_KHR
#define GL_GUILTY_CONTEXT_RESET_KHR 0x8253
#endif //GL_GUILTY_CONTEXT_RESET_KHR
#ifndef GL_INNOCENT_CONTEXT_RESET_KHR
#define GL_INNOCENT_CONTEXT_RESET_KHR 0x8254
#endif //GL_INNOCENT_CONTEXT_RESET_KHR
#ifndef GL_INNOCENT_CONTEXT_RESET
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#endif //GL_INNOCENT_CONTEXT_RESET
#ifndef GL_UNKNOWN_CONTEXT_RESET
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#endif //GL_UNKNOWN_CONTEXT_RESET
#ifndef GL_UNKNOWN_CONTEXT_RESET_KHR
#define GL_UNKNOWN_CONTEXT_RESET_KHR 0x8255
#endif //GL_UNKNOWN_CONTEXT_RESET_KHR
#ifndef GL_RESET_NOTIFICATION_STRATEGY
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#endif //GL_RESET_NOTIFICATION_STRATEGY
#ifndef GL_RESET_NOTIFICATION_STRATEGY_KHR
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#endif //GL_RESET_NOTIFICATION_STRATEGY_KHR
#ifndef GL_NO_RESET_NOTIFICATION_KHR
#define GL_NO_RESET_NOTIFICATION_KHR 0x8261
#endif //GL_NO_RESET_NOTIFICATION_KHR
#ifndef GL_NO_RESET_NOTIFICATION
#define GL_NO_RESET_NOTIFICATION 0x8261
#endif //GL_NO_RESET_NOTIFICATION
#ifndef GL_CONTEXT_ROBUST_ACCESS_KHR
#define GL_CONTEXT_ROBUST_ACCESS_KHR 0x90F3
#endif //GL_CONTEXT_ROBUST_ACCESS_KHR
#ifndef GL_CONTEXT_ROBUST_ACCESS
#define GL_CONTEXT_ROBUST_ACCESS 0x90F3
#endif //GL_CONTEXT_ROBUST_ACCESS
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetGraphicsResetStatus
#define GL_ALT_FUNDEF_GetGraphicsResetStatus
typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSPROC_ALT)();
static inline GLenum glGetGraphicsResetStatus()
{
#ifdef __cplusplus
	static PFNGLGETGRAPHICSRESETSTATUSPROC_ALT fn=(PFNGLGETGRAPHICSRESETSTATUSPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatus","GL_KHR_robustness");
#else
	static PFNGLGETGRAPHICSRESETSTATUSPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETGRAPHICSRESETSTATUSPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatus","GL_KHR_robustness"); }
#endif
	return fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_GetGraphicsResetStatusKHR
#define GL_ALT_FUNDEF_GetGraphicsResetStatusKHR
typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSKHRPROC_ALT)();
static inline GLenum glGetGraphicsResetStatusKHR()
{
#ifdef __cplusplus
	static PFNGLGETGRAPHICSRESETSTATUSKHRPROC_ALT fn=(PFNGLGETGRAPHICSRESETSTATUSKHRPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatusKHR","GL_KHR_robustness");
#else
	static PFNGLGETGRAPHICSRESETSTATUSKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETGRAPHICSRESETSTATUSKHRPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatusKHR","GL_KHR_robustness"); }
#endif
	return fn();
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetnUniformfv
#define GL_ALT_FUNDEF_GetnUniformfv
typedef void (*PFNGLGETNUNIFORMFVPROC_ALT)(GLuint,GLint,GLsizei,GLfloat *);
static inline void glGetnUniformfv(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMFVPROC_ALT fn=(PFNGLGETNUNIFORMFVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfv","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMFVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMFVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfv","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformfvKHR
#define GL_ALT_FUNDEF_GetnUniformfvKHR
typedef void (*PFNGLGETNUNIFORMFVKHRPROC_ALT)(GLuint,GLint,GLsizei,GLfloat *);
static inline void glGetnUniformfvKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMFVKHRPROC_ALT fn=(PFNGLGETNUNIFORMFVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfvKHR","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMFVKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMFVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfvKHR","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetnUniformiv
#define GL_ALT_FUNDEF_GetnUniformiv
typedef void (*PFNGLGETNUNIFORMIVPROC_ALT)(GLuint,GLint,GLsizei,GLint *);
static inline void glGetnUniformiv(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMIVPROC_ALT fn=(PFNGLGETNUNIFORMIVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformiv","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMIVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMIVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformiv","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformivKHR
#define GL_ALT_FUNDEF_GetnUniformivKHR
typedef void (*PFNGLGETNUNIFORMIVKHRPROC_ALT)(GLuint,GLint,GLsizei,GLint *);
static inline void glGetnUniformivKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMIVKHRPROC_ALT fn=(PFNGLGETNUNIFORMIVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformivKHR","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMIVKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMIVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformivKHR","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetnUniformuiv
#define GL_ALT_FUNDEF_GetnUniformuiv
typedef void (*PFNGLGETNUNIFORMUIVPROC_ALT)(GLuint,GLint,GLsizei,GLuint *);
static inline void glGetnUniformuiv(GLuint program1,GLint location1,GLsizei bufSize1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMUIVPROC_ALT fn=(PFNGLGETNUNIFORMUIVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformuiv","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMUIVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMUIVPROC_ALT)glaltGetProcAddressExtension("glGetnUniformuiv","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformuivKHR
#define GL_ALT_FUNDEF_GetnUniformuivKHR
typedef void (*PFNGLGETNUNIFORMUIVKHRPROC_ALT)(GLuint,GLint,GLsizei,GLuint *);
static inline void glGetnUniformuivKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLuint * params1)
{
#ifdef __cplusplus
	static PFNGLGETNUNIFORMUIVKHRPROC_ALT fn=(PFNGLGETNUNIFORMUIVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformuivKHR","GL_KHR_robustness");
#else
	static PFNGLGETNUNIFORMUIVKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETNUNIFORMUIVKHRPROC_ALT)glaltGetProcAddressExtension("glGetnUniformuivKHR","GL_KHR_robustness"); }
#endif
	 fn(program1,location1,bufSize1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ReadnPixels
#define GL_ALT_FUNDEF_ReadnPixels
typedef void (*PFNGLREADNPIXELSPROC_ALT)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void glReadnPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
#ifdef __cplusplus
	static PFNGLREADNPIXELSPROC_ALT fn=(PFNGLREADNPIXELSPROC_ALT)glaltGetProcAddressExtension("glReadnPixels","GL_KHR_robustness");
#else
	static PFNGLREADNPIXELSPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLREADNPIXELSPROC_ALT)glaltGetProcAddressExtension("glReadnPixels","GL_KHR_robustness"); }
#endif
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ReadnPixelsKHR
#define GL_ALT_FUNDEF_ReadnPixelsKHR
typedef void (*PFNGLREADNPIXELSKHRPROC_ALT)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void glReadnPixelsKHR(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
#ifdef __cplusplus
	static PFNGLREADNPIXELSKHRPROC_ALT fn=(PFNGLREADNPIXELSKHRPROC_ALT)glaltGetProcAddressExtension("glReadnPixelsKHR","GL_KHR_robustness");
#else
	static PFNGLREADNPIXELSKHRPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLREADNPIXELSKHRPROC_ALT)glaltGetProcAddressExtension("glReadnPixelsKHR","GL_KHR_robustness"); }
#endif
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_KHR_texture_compression_astc_hdr
#define GL_KHR_texture_compression_astc_hdr
#ifndef GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#endif //GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#endif //GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#endif //GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#endif //GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#endif //GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#endif //GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#endif //GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#endif //GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#endif //GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#endif //GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#endif //GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#endif //GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#endif //GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#endif //GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr
#ifndef GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#endif //GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#endif //GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#endif //GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#endif //GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#endif //GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#endif //GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#endif //GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#endif //GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#endif //GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#endif //GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#endif //GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#endif //GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#endif //GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#endif //GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_blend_equation_advanced
#define GL_NV_blend_equation_advanced
#ifndef GL_ZERO
#define GL_ZERO 0
#endif //GL_ZERO
#ifndef GL_XOR_NV
#define GL_XOR_NV 0x1506
#endif //GL_XOR_NV
#ifndef GL_INVERT
#define GL_INVERT 0x150A
#endif //GL_INVERT
#ifndef GL_RED_NV
#define GL_RED_NV 0x1903
#endif //GL_RED_NV
#ifndef GL_GREEN_NV
#define GL_GREEN_NV 0x1904
#endif //GL_GREEN_NV
#ifndef GL_BLUE_NV
#define GL_BLUE_NV 0x1905
#endif //GL_BLUE_NV
#ifndef GL_BLEND_PREMULTIPLIED_SRC_NV
#define GL_BLEND_PREMULTIPLIED_SRC_NV 0x9280
#endif //GL_BLEND_PREMULTIPLIED_SRC_NV
#ifndef GL_BLEND_OVERLAP_NV
#define GL_BLEND_OVERLAP_NV 0x9281
#endif //GL_BLEND_OVERLAP_NV
#ifndef GL_UNCORRELATED_NV
#define GL_UNCORRELATED_NV 0x9282
#endif //GL_UNCORRELATED_NV
#ifndef GL_DISJOINT_NV
#define GL_DISJOINT_NV 0x9283
#endif //GL_DISJOINT_NV
#ifndef GL_CONJOINT_NV
#define GL_CONJOINT_NV 0x9284
#endif //GL_CONJOINT_NV
#ifndef GL_SRC_NV
#define GL_SRC_NV 0x9286
#endif //GL_SRC_NV
#ifndef GL_DST_NV
#define GL_DST_NV 0x9287
#endif //GL_DST_NV
#ifndef GL_SRC_OVER_NV
#define GL_SRC_OVER_NV 0x9288
#endif //GL_SRC_OVER_NV
#ifndef GL_DST_OVER_NV
#define GL_DST_OVER_NV 0x9289
#endif //GL_DST_OVER_NV
#ifndef GL_SRC_IN_NV
#define GL_SRC_IN_NV 0x928A
#endif //GL_SRC_IN_NV
#ifndef GL_DST_IN_NV
#define GL_DST_IN_NV 0x928B
#endif //GL_DST_IN_NV
#ifndef GL_SRC_OUT_NV
#define GL_SRC_OUT_NV 0x928C
#endif //GL_SRC_OUT_NV
#ifndef GL_DST_OUT_NV
#define GL_DST_OUT_NV 0x928D
#endif //GL_DST_OUT_NV
#ifndef GL_SRC_ATOP_NV
#define GL_SRC_ATOP_NV 0x928E
#endif //GL_SRC_ATOP_NV
#ifndef GL_DST_ATOP_NV
#define GL_DST_ATOP_NV 0x928F
#endif //GL_DST_ATOP_NV
#ifndef GL_PLUS_NV
#define GL_PLUS_NV 0x9291
#endif //GL_PLUS_NV
#ifndef GL_PLUS_DARKER_NV
#define GL_PLUS_DARKER_NV 0x9292
#endif //GL_PLUS_DARKER_NV
#ifndef GL_MULTIPLY_NV
#define GL_MULTIPLY_NV 0x9294
#endif //GL_MULTIPLY_NV
#ifndef GL_SCREEN_NV
#define GL_SCREEN_NV 0x9295
#endif //GL_SCREEN_NV
#ifndef GL_OVERLAY_NV
#define GL_OVERLAY_NV 0x9296
#endif //GL_OVERLAY_NV
#ifndef GL_DARKEN_NV
#define GL_DARKEN_NV 0x9297
#endif //GL_DARKEN_NV
#ifndef GL_LIGHTEN_NV
#define GL_LIGHTEN_NV 0x9298
#endif //GL_LIGHTEN_NV
#ifndef GL_COLORDODGE_NV
#define GL_COLORDODGE_NV 0x9299
#endif //GL_COLORDODGE_NV
#ifndef GL_COLORBURN_NV
#define GL_COLORBURN_NV 0x929A
#endif //GL_COLORBURN_NV
#ifndef GL_HARDLIGHT_NV
#define GL_HARDLIGHT_NV 0x929B
#endif //GL_HARDLIGHT_NV
#ifndef GL_SOFTLIGHT_NV
#define GL_SOFTLIGHT_NV 0x929C
#endif //GL_SOFTLIGHT_NV
#ifndef GL_DIFFERENCE_NV
#define GL_DIFFERENCE_NV 0x929E
#endif //GL_DIFFERENCE_NV
#ifndef GL_MINUS_NV
#define GL_MINUS_NV 0x929F
#endif //GL_MINUS_NV
#ifndef GL_EXCLUSION_NV
#define GL_EXCLUSION_NV 0x92A0
#endif //GL_EXCLUSION_NV
#ifndef GL_CONTRAST_NV
#define GL_CONTRAST_NV 0x92A1
#endif //GL_CONTRAST_NV
#ifndef GL_INVERT_RGB_NV
#define GL_INVERT_RGB_NV 0x92A3
#endif //GL_INVERT_RGB_NV
#ifndef GL_LINEARDODGE_NV
#define GL_LINEARDODGE_NV 0x92A4
#endif //GL_LINEARDODGE_NV
#ifndef GL_LINEARBURN_NV
#define GL_LINEARBURN_NV 0x92A5
#endif //GL_LINEARBURN_NV
#ifndef GL_VIVIDLIGHT_NV
#define GL_VIVIDLIGHT_NV 0x92A6
#endif //GL_VIVIDLIGHT_NV
#ifndef GL_LINEARLIGHT_NV
#define GL_LINEARLIGHT_NV 0x92A7
#endif //GL_LINEARLIGHT_NV
#ifndef GL_PINLIGHT_NV
#define GL_PINLIGHT_NV 0x92A8
#endif //GL_PINLIGHT_NV
#ifndef GL_HARDMIX_NV
#define GL_HARDMIX_NV 0x92A9
#endif //GL_HARDMIX_NV
#ifndef GL_HSL_HUE_NV
#define GL_HSL_HUE_NV 0x92AD
#endif //GL_HSL_HUE_NV
#ifndef GL_HSL_SATURATION_NV
#define GL_HSL_SATURATION_NV 0x92AE
#endif //GL_HSL_SATURATION_NV
#ifndef GL_HSL_COLOR_NV
#define GL_HSL_COLOR_NV 0x92AF
#endif //GL_HSL_COLOR_NV
#ifndef GL_HSL_LUMINOSITY_NV
#define GL_HSL_LUMINOSITY_NV 0x92B0
#endif //GL_HSL_LUMINOSITY_NV
#ifndef GL_PLUS_CLAMPED_NV
#define GL_PLUS_CLAMPED_NV 0x92B1
#endif //GL_PLUS_CLAMPED_NV
#ifndef GL_PLUS_CLAMPED_ALPHA_NV
#define GL_PLUS_CLAMPED_ALPHA_NV 0x92B2
#endif //GL_PLUS_CLAMPED_ALPHA_NV
#ifndef GL_MINUS_CLAMPED_NV
#define GL_MINUS_CLAMPED_NV 0x92B3
#endif //GL_MINUS_CLAMPED_NV
#ifndef GL_INVERT_OVG_NV
#define GL_INVERT_OVG_NV 0x92B4
#endif //GL_INVERT_OVG_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendBarrierNV
#define GL_ALT_FUNDEF_BlendBarrierNV
typedef void (*PFNGLBLENDBARRIERNVPROC_ALT)();
static inline void glBlendBarrierNV()
{
#ifdef __cplusplus
	static PFNGLBLENDBARRIERNVPROC_ALT fn=(PFNGLBLENDBARRIERNVPROC_ALT)glaltGetProcAddressExtension("glBlendBarrierNV","GL_NV_blend_equation_advanced");
#else
	static PFNGLBLENDBARRIERNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDBARRIERNVPROC_ALT)glaltGetProcAddressExtension("glBlendBarrierNV","GL_NV_blend_equation_advanced"); }
#endif
	 fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_BlendParameteriNV
#define GL_ALT_FUNDEF_BlendParameteriNV
typedef void (*PFNGLBLENDPARAMETERINVPROC_ALT)(GLenum,GLint);
static inline void glBlendParameteriNV(GLenum pname1,GLint value1)
{
#ifdef __cplusplus
	static PFNGLBLENDPARAMETERINVPROC_ALT fn=(PFNGLBLENDPARAMETERINVPROC_ALT)glaltGetProcAddressExtension("glBlendParameteriNV","GL_NV_blend_equation_advanced");
#else
	static PFNGLBLENDPARAMETERINVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLENDPARAMETERINVPROC_ALT)glaltGetProcAddressExtension("glBlendParameteriNV","GL_NV_blend_equation_advanced"); }
#endif
	 fn(pname1,value1);
}
#endif
CGUARDEND

#endif

#ifndef GL_NV_blend_equation_advanced_coherent
#define GL_NV_blend_equation_advanced_coherent
#ifndef GL_BLEND_ADVANCED_COHERENT_NV
#define GL_BLEND_ADVANCED_COHERENT_NV 0x9285
#endif //GL_BLEND_ADVANCED_COHERENT_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_copy_buffer
#define GL_NV_copy_buffer
#ifndef GL_COPY_READ_BUFFER_NV
#define GL_COPY_READ_BUFFER_NV 0x8F36
#endif //GL_COPY_READ_BUFFER_NV
#ifndef GL_COPY_WRITE_BUFFER_NV
#define GL_COPY_WRITE_BUFFER_NV 0x8F37
#endif //GL_COPY_WRITE_BUFFER_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CopyBufferSubDataNV
#define GL_ALT_FUNDEF_CopyBufferSubDataNV
typedef void (*PFNGLCOPYBUFFERSUBDATANVPROC_ALT)(GLenum,GLenum,GLintptr,GLintptr,GLsizeiptr);
static inline void glCopyBufferSubDataNV(GLenum readTarget1,GLenum writeTarget1,GLintptr readOffset1,GLintptr writeOffset1,GLsizeiptr size1)
{
#ifdef __cplusplus
	static PFNGLCOPYBUFFERSUBDATANVPROC_ALT fn=(PFNGLCOPYBUFFERSUBDATANVPROC_ALT)glaltGetProcAddressExtension("glCopyBufferSubDataNV","GL_NV_copy_buffer");
#else
	static PFNGLCOPYBUFFERSUBDATANVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOPYBUFFERSUBDATANVPROC_ALT)glaltGetProcAddressExtension("glCopyBufferSubDataNV","GL_NV_copy_buffer"); }
#endif
	 fn(readTarget1,writeTarget1,readOffset1,writeOffset1,size1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_coverage_sample
#define GL_NV_coverage_sample
#ifndef GL_COVERAGE_BUFFER_BIT_NV
#define GL_COVERAGE_BUFFER_BIT_NV 0x00008000
#endif //GL_COVERAGE_BUFFER_BIT_NV
#ifndef GL_COVERAGE_COMPONENT_NV
#define GL_COVERAGE_COMPONENT_NV 0x8ED0
#endif //GL_COVERAGE_COMPONENT_NV
#ifndef GL_COVERAGE_COMPONENT4_NV
#define GL_COVERAGE_COMPONENT4_NV 0x8ED1
#endif //GL_COVERAGE_COMPONENT4_NV
#ifndef GL_COVERAGE_ATTACHMENT_NV
#define GL_COVERAGE_ATTACHMENT_NV 0x8ED2
#endif //GL_COVERAGE_ATTACHMENT_NV
#ifndef GL_COVERAGE_BUFFERS_NV
#define GL_COVERAGE_BUFFERS_NV 0x8ED3
#endif //GL_COVERAGE_BUFFERS_NV
#ifndef GL_COVERAGE_SAMPLES_NV
#define GL_COVERAGE_SAMPLES_NV 0x8ED4
#endif //GL_COVERAGE_SAMPLES_NV
#ifndef GL_COVERAGE_ALL_FRAGMENTS_NV
#define GL_COVERAGE_ALL_FRAGMENTS_NV 0x8ED5
#endif //GL_COVERAGE_ALL_FRAGMENTS_NV
#ifndef GL_COVERAGE_EDGE_FRAGMENTS_NV
#define GL_COVERAGE_EDGE_FRAGMENTS_NV 0x8ED6
#endif //GL_COVERAGE_EDGE_FRAGMENTS_NV
#ifndef GL_COVERAGE_AUTOMATIC_NV
#define GL_COVERAGE_AUTOMATIC_NV 0x8ED7
#endif //GL_COVERAGE_AUTOMATIC_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CoverageMaskNV
#define GL_ALT_FUNDEF_CoverageMaskNV
typedef void (*PFNGLCOVERAGEMASKNVPROC_ALT)(GLboolean);
static inline void glCoverageMaskNV(GLboolean mask1)
{
#ifdef __cplusplus
	static PFNGLCOVERAGEMASKNVPROC_ALT fn=(PFNGLCOVERAGEMASKNVPROC_ALT)glaltGetProcAddressExtension("glCoverageMaskNV","GL_NV_coverage_sample");
#else
	static PFNGLCOVERAGEMASKNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOVERAGEMASKNVPROC_ALT)glaltGetProcAddressExtension("glCoverageMaskNV","GL_NV_coverage_sample"); }
#endif
	 fn(mask1);
}
#endif

#ifndef	GL_ALT_FUNDEF_CoverageOperationNV
#define GL_ALT_FUNDEF_CoverageOperationNV
typedef void (*PFNGLCOVERAGEOPERATIONNVPROC_ALT)(GLenum);
static inline void glCoverageOperationNV(GLenum operation1)
{
#ifdef __cplusplus
	static PFNGLCOVERAGEOPERATIONNVPROC_ALT fn=(PFNGLCOVERAGEOPERATIONNVPROC_ALT)glaltGetProcAddressExtension("glCoverageOperationNV","GL_NV_coverage_sample");
#else
	static PFNGLCOVERAGEOPERATIONNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOVERAGEOPERATIONNVPROC_ALT)glaltGetProcAddressExtension("glCoverageOperationNV","GL_NV_coverage_sample"); }
#endif
	 fn(operation1);
}
#endif
CGUARDEND

#endif

#ifndef GL_NV_depth_nonlinear
#define GL_NV_depth_nonlinear
#ifndef GL_DEPTH_COMPONENT16_NONLINEAR_NV
#define GL_DEPTH_COMPONENT16_NONLINEAR_NV 0x8E2C
#endif //GL_DEPTH_COMPONENT16_NONLINEAR_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_draw_buffers
#define GL_NV_draw_buffers
#ifndef GL_MAX_DRAW_BUFFERS_NV
#define GL_MAX_DRAW_BUFFERS_NV 0x8824
#endif //GL_MAX_DRAW_BUFFERS_NV
#ifndef GL_DRAW_BUFFER0_NV
#define GL_DRAW_BUFFER0_NV 0x8825
#endif //GL_DRAW_BUFFER0_NV
#ifndef GL_DRAW_BUFFER1_NV
#define GL_DRAW_BUFFER1_NV 0x8826
#endif //GL_DRAW_BUFFER1_NV
#ifndef GL_DRAW_BUFFER2_NV
#define GL_DRAW_BUFFER2_NV 0x8827
#endif //GL_DRAW_BUFFER2_NV
#ifndef GL_DRAW_BUFFER3_NV
#define GL_DRAW_BUFFER3_NV 0x8828
#endif //GL_DRAW_BUFFER3_NV
#ifndef GL_DRAW_BUFFER4_NV
#define GL_DRAW_BUFFER4_NV 0x8829
#endif //GL_DRAW_BUFFER4_NV
#ifndef GL_DRAW_BUFFER5_NV
#define GL_DRAW_BUFFER5_NV 0x882A
#endif //GL_DRAW_BUFFER5_NV
#ifndef GL_DRAW_BUFFER6_NV
#define GL_DRAW_BUFFER6_NV 0x882B
#endif //GL_DRAW_BUFFER6_NV
#ifndef GL_DRAW_BUFFER7_NV
#define GL_DRAW_BUFFER7_NV 0x882C
#endif //GL_DRAW_BUFFER7_NV
#ifndef GL_DRAW_BUFFER8_NV
#define GL_DRAW_BUFFER8_NV 0x882D
#endif //GL_DRAW_BUFFER8_NV
#ifndef GL_DRAW_BUFFER9_NV
#define GL_DRAW_BUFFER9_NV 0x882E
#endif //GL_DRAW_BUFFER9_NV
#ifndef GL_DRAW_BUFFER10_NV
#define GL_DRAW_BUFFER10_NV 0x882F
#endif //GL_DRAW_BUFFER10_NV
#ifndef GL_DRAW_BUFFER11_NV
#define GL_DRAW_BUFFER11_NV 0x8830
#endif //GL_DRAW_BUFFER11_NV
#ifndef GL_DRAW_BUFFER12_NV
#define GL_DRAW_BUFFER12_NV 0x8831
#endif //GL_DRAW_BUFFER12_NV
#ifndef GL_DRAW_BUFFER13_NV
#define GL_DRAW_BUFFER13_NV 0x8832
#endif //GL_DRAW_BUFFER13_NV
#ifndef GL_DRAW_BUFFER14_NV
#define GL_DRAW_BUFFER14_NV 0x8833
#endif //GL_DRAW_BUFFER14_NV
#ifndef GL_DRAW_BUFFER15_NV
#define GL_DRAW_BUFFER15_NV 0x8834
#endif //GL_DRAW_BUFFER15_NV
#ifndef GL_COLOR_ATTACHMENT0_NV
#define GL_COLOR_ATTACHMENT0_NV 0x8CE0
#endif //GL_COLOR_ATTACHMENT0_NV
#ifndef GL_COLOR_ATTACHMENT1_NV
#define GL_COLOR_ATTACHMENT1_NV 0x8CE1
#endif //GL_COLOR_ATTACHMENT1_NV
#ifndef GL_COLOR_ATTACHMENT2_NV
#define GL_COLOR_ATTACHMENT2_NV 0x8CE2
#endif //GL_COLOR_ATTACHMENT2_NV
#ifndef GL_COLOR_ATTACHMENT3_NV
#define GL_COLOR_ATTACHMENT3_NV 0x8CE3
#endif //GL_COLOR_ATTACHMENT3_NV
#ifndef GL_COLOR_ATTACHMENT4_NV
#define GL_COLOR_ATTACHMENT4_NV 0x8CE4
#endif //GL_COLOR_ATTACHMENT4_NV
#ifndef GL_COLOR_ATTACHMENT5_NV
#define GL_COLOR_ATTACHMENT5_NV 0x8CE5
#endif //GL_COLOR_ATTACHMENT5_NV
#ifndef GL_COLOR_ATTACHMENT6_NV
#define GL_COLOR_ATTACHMENT6_NV 0x8CE6
#endif //GL_COLOR_ATTACHMENT6_NV
#ifndef GL_COLOR_ATTACHMENT7_NV
#define GL_COLOR_ATTACHMENT7_NV 0x8CE7
#endif //GL_COLOR_ATTACHMENT7_NV
#ifndef GL_COLOR_ATTACHMENT8_NV
#define GL_COLOR_ATTACHMENT8_NV 0x8CE8
#endif //GL_COLOR_ATTACHMENT8_NV
#ifndef GL_COLOR_ATTACHMENT9_NV
#define GL_COLOR_ATTACHMENT9_NV 0x8CE9
#endif //GL_COLOR_ATTACHMENT9_NV
#ifndef GL_COLOR_ATTACHMENT10_NV
#define GL_COLOR_ATTACHMENT10_NV 0x8CEA
#endif //GL_COLOR_ATTACHMENT10_NV
#ifndef GL_COLOR_ATTACHMENT11_NV
#define GL_COLOR_ATTACHMENT11_NV 0x8CEB
#endif //GL_COLOR_ATTACHMENT11_NV
#ifndef GL_COLOR_ATTACHMENT12_NV
#define GL_COLOR_ATTACHMENT12_NV 0x8CEC
#endif //GL_COLOR_ATTACHMENT12_NV
#ifndef GL_COLOR_ATTACHMENT13_NV
#define GL_COLOR_ATTACHMENT13_NV 0x8CED
#endif //GL_COLOR_ATTACHMENT13_NV
#ifndef GL_COLOR_ATTACHMENT14_NV
#define GL_COLOR_ATTACHMENT14_NV 0x8CEE
#endif //GL_COLOR_ATTACHMENT14_NV
#ifndef GL_COLOR_ATTACHMENT15_NV
#define GL_COLOR_ATTACHMENT15_NV 0x8CEF
#endif //GL_COLOR_ATTACHMENT15_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawBuffersNV
#define GL_ALT_FUNDEF_DrawBuffersNV
typedef void (*PFNGLDRAWBUFFERSNVPROC_ALT)(GLsizei,const GLenum *);
static inline void glDrawBuffersNV(GLsizei n1,const GLenum * bufs1)
{
#ifdef __cplusplus
	static PFNGLDRAWBUFFERSNVPROC_ALT fn=(PFNGLDRAWBUFFERSNVPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersNV","GL_NV_draw_buffers");
#else
	static PFNGLDRAWBUFFERSNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWBUFFERSNVPROC_ALT)glaltGetProcAddressExtension("glDrawBuffersNV","GL_NV_draw_buffers"); }
#endif
	 fn(n1,bufs1);
}
#endif
CGUARDEND

#endif

#ifndef GL_NV_draw_instanced
#define GL_NV_draw_instanced
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawArraysInstancedNV
#define GL_ALT_FUNDEF_DrawArraysInstancedNV
typedef void (*PFNGLDRAWARRAYSINSTANCEDNVPROC_ALT)(GLenum,GLint,GLsizei,GLsizei);
static inline void glDrawArraysInstancedNV(GLenum mode1,GLint first1,GLsizei count1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWARRAYSINSTANCEDNVPROC_ALT fn=(PFNGLDRAWARRAYSINSTANCEDNVPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedNV","GL_NV_draw_instanced");
#else
	static PFNGLDRAWARRAYSINSTANCEDNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWARRAYSINSTANCEDNVPROC_ALT)glaltGetProcAddressExtension("glDrawArraysInstancedNV","GL_NV_draw_instanced"); }
#endif
	 fn(mode1,first1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DrawElementsInstancedNV
#define GL_ALT_FUNDEF_DrawElementsInstancedNV
typedef void (*PFNGLDRAWELEMENTSINSTANCEDNVPROC_ALT)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void glDrawElementsInstancedNV(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
#ifdef __cplusplus
	static PFNGLDRAWELEMENTSINSTANCEDNVPROC_ALT fn=(PFNGLDRAWELEMENTSINSTANCEDNVPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedNV","GL_NV_draw_instanced");
#else
	static PFNGLDRAWELEMENTSINSTANCEDNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDRAWELEMENTSINSTANCEDNVPROC_ALT)glaltGetProcAddressExtension("glDrawElementsInstancedNV","GL_NV_draw_instanced"); }
#endif
	 fn(mode1,count1,type1,indices1,primcount1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_explicit_attrib_location
#define GL_NV_explicit_attrib_location
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_fbo_color_attachments
#define GL_NV_fbo_color_attachments
#ifndef GL_MAX_COLOR_ATTACHMENTS_NV
#define GL_MAX_COLOR_ATTACHMENTS_NV 0x8CDF
#endif //GL_MAX_COLOR_ATTACHMENTS_NV
#ifndef GL_COLOR_ATTACHMENT0_NV
#define GL_COLOR_ATTACHMENT0_NV 0x8CE0
#endif //GL_COLOR_ATTACHMENT0_NV
#ifndef GL_COLOR_ATTACHMENT1_NV
#define GL_COLOR_ATTACHMENT1_NV 0x8CE1
#endif //GL_COLOR_ATTACHMENT1_NV
#ifndef GL_COLOR_ATTACHMENT2_NV
#define GL_COLOR_ATTACHMENT2_NV 0x8CE2
#endif //GL_COLOR_ATTACHMENT2_NV
#ifndef GL_COLOR_ATTACHMENT3_NV
#define GL_COLOR_ATTACHMENT3_NV 0x8CE3
#endif //GL_COLOR_ATTACHMENT3_NV
#ifndef GL_COLOR_ATTACHMENT4_NV
#define GL_COLOR_ATTACHMENT4_NV 0x8CE4
#endif //GL_COLOR_ATTACHMENT4_NV
#ifndef GL_COLOR_ATTACHMENT5_NV
#define GL_COLOR_ATTACHMENT5_NV 0x8CE5
#endif //GL_COLOR_ATTACHMENT5_NV
#ifndef GL_COLOR_ATTACHMENT6_NV
#define GL_COLOR_ATTACHMENT6_NV 0x8CE6
#endif //GL_COLOR_ATTACHMENT6_NV
#ifndef GL_COLOR_ATTACHMENT7_NV
#define GL_COLOR_ATTACHMENT7_NV 0x8CE7
#endif //GL_COLOR_ATTACHMENT7_NV
#ifndef GL_COLOR_ATTACHMENT8_NV
#define GL_COLOR_ATTACHMENT8_NV 0x8CE8
#endif //GL_COLOR_ATTACHMENT8_NV
#ifndef GL_COLOR_ATTACHMENT9_NV
#define GL_COLOR_ATTACHMENT9_NV 0x8CE9
#endif //GL_COLOR_ATTACHMENT9_NV
#ifndef GL_COLOR_ATTACHMENT10_NV
#define GL_COLOR_ATTACHMENT10_NV 0x8CEA
#endif //GL_COLOR_ATTACHMENT10_NV
#ifndef GL_COLOR_ATTACHMENT11_NV
#define GL_COLOR_ATTACHMENT11_NV 0x8CEB
#endif //GL_COLOR_ATTACHMENT11_NV
#ifndef GL_COLOR_ATTACHMENT12_NV
#define GL_COLOR_ATTACHMENT12_NV 0x8CEC
#endif //GL_COLOR_ATTACHMENT12_NV
#ifndef GL_COLOR_ATTACHMENT13_NV
#define GL_COLOR_ATTACHMENT13_NV 0x8CED
#endif //GL_COLOR_ATTACHMENT13_NV
#ifndef GL_COLOR_ATTACHMENT14_NV
#define GL_COLOR_ATTACHMENT14_NV 0x8CEE
#endif //GL_COLOR_ATTACHMENT14_NV
#ifndef GL_COLOR_ATTACHMENT15_NV
#define GL_COLOR_ATTACHMENT15_NV 0x8CEF
#endif //GL_COLOR_ATTACHMENT15_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_fence
#define GL_NV_fence
#ifndef GL_ALL_COMPLETED_NV
#define GL_ALL_COMPLETED_NV 0x84F2
#endif //GL_ALL_COMPLETED_NV
#ifndef GL_FENCE_STATUS_NV
#define GL_FENCE_STATUS_NV 0x84F3
#endif //GL_FENCE_STATUS_NV
#ifndef GL_FENCE_CONDITION_NV
#define GL_FENCE_CONDITION_NV 0x84F4
#endif //GL_FENCE_CONDITION_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DeleteFencesNV
#define GL_ALT_FUNDEF_DeleteFencesNV
typedef void (*PFNGLDELETEFENCESNVPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteFencesNV(GLsizei n1,const GLuint * fences1)
{
#ifdef __cplusplus
	static PFNGLDELETEFENCESNVPROC_ALT fn=(PFNGLDELETEFENCESNVPROC_ALT)glaltGetProcAddressExtension("glDeleteFencesNV","GL_NV_fence");
#else
	static PFNGLDELETEFENCESNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEFENCESNVPROC_ALT)glaltGetProcAddressExtension("glDeleteFencesNV","GL_NV_fence"); }
#endif
	 fn(n1,fences1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FinishFenceNV
#define GL_ALT_FUNDEF_FinishFenceNV
typedef void (*PFNGLFINISHFENCENVPROC_ALT)(GLuint);
static inline void glFinishFenceNV(GLuint fence1)
{
#ifdef __cplusplus
	static PFNGLFINISHFENCENVPROC_ALT fn=(PFNGLFINISHFENCENVPROC_ALT)glaltGetProcAddressExtension("glFinishFenceNV","GL_NV_fence");
#else
	static PFNGLFINISHFENCENVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFINISHFENCENVPROC_ALT)glaltGetProcAddressExtension("glFinishFenceNV","GL_NV_fence"); }
#endif
	 fn(fence1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenFencesNV
#define GL_ALT_FUNDEF_GenFencesNV
typedef void (*PFNGLGENFENCESNVPROC_ALT)(GLsizei,GLuint *);
static inline void glGenFencesNV(GLsizei n1,GLuint * fences1)
{
#ifdef __cplusplus
	static PFNGLGENFENCESNVPROC_ALT fn=(PFNGLGENFENCESNVPROC_ALT)glaltGetProcAddressExtension("glGenFencesNV","GL_NV_fence");
#else
	static PFNGLGENFENCESNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENFENCESNVPROC_ALT)glaltGetProcAddressExtension("glGenFencesNV","GL_NV_fence"); }
#endif
	 fn(n1,fences1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFenceivNV
#define GL_ALT_FUNDEF_GetFenceivNV
typedef void (*PFNGLGETFENCEIVNVPROC_ALT)(GLuint,GLenum,GLint *);
static inline void glGetFenceivNV(GLuint fence1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETFENCEIVNVPROC_ALT fn=(PFNGLGETFENCEIVNVPROC_ALT)glaltGetProcAddressExtension("glGetFenceivNV","GL_NV_fence");
#else
	static PFNGLGETFENCEIVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETFENCEIVNVPROC_ALT)glaltGetProcAddressExtension("glGetFenceivNV","GL_NV_fence"); }
#endif
	 fn(fence1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsFenceNV
#define GL_ALT_FUNDEF_IsFenceNV
typedef GLboolean (*PFNGLISFENCENVPROC_ALT)(GLuint);
static inline GLboolean glIsFenceNV(GLuint fence1)
{
#ifdef __cplusplus
	static PFNGLISFENCENVPROC_ALT fn=(PFNGLISFENCENVPROC_ALT)glaltGetProcAddressExtension("glIsFenceNV","GL_NV_fence");
#else
	static PFNGLISFENCENVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISFENCENVPROC_ALT)glaltGetProcAddressExtension("glIsFenceNV","GL_NV_fence"); }
#endif
	return fn(fence1);
}
#endif

#ifndef	GL_ALT_FUNDEF_SetFenceNV
#define GL_ALT_FUNDEF_SetFenceNV
typedef void (*PFNGLSETFENCENVPROC_ALT)(GLuint,GLenum);
static inline void glSetFenceNV(GLuint fence1,GLenum condition1)
{
#ifdef __cplusplus
	static PFNGLSETFENCENVPROC_ALT fn=(PFNGLSETFENCENVPROC_ALT)glaltGetProcAddressExtension("glSetFenceNV","GL_NV_fence");
#else
	static PFNGLSETFENCENVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSETFENCENVPROC_ALT)glaltGetProcAddressExtension("glSetFenceNV","GL_NV_fence"); }
#endif
	 fn(fence1,condition1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TestFenceNV
#define GL_ALT_FUNDEF_TestFenceNV
typedef GLboolean (*PFNGLTESTFENCENVPROC_ALT)(GLuint);
static inline GLboolean glTestFenceNV(GLuint fence1)
{
#ifdef __cplusplus
	static PFNGLTESTFENCENVPROC_ALT fn=(PFNGLTESTFENCENVPROC_ALT)glaltGetProcAddressExtension("glTestFenceNV","GL_NV_fence");
#else
	static PFNGLTESTFENCENVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTESTFENCENVPROC_ALT)glaltGetProcAddressExtension("glTestFenceNV","GL_NV_fence"); }
#endif
	return fn(fence1);
}
#endif
CGUARDEND

#endif

#ifndef GL_NV_framebuffer_blit
#define GL_NV_framebuffer_blit
#ifndef GL_DRAW_FRAMEBUFFER_BINDING_NV
#define GL_DRAW_FRAMEBUFFER_BINDING_NV 0x8CA6
#endif //GL_DRAW_FRAMEBUFFER_BINDING_NV
#ifndef GL_READ_FRAMEBUFFER_NV
#define GL_READ_FRAMEBUFFER_NV 0x8CA8
#endif //GL_READ_FRAMEBUFFER_NV
#ifndef GL_DRAW_FRAMEBUFFER_NV
#define GL_DRAW_FRAMEBUFFER_NV 0x8CA9
#endif //GL_DRAW_FRAMEBUFFER_NV
#ifndef GL_READ_FRAMEBUFFER_BINDING_NV
#define GL_READ_FRAMEBUFFER_BINDING_NV 0x8CAA
#endif //GL_READ_FRAMEBUFFER_BINDING_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlitFramebufferNV
#define GL_ALT_FUNDEF_BlitFramebufferNV
typedef void (*PFNGLBLITFRAMEBUFFERNVPROC_ALT)(GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLbitfield,GLenum);
static inline void glBlitFramebufferNV(GLint srcX01,GLint srcY01,GLint srcX11,GLint srcY11,GLint dstX01,GLint dstY01,GLint dstX11,GLint dstY11,GLbitfield mask1,GLenum filter1)
{
#ifdef __cplusplus
	static PFNGLBLITFRAMEBUFFERNVPROC_ALT fn=(PFNGLBLITFRAMEBUFFERNVPROC_ALT)glaltGetProcAddressExtension("glBlitFramebufferNV","GL_NV_framebuffer_blit");
#else
	static PFNGLBLITFRAMEBUFFERNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBLITFRAMEBUFFERNVPROC_ALT)glaltGetProcAddressExtension("glBlitFramebufferNV","GL_NV_framebuffer_blit"); }
#endif
	 fn(srcX01,srcY01,srcX11,srcY11,dstX01,dstY01,dstX11,dstY11,mask1,filter1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_framebuffer_multisample
#define GL_NV_framebuffer_multisample
#ifndef GL_RENDERBUFFER_SAMPLES_NV
#define GL_RENDERBUFFER_SAMPLES_NV 0x8CAB
#endif //GL_RENDERBUFFER_SAMPLES_NV
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV 0x8D56
#endif //GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV
#ifndef GL_MAX_SAMPLES_NV
#define GL_MAX_SAMPLES_NV 0x8D57
#endif //GL_MAX_SAMPLES_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleNV
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleNV
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleNV(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleNV","GL_NV_framebuffer_multisample");
#else
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleNV","GL_NV_framebuffer_multisample"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_generate_mipmap_sRGB
#define GL_NV_generate_mipmap_sRGB
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_instanced_arrays
#define GL_NV_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_VertexAttribDivisorNV
#define GL_ALT_FUNDEF_VertexAttribDivisorNV
typedef void (*PFNGLVERTEXATTRIBDIVISORNVPROC_ALT)(GLuint,GLuint);
static inline void glVertexAttribDivisorNV(GLuint index1,GLuint divisor1)
{
#ifdef __cplusplus
	static PFNGLVERTEXATTRIBDIVISORNVPROC_ALT fn=(PFNGLVERTEXATTRIBDIVISORNVPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorNV","GL_NV_instanced_arrays");
#else
	static PFNGLVERTEXATTRIBDIVISORNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLVERTEXATTRIBDIVISORNVPROC_ALT)glaltGetProcAddressExtension("glVertexAttribDivisorNV","GL_NV_instanced_arrays"); }
#endif
	 fn(index1,divisor1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_non_square_matrices
#define GL_NV_non_square_matrices
#ifndef GL_FLOAT_MAT2x3_NV
#define GL_FLOAT_MAT2x3_NV 0x8B65
#endif //GL_FLOAT_MAT2x3_NV
#ifndef GL_FLOAT_MAT2x4_NV
#define GL_FLOAT_MAT2x4_NV 0x8B66
#endif //GL_FLOAT_MAT2x4_NV
#ifndef GL_FLOAT_MAT3x2_NV
#define GL_FLOAT_MAT3x2_NV 0x8B67
#endif //GL_FLOAT_MAT3x2_NV
#ifndef GL_FLOAT_MAT3x4_NV
#define GL_FLOAT_MAT3x4_NV 0x8B68
#endif //GL_FLOAT_MAT3x4_NV
#ifndef GL_FLOAT_MAT4x2_NV
#define GL_FLOAT_MAT4x2_NV 0x8B69
#endif //GL_FLOAT_MAT4x2_NV
#ifndef GL_FLOAT_MAT4x3_NV
#define GL_FLOAT_MAT4x3_NV 0x8B6A
#endif //GL_FLOAT_MAT4x3_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_UniformMatrix2x3fvNV
#define GL_ALT_FUNDEF_UniformMatrix2x3fvNV
typedef void (*PFNGLUNIFORMMATRIX2X3FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix2x3fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX2X3FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX2X3FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix2x3fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX2X3FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX2X3FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix2x3fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UniformMatrix2x4fvNV
#define GL_ALT_FUNDEF_UniformMatrix2x4fvNV
typedef void (*PFNGLUNIFORMMATRIX2X4FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix2x4fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX2X4FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX2X4FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix2x4fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX2X4FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX2X4FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix2x4fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UniformMatrix3x2fvNV
#define GL_ALT_FUNDEF_UniformMatrix3x2fvNV
typedef void (*PFNGLUNIFORMMATRIX3X2FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix3x2fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX3X2FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX3X2FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix3x2fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX3X2FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX3X2FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix3x2fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UniformMatrix3x4fvNV
#define GL_ALT_FUNDEF_UniformMatrix3x4fvNV
typedef void (*PFNGLUNIFORMMATRIX3X4FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix3x4fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX3X4FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX3X4FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix3x4fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX3X4FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX3X4FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix3x4fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UniformMatrix4x2fvNV
#define GL_ALT_FUNDEF_UniformMatrix4x2fvNV
typedef void (*PFNGLUNIFORMMATRIX4X2FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix4x2fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX4X2FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX4X2FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix4x2fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX4X2FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX4X2FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix4x2fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UniformMatrix4x3fvNV
#define GL_ALT_FUNDEF_UniformMatrix4x3fvNV
typedef void (*PFNGLUNIFORMMATRIX4X3FVNVPROC_ALT)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void glUniformMatrix4x3fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
#ifdef __cplusplus
	static PFNGLUNIFORMMATRIX4X3FVNVPROC_ALT fn=(PFNGLUNIFORMMATRIX4X3FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix4x3fvNV","GL_NV_non_square_matrices");
#else
	static PFNGLUNIFORMMATRIX4X3FVNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNIFORMMATRIX4X3FVNVPROC_ALT)glaltGetProcAddressExtension("glUniformMatrix4x3fvNV","GL_NV_non_square_matrices"); }
#endif
	 fn(location1,count1,transpose1,value1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_NV_read_buffer
#define GL_NV_read_buffer
#ifndef GL_READ_BUFFER_NV
#define GL_READ_BUFFER_NV 0x0C02
#endif //GL_READ_BUFFER_NV
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ReadBufferNV
#define GL_ALT_FUNDEF_ReadBufferNV
typedef void (*PFNGLREADBUFFERNVPROC_ALT)(GLenum);
static inline void glReadBufferNV(GLenum mode1)
{
#ifdef __cplusplus
	static PFNGLREADBUFFERNVPROC_ALT fn=(PFNGLREADBUFFERNVPROC_ALT)glaltGetProcAddressExtension("glReadBufferNV","GL_NV_read_buffer");
#else
	static PFNGLREADBUFFERNVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLREADBUFFERNVPROC_ALT)glaltGetProcAddressExtension("glReadBufferNV","GL_NV_read_buffer"); }
#endif
	 fn(mode1);
}
#endif
CGUARDEND

#endif

#ifndef GL_NV_read_buffer_front
#define GL_NV_read_buffer_front
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_read_depth
#define GL_NV_read_depth
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_read_depth_stencil
#define GL_NV_read_depth_stencil
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_read_stencil
#define GL_NV_read_stencil
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_sRGB_formats
#define GL_NV_sRGB_formats
#ifndef GL_ETC1_SRGB8_NV
#define GL_ETC1_SRGB8_NV 0x88EE
#endif //GL_ETC1_SRGB8_NV
#ifndef GL_SRGB8_NV
#define GL_SRGB8_NV 0x8C41
#endif //GL_SRGB8_NV
#ifndef GL_SLUMINANCE_ALPHA_NV
#define GL_SLUMINANCE_ALPHA_NV 0x8C44
#endif //GL_SLUMINANCE_ALPHA_NV
#ifndef GL_SLUMINANCE8_ALPHA8_NV
#define GL_SLUMINANCE8_ALPHA8_NV 0x8C45
#endif //GL_SLUMINANCE8_ALPHA8_NV
#ifndef GL_SLUMINANCE_NV
#define GL_SLUMINANCE_NV 0x8C46
#endif //GL_SLUMINANCE_NV
#ifndef GL_SLUMINANCE8_NV
#define GL_SLUMINANCE8_NV 0x8C47
#endif //GL_SLUMINANCE8_NV
#ifndef GL_COMPRESSED_SRGB_S3TC_DXT1_NV
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV 0x8C4C
#endif //GL_COMPRESSED_SRGB_S3TC_DXT1_NV
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV 0x8C4D
#endif //GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV 0x8C4E
#endif //GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV 0x8C4F
#endif //GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_shadow_samplers_array
#define GL_NV_shadow_samplers_array
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW_NV
#define GL_SAMPLER_2D_ARRAY_SHADOW_NV 0x8DC4
#endif //GL_SAMPLER_2D_ARRAY_SHADOW_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_shadow_samplers_cube
#define GL_NV_shadow_samplers_cube
#ifndef GL_SAMPLER_CUBE_SHADOW_NV
#define GL_SAMPLER_CUBE_SHADOW_NV 0x8DC5
#endif //GL_SAMPLER_CUBE_SHADOW_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_texture_border_clamp
#define GL_NV_texture_border_clamp
#ifndef GL_TEXTURE_BORDER_COLOR_NV
#define GL_TEXTURE_BORDER_COLOR_NV 0x1004
#endif //GL_TEXTURE_BORDER_COLOR_NV
#ifndef GL_CLAMP_TO_BORDER_NV
#define GL_CLAMP_TO_BORDER_NV 0x812D
#endif //GL_CLAMP_TO_BORDER_NV
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_texture_compression_s3tc_update
#define GL_NV_texture_compression_s3tc_update
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_NV_texture_npot_2D_mipmap
#define GL_NV_texture_npot_2D_mipmap
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_EGL_image
#define GL_OES_EGL_image
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_EGLImageTargetRenderbufferStorageOES
#define GL_ALT_FUNDEF_EGLImageTargetRenderbufferStorageOES
typedef void (*PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT)(GLenum,GLeglImageOES);
static inline void glEGLImageTargetRenderbufferStorageOES(GLenum target1,GLeglImageOES image1)
{
#ifdef __cplusplus
	static PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT fn=(PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetRenderbufferStorageOES","GL_OES_EGL_image");
#else
	static PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetRenderbufferStorageOES","GL_OES_EGL_image"); }
#endif
	 fn(target1,image1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EGLImageTargetTexture2DOES
#define GL_ALT_FUNDEF_EGLImageTargetTexture2DOES
typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT)(GLenum,GLeglImageOES);
static inline void glEGLImageTargetTexture2DOES(GLenum target1,GLeglImageOES image1)
{
#ifdef __cplusplus
	static PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT fn=(PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetTexture2DOES","GL_OES_EGL_image");
#else
	static PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetTexture2DOES","GL_OES_EGL_image"); }
#endif
	 fn(target1,image1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_EGL_image_external
#define GL_OES_EGL_image_external
#ifndef GL_TEXTURE_EXTERNAL_OES
#define GL_TEXTURE_EXTERNAL_OES 0x8D65
#endif //GL_TEXTURE_EXTERNAL_OES
#ifndef GL_SAMPLER_EXTERNAL_OES
#define GL_SAMPLER_EXTERNAL_OES 0x8D66
#endif //GL_SAMPLER_EXTERNAL_OES
#ifndef GL_TEXTURE_BINDING_EXTERNAL_OES
#define GL_TEXTURE_BINDING_EXTERNAL_OES 0x8D67
#endif //GL_TEXTURE_BINDING_EXTERNAL_OES
#ifndef GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68
#endif //GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_compressed_ETC1_RGB8_sub_texture
#define GL_OES_compressed_ETC1_RGB8_sub_texture
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_compressed_ETC1_RGB8_texture
#define GL_OES_compressed_ETC1_RGB8_texture
#ifndef GL_ETC1_RGB8_OES
#define GL_ETC1_RGB8_OES 0x8D64
#endif //GL_ETC1_RGB8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture
#ifndef GL_PALETTE4_RGB8_OES
#define GL_PALETTE4_RGB8_OES 0x8B90
#endif //GL_PALETTE4_RGB8_OES
#ifndef GL_PALETTE4_RGBA8_OES
#define GL_PALETTE4_RGBA8_OES 0x8B91
#endif //GL_PALETTE4_RGBA8_OES
#ifndef GL_PALETTE4_R5_G6_B5_OES
#define GL_PALETTE4_R5_G6_B5_OES 0x8B92
#endif //GL_PALETTE4_R5_G6_B5_OES
#ifndef GL_PALETTE4_RGBA4_OES
#define GL_PALETTE4_RGBA4_OES 0x8B93
#endif //GL_PALETTE4_RGBA4_OES
#ifndef GL_PALETTE4_RGB5_A1_OES
#define GL_PALETTE4_RGB5_A1_OES 0x8B94
#endif //GL_PALETTE4_RGB5_A1_OES
#ifndef GL_PALETTE8_RGB8_OES
#define GL_PALETTE8_RGB8_OES 0x8B95
#endif //GL_PALETTE8_RGB8_OES
#ifndef GL_PALETTE8_RGBA8_OES
#define GL_PALETTE8_RGBA8_OES 0x8B96
#endif //GL_PALETTE8_RGBA8_OES
#ifndef GL_PALETTE8_R5_G6_B5_OES
#define GL_PALETTE8_R5_G6_B5_OES 0x8B97
#endif //GL_PALETTE8_R5_G6_B5_OES
#ifndef GL_PALETTE8_RGBA4_OES
#define GL_PALETTE8_RGBA4_OES 0x8B98
#endif //GL_PALETTE8_RGBA4_OES
#ifndef GL_PALETTE8_RGB5_A1_OES
#define GL_PALETTE8_RGB5_A1_OES 0x8B99
#endif //GL_PALETTE8_RGB5_A1_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_depth24
#define GL_OES_depth24
#ifndef GL_DEPTH_COMPONENT24_OES
#define GL_DEPTH_COMPONENT24_OES 0x81A6
#endif //GL_DEPTH_COMPONENT24_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_depth32
#define GL_OES_depth32
#ifndef GL_DEPTH_COMPONENT32_OES
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#endif //GL_DEPTH_COMPONENT32_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_depth_texture
#define GL_OES_depth_texture
#ifndef GL_UNSIGNED_SHORT
#define GL_UNSIGNED_SHORT 0x1403
#endif //GL_UNSIGNED_SHORT
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif //GL_UNSIGNED_INT
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT 0x1902
#endif //GL_DEPTH_COMPONENT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif //GL_UNSIGNED_INT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_fbo_render_mipmap
#define GL_OES_fbo_render_mipmap
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_fragment_precision_high
#define GL_OES_fragment_precision_high
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_get_program_binary
#define GL_OES_get_program_binary
#ifndef GL_PROGRAM_BINARY_LENGTH_OES
#define GL_PROGRAM_BINARY_LENGTH_OES 0x8741
#endif //GL_PROGRAM_BINARY_LENGTH_OES
#ifndef GL_NUM_PROGRAM_BINARY_FORMATS_OES
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES 0x87FE
#endif //GL_NUM_PROGRAM_BINARY_FORMATS_OES
#ifndef GL_PROGRAM_BINARY_FORMATS_OES
#define GL_PROGRAM_BINARY_FORMATS_OES 0x87FF
#endif //GL_PROGRAM_BINARY_FORMATS_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetProgramBinaryOES
#define GL_ALT_FUNDEF_GetProgramBinaryOES
typedef void (*PFNGLGETPROGRAMBINARYOESPROC_ALT)(GLuint,GLsizei,GLsizei *,GLenum *,void *);
static inline void glGetProgramBinaryOES(GLuint program1,GLsizei bufSize1,GLsizei * length1,GLenum * binaryFormat1,void * binary1)
{
#ifdef __cplusplus
	static PFNGLGETPROGRAMBINARYOESPROC_ALT fn=(PFNGLGETPROGRAMBINARYOESPROC_ALT)glaltGetProcAddressExtension("glGetProgramBinaryOES","GL_OES_get_program_binary");
#else
	static PFNGLGETPROGRAMBINARYOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETPROGRAMBINARYOESPROC_ALT)glaltGetProcAddressExtension("glGetProgramBinaryOES","GL_OES_get_program_binary"); }
#endif
	 fn(program1,bufSize1,length1,binaryFormat1,binary1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ProgramBinaryOES
#define GL_ALT_FUNDEF_ProgramBinaryOES
typedef void (*PFNGLPROGRAMBINARYOESPROC_ALT)(GLuint,GLenum,const void *,GLint);
static inline void glProgramBinaryOES(GLuint program1,GLenum binaryFormat1,const void * binary1,GLint length1)
{
#ifdef __cplusplus
	static PFNGLPROGRAMBINARYOESPROC_ALT fn=(PFNGLPROGRAMBINARYOESPROC_ALT)glaltGetProcAddressExtension("glProgramBinaryOES","GL_OES_get_program_binary");
#else
	static PFNGLPROGRAMBINARYOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPROGRAMBINARYOESPROC_ALT)glaltGetProcAddressExtension("glProgramBinaryOES","GL_OES_get_program_binary"); }
#endif
	 fn(program1,binaryFormat1,binary1,length1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_mapbuffer
#define GL_OES_mapbuffer
#ifndef GL_WRITE_ONLY_OES
#define GL_WRITE_ONLY_OES 0x88B9
#endif //GL_WRITE_ONLY_OES
#ifndef GL_BUFFER_ACCESS_OES
#define GL_BUFFER_ACCESS_OES 0x88BB
#endif //GL_BUFFER_ACCESS_OES
#ifndef GL_BUFFER_MAPPED_OES
#define GL_BUFFER_MAPPED_OES 0x88BC
#endif //GL_BUFFER_MAPPED_OES
#ifndef GL_BUFFER_MAP_POINTER_OES
#define GL_BUFFER_MAP_POINTER_OES 0x88BD
#endif //GL_BUFFER_MAP_POINTER_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetBufferPointervOES
#define GL_ALT_FUNDEF_GetBufferPointervOES
typedef void (*PFNGLGETBUFFERPOINTERVOESPROC_ALT)(GLenum,GLenum,void **);
static inline void glGetBufferPointervOES(GLenum target1,GLenum pname1,void ** params1)
{
#ifdef __cplusplus
	static PFNGLGETBUFFERPOINTERVOESPROC_ALT fn=(PFNGLGETBUFFERPOINTERVOESPROC_ALT)glaltGetProcAddressExtension("glGetBufferPointervOES","GL_OES_mapbuffer");
#else
	static PFNGLGETBUFFERPOINTERVOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETBUFFERPOINTERVOESPROC_ALT)glaltGetProcAddressExtension("glGetBufferPointervOES","GL_OES_mapbuffer"); }
#endif
	 fn(target1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MapBufferOES
#define GL_ALT_FUNDEF_MapBufferOES
typedef void * (*PFNGLMAPBUFFEROESPROC_ALT)(GLenum,GLenum);
static inline void * glMapBufferOES(GLenum target1,GLenum access1)
{
#ifdef __cplusplus
	static PFNGLMAPBUFFEROESPROC_ALT fn=(PFNGLMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glMapBufferOES","GL_OES_mapbuffer");
#else
	static PFNGLMAPBUFFEROESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glMapBufferOES","GL_OES_mapbuffer"); }
#endif
	return fn(target1,access1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UnmapBufferOES
#define GL_ALT_FUNDEF_UnmapBufferOES
typedef GLboolean (*PFNGLUNMAPBUFFEROESPROC_ALT)(GLenum);
static inline GLboolean glUnmapBufferOES(GLenum target1)
{
#ifdef __cplusplus
	static PFNGLUNMAPBUFFEROESPROC_ALT fn=(PFNGLUNMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glUnmapBufferOES","GL_OES_mapbuffer");
#else
	static PFNGLUNMAPBUFFEROESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLUNMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glUnmapBufferOES","GL_OES_mapbuffer"); }
#endif
	return fn(target1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_packed_depth_stencil
#define GL_OES_packed_depth_stencil
#ifndef GL_DEPTH_STENCIL_OES
#define GL_DEPTH_STENCIL_OES 0x84F9
#endif //GL_DEPTH_STENCIL_OES
#ifndef GL_UNSIGNED_INT_24_8_OES
#define GL_UNSIGNED_INT_24_8_OES 0x84FA
#endif //GL_UNSIGNED_INT_24_8_OES
#ifndef GL_DEPTH24_STENCIL8_OES
#define GL_DEPTH24_STENCIL8_OES 0x88F0
#endif //GL_DEPTH24_STENCIL8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_required_internalformat
#define GL_OES_required_internalformat
#ifndef GL_ALPHA8_OES
#define GL_ALPHA8_OES 0x803C
#endif //GL_ALPHA8_OES
#ifndef GL_LUMINANCE8_OES
#define GL_LUMINANCE8_OES 0x8040
#endif //GL_LUMINANCE8_OES
#ifndef GL_LUMINANCE4_ALPHA4_OES
#define GL_LUMINANCE4_ALPHA4_OES 0x8043
#endif //GL_LUMINANCE4_ALPHA4_OES
#ifndef GL_LUMINANCE8_ALPHA8_OES
#define GL_LUMINANCE8_ALPHA8_OES 0x8045
#endif //GL_LUMINANCE8_ALPHA8_OES
#ifndef GL_RGB8_OES
#define GL_RGB8_OES 0x8051
#endif //GL_RGB8_OES
#ifndef GL_RGB10_EXT
#define GL_RGB10_EXT 0x8052
#endif //GL_RGB10_EXT
#ifndef GL_RGBA4_OES
#define GL_RGBA4_OES 0x8056
#endif //GL_RGBA4_OES
#ifndef GL_RGB5_A1_OES
#define GL_RGB5_A1_OES 0x8057
#endif //GL_RGB5_A1_OES
#ifndef GL_RGBA8_OES
#define GL_RGBA8_OES 0x8058
#endif //GL_RGBA8_OES
#ifndef GL_RGB10_A2_EXT
#define GL_RGB10_A2_EXT 0x8059
#endif //GL_RGB10_A2_EXT
#ifndef GL_DEPTH_COMPONENT16_OES
#define GL_DEPTH_COMPONENT16_OES 0x81A5
#endif //GL_DEPTH_COMPONENT16_OES
#ifndef GL_DEPTH_COMPONENT24_OES
#define GL_DEPTH_COMPONENT24_OES 0x81A6
#endif //GL_DEPTH_COMPONENT24_OES
#ifndef GL_DEPTH_COMPONENT32_OES
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#endif //GL_DEPTH_COMPONENT32_OES
#ifndef GL_DEPTH24_STENCIL8_OES
#define GL_DEPTH24_STENCIL8_OES 0x88F0
#endif //GL_DEPTH24_STENCIL8_OES
#ifndef GL_RGB565_OES
#define GL_RGB565_OES 0x8D62
#endif //GL_RGB565_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8
#ifndef GL_RGB8_OES
#define GL_RGB8_OES 0x8051
#endif //GL_RGB8_OES
#ifndef GL_RGBA8_OES
#define GL_RGBA8_OES 0x8058
#endif //GL_RGBA8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_sample_shading
#define GL_OES_sample_shading
#ifndef GL_SAMPLE_SHADING_OES
#define GL_SAMPLE_SHADING_OES 0x8C36
#endif //GL_SAMPLE_SHADING_OES
#ifndef GL_MIN_SAMPLE_SHADING_VALUE_OES
#define GL_MIN_SAMPLE_SHADING_VALUE_OES 0x8C37
#endif //GL_MIN_SAMPLE_SHADING_VALUE_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_MinSampleShadingOES
#define GL_ALT_FUNDEF_MinSampleShadingOES
typedef void (*PFNGLMINSAMPLESHADINGOESPROC_ALT)(GLfloat);
static inline void glMinSampleShadingOES(GLfloat value1)
{
#ifdef __cplusplus
	static PFNGLMINSAMPLESHADINGOESPROC_ALT fn=(PFNGLMINSAMPLESHADINGOESPROC_ALT)glaltGetProcAddressExtension("glMinSampleShadingOES","GL_OES_sample_shading");
#else
	static PFNGLMINSAMPLESHADINGOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMINSAMPLESHADINGOESPROC_ALT)glaltGetProcAddressExtension("glMinSampleShadingOES","GL_OES_sample_shading"); }
#endif
	 fn(value1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_sample_variables
#define GL_OES_sample_variables
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_shader_image_atomic
#define GL_OES_shader_image_atomic
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_shader_multisample_interpolation
#define GL_OES_shader_multisample_interpolation
#ifndef GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5B
#endif //GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES
#ifndef GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5C
#endif //GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES
#ifndef GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES 0x8E5D
#endif //GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_standard_derivatives
#define GL_OES_standard_derivatives
#ifndef GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B
#endif //GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_stencil1
#define GL_OES_stencil1
#ifndef GL_STENCIL_INDEX1_OES
#define GL_STENCIL_INDEX1_OES 0x8D46
#endif //GL_STENCIL_INDEX1_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_stencil4
#define GL_OES_stencil4
#ifndef GL_STENCIL_INDEX4_OES
#define GL_STENCIL_INDEX4_OES 0x8D47
#endif //GL_STENCIL_INDEX4_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_surfaceless_context
#define GL_OES_surfaceless_context
#ifndef GL_FRAMEBUFFER_UNDEFINED_OES
#define GL_FRAMEBUFFER_UNDEFINED_OES 0x8219
#endif //GL_FRAMEBUFFER_UNDEFINED_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_3D
#define GL_OES_texture_3D
#ifndef GL_TEXTURE_BINDING_3D_OES
#define GL_TEXTURE_BINDING_3D_OES 0x806A
#endif //GL_TEXTURE_BINDING_3D_OES
#ifndef GL_TEXTURE_3D_OES
#define GL_TEXTURE_3D_OES 0x806F
#endif //GL_TEXTURE_3D_OES
#ifndef GL_TEXTURE_WRAP_R_OES
#define GL_TEXTURE_WRAP_R_OES 0x8072
#endif //GL_TEXTURE_WRAP_R_OES
#ifndef GL_MAX_3D_TEXTURE_SIZE_OES
#define GL_MAX_3D_TEXTURE_SIZE_OES 0x8073
#endif //GL_MAX_3D_TEXTURE_SIZE_OES
#ifndef GL_SAMPLER_3D_OES
#define GL_SAMPLER_3D_OES 0x8B5F
#endif //GL_SAMPLER_3D_OES
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CompressedTexImage3DOES
#define GL_ALT_FUNDEF_CompressedTexImage3DOES
typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_ALT)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void glCompressedTexImage3DOES(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLsizei imageSize1,const void * data1)
{
#ifdef __cplusplus
	static PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_ALT fn=(PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCompressedTexImage3DOES","GL_OES_texture_3D");
#else
	static PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCompressedTexImage3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,imageSize1,data1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_CompressedTexSubImage3DOES
#define GL_ALT_FUNDEF_CompressedTexSubImage3DOES
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_ALT)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void glCompressedTexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLsizei imageSize1,const void * data1)
{
#ifdef __cplusplus
	static PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_ALT fn=(PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCompressedTexSubImage3DOES","GL_OES_texture_3D");
#else
	static PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCompressedTexSubImage3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,imageSize1,data1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_CopyTexSubImage3DOES
#define GL_ALT_FUNDEF_CopyTexSubImage3DOES
typedef void (*PFNGLCOPYTEXSUBIMAGE3DOESPROC_ALT)(GLenum,GLint,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
static inline void glCopyTexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
#ifdef __cplusplus
	static PFNGLCOPYTEXSUBIMAGE3DOESPROC_ALT fn=(PFNGLCOPYTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCopyTexSubImage3DOES","GL_OES_texture_3D");
#else
	static PFNGLCOPYTEXSUBIMAGE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOPYTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glCopyTexSubImage3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,x1,y1,width1,height1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_FramebufferTexture3DOES
#define GL_ALT_FUNDEF_FramebufferTexture3DOES
typedef void (*PFNGLFRAMEBUFFERTEXTURE3DOESPROC_ALT)(GLenum,GLenum,GLenum,GLuint,GLint,GLint);
static inline void glFramebufferTexture3DOES(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLint zoffset1)
{
#ifdef __cplusplus
	static PFNGLFRAMEBUFFERTEXTURE3DOESPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE3DOESPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture3DOES","GL_OES_texture_3D");
#else
	static PFNGLFRAMEBUFFERTEXTURE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRAMEBUFFERTEXTURE3DOESPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,attachment1,textarget1,texture1,level1,zoffset1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexImage3DOES
#define GL_ALT_FUNDEF_TexImage3DOES
typedef void (*PFNGLTEXIMAGE3DOESPROC_ALT)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void glTexImage3DOES(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
#ifdef __cplusplus
	static PFNGLTEXIMAGE3DOESPROC_ALT fn=(PFNGLTEXIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glTexImage3DOES","GL_OES_texture_3D");
#else
	static PFNGLTEXIMAGE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glTexImage3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,format1,type1,pixels1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexSubImage3DOES
#define GL_ALT_FUNDEF_TexSubImage3DOES
typedef void (*PFNGLTEXSUBIMAGE3DOESPROC_ALT)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,const void *);
static inline void glTexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,const void * pixels1)
{
#ifdef __cplusplus
	static PFNGLTEXSUBIMAGE3DOESPROC_ALT fn=(PFNGLTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glTexSubImage3DOES","GL_OES_texture_3D");
#else
	static PFNGLTEXSUBIMAGE3DOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXSUBIMAGE3DOESPROC_ALT)glaltGetProcAddressExtension("glTexSubImage3DOES","GL_OES_texture_3D"); }
#endif
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,pixels1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_texture_compression_astc
#define GL_OES_texture_compression_astc
#ifndef GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#endif //GL_COMPRESSED_RGBA_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#endif //GL_COMPRESSED_RGBA_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#endif //GL_COMPRESSED_RGBA_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#endif //GL_COMPRESSED_RGBA_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#endif //GL_COMPRESSED_RGBA_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#endif //GL_COMPRESSED_RGBA_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#endif //GL_COMPRESSED_RGBA_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#endif //GL_COMPRESSED_RGBA_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#endif //GL_COMPRESSED_RGBA_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#endif //GL_COMPRESSED_RGBA_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#endif //GL_COMPRESSED_RGBA_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#endif //GL_COMPRESSED_RGBA_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#endif //GL_COMPRESSED_RGBA_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#endif //GL_COMPRESSED_RGBA_ASTC_12x12_KHR
#ifndef GL_COMPRESSED_RGBA_ASTC_3x3x3_OES
#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES 0x93C0
#endif //GL_COMPRESSED_RGBA_ASTC_3x3x3_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_4x3x3_OES
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES 0x93C1
#endif //GL_COMPRESSED_RGBA_ASTC_4x3x3_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_4x4x3_OES
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES 0x93C2
#endif //GL_COMPRESSED_RGBA_ASTC_4x4x3_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_4x4x4_OES
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES 0x93C3
#endif //GL_COMPRESSED_RGBA_ASTC_4x4x4_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_5x4x4_OES
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES 0x93C4
#endif //GL_COMPRESSED_RGBA_ASTC_5x4x4_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_5x5x4_OES
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES 0x93C5
#endif //GL_COMPRESSED_RGBA_ASTC_5x5x4_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_5x5x5_OES
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES 0x93C6
#endif //GL_COMPRESSED_RGBA_ASTC_5x5x5_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_6x5x5_OES
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES 0x93C7
#endif //GL_COMPRESSED_RGBA_ASTC_6x5x5_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_6x6x5_OES
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES 0x93C8
#endif //GL_COMPRESSED_RGBA_ASTC_6x6x5_OES
#ifndef GL_COMPRESSED_RGBA_ASTC_6x6x6_OES
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES 0x93C9
#endif //GL_COMPRESSED_RGBA_ASTC_6x6x6_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES 0x93E0
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES 0x93E1
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES 0x93E2
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES 0x93E3
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES 0x93E4
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES 0x93E5
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES 0x93E6
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES 0x93E7
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES 0x93E8
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES 0x93E9
#endif //GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_float
#define GL_OES_texture_float
#ifndef GL_FLOAT
#define GL_FLOAT 0x1406
#endif //GL_FLOAT
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_float_linear
#define GL_OES_texture_float_linear
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_half_float
#define GL_OES_texture_half_float
#ifndef GL_HALF_FLOAT_OES
#define GL_HALF_FLOAT_OES 0x8D61
#endif //GL_HALF_FLOAT_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_half_float_linear
#define GL_OES_texture_half_float_linear
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_npot
#define GL_OES_texture_npot
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_stencil8
#define GL_OES_texture_stencil8
#ifndef GL_STENCIL_INDEX_OES
#define GL_STENCIL_INDEX_OES 0x1901
#endif //GL_STENCIL_INDEX_OES
#ifndef GL_STENCIL_INDEX8_OES
#define GL_STENCIL_INDEX8_OES 0x8D48
#endif //GL_STENCIL_INDEX8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_storage_multisample_2d_array
#define GL_OES_texture_storage_multisample_2d_array
#ifndef GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES 0x9102
#endif //GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES
#ifndef GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES 0x9105
#endif //GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES
#ifndef GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910B
#endif //GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910C
#endif //GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910D
#endif //GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_TexStorage3DMultisampleOES
#define GL_ALT_FUNDEF_TexStorage3DMultisampleOES
typedef void (*PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei,GLboolean);
static inline void glTexStorage3DMultisampleOES(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLboolean fixedsamplelocations1)
{
#ifdef __cplusplus
	static PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_ALT fn=(PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_ALT)glaltGetProcAddressExtension("glTexStorage3DMultisampleOES","GL_OES_texture_storage_multisample_2d_array");
#else
	static PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_ALT)glaltGetProcAddressExtension("glTexStorage3DMultisampleOES","GL_OES_texture_storage_multisample_2d_array"); }
#endif
	 fn(target1,samples1,internalformat1,width1,height1,depth1,fixedsamplelocations1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object
#ifndef GL_VERTEX_ARRAY_BINDING_OES
#define GL_VERTEX_ARRAY_BINDING_OES 0x85B5
#endif //GL_VERTEX_ARRAY_BINDING_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BindVertexArrayOES
#define GL_ALT_FUNDEF_BindVertexArrayOES
typedef void (*PFNGLBINDVERTEXARRAYOESPROC_ALT)(GLuint);
static inline void glBindVertexArrayOES(GLuint array1)
{
#ifdef __cplusplus
	static PFNGLBINDVERTEXARRAYOESPROC_ALT fn=(PFNGLBINDVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glBindVertexArrayOES","GL_OES_vertex_array_object");
#else
	static PFNGLBINDVERTEXARRAYOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBINDVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glBindVertexArrayOES","GL_OES_vertex_array_object"); }
#endif
	 fn(array1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DeleteVertexArraysOES
#define GL_ALT_FUNDEF_DeleteVertexArraysOES
typedef void (*PFNGLDELETEVERTEXARRAYSOESPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteVertexArraysOES(GLsizei n1,const GLuint * arrays1)
{
#ifdef __cplusplus
	static PFNGLDELETEVERTEXARRAYSOESPROC_ALT fn=(PFNGLDELETEVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glDeleteVertexArraysOES","GL_OES_vertex_array_object");
#else
	static PFNGLDELETEVERTEXARRAYSOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glDeleteVertexArraysOES","GL_OES_vertex_array_object"); }
#endif
	 fn(n1,arrays1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GenVertexArraysOES
#define GL_ALT_FUNDEF_GenVertexArraysOES
typedef void (*PFNGLGENVERTEXARRAYSOESPROC_ALT)(GLsizei,GLuint *);
static inline void glGenVertexArraysOES(GLsizei n1,GLuint * arrays1)
{
#ifdef __cplusplus
	static PFNGLGENVERTEXARRAYSOESPROC_ALT fn=(PFNGLGENVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glGenVertexArraysOES","GL_OES_vertex_array_object");
#else
	static PFNGLGENVERTEXARRAYSOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glGenVertexArraysOES","GL_OES_vertex_array_object"); }
#endif
	 fn(n1,arrays1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_IsVertexArrayOES
#define GL_ALT_FUNDEF_IsVertexArrayOES
typedef GLboolean (*PFNGLISVERTEXARRAYOESPROC_ALT)(GLuint);
static inline GLboolean glIsVertexArrayOES(GLuint array1)
{
#ifdef __cplusplus
	static PFNGLISVERTEXARRAYOESPROC_ALT fn=(PFNGLISVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glIsVertexArrayOES","GL_OES_vertex_array_object");
#else
	static PFNGLISVERTEXARRAYOESPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glIsVertexArrayOES","GL_OES_vertex_array_object"); }
#endif
	return fn(array1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_vertex_half_float
#define GL_OES_vertex_half_float
#ifndef GL_HALF_FLOAT_OES
#define GL_HALF_FLOAT_OES 0x8D61
#endif //GL_HALF_FLOAT_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_vertex_type_10_10_10_2
#define GL_OES_vertex_type_10_10_10_2
#ifndef GL_UNSIGNED_INT_10_10_10_2_OES
#define GL_UNSIGNED_INT_10_10_10_2_OES 0x8DF6
#endif //GL_UNSIGNED_INT_10_10_10_2_OES
#ifndef GL_INT_10_10_10_2_OES
#define GL_INT_10_10_10_2_OES 0x8DF7
#endif //GL_INT_10_10_10_2_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_QCOM_alpha_test
#define GL_QCOM_alpha_test
#ifndef GL_ALPHA_TEST_QCOM
#define GL_ALPHA_TEST_QCOM 0x0BC0
#endif //GL_ALPHA_TEST_QCOM
#ifndef GL_ALPHA_TEST_FUNC_QCOM
#define GL_ALPHA_TEST_FUNC_QCOM 0x0BC1
#endif //GL_ALPHA_TEST_FUNC_QCOM
#ifndef GL_ALPHA_TEST_REF_QCOM
#define GL_ALPHA_TEST_REF_QCOM 0x0BC2
#endif //GL_ALPHA_TEST_REF_QCOM
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_AlphaFuncQCOM
#define GL_ALT_FUNDEF_AlphaFuncQCOM
typedef void (*PFNGLALPHAFUNCQCOMPROC_ALT)(GLenum,GLclampf);
static inline void glAlphaFuncQCOM(GLenum func1,GLclampf ref1)
{
#ifdef __cplusplus
	static PFNGLALPHAFUNCQCOMPROC_ALT fn=(PFNGLALPHAFUNCQCOMPROC_ALT)glaltGetProcAddressExtension("glAlphaFuncQCOM","GL_QCOM_alpha_test");
#else
	static PFNGLALPHAFUNCQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLALPHAFUNCQCOMPROC_ALT)glaltGetProcAddressExtension("glAlphaFuncQCOM","GL_QCOM_alpha_test"); }
#endif
	 fn(func1,ref1);
}
#endif
CGUARDEND

#endif

#ifndef GL_QCOM_binning_control
#define GL_QCOM_binning_control
#ifndef GL_BINNING_CONTROL_HINT_QCOM
#define GL_BINNING_CONTROL_HINT_QCOM 0x8FB0
#endif //GL_BINNING_CONTROL_HINT_QCOM
#ifndef GL_CPU_OPTIMIZED_QCOM
#define GL_CPU_OPTIMIZED_QCOM 0x8FB1
#endif //GL_CPU_OPTIMIZED_QCOM
#ifndef GL_GPU_OPTIMIZED_QCOM
#define GL_GPU_OPTIMIZED_QCOM 0x8FB2
#endif //GL_GPU_OPTIMIZED_QCOM
#ifndef GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM 0x8FB3
#endif //GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_QCOM_driver_control
#define GL_QCOM_driver_control
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DisableDriverControlQCOM
#define GL_ALT_FUNDEF_DisableDriverControlQCOM
typedef void (*PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT)(GLuint);
static inline void glDisableDriverControlQCOM(GLuint driverControl1)
{
#ifdef __cplusplus
	static PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT fn=(PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glDisableDriverControlQCOM","GL_QCOM_driver_control");
#else
	static PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glDisableDriverControlQCOM","GL_QCOM_driver_control"); }
#endif
	 fn(driverControl1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EnableDriverControlQCOM
#define GL_ALT_FUNDEF_EnableDriverControlQCOM
typedef void (*PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT)(GLuint);
static inline void glEnableDriverControlQCOM(GLuint driverControl1)
{
#ifdef __cplusplus
	static PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT fn=(PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glEnableDriverControlQCOM","GL_QCOM_driver_control");
#else
	static PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glEnableDriverControlQCOM","GL_QCOM_driver_control"); }
#endif
	 fn(driverControl1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetDriverControlStringQCOM
#define GL_ALT_FUNDEF_GetDriverControlStringQCOM
typedef void (*PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetDriverControlStringQCOM(GLuint driverControl1,GLsizei bufSize1,GLsizei * length1,GLchar * driverControlString1)
{
#ifdef __cplusplus
	static PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT fn=(PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlStringQCOM","GL_QCOM_driver_control");
#else
	static PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlStringQCOM","GL_QCOM_driver_control"); }
#endif
	 fn(driverControl1,bufSize1,length1,driverControlString1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetDriverControlsQCOM
#define GL_ALT_FUNDEF_GetDriverControlsQCOM
typedef void (*PFNGLGETDRIVERCONTROLSQCOMPROC_ALT)(GLint *,GLsizei,GLuint *);
static inline void glGetDriverControlsQCOM(GLint * num1,GLsizei size1,GLuint * driverControls1)
{
#ifdef __cplusplus
	static PFNGLGETDRIVERCONTROLSQCOMPROC_ALT fn=(PFNGLGETDRIVERCONTROLSQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlsQCOM","GL_QCOM_driver_control");
#else
	static PFNGLGETDRIVERCONTROLSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETDRIVERCONTROLSQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlsQCOM","GL_QCOM_driver_control"); }
#endif
	 fn(num1,size1,driverControls1);
}
#endif
CGUARDEND

#endif

#ifndef GL_QCOM_extended_get
#define GL_QCOM_extended_get
#ifndef GL_TEXTURE_WIDTH_QCOM
#define GL_TEXTURE_WIDTH_QCOM 0x8BD2
#endif //GL_TEXTURE_WIDTH_QCOM
#ifndef GL_TEXTURE_HEIGHT_QCOM
#define GL_TEXTURE_HEIGHT_QCOM 0x8BD3
#endif //GL_TEXTURE_HEIGHT_QCOM
#ifndef GL_TEXTURE_DEPTH_QCOM
#define GL_TEXTURE_DEPTH_QCOM 0x8BD4
#endif //GL_TEXTURE_DEPTH_QCOM
#ifndef GL_TEXTURE_INTERNAL_FORMAT_QCOM
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM 0x8BD5
#endif //GL_TEXTURE_INTERNAL_FORMAT_QCOM
#ifndef GL_TEXTURE_FORMAT_QCOM
#define GL_TEXTURE_FORMAT_QCOM 0x8BD6
#endif //GL_TEXTURE_FORMAT_QCOM
#ifndef GL_TEXTURE_TYPE_QCOM
#define GL_TEXTURE_TYPE_QCOM 0x8BD7
#endif //GL_TEXTURE_TYPE_QCOM
#ifndef GL_TEXTURE_IMAGE_VALID_QCOM
#define GL_TEXTURE_IMAGE_VALID_QCOM 0x8BD8
#endif //GL_TEXTURE_IMAGE_VALID_QCOM
#ifndef GL_TEXTURE_NUM_LEVELS_QCOM
#define GL_TEXTURE_NUM_LEVELS_QCOM 0x8BD9
#endif //GL_TEXTURE_NUM_LEVELS_QCOM
#ifndef GL_TEXTURE_TARGET_QCOM
#define GL_TEXTURE_TARGET_QCOM 0x8BDA
#endif //GL_TEXTURE_TARGET_QCOM
#ifndef GL_TEXTURE_OBJECT_VALID_QCOM
#define GL_TEXTURE_OBJECT_VALID_QCOM 0x8BDB
#endif //GL_TEXTURE_OBJECT_VALID_QCOM
#ifndef GL_STATE_RESTORE
#define GL_STATE_RESTORE 0x8BDC
#endif //GL_STATE_RESTORE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ExtGetBufferPointervQCOM
#define GL_ALT_FUNDEF_ExtGetBufferPointervQCOM
typedef void (*PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT)(GLenum,void **);
static inline void glExtGetBufferPointervQCOM(GLenum target1,void ** params1)
{
#ifdef __cplusplus
	static PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT fn=(PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBufferPointervQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBufferPointervQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(target1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetBuffersQCOM
#define GL_ALT_FUNDEF_ExtGetBuffersQCOM
typedef void (*PFNGLEXTGETBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetBuffersQCOM(GLuint * buffers1,GLint maxBuffers1,GLint * numBuffers1)
{
#ifdef __cplusplus
	static PFNGLEXTGETBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBuffersQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETBUFFERSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBuffersQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(buffers1,maxBuffers1,numBuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetFramebuffersQCOM
#define GL_ALT_FUNDEF_ExtGetFramebuffersQCOM
typedef void (*PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetFramebuffersQCOM(GLuint * framebuffers1,GLint maxFramebuffers1,GLint * numFramebuffers1)
{
#ifdef __cplusplus
	static PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetFramebuffersQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetFramebuffersQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(framebuffers1,maxFramebuffers1,numFramebuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetRenderbuffersQCOM
#define GL_ALT_FUNDEF_ExtGetRenderbuffersQCOM
typedef void (*PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetRenderbuffersQCOM(GLuint * renderbuffers1,GLint maxRenderbuffers1,GLint * numRenderbuffers1)
{
#ifdef __cplusplus
	static PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetRenderbuffersQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetRenderbuffersQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(renderbuffers1,maxRenderbuffers1,numRenderbuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexLevelParameterivQCOM
#define GL_ALT_FUNDEF_ExtGetTexLevelParameterivQCOM
typedef void (*PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT)(GLuint,GLenum,GLint,GLenum,GLint *);
static inline void glExtGetTexLevelParameterivQCOM(GLuint texture1,GLenum face1,GLint level1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT fn=(PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexLevelParameterivQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexLevelParameterivQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(texture1,face1,level1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexSubImageQCOM
#define GL_ALT_FUNDEF_ExtGetTexSubImageQCOM
typedef void (*PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,void *);
static inline void glExtGetTexSubImageQCOM(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,void * texels1)
{
#ifdef __cplusplus
	static PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT fn=(PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexSubImageQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexSubImageQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,texels1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexturesQCOM
#define GL_ALT_FUNDEF_ExtGetTexturesQCOM
typedef void (*PFNGLEXTGETTEXTURESQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetTexturesQCOM(GLuint * textures1,GLint maxTextures1,GLint * numTextures1)
{
#ifdef __cplusplus
	static PFNGLEXTGETTEXTURESQCOMPROC_ALT fn=(PFNGLEXTGETTEXTURESQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexturesQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTGETTEXTURESQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETTEXTURESQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexturesQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(textures1,maxTextures1,numTextures1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtTexObjectStateOverrideiQCOM
#define GL_ALT_FUNDEF_ExtTexObjectStateOverrideiQCOM
typedef void (*PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT)(GLenum,GLenum,GLint);
static inline void glExtTexObjectStateOverrideiQCOM(GLenum target1,GLenum pname1,GLint param1)
{
#ifdef __cplusplus
	static PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT fn=(PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT)glaltGetProcAddressExtension("glExtTexObjectStateOverrideiQCOM","GL_QCOM_extended_get");
#else
	static PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT)glaltGetProcAddressExtension("glExtTexObjectStateOverrideiQCOM","GL_QCOM_extended_get"); }
#endif
	 fn(target1,pname1,param1);
}
#endif
CGUARDEND

#endif

#ifndef GL_QCOM_extended_get2
#define GL_QCOM_extended_get2
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ExtGetProgramBinarySourceQCOM
#define GL_ALT_FUNDEF_ExtGetProgramBinarySourceQCOM
typedef void (*PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT)(GLuint,GLenum,GLchar *,GLint *);
static inline void glExtGetProgramBinarySourceQCOM(GLuint program1,GLenum shadertype1,GLchar * source1,GLint * length1)
{
#ifdef __cplusplus
	static PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT fn=(PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramBinarySourceQCOM","GL_QCOM_extended_get2");
#else
	static PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramBinarySourceQCOM","GL_QCOM_extended_get2"); }
#endif
	 fn(program1,shadertype1,source1,length1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetProgramsQCOM
#define GL_ALT_FUNDEF_ExtGetProgramsQCOM
typedef void (*PFNGLEXTGETPROGRAMSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetProgramsQCOM(GLuint * programs1,GLint maxPrograms1,GLint * numPrograms1)
{
#ifdef __cplusplus
	static PFNGLEXTGETPROGRAMSQCOMPROC_ALT fn=(PFNGLEXTGETPROGRAMSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramsQCOM","GL_QCOM_extended_get2");
#else
	static PFNGLEXTGETPROGRAMSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETPROGRAMSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramsQCOM","GL_QCOM_extended_get2"); }
#endif
	 fn(programs1,maxPrograms1,numPrograms1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetShadersQCOM
#define GL_ALT_FUNDEF_ExtGetShadersQCOM
typedef void (*PFNGLEXTGETSHADERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetShadersQCOM(GLuint * shaders1,GLint maxShaders1,GLint * numShaders1)
{
#ifdef __cplusplus
	static PFNGLEXTGETSHADERSQCOMPROC_ALT fn=(PFNGLEXTGETSHADERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetShadersQCOM","GL_QCOM_extended_get2");
#else
	static PFNGLEXTGETSHADERSQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTGETSHADERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetShadersQCOM","GL_QCOM_extended_get2"); }
#endif
	 fn(shaders1,maxShaders1,numShaders1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtIsProgramBinaryQCOM
#define GL_ALT_FUNDEF_ExtIsProgramBinaryQCOM
typedef GLboolean (*PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT)(GLuint);
static inline GLboolean glExtIsProgramBinaryQCOM(GLuint program1)
{
#ifdef __cplusplus
	static PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT fn=(PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT)glaltGetProcAddressExtension("glExtIsProgramBinaryQCOM","GL_QCOM_extended_get2");
#else
	static PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT)glaltGetProcAddressExtension("glExtIsProgramBinaryQCOM","GL_QCOM_extended_get2"); }
#endif
	return fn(program1);
}
#endif
CGUARDEND

#endif

#ifndef GL_QCOM_perfmon_global_mode
#define GL_QCOM_perfmon_global_mode
#ifndef GL_PERFMON_GLOBAL_MODE_QCOM
#define GL_PERFMON_GLOBAL_MODE_QCOM 0x8FA0
#endif //GL_PERFMON_GLOBAL_MODE_QCOM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_QCOM_tiled_rendering
#define GL_QCOM_tiled_rendering
#ifndef GL_COLOR_BUFFER_BIT0_QCOM
#define GL_COLOR_BUFFER_BIT0_QCOM 0x00000001
#endif //GL_COLOR_BUFFER_BIT0_QCOM
#ifndef GL_COLOR_BUFFER_BIT1_QCOM
#define GL_COLOR_BUFFER_BIT1_QCOM 0x00000002
#endif //GL_COLOR_BUFFER_BIT1_QCOM
#ifndef GL_COLOR_BUFFER_BIT2_QCOM
#define GL_COLOR_BUFFER_BIT2_QCOM 0x00000004
#endif //GL_COLOR_BUFFER_BIT2_QCOM
#ifndef GL_COLOR_BUFFER_BIT3_QCOM
#define GL_COLOR_BUFFER_BIT3_QCOM 0x00000008
#endif //GL_COLOR_BUFFER_BIT3_QCOM
#ifndef GL_COLOR_BUFFER_BIT4_QCOM
#define GL_COLOR_BUFFER_BIT4_QCOM 0x00000010
#endif //GL_COLOR_BUFFER_BIT4_QCOM
#ifndef GL_COLOR_BUFFER_BIT5_QCOM
#define GL_COLOR_BUFFER_BIT5_QCOM 0x00000020
#endif //GL_COLOR_BUFFER_BIT5_QCOM
#ifndef GL_COLOR_BUFFER_BIT6_QCOM
#define GL_COLOR_BUFFER_BIT6_QCOM 0x00000040
#endif //GL_COLOR_BUFFER_BIT6_QCOM
#ifndef GL_COLOR_BUFFER_BIT7_QCOM
#define GL_COLOR_BUFFER_BIT7_QCOM 0x00000080
#endif //GL_COLOR_BUFFER_BIT7_QCOM
#ifndef GL_DEPTH_BUFFER_BIT0_QCOM
#define GL_DEPTH_BUFFER_BIT0_QCOM 0x00000100
#endif //GL_DEPTH_BUFFER_BIT0_QCOM
#ifndef GL_DEPTH_BUFFER_BIT1_QCOM
#define GL_DEPTH_BUFFER_BIT1_QCOM 0x00000200
#endif //GL_DEPTH_BUFFER_BIT1_QCOM
#ifndef GL_DEPTH_BUFFER_BIT2_QCOM
#define GL_DEPTH_BUFFER_BIT2_QCOM 0x00000400
#endif //GL_DEPTH_BUFFER_BIT2_QCOM
#ifndef GL_DEPTH_BUFFER_BIT3_QCOM
#define GL_DEPTH_BUFFER_BIT3_QCOM 0x00000800
#endif //GL_DEPTH_BUFFER_BIT3_QCOM
#ifndef GL_DEPTH_BUFFER_BIT4_QCOM
#define GL_DEPTH_BUFFER_BIT4_QCOM 0x00001000
#endif //GL_DEPTH_BUFFER_BIT4_QCOM
#ifndef GL_DEPTH_BUFFER_BIT5_QCOM
#define GL_DEPTH_BUFFER_BIT5_QCOM 0x00002000
#endif //GL_DEPTH_BUFFER_BIT5_QCOM
#ifndef GL_DEPTH_BUFFER_BIT6_QCOM
#define GL_DEPTH_BUFFER_BIT6_QCOM 0x00004000
#endif //GL_DEPTH_BUFFER_BIT6_QCOM
#ifndef GL_DEPTH_BUFFER_BIT7_QCOM
#define GL_DEPTH_BUFFER_BIT7_QCOM 0x00008000
#endif //GL_DEPTH_BUFFER_BIT7_QCOM
#ifndef GL_STENCIL_BUFFER_BIT0_QCOM
#define GL_STENCIL_BUFFER_BIT0_QCOM 0x00010000
#endif //GL_STENCIL_BUFFER_BIT0_QCOM
#ifndef GL_STENCIL_BUFFER_BIT1_QCOM
#define GL_STENCIL_BUFFER_BIT1_QCOM 0x00020000
#endif //GL_STENCIL_BUFFER_BIT1_QCOM
#ifndef GL_STENCIL_BUFFER_BIT2_QCOM
#define GL_STENCIL_BUFFER_BIT2_QCOM 0x00040000
#endif //GL_STENCIL_BUFFER_BIT2_QCOM
#ifndef GL_STENCIL_BUFFER_BIT3_QCOM
#define GL_STENCIL_BUFFER_BIT3_QCOM 0x00080000
#endif //GL_STENCIL_BUFFER_BIT3_QCOM
#ifndef GL_STENCIL_BUFFER_BIT4_QCOM
#define GL_STENCIL_BUFFER_BIT4_QCOM 0x00100000
#endif //GL_STENCIL_BUFFER_BIT4_QCOM
#ifndef GL_STENCIL_BUFFER_BIT5_QCOM
#define GL_STENCIL_BUFFER_BIT5_QCOM 0x00200000
#endif //GL_STENCIL_BUFFER_BIT5_QCOM
#ifndef GL_STENCIL_BUFFER_BIT6_QCOM
#define GL_STENCIL_BUFFER_BIT6_QCOM 0x00400000
#endif //GL_STENCIL_BUFFER_BIT6_QCOM
#ifndef GL_STENCIL_BUFFER_BIT7_QCOM
#define GL_STENCIL_BUFFER_BIT7_QCOM 0x00800000
#endif //GL_STENCIL_BUFFER_BIT7_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT0_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM 0x01000000
#endif //GL_MULTISAMPLE_BUFFER_BIT0_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT1_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM 0x02000000
#endif //GL_MULTISAMPLE_BUFFER_BIT1_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT2_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM 0x04000000
#endif //GL_MULTISAMPLE_BUFFER_BIT2_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT3_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM 0x08000000
#endif //GL_MULTISAMPLE_BUFFER_BIT3_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT4_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM 0x10000000
#endif //GL_MULTISAMPLE_BUFFER_BIT4_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT5_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM 0x20000000
#endif //GL_MULTISAMPLE_BUFFER_BIT5_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT6_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM 0x40000000
#endif //GL_MULTISAMPLE_BUFFER_BIT6_QCOM
#ifndef GL_MULTISAMPLE_BUFFER_BIT7_QCOM
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM 0x80000000
#endif //GL_MULTISAMPLE_BUFFER_BIT7_QCOM
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_EndTilingQCOM
#define GL_ALT_FUNDEF_EndTilingQCOM
typedef void (*PFNGLENDTILINGQCOMPROC_ALT)(GLbitfield);
static inline void glEndTilingQCOM(GLbitfield preserveMask1)
{
#ifdef __cplusplus
	static PFNGLENDTILINGQCOMPROC_ALT fn=(PFNGLENDTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glEndTilingQCOM","GL_QCOM_tiled_rendering");
#else
	static PFNGLENDTILINGQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLENDTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glEndTilingQCOM","GL_QCOM_tiled_rendering"); }
#endif
	 fn(preserveMask1);
}
#endif

#ifndef	GL_ALT_FUNDEF_StartTilingQCOM
#define GL_ALT_FUNDEF_StartTilingQCOM
typedef void (*PFNGLSTARTTILINGQCOMPROC_ALT)(GLuint,GLuint,GLuint,GLuint,GLbitfield);
static inline void glStartTilingQCOM(GLuint x1,GLuint y1,GLuint width1,GLuint height1,GLbitfield preserveMask1)
{
#ifdef __cplusplus
	static PFNGLSTARTTILINGQCOMPROC_ALT fn=(PFNGLSTARTTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glStartTilingQCOM","GL_QCOM_tiled_rendering");
#else
	static PFNGLSTARTTILINGQCOMPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSTARTTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glStartTilingQCOM","GL_QCOM_tiled_rendering"); }
#endif
	 fn(x1,y1,width1,height1,preserveMask1);
}
#endif
CGUARDEND

#endif

#ifndef GL_QCOM_writeonly_rendering
#define GL_QCOM_writeonly_rendering
#ifndef GL_WRITEONLY_RENDERING_QCOM
#define GL_WRITEONLY_RENDERING_QCOM 0x8823
#endif //GL_WRITEONLY_RENDERING_QCOM
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_VIV_shader_binary
#define GL_VIV_shader_binary
#ifndef GL_SHADER_BINARY_VIV
#define GL_SHADER_BINARY_VIV 0x8FC4
#endif //GL_SHADER_BINARY_VIV
CGUARDBEGIN

CGUARDEND

#endif

#endif
