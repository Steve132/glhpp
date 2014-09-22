#ifndef GL_HPP_gles2EXT_HPP
#define GL_HPP_gles2EXT_HPP
#include "common.hpp"


#ifndef GL_AMD_compressed_3DC_texture
#define GL_AMD_compressed_3DC_texture
#ifndef GL_3DC_X_AMD
#define GL_3DC_X_AMD 0x87F9
#endif //GL_3DC_X_AMD
#ifndef GL_3DC_XY_AMD
#define GL_3DC_XY_AMD 0x87FA
#endif //GL_3DC_XY_AMD
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBEGINPERFMONITORAMDPROC_HPP)(GLuint);
static inline void BeginPerfMonitorAMD(GLuint monitor1)
{
	static PFNGLBEGINPERFMONITORAMDPROC_HPP fn=reinterpret_cast<PFNGLBEGINPERFMONITORAMDPROC_HPP>(_impl::_get_proc_address("glBeginPerfMonitorAMD","GL_AMD_performance_monitor"));
	 fn(monitor1);
}
typedef void (*PFNGLDELETEPERFMONITORSAMDPROC_HPP)(GLsizei,GLuint *);
static inline void DeletePerfMonitorsAMD(GLsizei n1,GLuint * monitors1)
{
	static PFNGLDELETEPERFMONITORSAMDPROC_HPP fn=reinterpret_cast<PFNGLDELETEPERFMONITORSAMDPROC_HPP>(_impl::_get_proc_address("glDeletePerfMonitorsAMD","GL_AMD_performance_monitor"));
	 fn(n1,monitors1);
}
typedef void (*PFNGLENDPERFMONITORAMDPROC_HPP)(GLuint);
static inline void EndPerfMonitorAMD(GLuint monitor1)
{
	static PFNGLENDPERFMONITORAMDPROC_HPP fn=reinterpret_cast<PFNGLENDPERFMONITORAMDPROC_HPP>(_impl::_get_proc_address("glEndPerfMonitorAMD","GL_AMD_performance_monitor"));
	 fn(monitor1);
}
typedef void (*PFNGLGENPERFMONITORSAMDPROC_HPP)(GLsizei,GLuint *);
static inline void GenPerfMonitorsAMD(GLsizei n1,GLuint * monitors1)
{
	static PFNGLGENPERFMONITORSAMDPROC_HPP fn=reinterpret_cast<PFNGLGENPERFMONITORSAMDPROC_HPP>(_impl::_get_proc_address("glGenPerfMonitorsAMD","GL_AMD_performance_monitor"));
	 fn(n1,monitors1);
}
typedef void (*PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_HPP)(GLuint,GLenum,GLsizei,GLuint *,GLint *);
static inline void GetPerfMonitorCounterDataAMD(GLuint monitor1,GLenum pname1,GLsizei dataSize1,GLuint * data1,GLint * bytesWritten1)
{
	static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORCOUNTERDATAAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorCounterDataAMD","GL_AMD_performance_monitor"));
	 fn(monitor1,pname1,dataSize1,data1,bytesWritten1);
}
typedef void (*PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_HPP)(GLuint,GLuint,GLenum,void *);
static inline void GetPerfMonitorCounterInfoAMD(GLuint group1,GLuint counter1,GLenum pname1,void * data1)
{
	static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORCOUNTERINFOAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorCounterInfoAMD","GL_AMD_performance_monitor"));
	 fn(group1,counter1,pname1,data1);
}
typedef void (*PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetPerfMonitorCounterStringAMD(GLuint group1,GLuint counter1,GLsizei bufSize1,GLsizei * length1,GLchar * counterString1)
{
	static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorCounterStringAMD","GL_AMD_performance_monitor"));
	 fn(group1,counter1,bufSize1,length1,counterString1);
}
typedef void (*PFNGLGETPERFMONITORCOUNTERSAMDPROC_HPP)(GLuint,GLint *,GLint *,GLsizei,GLuint *);
static inline void GetPerfMonitorCountersAMD(GLuint group1,GLint * numCounters1,GLint * maxActiveCounters1,GLsizei counterSize1,GLuint * counters1)
{
	static PFNGLGETPERFMONITORCOUNTERSAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorCountersAMD","GL_AMD_performance_monitor"));
	 fn(group1,numCounters1,maxActiveCounters1,counterSize1,counters1);
}
typedef void (*PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetPerfMonitorGroupStringAMD(GLuint group1,GLsizei bufSize1,GLsizei * length1,GLchar * groupString1)
{
	static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORGROUPSTRINGAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorGroupStringAMD","GL_AMD_performance_monitor"));
	 fn(group1,bufSize1,length1,groupString1);
}
typedef void (*PFNGLGETPERFMONITORGROUPSAMDPROC_HPP)(GLint *,GLsizei,GLuint *);
static inline void GetPerfMonitorGroupsAMD(GLint * numGroups1,GLsizei groupsSize1,GLuint * groups1)
{
	static PFNGLGETPERFMONITORGROUPSAMDPROC_HPP fn=reinterpret_cast<PFNGLGETPERFMONITORGROUPSAMDPROC_HPP>(_impl::_get_proc_address("glGetPerfMonitorGroupsAMD","GL_AMD_performance_monitor"));
	 fn(numGroups1,groupsSize1,groups1);
}
typedef void (*PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_HPP)(GLuint,GLboolean,GLuint,GLint,GLuint *);
static inline void SelectPerfMonitorCountersAMD(GLuint monitor1,GLboolean enable1,GLuint group1,GLint numCounters1,GLuint * counterList1)
{
	static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_HPP fn=reinterpret_cast<PFNGLSELECTPERFMONITORCOUNTERSAMDPROC_HPP>(_impl::_get_proc_address("glSelectPerfMonitorCountersAMD","GL_AMD_performance_monitor"));
	 fn(monitor1,enable1,group1,numCounters1,counterList1);
}}
#endif

#ifndef GL_AMD_program_binary_Z400
#define GL_AMD_program_binary_Z400
#ifndef GL_Z400_BINARY_AMD
#define GL_Z400_BINARY_AMD 0x8740
#endif //GL_Z400_BINARY_AMD
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANDROID_extension_pack_es31a
#define GL_ANDROID_extension_pack_es31a
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLITFRAMEBUFFERANGLEPROC_HPP)(GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLbitfield,GLenum);
static inline void BlitFramebufferANGLE(GLint srcX01,GLint srcY01,GLint srcX11,GLint srcY11,GLint dstX01,GLint dstY01,GLint dstX11,GLint dstY11,GLbitfield mask1,GLenum filter1)
{
	static PFNGLBLITFRAMEBUFFERANGLEPROC_HPP fn=reinterpret_cast<PFNGLBLITFRAMEBUFFERANGLEPROC_HPP>(_impl::_get_proc_address("glBlitFramebufferANGLE","GL_ANGLE_framebuffer_blit"));
	 fn(srcX01,srcY01,srcX11,srcY11,dstX01,dstY01,dstX11,dstY11,mask1,filter1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisampleANGLE(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisampleANGLE","GL_ANGLE_framebuffer_multisample"));
	 fn(target1,samples1,internalformat1,width1,height1);
}}
#endif

#ifndef GL_ANGLE_instanced_arrays
#define GL_ANGLE_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWARRAYSINSTANCEDANGLEPROC_HPP)(GLenum,GLint,GLsizei,GLsizei);
static inline void DrawArraysInstancedANGLE(GLenum mode1,GLint first1,GLsizei count1,GLsizei primcount1)
{
	static PFNGLDRAWARRAYSINSTANCEDANGLEPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC_HPP>(_impl::_get_proc_address("glDrawArraysInstancedANGLE","GL_ANGLE_instanced_arrays"));
	 fn(mode1,first1,count1,primcount1);
}
typedef void (*PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_HPP)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void DrawElementsInstancedANGLE(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
	static PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC_HPP>(_impl::_get_proc_address("glDrawElementsInstancedANGLE","GL_ANGLE_instanced_arrays"));
	 fn(mode1,count1,type1,indices1,primcount1);
}
typedef void (*PFNGLVERTEXATTRIBDIVISORANGLEPROC_HPP)(GLuint,GLuint);
static inline void VertexAttribDivisorANGLE(GLuint index1,GLuint divisor1)
{
	static PFNGLVERTEXATTRIBDIVISORANGLEPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC_HPP>(_impl::_get_proc_address("glVertexAttribDivisorANGLE","GL_ANGLE_instanced_arrays"));
	 fn(index1,divisor1);
}}
#endif

#ifndef GL_ANGLE_pack_reverse_row_order
#define GL_ANGLE_pack_reverse_row_order
#ifndef GL_PACK_REVERSE_ROW_ORDER_ANGLE
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE 0x93A4
#endif //GL_PACK_REVERSE_ROW_ORDER_ANGLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANGLE_program_binary
#define GL_ANGLE_program_binary
#ifndef GL_PROGRAM_BINARY_ANGLE
#define GL_PROGRAM_BINARY_ANGLE 0x93A6
#endif //GL_PROGRAM_BINARY_ANGLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANGLE_texture_compression_dxt3
#define GL_ANGLE_texture_compression_dxt3
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2
#endif //GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANGLE_texture_compression_dxt5
#define GL_ANGLE_texture_compression_dxt5
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3
#endif //GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANGLE_texture_usage
#define GL_ANGLE_texture_usage
#ifndef GL_TEXTURE_USAGE_ANGLE
#define GL_TEXTURE_USAGE_ANGLE 0x93A2
#endif //GL_TEXTURE_USAGE_ANGLE
#ifndef GL_FRAMEBUFFER_ATTACHMENT_ANGLE
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE 0x93A3
#endif //GL_FRAMEBUFFER_ATTACHMENT_ANGLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ANGLE_translated_shader_source
#define GL_ANGLE_translated_shader_source
#ifndef GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0
#endif //GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetTranslatedShaderSourceANGLE(GLuint shader1,GLsizei bufsize1,GLsizei * length1,GLchar * source1)
{
	static PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_HPP fn=reinterpret_cast<PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC_HPP>(_impl::_get_proc_address("glGetTranslatedShaderSourceANGLE","GL_ANGLE_translated_shader_source"));
	 fn(shader1,bufsize1,length1,source1);
}}
#endif

#ifndef GL_APPLE_copy_texture_levels
#define GL_APPLE_copy_texture_levels
extern "C" {
}
namespace gl{

typedef void (*PFNGLCOPYTEXTURELEVELSAPPLEPROC_HPP)(GLuint,GLuint,GLint,GLsizei);
static inline void CopyTextureLevelsAPPLE(GLuint destinationTexture1,GLuint sourceTexture1,GLint sourceBaseLevel1,GLsizei sourceLevelCount1)
{
	static PFNGLCOPYTEXTURELEVELSAPPLEPROC_HPP fn=reinterpret_cast<PFNGLCOPYTEXTURELEVELSAPPLEPROC_HPP>(_impl::_get_proc_address("glCopyTextureLevelsAPPLE","GL_APPLE_copy_texture_levels"));
	 fn(destinationTexture1,sourceTexture1,sourceBaseLevel1,sourceLevelCount1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisampleAPPLE(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisampleAPPLE","GL_APPLE_framebuffer_multisample"));
	 fn(target1,samples1,internalformat1,width1,height1);
}
typedef void (*PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_HPP)();
static inline void ResolveMultisampleFramebufferAPPLE()
{
	static PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_HPP fn=reinterpret_cast<PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_HPP>(_impl::_get_proc_address("glResolveMultisampleFramebufferAPPLE","GL_APPLE_framebuffer_multisample"));
	 fn();
}}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef GLenum (*PFNGLCLIENTWAITSYNCAPPLEPROC_HPP)(GLsync,GLbitfield,GLuint64);
static inline GLenum ClientWaitSyncAPPLE(GLsync sync1,GLbitfield flags1,GLuint64 timeout1)
{
	static PFNGLCLIENTWAITSYNCAPPLEPROC_HPP fn=reinterpret_cast<PFNGLCLIENTWAITSYNCAPPLEPROC_HPP>(_impl::_get_proc_address("glClientWaitSyncAPPLE","GL_APPLE_sync"));
	return fn(sync1,flags1,timeout1);
}
typedef void (*PFNGLDELETESYNCAPPLEPROC_HPP)(GLsync);
static inline void DeleteSyncAPPLE(GLsync sync1)
{
	static PFNGLDELETESYNCAPPLEPROC_HPP fn=reinterpret_cast<PFNGLDELETESYNCAPPLEPROC_HPP>(_impl::_get_proc_address("glDeleteSyncAPPLE","GL_APPLE_sync"));
	 fn(sync1);
}
typedef GLsync (*PFNGLFENCESYNCAPPLEPROC_HPP)(GLenum,GLbitfield);
static inline GLsync FenceSyncAPPLE(GLenum condition1,GLbitfield flags1)
{
	static PFNGLFENCESYNCAPPLEPROC_HPP fn=reinterpret_cast<PFNGLFENCESYNCAPPLEPROC_HPP>(_impl::_get_proc_address("glFenceSyncAPPLE","GL_APPLE_sync"));
	return fn(condition1,flags1);
}
typedef void (*PFNGLGETINTEGER64VAPPLEPROC_HPP)(GLenum,GLint64 *);
static inline void GetInteger64vAPPLE(GLenum pname1,GLint64 * params1)
{
	static PFNGLGETINTEGER64VAPPLEPROC_HPP fn=reinterpret_cast<PFNGLGETINTEGER64VAPPLEPROC_HPP>(_impl::_get_proc_address("glGetInteger64vAPPLE","GL_APPLE_sync"));
	 fn(pname1,params1);
}
typedef void (*PFNGLGETSYNCIVAPPLEPROC_HPP)(GLsync,GLenum,GLsizei,GLsizei *,GLint *);
static inline void GetSyncivAPPLE(GLsync sync1,GLenum pname1,GLsizei bufSize1,GLsizei * length1,GLint * values1)
{
	static PFNGLGETSYNCIVAPPLEPROC_HPP fn=reinterpret_cast<PFNGLGETSYNCIVAPPLEPROC_HPP>(_impl::_get_proc_address("glGetSyncivAPPLE","GL_APPLE_sync"));
	 fn(sync1,pname1,bufSize1,length1,values1);
}
typedef GLboolean (*PFNGLISSYNCAPPLEPROC_HPP)(GLsync);
static inline GLboolean IsSyncAPPLE(GLsync sync1)
{
	static PFNGLISSYNCAPPLEPROC_HPP fn=reinterpret_cast<PFNGLISSYNCAPPLEPROC_HPP>(_impl::_get_proc_address("glIsSyncAPPLE","GL_APPLE_sync"));
	return fn(sync1);
}
typedef void (*PFNGLWAITSYNCAPPLEPROC_HPP)(GLsync,GLbitfield,GLuint64);
static inline void WaitSyncAPPLE(GLsync sync1,GLbitfield flags1,GLuint64 timeout1)
{
	static PFNGLWAITSYNCAPPLEPROC_HPP fn=reinterpret_cast<PFNGLWAITSYNCAPPLEPROC_HPP>(_impl::_get_proc_address("glWaitSyncAPPLE","GL_APPLE_sync"));
	 fn(sync1,flags1,timeout1);
}}
#endif

#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT 0x80E1
#endif //GL_BGRA_EXT
#ifndef GL_BGRA8_EXT
#define GL_BGRA8_EXT 0x93A1
#endif //GL_BGRA8_EXT
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level
#ifndef GL_TEXTURE_MAX_LEVEL_APPLE
#define GL_TEXTURE_MAX_LEVEL_APPLE 0x813D
#endif //GL_TEXTURE_MAX_LEVEL_APPLE
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ARM_mali_program_binary
#define GL_ARM_mali_program_binary
#ifndef GL_MALI_PROGRAM_BINARY_ARM
#define GL_MALI_PROGRAM_BINARY_ARM 0x8F61
#endif //GL_MALI_PROGRAM_BINARY_ARM
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ARM_mali_shader_binary
#define GL_ARM_mali_shader_binary
#ifndef GL_MALI_SHADER_BINARY_ARM
#define GL_MALI_SHADER_BINARY_ARM 0x8F60
#endif //GL_MALI_SHADER_BINARY_ARM
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ARM_shader_framebuffer_fetch
#define GL_ARM_shader_framebuffer_fetch
#ifndef GL_FETCH_PER_SAMPLE_ARM
#define GL_FETCH_PER_SAMPLE_ARM 0x8F65
#endif //GL_FETCH_PER_SAMPLE_ARM
#ifndef GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66
#endif //GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_ARM_shader_framebuffer_fetch_depth_stencil
#define GL_ARM_shader_framebuffer_fetch_depth_stencil
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_DMP_shader_binary
#define GL_DMP_shader_binary
#ifndef GL_SHADER_BINARY_DMP
#define GL_SHADER_BINARY_DMP 0x9250
#endif //GL_SHADER_BINARY_DMP
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDEQUATIONEXTPROC_HPP)(GLenum);
static inline void BlendEquationEXT(GLenum mode1)
{
	static PFNGLBLENDEQUATIONEXTPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONEXTPROC_HPP>(_impl::_get_proc_address("glBlendEquationEXT","GL_EXT_blend_minmax"));
	 fn(mode1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_copy_image
#define GL_EXT_copy_image
extern "C" {
}
namespace gl{

typedef void (*PFNGLCOPYIMAGESUBDATAEXTPROC_HPP)(GLuint,GLenum,GLint,GLint,GLint,GLint,GLuint,GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei);
static inline void CopyImageSubDataEXT(GLuint srcName1,GLenum srcTarget1,GLint srcLevel1,GLint srcX1,GLint srcY1,GLint srcZ1,GLuint dstName1,GLenum dstTarget1,GLint dstLevel1,GLint dstX1,GLint dstY1,GLint dstZ1,GLsizei srcWidth1,GLsizei srcHeight1,GLsizei srcDepth1)
{
	static PFNGLCOPYIMAGESUBDATAEXTPROC_HPP fn=reinterpret_cast<PFNGLCOPYIMAGESUBDATAEXTPROC_HPP>(_impl::_get_proc_address("glCopyImageSubDataEXT","GL_EXT_copy_image"));
	 fn(srcName1,srcTarget1,srcLevel1,srcX1,srcY1,srcZ1,dstName1,dstTarget1,dstLevel1,dstX1,dstY1,dstZ1,srcWidth1,srcHeight1,srcDepth1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETOBJECTLABELEXTPROC_HPP)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetObjectLabelEXT(GLenum type1,GLuint object1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
	static PFNGLGETOBJECTLABELEXTPROC_HPP fn=reinterpret_cast<PFNGLGETOBJECTLABELEXTPROC_HPP>(_impl::_get_proc_address("glGetObjectLabelEXT","GL_EXT_debug_label"));
	 fn(type1,object1,bufSize1,length1,label1);
}
typedef void (*PFNGLLABELOBJECTEXTPROC_HPP)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void LabelObjectEXT(GLenum type1,GLuint object1,GLsizei length1,const GLchar * label1)
{
	static PFNGLLABELOBJECTEXTPROC_HPP fn=reinterpret_cast<PFNGLLABELOBJECTEXTPROC_HPP>(_impl::_get_proc_address("glLabelObjectEXT","GL_EXT_debug_label"));
	 fn(type1,object1,length1,label1);
}}
#endif

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker
extern "C" {
}
namespace gl{

typedef void (*PFNGLINSERTEVENTMARKEREXTPROC_HPP)(GLsizei,const GLchar *);
static inline void InsertEventMarkerEXT(GLsizei length1,const GLchar * marker1)
{
	static PFNGLINSERTEVENTMARKEREXTPROC_HPP fn=reinterpret_cast<PFNGLINSERTEVENTMARKEREXTPROC_HPP>(_impl::_get_proc_address("glInsertEventMarkerEXT","GL_EXT_debug_marker"));
	 fn(length1,marker1);
}
typedef void (*PFNGLPOPGROUPMARKEREXTPROC_HPP)();
static inline void PopGroupMarkerEXT()
{
	static PFNGLPOPGROUPMARKEREXTPROC_HPP fn=reinterpret_cast<PFNGLPOPGROUPMARKEREXTPROC_HPP>(_impl::_get_proc_address("glPopGroupMarkerEXT","GL_EXT_debug_marker"));
	 fn();
}
typedef void (*PFNGLPUSHGROUPMARKEREXTPROC_HPP)(GLsizei,const GLchar *);
static inline void PushGroupMarkerEXT(GLsizei length1,const GLchar * marker1)
{
	static PFNGLPUSHGROUPMARKEREXTPROC_HPP fn=reinterpret_cast<PFNGLPUSHGROUPMARKEREXTPROC_HPP>(_impl::_get_proc_address("glPushGroupMarkerEXT","GL_EXT_debug_marker"));
	 fn(length1,marker1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLDISCARDFRAMEBUFFEREXTPROC_HPP)(GLenum,GLsizei,const GLenum *);
static inline void DiscardFramebufferEXT(GLenum target1,GLsizei numAttachments1,const GLenum * attachments1)
{
	static PFNGLDISCARDFRAMEBUFFEREXTPROC_HPP fn=reinterpret_cast<PFNGLDISCARDFRAMEBUFFEREXTPROC_HPP>(_impl::_get_proc_address("glDiscardFramebufferEXT","GL_EXT_discard_framebuffer"));
	 fn(target1,numAttachments1,attachments1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBEGINQUERYEXTPROC_HPP)(GLenum,GLuint);
static inline void BeginQueryEXT(GLenum target1,GLuint id1)
{
	static PFNGLBEGINQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLBEGINQUERYEXTPROC_HPP>(_impl::_get_proc_address("glBeginQueryEXT","GL_EXT_disjoint_timer_query"));
	 fn(target1,id1);
}
typedef void (*PFNGLDELETEQUERIESEXTPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteQueriesEXT(GLsizei n1,const GLuint * ids1)
{
	static PFNGLDELETEQUERIESEXTPROC_HPP fn=reinterpret_cast<PFNGLDELETEQUERIESEXTPROC_HPP>(_impl::_get_proc_address("glDeleteQueriesEXT","GL_EXT_disjoint_timer_query"));
	 fn(n1,ids1);
}
typedef void (*PFNGLENDQUERYEXTPROC_HPP)(GLenum);
static inline void EndQueryEXT(GLenum target1)
{
	static PFNGLENDQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLENDQUERYEXTPROC_HPP>(_impl::_get_proc_address("glEndQueryEXT","GL_EXT_disjoint_timer_query"));
	 fn(target1);
}
typedef void (*PFNGLGENQUERIESEXTPROC_HPP)(GLsizei,GLuint *);
static inline void GenQueriesEXT(GLsizei n1,GLuint * ids1)
{
	static PFNGLGENQUERIESEXTPROC_HPP fn=reinterpret_cast<PFNGLGENQUERIESEXTPROC_HPP>(_impl::_get_proc_address("glGenQueriesEXT","GL_EXT_disjoint_timer_query"));
	 fn(n1,ids1);
}
typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC_HPP)(GLuint,GLenum,GLint64 *);
static inline void GetQueryObjecti64vEXT(GLuint id1,GLenum pname1,GLint64 * params1)
{
	static PFNGLGETQUERYOBJECTI64VEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTI64VEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryObjecti64vEXT","GL_EXT_disjoint_timer_query"));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYOBJECTIVEXTPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetQueryObjectivEXT(GLuint id1,GLenum pname1,GLint * params1)
{
	static PFNGLGETQUERYOBJECTIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTIVEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectivEXT","GL_EXT_disjoint_timer_query"));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC_HPP)(GLuint,GLenum,GLuint64 *);
static inline void GetQueryObjectui64vEXT(GLuint id1,GLenum pname1,GLuint64 * params1)
{
	static PFNGLGETQUERYOBJECTUI64VEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTUI64VEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectui64vEXT","GL_EXT_disjoint_timer_query"));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYOBJECTUIVEXTPROC_HPP)(GLuint,GLenum,GLuint *);
static inline void GetQueryObjectuivEXT(GLuint id1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETQUERYOBJECTUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTUIVEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectuivEXT","GL_EXT_disjoint_timer_query"));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYIVEXTPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetQueryivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETQUERYIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYIVEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryivEXT","GL_EXT_disjoint_timer_query"));
	 fn(target1,pname1,params1);
}
typedef GLboolean (*PFNGLISQUERYEXTPROC_HPP)(GLuint);
static inline GLboolean IsQueryEXT(GLuint id1)
{
	static PFNGLISQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLISQUERYEXTPROC_HPP>(_impl::_get_proc_address("glIsQueryEXT","GL_EXT_disjoint_timer_query"));
	return fn(id1);
}
typedef void (*PFNGLQUERYCOUNTEREXTPROC_HPP)(GLuint,GLenum);
static inline void QueryCounterEXT(GLuint id1,GLenum target1)
{
	static PFNGLQUERYCOUNTEREXTPROC_HPP fn=reinterpret_cast<PFNGLQUERYCOUNTEREXTPROC_HPP>(_impl::_get_proc_address("glQueryCounterEXT","GL_EXT_disjoint_timer_query"));
	 fn(id1,target1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWBUFFERSEXTPROC_HPP)(GLsizei,const GLenum *);
static inline void DrawBuffersEXT(GLsizei n1,const GLenum * bufs1)
{
	static PFNGLDRAWBUFFERSEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWBUFFERSEXTPROC_HPP>(_impl::_get_proc_address("glDrawBuffersEXT","GL_EXT_draw_buffers"));
	 fn(n1,bufs1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDEQUATIONSEPARATEIEXTPROC_HPP)(GLuint,GLenum,GLenum);
static inline void BlendEquationSeparateiEXT(GLuint buf1,GLenum modeRGB1,GLenum modeAlpha1)
{
	static PFNGLBLENDEQUATIONSEPARATEIEXTPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIEXTPROC_HPP>(_impl::_get_proc_address("glBlendEquationSeparateiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(buf1,modeRGB1,modeAlpha1);
}
typedef void (*PFNGLBLENDEQUATIONIEXTPROC_HPP)(GLuint,GLenum);
static inline void BlendEquationiEXT(GLuint buf1,GLenum mode1)
{
	static PFNGLBLENDEQUATIONIEXTPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONIEXTPROC_HPP>(_impl::_get_proc_address("glBlendEquationiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(buf1,mode1);
}
typedef void (*PFNGLBLENDFUNCSEPARATEIEXTPROC_HPP)(GLuint,GLenum,GLenum,GLenum,GLenum);
static inline void BlendFuncSeparateiEXT(GLuint buf1,GLenum srcRGB1,GLenum dstRGB1,GLenum srcAlpha1,GLenum dstAlpha1)
{
	static PFNGLBLENDFUNCSEPARATEIEXTPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCSEPARATEIEXTPROC_HPP>(_impl::_get_proc_address("glBlendFuncSeparateiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(buf1,srcRGB1,dstRGB1,srcAlpha1,dstAlpha1);
}
typedef void (*PFNGLBLENDFUNCIEXTPROC_HPP)(GLuint,GLenum,GLenum);
static inline void BlendFunciEXT(GLuint buf1,GLenum src1,GLenum dst1)
{
	static PFNGLBLENDFUNCIEXTPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCIEXTPROC_HPP>(_impl::_get_proc_address("glBlendFunciEXT","GL_EXT_draw_buffers_indexed"));
	 fn(buf1,src1,dst1);
}
typedef void (*PFNGLCOLORMASKIEXTPROC_HPP)(GLuint,GLboolean,GLboolean,GLboolean,GLboolean);
static inline void ColorMaskiEXT(GLuint index1,GLboolean r1,GLboolean g1,GLboolean b1,GLboolean a1)
{
	static PFNGLCOLORMASKIEXTPROC_HPP fn=reinterpret_cast<PFNGLCOLORMASKIEXTPROC_HPP>(_impl::_get_proc_address("glColorMaskiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(index1,r1,g1,b1,a1);
}
typedef void (*PFNGLDISABLEIEXTPROC_HPP)(GLenum,GLuint);
static inline void DisableiEXT(GLenum target1,GLuint index1)
{
	static PFNGLDISABLEIEXTPROC_HPP fn=reinterpret_cast<PFNGLDISABLEIEXTPROC_HPP>(_impl::_get_proc_address("glDisableiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(target1,index1);
}
typedef void (*PFNGLENABLEIEXTPROC_HPP)(GLenum,GLuint);
static inline void EnableiEXT(GLenum target1,GLuint index1)
{
	static PFNGLENABLEIEXTPROC_HPP fn=reinterpret_cast<PFNGLENABLEIEXTPROC_HPP>(_impl::_get_proc_address("glEnableiEXT","GL_EXT_draw_buffers_indexed"));
	 fn(target1,index1);
}
typedef GLboolean (*PFNGLISENABLEDIEXTPROC_HPP)(GLenum,GLuint);
static inline GLboolean IsEnablediEXT(GLenum target1,GLuint index1)
{
	static PFNGLISENABLEDIEXTPROC_HPP fn=reinterpret_cast<PFNGLISENABLEDIEXTPROC_HPP>(_impl::_get_proc_address("glIsEnablediEXT","GL_EXT_draw_buffers_indexed"));
	return fn(target1,index1);
}}
#endif

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP)(GLenum,GLint,GLsizei,GLsizei);
static inline void DrawArraysInstancedEXT(GLenum mode1,GLint start1,GLsizei count1,GLsizei primcount1)
{
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP>(_impl::_get_proc_address("glDrawArraysInstancedEXT","GL_EXT_draw_instanced"));
	 fn(mode1,start1,count1,primcount1);
}
typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void DrawElementsInstancedEXT(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP>(_impl::_get_proc_address("glDrawElementsInstancedEXT","GL_EXT_draw_instanced"));
	 fn(mode1,count1,type1,indices1,primcount1);
}}
#endif

#ifndef GL_EXT_geometry_point_size
#define GL_EXT_geometry_point_size
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC_HPP)(GLenum,GLenum,GLuint,GLint);
static inline void FramebufferTextureEXT(GLenum target1,GLenum attachment1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTUREEXTPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREEXTPROC_HPP>(_impl::_get_proc_address("glFramebufferTextureEXT","GL_EXT_geometry_shader"));
	 fn(target1,attachment1,texture1,level1);
}}
#endif

#ifndef GL_EXT_gpu_shader5
#define GL_EXT_gpu_shader5
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_instanced_arrays
#define GL_EXT_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP)(GLenum,GLint,GLsizei,GLsizei);
static inline void DrawArraysInstancedEXT(GLenum mode1,GLint start1,GLsizei count1,GLsizei primcount1)
{
	static PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC_HPP>(_impl::_get_proc_address("glDrawArraysInstancedEXT","GL_EXT_instanced_arrays"));
	 fn(mode1,start1,count1,primcount1);
}
typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void DrawElementsInstancedEXT(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
	static PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC_HPP>(_impl::_get_proc_address("glDrawElementsInstancedEXT","GL_EXT_instanced_arrays"));
	 fn(mode1,count1,type1,indices1,primcount1);
}
typedef void (*PFNGLVERTEXATTRIBDIVISOREXTPROC_HPP)(GLuint,GLuint);
static inline void VertexAttribDivisorEXT(GLuint index1,GLuint divisor1)
{
	static PFNGLVERTEXATTRIBDIVISOREXTPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBDIVISOREXTPROC_HPP>(_impl::_get_proc_address("glVertexAttribDivisorEXT","GL_EXT_instanced_arrays"));
	 fn(index1,divisor1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_HPP)(GLenum,GLintptr,GLsizeiptr);
static inline void FlushMappedBufferRangeEXT(GLenum target1,GLintptr offset1,GLsizeiptr length1)
{
	static PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_HPP fn=reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_HPP>(_impl::_get_proc_address("glFlushMappedBufferRangeEXT","GL_EXT_map_buffer_range"));
	 fn(target1,offset1,length1);
}
typedef void * (*PFNGLMAPBUFFERRANGEEXTPROC_HPP)(GLenum,GLintptr,GLsizeiptr,GLbitfield);
static inline void * MapBufferRangeEXT(GLenum target1,GLintptr offset1,GLsizeiptr length1,GLbitfield access1)
{
	static PFNGLMAPBUFFERRANGEEXTPROC_HPP fn=reinterpret_cast<PFNGLMAPBUFFERRANGEEXTPROC_HPP>(_impl::_get_proc_address("glMapBufferRangeEXT","GL_EXT_map_buffer_range"));
	return fn(target1,offset1,length1,access1);
}}
#endif

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays
extern "C" {
}
namespace gl{

typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC_HPP)(GLenum,const GLint *,const GLsizei *,GLsizei);
static inline void MultiDrawArraysEXT(GLenum mode1,const GLint * first1,const GLsizei * count1,GLsizei primcount1)
{
	static PFNGLMULTIDRAWARRAYSEXTPROC_HPP fn=reinterpret_cast<PFNGLMULTIDRAWARRAYSEXTPROC_HPP>(_impl::_get_proc_address("glMultiDrawArraysEXT","GL_EXT_multi_draw_arrays"));
	 fn(mode1,first1,count1,primcount1);
}
typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC_HPP)(GLenum,const GLsizei *,GLenum,const void *const*,GLsizei);
static inline void MultiDrawElementsEXT(GLenum mode1,const GLsizei * count1,GLenum type1,const void *const* indices1,GLsizei primcount1)
{
	static PFNGLMULTIDRAWELEMENTSEXTPROC_HPP fn=reinterpret_cast<PFNGLMULTIDRAWELEMENTSEXTPROC_HPP>(_impl::_get_proc_address("glMultiDrawElementsEXT","GL_EXT_multi_draw_arrays"));
	 fn(mode1,count1,type1,indices1,primcount1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint,GLsizei);
static inline void FramebufferTexture2DMultisampleEXT(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLsizei samples1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture2DMultisampleEXT","GL_EXT_multisampled_render_to_texture"));
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisampleEXT(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisampleEXT","GL_EXT_multisampled_render_to_texture"));
	 fn(target1,samples1,internalformat1,width1,height1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWBUFFERSINDEXEDEXTPROC_HPP)(GLint,const GLenum *,const GLint *);
static inline void DrawBuffersIndexedEXT(GLint n1,const GLenum * location1,const GLint * indices1)
{
	static PFNGLDRAWBUFFERSINDEXEDEXTPROC_HPP fn=reinterpret_cast<PFNGLDRAWBUFFERSINDEXEDEXTPROC_HPP>(_impl::_get_proc_address("glDrawBuffersIndexedEXT","GL_EXT_multiview_draw_buffers"));
	 fn(n1,location1,indices1);
}
typedef void (*PFNGLGETINTEGERI_VEXTPROC_HPP)(GLenum,GLuint,GLint *);
static inline void GetIntegeri_vEXT(GLenum target1,GLuint index1,GLint * data1)
{
	static PFNGLGETINTEGERI_VEXTPROC_HPP fn=reinterpret_cast<PFNGLGETINTEGERI_VEXTPROC_HPP>(_impl::_get_proc_address("glGetIntegeri_vEXT","GL_EXT_multiview_draw_buffers"));
	 fn(target1,index1,data1);
}
typedef void (*PFNGLREADBUFFERINDEXEDEXTPROC_HPP)(GLenum,GLint);
static inline void ReadBufferIndexedEXT(GLenum src1,GLint index1)
{
	static PFNGLREADBUFFERINDEXEDEXTPROC_HPP fn=reinterpret_cast<PFNGLREADBUFFERINDEXEDEXTPROC_HPP>(_impl::_get_proc_address("glReadBufferIndexedEXT","GL_EXT_multiview_draw_buffers"));
	 fn(src1,index1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBEGINQUERYEXTPROC_HPP)(GLenum,GLuint);
static inline void BeginQueryEXT(GLenum target1,GLuint id1)
{
	static PFNGLBEGINQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLBEGINQUERYEXTPROC_HPP>(_impl::_get_proc_address("glBeginQueryEXT","GL_EXT_occlusion_query_boolean"));
	 fn(target1,id1);
}
typedef void (*PFNGLDELETEQUERIESEXTPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteQueriesEXT(GLsizei n1,const GLuint * ids1)
{
	static PFNGLDELETEQUERIESEXTPROC_HPP fn=reinterpret_cast<PFNGLDELETEQUERIESEXTPROC_HPP>(_impl::_get_proc_address("glDeleteQueriesEXT","GL_EXT_occlusion_query_boolean"));
	 fn(n1,ids1);
}
typedef void (*PFNGLENDQUERYEXTPROC_HPP)(GLenum);
static inline void EndQueryEXT(GLenum target1)
{
	static PFNGLENDQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLENDQUERYEXTPROC_HPP>(_impl::_get_proc_address("glEndQueryEXT","GL_EXT_occlusion_query_boolean"));
	 fn(target1);
}
typedef void (*PFNGLGENQUERIESEXTPROC_HPP)(GLsizei,GLuint *);
static inline void GenQueriesEXT(GLsizei n1,GLuint * ids1)
{
	static PFNGLGENQUERIESEXTPROC_HPP fn=reinterpret_cast<PFNGLGENQUERIESEXTPROC_HPP>(_impl::_get_proc_address("glGenQueriesEXT","GL_EXT_occlusion_query_boolean"));
	 fn(n1,ids1);
}
typedef void (*PFNGLGETQUERYOBJECTUIVEXTPROC_HPP)(GLuint,GLenum,GLuint *);
static inline void GetQueryObjectuivEXT(GLuint id1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETQUERYOBJECTUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTUIVEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectuivEXT","GL_EXT_occlusion_query_boolean"));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYIVEXTPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetQueryivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETQUERYIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYIVEXTPROC_HPP>(_impl::_get_proc_address("glGetQueryivEXT","GL_EXT_occlusion_query_boolean"));
	 fn(target1,pname1,params1);
}
typedef GLboolean (*PFNGLISQUERYEXTPROC_HPP)(GLuint);
static inline GLboolean IsQueryEXT(GLuint id1)
{
	static PFNGLISQUERYEXTPROC_HPP fn=reinterpret_cast<PFNGLISQUERYEXTPROC_HPP>(_impl::_get_proc_address("glIsQueryEXT","GL_EXT_occlusion_query_boolean"));
	return fn(id1);
}}
#endif

#ifndef GL_EXT_primitive_bounding_box
#define GL_EXT_primitive_bounding_box
#ifndef GL_PRIMITIVE_BOUNDING_BOX_EXT
#define GL_PRIMITIVE_BOUNDING_BOX_EXT 0x92BE
#endif //GL_PRIMITIVE_BOUNDING_BOX_EXT
extern "C" {
}
namespace gl{

typedef void (*PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void PrimitiveBoundingBoxEXT(GLfloat minX1,GLfloat minY1,GLfloat minZ1,GLfloat minW1,GLfloat maxX1,GLfloat maxY1,GLfloat maxZ1,GLfloat maxW1)
{
	static PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_HPP fn=reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXEXTPROC_HPP>(_impl::_get_proc_address("glPrimitiveBoundingBoxEXT","GL_EXT_primitive_bounding_box"));
	 fn(minX1,minY1,minZ1,minW1,maxX1,maxY1,maxZ1,maxW1);
}}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSEXTPROC_HPP)();
static inline GLenum GetGraphicsResetStatusEXT()
{
	static PFNGLGETGRAPHICSRESETSTATUSEXTPROC_HPP fn=reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSEXTPROC_HPP>(_impl::_get_proc_address("glGetGraphicsResetStatusEXT","GL_EXT_robustness"));
	return fn();
}
typedef void (*PFNGLGETNUNIFORMFVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLfloat *);
static inline void GetnUniformfvEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
	static PFNGLGETNUNIFORMFVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMFVEXTPROC_HPP>(_impl::_get_proc_address("glGetnUniformfvEXT","GL_EXT_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMIVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLint *);
static inline void GetnUniformivEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
	static PFNGLGETNUNIFORMIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMIVEXTPROC_HPP>(_impl::_get_proc_address("glGetnUniformivEXT","GL_EXT_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLREADNPIXELSEXTPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void ReadnPixelsEXT(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
	static PFNGLREADNPIXELSEXTPROC_HPP fn=reinterpret_cast<PFNGLREADNPIXELSEXTPROC_HPP>(_impl::_get_proc_address("glReadnPixelsEXT","GL_EXT_robustness"));
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_sRGB_write_control
#define GL_EXT_sRGB_write_control
#ifndef GL_FRAMEBUFFER_SRGB_EXT
#define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9
#endif //GL_FRAMEBUFFER_SRGB_EXT
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLACTIVEPROGRAMEXTPROC_HPP)(GLuint);
static inline void ActiveProgramEXT(GLuint program1)
{
	static PFNGLACTIVEPROGRAMEXTPROC_HPP fn=reinterpret_cast<PFNGLACTIVEPROGRAMEXTPROC_HPP>(_impl::_get_proc_address("glActiveProgramEXT","GL_EXT_separate_shader_objects"));
	 fn(program1);
}
typedef void (*PFNGLACTIVESHADERPROGRAMEXTPROC_HPP)(GLuint,GLuint);
static inline void ActiveShaderProgramEXT(GLuint pipeline1,GLuint program1)
{
	static PFNGLACTIVESHADERPROGRAMEXTPROC_HPP fn=reinterpret_cast<PFNGLACTIVESHADERPROGRAMEXTPROC_HPP>(_impl::_get_proc_address("glActiveShaderProgramEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1,program1);
}
typedef void (*PFNGLBINDPROGRAMPIPELINEEXTPROC_HPP)(GLuint);
static inline void BindProgramPipelineEXT(GLuint pipeline1)
{
	static PFNGLBINDPROGRAMPIPELINEEXTPROC_HPP fn=reinterpret_cast<PFNGLBINDPROGRAMPIPELINEEXTPROC_HPP>(_impl::_get_proc_address("glBindProgramPipelineEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1);
}
typedef GLuint (*PFNGLCREATESHADERPROGRAMEXTPROC_HPP)(GLenum,const GLchar *);
static inline GLuint CreateShaderProgramEXT(GLenum type1,const GLchar * string1)
{
	static PFNGLCREATESHADERPROGRAMEXTPROC_HPP fn=reinterpret_cast<PFNGLCREATESHADERPROGRAMEXTPROC_HPP>(_impl::_get_proc_address("glCreateShaderProgramEXT","GL_EXT_separate_shader_objects"));
	return fn(type1,string1);
}
typedef GLuint (*PFNGLCREATESHADERPROGRAMVEXTPROC_HPP)(GLenum,GLsizei,const GLchar **);
static inline GLuint CreateShaderProgramvEXT(GLenum type1,GLsizei count1,const GLchar ** strings1)
{
	static PFNGLCREATESHADERPROGRAMVEXTPROC_HPP fn=reinterpret_cast<PFNGLCREATESHADERPROGRAMVEXTPROC_HPP>(_impl::_get_proc_address("glCreateShaderProgramvEXT","GL_EXT_separate_shader_objects"));
	return fn(type1,count1,strings1);
}
typedef void (*PFNGLDELETEPROGRAMPIPELINESEXTPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteProgramPipelinesEXT(GLsizei n1,const GLuint * pipelines1)
{
	static PFNGLDELETEPROGRAMPIPELINESEXTPROC_HPP fn=reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESEXTPROC_HPP>(_impl::_get_proc_address("glDeleteProgramPipelinesEXT","GL_EXT_separate_shader_objects"));
	 fn(n1,pipelines1);
}
typedef void (*PFNGLGENPROGRAMPIPELINESEXTPROC_HPP)(GLsizei,GLuint *);
static inline void GenProgramPipelinesEXT(GLsizei n1,GLuint * pipelines1)
{
	static PFNGLGENPROGRAMPIPELINESEXTPROC_HPP fn=reinterpret_cast<PFNGLGENPROGRAMPIPELINESEXTPROC_HPP>(_impl::_get_proc_address("glGenProgramPipelinesEXT","GL_EXT_separate_shader_objects"));
	 fn(n1,pipelines1);
}
typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetProgramPipelineInfoLogEXT(GLuint pipeline1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	static PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC_HPP>(_impl::_get_proc_address("glGetProgramPipelineInfoLogEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1,bufSize1,length1,infoLog1);
}
typedef void (*PFNGLGETPROGRAMPIPELINEIVEXTPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetProgramPipelineivEXT(GLuint pipeline1,GLenum pname1,GLint * params1)
{
	static PFNGLGETPROGRAMPIPELINEIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVEXTPROC_HPP>(_impl::_get_proc_address("glGetProgramPipelineivEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1,pname1,params1);
}
typedef GLboolean (*PFNGLISPROGRAMPIPELINEEXTPROC_HPP)(GLuint);
static inline GLboolean IsProgramPipelineEXT(GLuint pipeline1)
{
	static PFNGLISPROGRAMPIPELINEEXTPROC_HPP fn=reinterpret_cast<PFNGLISPROGRAMPIPELINEEXTPROC_HPP>(_impl::_get_proc_address("glIsProgramPipelineEXT","GL_EXT_separate_shader_objects"));
	return fn(pipeline1);
}
typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC_HPP)(GLuint,GLenum,GLint);
static inline void ProgramParameteriEXT(GLuint program1,GLenum pname1,GLint value1)
{
	static PFNGLPROGRAMPARAMETERIEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMPARAMETERIEXTPROC_HPP>(_impl::_get_proc_address("glProgramParameteriEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,pname1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM1FEXTPROC_HPP)(GLuint,GLint,GLfloat);
static inline void ProgramUniform1fEXT(GLuint program1,GLint location1,GLfloat v01)
{
	static PFNGLPROGRAMUNIFORM1FEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1FEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1fEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01);
}
typedef void (*PFNGLPROGRAMUNIFORM1FVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void ProgramUniform1fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORM1FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM1IEXTPROC_HPP)(GLuint,GLint,GLint);
static inline void ProgramUniform1iEXT(GLuint program1,GLint location1,GLint v01)
{
	static PFNGLPROGRAMUNIFORM1IEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1IEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1iEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01);
}
typedef void (*PFNGLPROGRAMUNIFORM1IVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLint *);
static inline void ProgramUniform1ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLPROGRAMUNIFORM1IVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1IVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1ivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM1UIEXTPROC_HPP)(GLuint,GLint,GLuint);
static inline void ProgramUniform1uiEXT(GLuint program1,GLint location1,GLuint v01)
{
	static PFNGLPROGRAMUNIFORM1UIEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1UIEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1uiEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01);
}
typedef void (*PFNGLPROGRAMUNIFORM1UIVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLuint *);
static inline void ProgramUniform1uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLPROGRAMUNIFORM1UIVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform1uivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM2FEXTPROC_HPP)(GLuint,GLint,GLfloat,GLfloat);
static inline void ProgramUniform2fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11)
{
	static PFNGLPROGRAMUNIFORM2FEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2FEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2fEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11);
}
typedef void (*PFNGLPROGRAMUNIFORM2FVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void ProgramUniform2fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORM2FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM2IEXTPROC_HPP)(GLuint,GLint,GLint,GLint);
static inline void ProgramUniform2iEXT(GLuint program1,GLint location1,GLint v01,GLint v11)
{
	static PFNGLPROGRAMUNIFORM2IEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2IEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2iEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11);
}
typedef void (*PFNGLPROGRAMUNIFORM2IVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLint *);
static inline void ProgramUniform2ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLPROGRAMUNIFORM2IVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2IVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2ivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM2UIEXTPROC_HPP)(GLuint,GLint,GLuint,GLuint);
static inline void ProgramUniform2uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11)
{
	static PFNGLPROGRAMUNIFORM2UIEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2UIEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2uiEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11);
}
typedef void (*PFNGLPROGRAMUNIFORM2UIVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLuint *);
static inline void ProgramUniform2uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLPROGRAMUNIFORM2UIVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform2uivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM3FEXTPROC_HPP)(GLuint,GLint,GLfloat,GLfloat,GLfloat);
static inline void ProgramUniform3fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11,GLfloat v21)
{
	static PFNGLPROGRAMUNIFORM3FEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3FEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3fEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21);
}
typedef void (*PFNGLPROGRAMUNIFORM3FVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void ProgramUniform3fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORM3FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM3IEXTPROC_HPP)(GLuint,GLint,GLint,GLint,GLint);
static inline void ProgramUniform3iEXT(GLuint program1,GLint location1,GLint v01,GLint v11,GLint v21)
{
	static PFNGLPROGRAMUNIFORM3IEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3IEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3iEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21);
}
typedef void (*PFNGLPROGRAMUNIFORM3IVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLint *);
static inline void ProgramUniform3ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLPROGRAMUNIFORM3IVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3IVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3ivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM3UIEXTPROC_HPP)(GLuint,GLint,GLuint,GLuint,GLuint);
static inline void ProgramUniform3uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11,GLuint v21)
{
	static PFNGLPROGRAMUNIFORM3UIEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3UIEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3uiEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21);
}
typedef void (*PFNGLPROGRAMUNIFORM3UIVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLuint *);
static inline void ProgramUniform3uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLPROGRAMUNIFORM3UIVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform3uivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM4FEXTPROC_HPP)(GLuint,GLint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void ProgramUniform4fEXT(GLuint program1,GLint location1,GLfloat v01,GLfloat v11,GLfloat v21,GLfloat v31)
{
	static PFNGLPROGRAMUNIFORM4FEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4FEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4fEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21,v31);
}
typedef void (*PFNGLPROGRAMUNIFORM4FVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLfloat *);
static inline void ProgramUniform4fvEXT(GLuint program1,GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORM4FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM4IEXTPROC_HPP)(GLuint,GLint,GLint,GLint,GLint,GLint);
static inline void ProgramUniform4iEXT(GLuint program1,GLint location1,GLint v01,GLint v11,GLint v21,GLint v31)
{
	static PFNGLPROGRAMUNIFORM4IEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4IEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4iEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21,v31);
}
typedef void (*PFNGLPROGRAMUNIFORM4IVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLint *);
static inline void ProgramUniform4ivEXT(GLuint program1,GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLPROGRAMUNIFORM4IVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4IVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4ivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORM4UIEXTPROC_HPP)(GLuint,GLint,GLuint,GLuint,GLuint,GLuint);
static inline void ProgramUniform4uiEXT(GLuint program1,GLint location1,GLuint v01,GLuint v11,GLuint v21,GLuint v31)
{
	static PFNGLPROGRAMUNIFORM4UIEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4UIEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4uiEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,v01,v11,v21,v31);
}
typedef void (*PFNGLPROGRAMUNIFORM4UIVEXTPROC_HPP)(GLuint,GLint,GLsizei,const GLuint *);
static inline void ProgramUniform4uivEXT(GLuint program1,GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLPROGRAMUNIFORM4UIVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniform4uivEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix2fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix2x3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix2x3fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix2x4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix2x4fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix3fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix3x2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix3x2fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix3x4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix3x4fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix4fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix4fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix4x2fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix4x2fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_HPP)(GLuint,GLint,GLsizei,GLboolean,const GLfloat *);
static inline void ProgramUniformMatrix4x3fvEXT(GLuint program1,GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC_HPP>(_impl::_get_proc_address("glProgramUniformMatrix4x3fvEXT","GL_EXT_separate_shader_objects"));
	 fn(program1,location1,count1,transpose1,value1);
}
typedef void (*PFNGLUSEPROGRAMSTAGESEXTPROC_HPP)(GLuint,GLbitfield,GLuint);
static inline void UseProgramStagesEXT(GLuint pipeline1,GLbitfield stages1,GLuint program1)
{
	static PFNGLUSEPROGRAMSTAGESEXTPROC_HPP fn=reinterpret_cast<PFNGLUSEPROGRAMSTAGESEXTPROC_HPP>(_impl::_get_proc_address("glUseProgramStagesEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1,stages1,program1);
}
typedef void (*PFNGLUSESHADERPROGRAMEXTPROC_HPP)(GLenum,GLuint);
static inline void UseShaderProgramEXT(GLenum type1,GLuint program1)
{
	static PFNGLUSESHADERPROGRAMEXTPROC_HPP fn=reinterpret_cast<PFNGLUSESHADERPROGRAMEXTPROC_HPP>(_impl::_get_proc_address("glUseShaderProgramEXT","GL_EXT_separate_shader_objects"));
	 fn(type1,program1);
}
typedef void (*PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_HPP)(GLuint);
static inline void ValidateProgramPipelineEXT(GLuint pipeline1)
{
	static PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_HPP fn=reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEEXTPROC_HPP>(_impl::_get_proc_address("glValidateProgramPipelineEXT","GL_EXT_separate_shader_objects"));
	 fn(pipeline1);
}}
#endif

#ifndef GL_EXT_shader_framebuffer_fetch
#define GL_EXT_shader_framebuffer_fetch
#ifndef GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#endif //GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_shader_implicit_conversions
#define GL_EXT_shader_implicit_conversions
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_shader_io_blocks
#define GL_EXT_shader_io_blocks
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_shader_texture_lod
#define GL_EXT_shader_texture_lod
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_tessellation_point_size
#define GL_EXT_tessellation_point_size
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLPATCHPARAMETERIEXTPROC_HPP)(GLenum,GLint);
static inline void PatchParameteriEXT(GLenum pname1,GLint value1)
{
	static PFNGLPATCHPARAMETERIEXTPROC_HPP fn=reinterpret_cast<PFNGLPATCHPARAMETERIEXTPROC_HPP>(_impl::_get_proc_address("glPatchParameteriEXT","GL_EXT_tessellation_shader"));
	 fn(pname1,value1);
}}
#endif

#ifndef GL_EXT_texture_border_clamp
#define GL_EXT_texture_border_clamp
#ifndef GL_TEXTURE_BORDER_COLOR_EXT
#define GL_TEXTURE_BORDER_COLOR_EXT 0x1004
#endif //GL_TEXTURE_BORDER_COLOR_EXT
#ifndef GL_CLAMP_TO_BORDER_EXT
#define GL_CLAMP_TO_BORDER_EXT 0x812D
#endif //GL_CLAMP_TO_BORDER_EXT
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETSAMPLERPARAMETERIIVEXTPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetSamplerParameterIivEXT(GLuint sampler1,GLenum pname1,GLint * params1)
{
	static PFNGLGETSAMPLERPARAMETERIIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVEXTPROC_HPP>(_impl::_get_proc_address("glGetSamplerParameterIivEXT","GL_EXT_texture_border_clamp"));
	 fn(sampler1,pname1,params1);
}
typedef void (*PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_HPP)(GLuint,GLenum,GLuint *);
static inline void GetSamplerParameterIuivEXT(GLuint sampler1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVEXTPROC_HPP>(_impl::_get_proc_address("glGetSamplerParameterIuivEXT","GL_EXT_texture_border_clamp"));
	 fn(sampler1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexParameterIivEXT(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXPARAMETERIIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIIVEXTPROC_HPP>(_impl::_get_proc_address("glGetTexParameterIivEXT","GL_EXT_texture_border_clamp"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC_HPP)(GLenum,GLenum,GLuint *);
static inline void GetTexParameterIuivEXT(GLenum target1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETTEXPARAMETERIUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIUIVEXTPROC_HPP>(_impl::_get_proc_address("glGetTexParameterIuivEXT","GL_EXT_texture_border_clamp"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLSAMPLERPARAMETERIIVEXTPROC_HPP)(GLuint,GLenum,const GLint *);
static inline void SamplerParameterIivEXT(GLuint sampler1,GLenum pname1,const GLint * param1)
{
	static PFNGLSAMPLERPARAMETERIIVEXTPROC_HPP fn=reinterpret_cast<PFNGLSAMPLERPARAMETERIIVEXTPROC_HPP>(_impl::_get_proc_address("glSamplerParameterIivEXT","GL_EXT_texture_border_clamp"));
	 fn(sampler1,pname1,param1);
}
typedef void (*PFNGLSAMPLERPARAMETERIUIVEXTPROC_HPP)(GLuint,GLenum,const GLuint *);
static inline void SamplerParameterIuivEXT(GLuint sampler1,GLenum pname1,const GLuint * param1)
{
	static PFNGLSAMPLERPARAMETERIUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVEXTPROC_HPP>(_impl::_get_proc_address("glSamplerParameterIuivEXT","GL_EXT_texture_border_clamp"));
	 fn(sampler1,pname1,param1);
}
typedef void (*PFNGLTEXPARAMETERIIVEXTPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexParameterIivEXT(GLenum target1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXPARAMETERIIVEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIIVEXTPROC_HPP>(_impl::_get_proc_address("glTexParameterIivEXT","GL_EXT_texture_border_clamp"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC_HPP)(GLenum,GLenum,const GLuint *);
static inline void TexParameterIuivEXT(GLenum target1,GLenum pname1,const GLuint * params1)
{
	static PFNGLTEXPARAMETERIUIVEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIUIVEXTPROC_HPP>(_impl::_get_proc_address("glTexParameterIuivEXT","GL_EXT_texture_border_clamp"));
	 fn(target1,pname1,params1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLTEXBUFFEREXTPROC_HPP)(GLenum,GLenum,GLuint);
static inline void TexBufferEXT(GLenum target1,GLenum internalformat1,GLuint buffer1)
{
	static PFNGLTEXBUFFEREXTPROC_HPP fn=reinterpret_cast<PFNGLTEXBUFFEREXTPROC_HPP>(_impl::_get_proc_address("glTexBufferEXT","GL_EXT_texture_buffer"));
	 fn(target1,internalformat1,buffer1);
}
typedef void (*PFNGLTEXBUFFERRANGEEXTPROC_HPP)(GLenum,GLenum,GLuint,GLintptr,GLsizeiptr);
static inline void TexBufferRangeEXT(GLenum target1,GLenum internalformat1,GLuint buffer1,GLintptr offset1,GLsizeiptr size1)
{
	static PFNGLTEXBUFFERRANGEEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXBUFFERRANGEEXTPROC_HPP>(_impl::_get_proc_address("glTexBufferRangeEXT","GL_EXT_texture_buffer"));
	 fn(target1,internalformat1,buffer1,offset1,size1);
}}
#endif

#ifndef GL_EXT_texture_compression_dxt1
#define GL_EXT_texture_compression_dxt1
#ifndef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#endif //GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#endif //GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic
#ifndef GL_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#endif //GL_TEXTURE_MAX_ANISOTROPY_EXT
#ifndef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif //GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_format_BGRA8888
#define GL_EXT_texture_format_BGRA8888
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT 0x80E1
#endif //GL_BGRA_EXT
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLTEXSTORAGE1DEXTPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei);
static inline void TexStorage1DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1)
{
	static PFNGLTEXSTORAGE1DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXSTORAGE1DEXTPROC_HPP>(_impl::_get_proc_address("glTexStorage1DEXT","GL_EXT_texture_storage"));
	 fn(target1,levels1,internalformat1,width1);
}
typedef void (*PFNGLTEXSTORAGE2DEXTPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void TexStorage2DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLTEXSTORAGE2DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXSTORAGE2DEXTPROC_HPP>(_impl::_get_proc_address("glTexStorage2DEXT","GL_EXT_texture_storage"));
	 fn(target1,levels1,internalformat1,width1,height1);
}
typedef void (*PFNGLTEXSTORAGE3DEXTPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void TexStorage3DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
	static PFNGLTEXSTORAGE3DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXSTORAGE3DEXTPROC_HPP>(_impl::_get_proc_address("glTexStorage3DEXT","GL_EXT_texture_storage"));
	 fn(target1,levels1,internalformat1,width1,height1,depth1);
}
typedef void (*PFNGLTEXTURESTORAGE1DEXTPROC_HPP)(GLuint,GLenum,GLsizei,GLenum,GLsizei);
static inline void TextureStorage1DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1)
{
	static PFNGLTEXTURESTORAGE1DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXTURESTORAGE1DEXTPROC_HPP>(_impl::_get_proc_address("glTextureStorage1DEXT","GL_EXT_texture_storage"));
	 fn(texture1,target1,levels1,internalformat1,width1);
}
typedef void (*PFNGLTEXTURESTORAGE2DEXTPROC_HPP)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void TextureStorage2DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLTEXTURESTORAGE2DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXTURESTORAGE2DEXTPROC_HPP>(_impl::_get_proc_address("glTextureStorage2DEXT","GL_EXT_texture_storage"));
	 fn(texture1,target1,levels1,internalformat1,width1,height1);
}
typedef void (*PFNGLTEXTURESTORAGE3DEXTPROC_HPP)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void TextureStorage3DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
	static PFNGLTEXTURESTORAGE3DEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXTURESTORAGE3DEXTPROC_HPP>(_impl::_get_proc_address("glTextureStorage3DEXT","GL_EXT_texture_storage"));
	 fn(texture1,target1,levels1,internalformat1,width1,height1,depth1);
}}
#endif

#ifndef GL_EXT_texture_type_2_10_10_10_REV
#define GL_EXT_texture_type_2_10_10_10_REV
#ifndef GL_UNSIGNED_INT_2_10_10_10_REV_EXT
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368
#endif //GL_UNSIGNED_INT_2_10_10_10_REV_EXT
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLTEXTUREVIEWEXTPROC_HPP)(GLuint,GLenum,GLuint,GLenum,GLuint,GLuint,GLuint,GLuint);
static inline void TextureViewEXT(GLuint texture1,GLenum target1,GLuint origtexture1,GLenum internalformat1,GLuint minlevel1,GLuint numlevels1,GLuint minlayer1,GLuint numlayers1)
{
	static PFNGLTEXTUREVIEWEXTPROC_HPP fn=reinterpret_cast<PFNGLTEXTUREVIEWEXTPROC_HPP>(_impl::_get_proc_address("glTextureViewEXT","GL_EXT_texture_view"));
	 fn(texture1,target1,origtexture1,internalformat1,minlevel1,numlevels1,minlayer1,numlayers1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_FJ_shader_binary_GCCSO
#define GL_FJ_shader_binary_GCCSO
#ifndef GL_GCCSO_SHADER_BINARY_FJ
#define GL_GCCSO_SHADER_BINARY_FJ 0x9260
#endif //GL_GCCSO_SHADER_BINARY_FJ
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint,GLsizei);
static inline void FramebufferTexture2DMultisampleIMG(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLsizei samples1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture2DMultisampleIMG","GL_IMG_multisampled_render_to_texture"));
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisampleIMG(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisampleIMG","GL_IMG_multisampled_render_to_texture"));
	 fn(target1,samples1,internalformat1,width1,height1);
}}
#endif

#ifndef GL_IMG_program_binary
#define GL_IMG_program_binary
#ifndef GL_SGX_PROGRAM_BINARY_IMG
#define GL_SGX_PROGRAM_BINARY_IMG 0x9130
#endif //GL_SGX_PROGRAM_BINARY_IMG
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_read_format
#define GL_IMG_read_format
#ifndef GL_BGRA_IMG
#define GL_BGRA_IMG 0x80E1
#endif //GL_BGRA_IMG
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365
#endif //GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_shader_binary
#define GL_IMG_shader_binary
#ifndef GL_SGX_BINARY_IMG
#define GL_SGX_BINARY_IMG 0x8C0A
#endif //GL_SGX_BINARY_IMG
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_texture_compression_pvrtc2
#define GL_IMG_texture_compression_pvrtc2
#ifndef GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG 0x9137
#endif //GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG
#ifndef GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG 0x9138
#endif //GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBEGINPERFQUERYINTELPROC_HPP)(GLuint);
static inline void BeginPerfQueryINTEL(GLuint queryHandle1)
{
	static PFNGLBEGINPERFQUERYINTELPROC_HPP fn=reinterpret_cast<PFNGLBEGINPERFQUERYINTELPROC_HPP>(_impl::_get_proc_address("glBeginPerfQueryINTEL","GL_INTEL_performance_query"));
	 fn(queryHandle1);
}
typedef void (*PFNGLCREATEPERFQUERYINTELPROC_HPP)(GLuint,GLuint *);
static inline void CreatePerfQueryINTEL(GLuint queryId1,GLuint * queryHandle1)
{
	static PFNGLCREATEPERFQUERYINTELPROC_HPP fn=reinterpret_cast<PFNGLCREATEPERFQUERYINTELPROC_HPP>(_impl::_get_proc_address("glCreatePerfQueryINTEL","GL_INTEL_performance_query"));
	 fn(queryId1,queryHandle1);
}
typedef void (*PFNGLDELETEPERFQUERYINTELPROC_HPP)(GLuint);
static inline void DeletePerfQueryINTEL(GLuint queryHandle1)
{
	static PFNGLDELETEPERFQUERYINTELPROC_HPP fn=reinterpret_cast<PFNGLDELETEPERFQUERYINTELPROC_HPP>(_impl::_get_proc_address("glDeletePerfQueryINTEL","GL_INTEL_performance_query"));
	 fn(queryHandle1);
}
typedef void (*PFNGLENDPERFQUERYINTELPROC_HPP)(GLuint);
static inline void EndPerfQueryINTEL(GLuint queryHandle1)
{
	static PFNGLENDPERFQUERYINTELPROC_HPP fn=reinterpret_cast<PFNGLENDPERFQUERYINTELPROC_HPP>(_impl::_get_proc_address("glEndPerfQueryINTEL","GL_INTEL_performance_query"));
	 fn(queryHandle1);
}
typedef void (*PFNGLGETFIRSTPERFQUERYIDINTELPROC_HPP)(GLuint *);
static inline void GetFirstPerfQueryIdINTEL(GLuint * queryId1)
{
	static PFNGLGETFIRSTPERFQUERYIDINTELPROC_HPP fn=reinterpret_cast<PFNGLGETFIRSTPERFQUERYIDINTELPROC_HPP>(_impl::_get_proc_address("glGetFirstPerfQueryIdINTEL","GL_INTEL_performance_query"));
	 fn(queryId1);
}
typedef void (*PFNGLGETNEXTPERFQUERYIDINTELPROC_HPP)(GLuint,GLuint *);
static inline void GetNextPerfQueryIdINTEL(GLuint queryId1,GLuint * nextQueryId1)
{
	static PFNGLGETNEXTPERFQUERYIDINTELPROC_HPP fn=reinterpret_cast<PFNGLGETNEXTPERFQUERYIDINTELPROC_HPP>(_impl::_get_proc_address("glGetNextPerfQueryIdINTEL","GL_INTEL_performance_query"));
	 fn(queryId1,nextQueryId1);
}
typedef void (*PFNGLGETPERFCOUNTERINFOINTELPROC_HPP)(GLuint,GLuint,GLuint,GLchar *,GLuint,GLchar *,GLuint *,GLuint *,GLuint *,GLuint *,GLuint64 *);
static inline void GetPerfCounterInfoINTEL(GLuint queryId1,GLuint counterId1,GLuint counterNameLength1,GLchar * counterName1,GLuint counterDescLength1,GLchar * counterDesc1,GLuint * counterOffset1,GLuint * counterDataSize1,GLuint * counterTypeEnum1,GLuint * counterDataTypeEnum1,GLuint64 * rawCounterMaxValue1)
{
	static PFNGLGETPERFCOUNTERINFOINTELPROC_HPP fn=reinterpret_cast<PFNGLGETPERFCOUNTERINFOINTELPROC_HPP>(_impl::_get_proc_address("glGetPerfCounterInfoINTEL","GL_INTEL_performance_query"));
	 fn(queryId1,counterId1,counterNameLength1,counterName1,counterDescLength1,counterDesc1,counterOffset1,counterDataSize1,counterTypeEnum1,counterDataTypeEnum1,rawCounterMaxValue1);
}
typedef void (*PFNGLGETPERFQUERYDATAINTELPROC_HPP)(GLuint,GLuint,GLsizei,GLvoid *,GLuint *);
static inline void GetPerfQueryDataINTEL(GLuint queryHandle1,GLuint flags1,GLsizei dataSize1,GLvoid * data1,GLuint * bytesWritten1)
{
	static PFNGLGETPERFQUERYDATAINTELPROC_HPP fn=reinterpret_cast<PFNGLGETPERFQUERYDATAINTELPROC_HPP>(_impl::_get_proc_address("glGetPerfQueryDataINTEL","GL_INTEL_performance_query"));
	 fn(queryHandle1,flags1,dataSize1,data1,bytesWritten1);
}
typedef void (*PFNGLGETPERFQUERYIDBYNAMEINTELPROC_HPP)(GLchar *,GLuint *);
static inline void GetPerfQueryIdByNameINTEL(GLchar * queryName1,GLuint * queryId1)
{
	static PFNGLGETPERFQUERYIDBYNAMEINTELPROC_HPP fn=reinterpret_cast<PFNGLGETPERFQUERYIDBYNAMEINTELPROC_HPP>(_impl::_get_proc_address("glGetPerfQueryIdByNameINTEL","GL_INTEL_performance_query"));
	 fn(queryName1,queryId1);
}
typedef void (*PFNGLGETPERFQUERYINFOINTELPROC_HPP)(GLuint,GLuint,GLchar *,GLuint *,GLuint *,GLuint *,GLuint *);
static inline void GetPerfQueryInfoINTEL(GLuint queryId1,GLuint queryNameLength1,GLchar * queryName1,GLuint * dataSize1,GLuint * noCounters1,GLuint * noInstances1,GLuint * capsMask1)
{
	static PFNGLGETPERFQUERYINFOINTELPROC_HPP fn=reinterpret_cast<PFNGLGETPERFQUERYINFOINTELPROC_HPP>(_impl::_get_proc_address("glGetPerfQueryInfoINTEL","GL_INTEL_performance_query"));
	 fn(queryId1,queryNameLength1,queryName1,dataSize1,noCounters1,noInstances1,capsMask1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDBARRIERKHRPROC_HPP)();
static inline void BlendBarrierKHR()
{
	static PFNGLBLENDBARRIERKHRPROC_HPP fn=reinterpret_cast<PFNGLBLENDBARRIERKHRPROC_HPP>(_impl::_get_proc_address("glBlendBarrierKHR","GL_KHR_blend_equation_advanced"));
	 fn();
}}
#endif

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent
#ifndef GL_BLEND_ADVANCED_COHERENT_KHR
#define GL_BLEND_ADVANCED_COHERENT_KHR 0x9285
#endif //GL_BLEND_ADVANCED_COHERENT_KHR
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
#ifndef GL_VERTEX_ARRAY
#define GL_VERTEX_ARRAY 0x8074
#endif //GL_VERTEX_ARRAY
#ifndef GL_VERTEX_ARRAY_KHR
#define GL_VERTEX_ARRAY_KHR 0x8074
#endif //GL_VERTEX_ARRAY_KHR
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
#ifndef GL_DEBUG_CALLBACK_FUNCTION
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#endif //GL_DEBUG_CALLBACK_FUNCTION
#ifndef GL_DEBUG_CALLBACK_FUNCTION_KHR
#define GL_DEBUG_CALLBACK_FUNCTION_KHR 0x8244
#endif //GL_DEBUG_CALLBACK_FUNCTION_KHR
#ifndef GL_DEBUG_CALLBACK_USER_PARAM
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#endif //GL_DEBUG_CALLBACK_USER_PARAM
#ifndef GL_DEBUG_CALLBACK_USER_PARAM_KHR
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR 0x8245
#endif //GL_DEBUG_CALLBACK_USER_PARAM_KHR
#ifndef GL_DEBUG_SOURCE_API
#define GL_DEBUG_SOURCE_API 0x8246
#endif //GL_DEBUG_SOURCE_API
#ifndef GL_DEBUG_SOURCE_API_KHR
#define GL_DEBUG_SOURCE_API_KHR 0x8246
#endif //GL_DEBUG_SOURCE_API_KHR
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#endif //GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#endif //GL_DEBUG_SOURCE_WINDOW_SYSTEM
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#endif //GL_DEBUG_SOURCE_SHADER_COMPILER
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER_KHR
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#endif //GL_DEBUG_SOURCE_SHADER_COMPILER_KHR
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#endif //GL_DEBUG_SOURCE_THIRD_PARTY
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY_KHR
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR 0x8249
#endif //GL_DEBUG_SOURCE_THIRD_PARTY_KHR
#ifndef GL_DEBUG_SOURCE_APPLICATION
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#endif //GL_DEBUG_SOURCE_APPLICATION
#ifndef GL_DEBUG_SOURCE_APPLICATION_KHR
#define GL_DEBUG_SOURCE_APPLICATION_KHR 0x824A
#endif //GL_DEBUG_SOURCE_APPLICATION_KHR
#ifndef GL_DEBUG_SOURCE_OTHER
#define GL_DEBUG_SOURCE_OTHER 0x824B
#endif //GL_DEBUG_SOURCE_OTHER
#ifndef GL_DEBUG_SOURCE_OTHER_KHR
#define GL_DEBUG_SOURCE_OTHER_KHR 0x824B
#endif //GL_DEBUG_SOURCE_OTHER_KHR
#ifndef GL_DEBUG_TYPE_ERROR
#define GL_DEBUG_TYPE_ERROR 0x824C
#endif //GL_DEBUG_TYPE_ERROR
#ifndef GL_DEBUG_TYPE_ERROR_KHR
#define GL_DEBUG_TYPE_ERROR_KHR 0x824C
#endif //GL_DEBUG_TYPE_ERROR_KHR
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#endif //GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#endif //GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#endif //GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#endif //GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
#ifndef GL_DEBUG_TYPE_PORTABILITY_KHR
#define GL_DEBUG_TYPE_PORTABILITY_KHR 0x824F
#endif //GL_DEBUG_TYPE_PORTABILITY_KHR
#ifndef GL_DEBUG_TYPE_PORTABILITY
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#endif //GL_DEBUG_TYPE_PORTABILITY
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
#ifndef GL_DEBUG_TYPE_MARKER_KHR
#define GL_DEBUG_TYPE_MARKER_KHR 0x8268
#endif //GL_DEBUG_TYPE_MARKER_KHR
#ifndef GL_DEBUG_TYPE_MARKER
#define GL_DEBUG_TYPE_MARKER 0x8268
#endif //GL_DEBUG_TYPE_MARKER
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
#ifndef GL_DEBUG_SEVERITY_NOTIFICATION
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#endif //GL_DEBUG_SEVERITY_NOTIFICATION
#ifndef GL_DEBUG_SEVERITY_NOTIFICATION_KHR
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#endif //GL_DEBUG_SEVERITY_NOTIFICATION_KHR
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
#ifndef GL_BUFFER
#define GL_BUFFER 0x82E0
#endif //GL_BUFFER
#ifndef GL_BUFFER_KHR
#define GL_BUFFER_KHR 0x82E0
#endif //GL_BUFFER_KHR
#ifndef GL_SHADER_KHR
#define GL_SHADER_KHR 0x82E1
#endif //GL_SHADER_KHR
#ifndef GL_SHADER
#define GL_SHADER 0x82E1
#endif //GL_SHADER
#ifndef GL_PROGRAM_KHR
#define GL_PROGRAM_KHR 0x82E2
#endif //GL_PROGRAM_KHR
#ifndef GL_PROGRAM
#define GL_PROGRAM 0x82E2
#endif //GL_PROGRAM
#ifndef GL_QUERY_KHR
#define GL_QUERY_KHR 0x82E3
#endif //GL_QUERY_KHR
#ifndef GL_QUERY
#define GL_QUERY 0x82E3
#endif //GL_QUERY
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
#ifndef GL_DEBUG_SEVERITY_MEDIUM
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#endif //GL_DEBUG_SEVERITY_MEDIUM
#ifndef GL_DEBUG_SEVERITY_MEDIUM_KHR
#define GL_DEBUG_SEVERITY_MEDIUM_KHR 0x9147
#endif //GL_DEBUG_SEVERITY_MEDIUM_KHR
#ifndef GL_DEBUG_SEVERITY_LOW_KHR
#define GL_DEBUG_SEVERITY_LOW_KHR 0x9148
#endif //GL_DEBUG_SEVERITY_LOW_KHR
#ifndef GL_DEBUG_SEVERITY_LOW
#define GL_DEBUG_SEVERITY_LOW 0x9148
#endif //GL_DEBUG_SEVERITY_LOW
#ifndef GL_DEBUG_OUTPUT_KHR
#define GL_DEBUG_OUTPUT_KHR 0x92E0
#endif //GL_DEBUG_OUTPUT_KHR
#ifndef GL_DEBUG_OUTPUT
#define GL_DEBUG_OUTPUT 0x92E0
#endif //GL_DEBUG_OUTPUT
extern "C" {
}
namespace gl{

typedef void (*PFNGLDEBUGMESSAGECALLBACKPROC_HPP)(GLDEBUGPROC,const void *);
static inline void DebugMessageCallback(GLDEBUGPROC callback1,const void * userParam1)
{
	static PFNGLDEBUGMESSAGECALLBACKPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKPROC_HPP>(_impl::_get_proc_address("glDebugMessageCallback","GL_KHR_debug"));
	 fn(callback1,userParam1);
}
typedef void (*PFNGLDEBUGMESSAGECALLBACKKHRPROC_HPP)(GLDEBUGPROCKHR,const void *);
static inline void DebugMessageCallbackKHR(GLDEBUGPROCKHR callback1,const void * userParam1)
{
	static PFNGLDEBUGMESSAGECALLBACKKHRPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKKHRPROC_HPP>(_impl::_get_proc_address("glDebugMessageCallbackKHR","GL_KHR_debug"));
	 fn(callback1,userParam1);
}
typedef void (*PFNGLDEBUGMESSAGECONTROLPROC_HPP)(GLenum,GLenum,GLenum,GLsizei,const GLuint *,GLboolean);
static inline void DebugMessageControl(GLenum source1,GLenum type1,GLenum severity1,GLsizei count1,const GLuint * ids1,GLboolean enabled1)
{
	static PFNGLDEBUGMESSAGECONTROLPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGECONTROLPROC_HPP>(_impl::_get_proc_address("glDebugMessageControl","GL_KHR_debug"));
	 fn(source1,type1,severity1,count1,ids1,enabled1);
}
typedef void (*PFNGLDEBUGMESSAGECONTROLKHRPROC_HPP)(GLenum,GLenum,GLenum,GLsizei,const GLuint *,GLboolean);
static inline void DebugMessageControlKHR(GLenum source1,GLenum type1,GLenum severity1,GLsizei count1,const GLuint * ids1,GLboolean enabled1)
{
	static PFNGLDEBUGMESSAGECONTROLKHRPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGECONTROLKHRPROC_HPP>(_impl::_get_proc_address("glDebugMessageControlKHR","GL_KHR_debug"));
	 fn(source1,type1,severity1,count1,ids1,enabled1);
}
typedef void (*PFNGLDEBUGMESSAGEINSERTPROC_HPP)(GLenum,GLenum,GLuint,GLenum,GLsizei,const GLchar *);
static inline void DebugMessageInsert(GLenum source1,GLenum type1,GLuint id1,GLenum severity1,GLsizei length1,const GLchar * buf1)
{
	static PFNGLDEBUGMESSAGEINSERTPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGEINSERTPROC_HPP>(_impl::_get_proc_address("glDebugMessageInsert","GL_KHR_debug"));
	 fn(source1,type1,id1,severity1,length1,buf1);
}
typedef void (*PFNGLDEBUGMESSAGEINSERTKHRPROC_HPP)(GLenum,GLenum,GLuint,GLenum,GLsizei,const GLchar *);
static inline void DebugMessageInsertKHR(GLenum source1,GLenum type1,GLuint id1,GLenum severity1,GLsizei length1,const GLchar * buf1)
{
	static PFNGLDEBUGMESSAGEINSERTKHRPROC_HPP fn=reinterpret_cast<PFNGLDEBUGMESSAGEINSERTKHRPROC_HPP>(_impl::_get_proc_address("glDebugMessageInsertKHR","GL_KHR_debug"));
	 fn(source1,type1,id1,severity1,length1,buf1);
}
typedef GLuint (*PFNGLGETDEBUGMESSAGELOGPROC_HPP)(GLuint,GLsizei,GLenum *,GLenum *,GLuint *,GLenum *,GLsizei *,GLchar *);
static inline GLuint GetDebugMessageLog(GLuint count1,GLsizei bufSize1,GLenum * sources1,GLenum * types1,GLuint * ids1,GLenum * severities1,GLsizei * lengths1,GLchar * messageLog1)
{
	static PFNGLGETDEBUGMESSAGELOGPROC_HPP fn=reinterpret_cast<PFNGLGETDEBUGMESSAGELOGPROC_HPP>(_impl::_get_proc_address("glGetDebugMessageLog","GL_KHR_debug"));
	return fn(count1,bufSize1,sources1,types1,ids1,severities1,lengths1,messageLog1);
}
typedef GLuint (*PFNGLGETDEBUGMESSAGELOGKHRPROC_HPP)(GLuint,GLsizei,GLenum *,GLenum *,GLuint *,GLenum *,GLsizei *,GLchar *);
static inline GLuint GetDebugMessageLogKHR(GLuint count1,GLsizei bufSize1,GLenum * sources1,GLenum * types1,GLuint * ids1,GLenum * severities1,GLsizei * lengths1,GLchar * messageLog1)
{
	static PFNGLGETDEBUGMESSAGELOGKHRPROC_HPP fn=reinterpret_cast<PFNGLGETDEBUGMESSAGELOGKHRPROC_HPP>(_impl::_get_proc_address("glGetDebugMessageLogKHR","GL_KHR_debug"));
	return fn(count1,bufSize1,sources1,types1,ids1,severities1,lengths1,messageLog1);
}
typedef void (*PFNGLGETOBJECTLABELPROC_HPP)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetObjectLabel(GLenum identifier1,GLuint name1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
	static PFNGLGETOBJECTLABELPROC_HPP fn=reinterpret_cast<PFNGLGETOBJECTLABELPROC_HPP>(_impl::_get_proc_address("glGetObjectLabel","GL_KHR_debug"));
	 fn(identifier1,name1,bufSize1,length1,label1);
}
typedef void (*PFNGLGETOBJECTLABELKHRPROC_HPP)(GLenum,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetObjectLabelKHR(GLenum identifier1,GLuint name1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
	static PFNGLGETOBJECTLABELKHRPROC_HPP fn=reinterpret_cast<PFNGLGETOBJECTLABELKHRPROC_HPP>(_impl::_get_proc_address("glGetObjectLabelKHR","GL_KHR_debug"));
	 fn(identifier1,name1,bufSize1,length1,label1);
}
typedef void (*PFNGLGETOBJECTPTRLABELPROC_HPP)(const void *,GLsizei,GLsizei *,GLchar *);
static inline void GetObjectPtrLabel(const void * ptr1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
	static PFNGLGETOBJECTPTRLABELPROC_HPP fn=reinterpret_cast<PFNGLGETOBJECTPTRLABELPROC_HPP>(_impl::_get_proc_address("glGetObjectPtrLabel","GL_KHR_debug"));
	 fn(ptr1,bufSize1,length1,label1);
}
typedef void (*PFNGLGETOBJECTPTRLABELKHRPROC_HPP)(const void *,GLsizei,GLsizei *,GLchar *);
static inline void GetObjectPtrLabelKHR(const void * ptr1,GLsizei bufSize1,GLsizei * length1,GLchar * label1)
{
	static PFNGLGETOBJECTPTRLABELKHRPROC_HPP fn=reinterpret_cast<PFNGLGETOBJECTPTRLABELKHRPROC_HPP>(_impl::_get_proc_address("glGetObjectPtrLabelKHR","GL_KHR_debug"));
	 fn(ptr1,bufSize1,length1,label1);
}
typedef void (*PFNGLGETPOINTERVPROC_HPP)(GLenum,void **);
static inline void GetPointerv(GLenum pname1,void ** params1)
{
	static PFNGLGETPOINTERVPROC_HPP fn=reinterpret_cast<PFNGLGETPOINTERVPROC_HPP>(_impl::_get_proc_address("glGetPointerv","GL_KHR_debug"));
	 fn(pname1,params1);
}
typedef void (*PFNGLGETPOINTERVKHRPROC_HPP)(GLenum,void **);
static inline void GetPointervKHR(GLenum pname1,void ** params1)
{
	static PFNGLGETPOINTERVKHRPROC_HPP fn=reinterpret_cast<PFNGLGETPOINTERVKHRPROC_HPP>(_impl::_get_proc_address("glGetPointervKHR","GL_KHR_debug"));
	 fn(pname1,params1);
}
typedef void (*PFNGLOBJECTLABELPROC_HPP)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void ObjectLabel(GLenum identifier1,GLuint name1,GLsizei length1,const GLchar * label1)
{
	static PFNGLOBJECTLABELPROC_HPP fn=reinterpret_cast<PFNGLOBJECTLABELPROC_HPP>(_impl::_get_proc_address("glObjectLabel","GL_KHR_debug"));
	 fn(identifier1,name1,length1,label1);
}
typedef void (*PFNGLOBJECTLABELKHRPROC_HPP)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void ObjectLabelKHR(GLenum identifier1,GLuint name1,GLsizei length1,const GLchar * label1)
{
	static PFNGLOBJECTLABELKHRPROC_HPP fn=reinterpret_cast<PFNGLOBJECTLABELKHRPROC_HPP>(_impl::_get_proc_address("glObjectLabelKHR","GL_KHR_debug"));
	 fn(identifier1,name1,length1,label1);
}
typedef void (*PFNGLOBJECTPTRLABELPROC_HPP)(const void *,GLsizei,const GLchar *);
static inline void ObjectPtrLabel(const void * ptr1,GLsizei length1,const GLchar * label1)
{
	static PFNGLOBJECTPTRLABELPROC_HPP fn=reinterpret_cast<PFNGLOBJECTPTRLABELPROC_HPP>(_impl::_get_proc_address("glObjectPtrLabel","GL_KHR_debug"));
	 fn(ptr1,length1,label1);
}
typedef void (*PFNGLOBJECTPTRLABELKHRPROC_HPP)(const void *,GLsizei,const GLchar *);
static inline void ObjectPtrLabelKHR(const void * ptr1,GLsizei length1,const GLchar * label1)
{
	static PFNGLOBJECTPTRLABELKHRPROC_HPP fn=reinterpret_cast<PFNGLOBJECTPTRLABELKHRPROC_HPP>(_impl::_get_proc_address("glObjectPtrLabelKHR","GL_KHR_debug"));
	 fn(ptr1,length1,label1);
}
typedef void (*PFNGLPOPDEBUGGROUPPROC_HPP)();
static inline void PopDebugGroup()
{
	static PFNGLPOPDEBUGGROUPPROC_HPP fn=reinterpret_cast<PFNGLPOPDEBUGGROUPPROC_HPP>(_impl::_get_proc_address("glPopDebugGroup","GL_KHR_debug"));
	 fn();
}
typedef void (*PFNGLPOPDEBUGGROUPKHRPROC_HPP)();
static inline void PopDebugGroupKHR()
{
	static PFNGLPOPDEBUGGROUPKHRPROC_HPP fn=reinterpret_cast<PFNGLPOPDEBUGGROUPKHRPROC_HPP>(_impl::_get_proc_address("glPopDebugGroupKHR","GL_KHR_debug"));
	 fn();
}
typedef void (*PFNGLPUSHDEBUGGROUPPROC_HPP)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void PushDebugGroup(GLenum source1,GLuint id1,GLsizei length1,const GLchar * message1)
{
	static PFNGLPUSHDEBUGGROUPPROC_HPP fn=reinterpret_cast<PFNGLPUSHDEBUGGROUPPROC_HPP>(_impl::_get_proc_address("glPushDebugGroup","GL_KHR_debug"));
	 fn(source1,id1,length1,message1);
}
typedef void (*PFNGLPUSHDEBUGGROUPKHRPROC_HPP)(GLenum,GLuint,GLsizei,const GLchar *);
static inline void PushDebugGroupKHR(GLenum source1,GLuint id1,GLsizei length1,const GLchar * message1)
{
	static PFNGLPUSHDEBUGGROUPKHRPROC_HPP fn=reinterpret_cast<PFNGLPUSHDEBUGGROUPKHRPROC_HPP>(_impl::_get_proc_address("glPushDebugGroupKHR","GL_KHR_debug"));
	 fn(source1,id1,length1,message1);
}}
#endif

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_KHR_robustness
#define GL_KHR_robustness
#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif //GL_NO_ERROR
#ifndef GL_CONTEXT_LOST_KHR
#define GL_CONTEXT_LOST_KHR 0x0507
#endif //GL_CONTEXT_LOST_KHR
#ifndef GL_CONTEXT_LOST
#define GL_CONTEXT_LOST 0x0507
#endif //GL_CONTEXT_LOST
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
#ifndef GL_RESET_NOTIFICATION_STRATEGY_KHR
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#endif //GL_RESET_NOTIFICATION_STRATEGY_KHR
#ifndef GL_RESET_NOTIFICATION_STRATEGY
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#endif //GL_RESET_NOTIFICATION_STRATEGY
#ifndef GL_NO_RESET_NOTIFICATION
#define GL_NO_RESET_NOTIFICATION 0x8261
#endif //GL_NO_RESET_NOTIFICATION
#ifndef GL_NO_RESET_NOTIFICATION_KHR
#define GL_NO_RESET_NOTIFICATION_KHR 0x8261
#endif //GL_NO_RESET_NOTIFICATION_KHR
#ifndef GL_CONTEXT_ROBUST_ACCESS
#define GL_CONTEXT_ROBUST_ACCESS 0x90F3
#endif //GL_CONTEXT_ROBUST_ACCESS
#ifndef GL_CONTEXT_ROBUST_ACCESS_KHR
#define GL_CONTEXT_ROBUST_ACCESS_KHR 0x90F3
#endif //GL_CONTEXT_ROBUST_ACCESS_KHR
extern "C" {
}
namespace gl{

typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSPROC_HPP)();
static inline GLenum GetGraphicsResetStatus()
{
	static PFNGLGETGRAPHICSRESETSTATUSPROC_HPP fn=reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSPROC_HPP>(_impl::_get_proc_address("glGetGraphicsResetStatus","GL_KHR_robustness"));
	return fn();
}
typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSKHRPROC_HPP)();
static inline GLenum GetGraphicsResetStatusKHR()
{
	static PFNGLGETGRAPHICSRESETSTATUSKHRPROC_HPP fn=reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSKHRPROC_HPP>(_impl::_get_proc_address("glGetGraphicsResetStatusKHR","GL_KHR_robustness"));
	return fn();
}
typedef void (*PFNGLGETNUNIFORMFVPROC_HPP)(GLuint,GLint,GLsizei,GLfloat *);
static inline void GetnUniformfv(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
	static PFNGLGETNUNIFORMFVPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMFVPROC_HPP>(_impl::_get_proc_address("glGetnUniformfv","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMFVKHRPROC_HPP)(GLuint,GLint,GLsizei,GLfloat *);
static inline void GetnUniformfvKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
	static PFNGLGETNUNIFORMFVKHRPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMFVKHRPROC_HPP>(_impl::_get_proc_address("glGetnUniformfvKHR","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMIVPROC_HPP)(GLuint,GLint,GLsizei,GLint *);
static inline void GetnUniformiv(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
	static PFNGLGETNUNIFORMIVPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMIVPROC_HPP>(_impl::_get_proc_address("glGetnUniformiv","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMIVKHRPROC_HPP)(GLuint,GLint,GLsizei,GLint *);
static inline void GetnUniformivKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
	static PFNGLGETNUNIFORMIVKHRPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMIVKHRPROC_HPP>(_impl::_get_proc_address("glGetnUniformivKHR","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMUIVPROC_HPP)(GLuint,GLint,GLsizei,GLuint *);
static inline void GetnUniformuiv(GLuint program1,GLint location1,GLsizei bufSize1,GLuint * params1)
{
	static PFNGLGETNUNIFORMUIVPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMUIVPROC_HPP>(_impl::_get_proc_address("glGetnUniformuiv","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLGETNUNIFORMUIVKHRPROC_HPP)(GLuint,GLint,GLsizei,GLuint *);
static inline void GetnUniformuivKHR(GLuint program1,GLint location1,GLsizei bufSize1,GLuint * params1)
{
	static PFNGLGETNUNIFORMUIVKHRPROC_HPP fn=reinterpret_cast<PFNGLGETNUNIFORMUIVKHRPROC_HPP>(_impl::_get_proc_address("glGetnUniformuivKHR","GL_KHR_robustness"));
	 fn(program1,location1,bufSize1,params1);
}
typedef void (*PFNGLREADNPIXELSPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void ReadnPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
	static PFNGLREADNPIXELSPROC_HPP fn=reinterpret_cast<PFNGLREADNPIXELSPROC_HPP>(_impl::_get_proc_address("glReadnPixels","GL_KHR_robustness"));
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}
typedef void (*PFNGLREADNPIXELSKHRPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void ReadnPixelsKHR(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
	static PFNGLREADNPIXELSKHRPROC_HPP fn=reinterpret_cast<PFNGLREADNPIXELSKHRPROC_HPP>(_impl::_get_proc_address("glReadnPixelsKHR","GL_KHR_robustness"));
	 fn(x1,y1,width1,height1,format1,type1,bufSize1,data1);
}}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDBARRIERNVPROC_HPP)();
static inline void BlendBarrierNV()
{
	static PFNGLBLENDBARRIERNVPROC_HPP fn=reinterpret_cast<PFNGLBLENDBARRIERNVPROC_HPP>(_impl::_get_proc_address("glBlendBarrierNV","GL_NV_blend_equation_advanced"));
	 fn();
}
typedef void (*PFNGLBLENDPARAMETERINVPROC_HPP)(GLenum,GLint);
static inline void BlendParameteriNV(GLenum pname1,GLint value1)
{
	static PFNGLBLENDPARAMETERINVPROC_HPP fn=reinterpret_cast<PFNGLBLENDPARAMETERINVPROC_HPP>(_impl::_get_proc_address("glBlendParameteriNV","GL_NV_blend_equation_advanced"));
	 fn(pname1,value1);
}}
#endif

#ifndef GL_NV_blend_equation_advanced_coherent
#define GL_NV_blend_equation_advanced_coherent
#ifndef GL_BLEND_ADVANCED_COHERENT_NV
#define GL_BLEND_ADVANCED_COHERENT_NV 0x9285
#endif //GL_BLEND_ADVANCED_COHERENT_NV
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_copy_buffer
#define GL_NV_copy_buffer
#ifndef GL_COPY_READ_BUFFER_NV
#define GL_COPY_READ_BUFFER_NV 0x8F36
#endif //GL_COPY_READ_BUFFER_NV
#ifndef GL_COPY_WRITE_BUFFER_NV
#define GL_COPY_WRITE_BUFFER_NV 0x8F37
#endif //GL_COPY_WRITE_BUFFER_NV
extern "C" {
}
namespace gl{

typedef void (*PFNGLCOPYBUFFERSUBDATANVPROC_HPP)(GLenum,GLenum,GLintptr,GLintptr,GLsizeiptr);
static inline void CopyBufferSubDataNV(GLenum readTarget1,GLenum writeTarget1,GLintptr readOffset1,GLintptr writeOffset1,GLsizeiptr size1)
{
	static PFNGLCOPYBUFFERSUBDATANVPROC_HPP fn=reinterpret_cast<PFNGLCOPYBUFFERSUBDATANVPROC_HPP>(_impl::_get_proc_address("glCopyBufferSubDataNV","GL_NV_copy_buffer"));
	 fn(readTarget1,writeTarget1,readOffset1,writeOffset1,size1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLCOVERAGEMASKNVPROC_HPP)(GLboolean);
static inline void CoverageMaskNV(GLboolean mask1)
{
	static PFNGLCOVERAGEMASKNVPROC_HPP fn=reinterpret_cast<PFNGLCOVERAGEMASKNVPROC_HPP>(_impl::_get_proc_address("glCoverageMaskNV","GL_NV_coverage_sample"));
	 fn(mask1);
}
typedef void (*PFNGLCOVERAGEOPERATIONNVPROC_HPP)(GLenum);
static inline void CoverageOperationNV(GLenum operation1)
{
	static PFNGLCOVERAGEOPERATIONNVPROC_HPP fn=reinterpret_cast<PFNGLCOVERAGEOPERATIONNVPROC_HPP>(_impl::_get_proc_address("glCoverageOperationNV","GL_NV_coverage_sample"));
	 fn(operation1);
}}
#endif

#ifndef GL_NV_depth_nonlinear
#define GL_NV_depth_nonlinear
#ifndef GL_DEPTH_COMPONENT16_NONLINEAR_NV
#define GL_DEPTH_COMPONENT16_NONLINEAR_NV 0x8E2C
#endif //GL_DEPTH_COMPONENT16_NONLINEAR_NV
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWBUFFERSNVPROC_HPP)(GLsizei,const GLenum *);
static inline void DrawBuffersNV(GLsizei n1,const GLenum * bufs1)
{
	static PFNGLDRAWBUFFERSNVPROC_HPP fn=reinterpret_cast<PFNGLDRAWBUFFERSNVPROC_HPP>(_impl::_get_proc_address("glDrawBuffersNV","GL_NV_draw_buffers"));
	 fn(n1,bufs1);
}}
#endif

#ifndef GL_NV_draw_instanced
#define GL_NV_draw_instanced
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWARRAYSINSTANCEDNVPROC_HPP)(GLenum,GLint,GLsizei,GLsizei);
static inline void DrawArraysInstancedNV(GLenum mode1,GLint first1,GLsizei count1,GLsizei primcount1)
{
	static PFNGLDRAWARRAYSINSTANCEDNVPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDNVPROC_HPP>(_impl::_get_proc_address("glDrawArraysInstancedNV","GL_NV_draw_instanced"));
	 fn(mode1,first1,count1,primcount1);
}
typedef void (*PFNGLDRAWELEMENTSINSTANCEDNVPROC_HPP)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void DrawElementsInstancedNV(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei primcount1)
{
	static PFNGLDRAWELEMENTSINSTANCEDNVPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDNVPROC_HPP>(_impl::_get_proc_address("glDrawElementsInstancedNV","GL_NV_draw_instanced"));
	 fn(mode1,count1,type1,indices1,primcount1);
}}
#endif

#ifndef GL_NV_explicit_attrib_location
#define GL_NV_explicit_attrib_location
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLDELETEFENCESNVPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteFencesNV(GLsizei n1,const GLuint * fences1)
{
	static PFNGLDELETEFENCESNVPROC_HPP fn=reinterpret_cast<PFNGLDELETEFENCESNVPROC_HPP>(_impl::_get_proc_address("glDeleteFencesNV","GL_NV_fence"));
	 fn(n1,fences1);
}
typedef void (*PFNGLFINISHFENCENVPROC_HPP)(GLuint);
static inline void FinishFenceNV(GLuint fence1)
{
	static PFNGLFINISHFENCENVPROC_HPP fn=reinterpret_cast<PFNGLFINISHFENCENVPROC_HPP>(_impl::_get_proc_address("glFinishFenceNV","GL_NV_fence"));
	 fn(fence1);
}
typedef void (*PFNGLGENFENCESNVPROC_HPP)(GLsizei,GLuint *);
static inline void GenFencesNV(GLsizei n1,GLuint * fences1)
{
	static PFNGLGENFENCESNVPROC_HPP fn=reinterpret_cast<PFNGLGENFENCESNVPROC_HPP>(_impl::_get_proc_address("glGenFencesNV","GL_NV_fence"));
	 fn(n1,fences1);
}
typedef void (*PFNGLGETFENCEIVNVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetFenceivNV(GLuint fence1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFENCEIVNVPROC_HPP fn=reinterpret_cast<PFNGLGETFENCEIVNVPROC_HPP>(_impl::_get_proc_address("glGetFenceivNV","GL_NV_fence"));
	 fn(fence1,pname1,params1);
}
typedef GLboolean (*PFNGLISFENCENVPROC_HPP)(GLuint);
static inline GLboolean IsFenceNV(GLuint fence1)
{
	static PFNGLISFENCENVPROC_HPP fn=reinterpret_cast<PFNGLISFENCENVPROC_HPP>(_impl::_get_proc_address("glIsFenceNV","GL_NV_fence"));
	return fn(fence1);
}
typedef void (*PFNGLSETFENCENVPROC_HPP)(GLuint,GLenum);
static inline void SetFenceNV(GLuint fence1,GLenum condition1)
{
	static PFNGLSETFENCENVPROC_HPP fn=reinterpret_cast<PFNGLSETFENCENVPROC_HPP>(_impl::_get_proc_address("glSetFenceNV","GL_NV_fence"));
	 fn(fence1,condition1);
}
typedef GLboolean (*PFNGLTESTFENCENVPROC_HPP)(GLuint);
static inline GLboolean TestFenceNV(GLuint fence1)
{
	static PFNGLTESTFENCENVPROC_HPP fn=reinterpret_cast<PFNGLTESTFENCENVPROC_HPP>(_impl::_get_proc_address("glTestFenceNV","GL_NV_fence"));
	return fn(fence1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLITFRAMEBUFFERNVPROC_HPP)(GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLbitfield,GLenum);
static inline void BlitFramebufferNV(GLint srcX01,GLint srcY01,GLint srcX11,GLint srcY11,GLint dstX01,GLint dstY01,GLint dstX11,GLint dstY11,GLbitfield mask1,GLenum filter1)
{
	static PFNGLBLITFRAMEBUFFERNVPROC_HPP fn=reinterpret_cast<PFNGLBLITFRAMEBUFFERNVPROC_HPP>(_impl::_get_proc_address("glBlitFramebufferNV","GL_NV_framebuffer_blit"));
	 fn(srcX01,srcY01,srcX11,srcY11,dstX01,dstY01,dstX11,dstY11,mask1,filter1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisampleNV(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisampleNV","GL_NV_framebuffer_multisample"));
	 fn(target1,samples1,internalformat1,width1,height1);
}}
#endif

#ifndef GL_NV_generate_mipmap_sRGB
#define GL_NV_generate_mipmap_sRGB
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_instanced_arrays
#define GL_NV_instanced_arrays
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE
#endif //GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV
extern "C" {
}
namespace gl{

typedef void (*PFNGLVERTEXATTRIBDIVISORNVPROC_HPP)(GLuint,GLuint);
static inline void VertexAttribDivisorNV(GLuint index1,GLuint divisor1)
{
	static PFNGLVERTEXATTRIBDIVISORNVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBDIVISORNVPROC_HPP>(_impl::_get_proc_address("glVertexAttribDivisorNV","GL_NV_instanced_arrays"));
	 fn(index1,divisor1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLUNIFORMMATRIX2X3FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2x3fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2X3FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2x3fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX2X4FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2x4fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2X4FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2x4fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX3X2FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3x2fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3X2FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3x2fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX3X4FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3x4fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3X4FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3x4fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX4X2FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4x2fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4X2FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4x2fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX4X3FVNVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4x3fvNV(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4X3FVNVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVNVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4x3fvNV","GL_NV_non_square_matrices"));
	 fn(location1,count1,transpose1,value1);
}}
#endif

#ifndef GL_NV_read_buffer
#define GL_NV_read_buffer
#ifndef GL_READ_BUFFER_NV
#define GL_READ_BUFFER_NV 0x0C02
#endif //GL_READ_BUFFER_NV
extern "C" {
}
namespace gl{

typedef void (*PFNGLREADBUFFERNVPROC_HPP)(GLenum);
static inline void ReadBufferNV(GLenum mode1)
{
	static PFNGLREADBUFFERNVPROC_HPP fn=reinterpret_cast<PFNGLREADBUFFERNVPROC_HPP>(_impl::_get_proc_address("glReadBufferNV","GL_NV_read_buffer"));
	 fn(mode1);
}}
#endif

#ifndef GL_NV_read_buffer_front
#define GL_NV_read_buffer_front
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_read_depth
#define GL_NV_read_depth
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_read_depth_stencil
#define GL_NV_read_depth_stencil
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_read_stencil
#define GL_NV_read_stencil
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_shadow_samplers_array
#define GL_NV_shadow_samplers_array
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW_NV
#define GL_SAMPLER_2D_ARRAY_SHADOW_NV 0x8DC4
#endif //GL_SAMPLER_2D_ARRAY_SHADOW_NV
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_shadow_samplers_cube
#define GL_NV_shadow_samplers_cube
#ifndef GL_SAMPLER_CUBE_SHADOW_NV
#define GL_SAMPLER_CUBE_SHADOW_NV 0x8DC5
#endif //GL_SAMPLER_CUBE_SHADOW_NV
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_texture_border_clamp
#define GL_NV_texture_border_clamp
#ifndef GL_TEXTURE_BORDER_COLOR_NV
#define GL_TEXTURE_BORDER_COLOR_NV 0x1004
#endif //GL_TEXTURE_BORDER_COLOR_NV
#ifndef GL_CLAMP_TO_BORDER_NV
#define GL_CLAMP_TO_BORDER_NV 0x812D
#endif //GL_CLAMP_TO_BORDER_NV
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_texture_compression_s3tc_update
#define GL_NV_texture_compression_s3tc_update
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_NV_texture_npot_2D_mipmap
#define GL_NV_texture_npot_2D_mipmap
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_EGL_image
#define GL_OES_EGL_image
extern "C" {
}
namespace gl{

typedef void (*PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_HPP)(GLenum,GLeglImageOES);
static inline void EGLImageTargetRenderbufferStorageOES(GLenum target1,GLeglImageOES image1)
{
	static PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_HPP fn=reinterpret_cast<PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_HPP>(_impl::_get_proc_address("glEGLImageTargetRenderbufferStorageOES","GL_OES_EGL_image"));
	 fn(target1,image1);
}
typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_HPP)(GLenum,GLeglImageOES);
static inline void EGLImageTargetTexture2DOES(GLenum target1,GLeglImageOES image1)
{
	static PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_HPP fn=reinterpret_cast<PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_HPP>(_impl::_get_proc_address("glEGLImageTargetTexture2DOES","GL_OES_EGL_image"));
	 fn(target1,image1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_compressed_ETC1_RGB8_sub_texture
#define GL_OES_compressed_ETC1_RGB8_sub_texture
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_compressed_ETC1_RGB8_texture
#define GL_OES_compressed_ETC1_RGB8_texture
#ifndef GL_ETC1_RGB8_OES
#define GL_ETC1_RGB8_OES 0x8D64
#endif //GL_ETC1_RGB8_OES
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_depth24
#define GL_OES_depth24
#ifndef GL_DEPTH_COMPONENT24_OES
#define GL_DEPTH_COMPONENT24_OES 0x81A6
#endif //GL_DEPTH_COMPONENT24_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_depth32
#define GL_OES_depth32
#ifndef GL_DEPTH_COMPONENT32_OES
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#endif //GL_DEPTH_COMPONENT32_OES
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif //GL_UNSIGNED_INT
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_fbo_render_mipmap
#define GL_OES_fbo_render_mipmap
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_fragment_precision_high
#define GL_OES_fragment_precision_high
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETPROGRAMBINARYOESPROC_HPP)(GLuint,GLsizei,GLsizei *,GLenum *,void *);
static inline void GetProgramBinaryOES(GLuint program1,GLsizei bufSize1,GLsizei * length1,GLenum * binaryFormat1,void * binary1)
{
	static PFNGLGETPROGRAMBINARYOESPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMBINARYOESPROC_HPP>(_impl::_get_proc_address("glGetProgramBinaryOES","GL_OES_get_program_binary"));
	 fn(program1,bufSize1,length1,binaryFormat1,binary1);
}
typedef void (*PFNGLPROGRAMBINARYOESPROC_HPP)(GLuint,GLenum,const void *,GLint);
static inline void ProgramBinaryOES(GLuint program1,GLenum binaryFormat1,const void * binary1,GLint length1)
{
	static PFNGLPROGRAMBINARYOESPROC_HPP fn=reinterpret_cast<PFNGLPROGRAMBINARYOESPROC_HPP>(_impl::_get_proc_address("glProgramBinaryOES","GL_OES_get_program_binary"));
	 fn(program1,binaryFormat1,binary1,length1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETBUFFERPOINTERVOESPROC_HPP)(GLenum,GLenum,void **);
static inline void GetBufferPointervOES(GLenum target1,GLenum pname1,void ** params1)
{
	static PFNGLGETBUFFERPOINTERVOESPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERPOINTERVOESPROC_HPP>(_impl::_get_proc_address("glGetBufferPointervOES","GL_OES_mapbuffer"));
	 fn(target1,pname1,params1);
}
typedef void * (*PFNGLMAPBUFFEROESPROC_HPP)(GLenum,GLenum);
static inline void * MapBufferOES(GLenum target1,GLenum access1)
{
	static PFNGLMAPBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLMAPBUFFEROESPROC_HPP>(_impl::_get_proc_address("glMapBufferOES","GL_OES_mapbuffer"));
	return fn(target1,access1);
}
typedef GLboolean (*PFNGLUNMAPBUFFEROESPROC_HPP)(GLenum);
static inline GLboolean UnmapBufferOES(GLenum target1)
{
	static PFNGLUNMAPBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLUNMAPBUFFEROESPROC_HPP>(_impl::_get_proc_address("glUnmapBufferOES","GL_OES_mapbuffer"));
	return fn(target1);
}}
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
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8
#ifndef GL_RGB8_OES
#define GL_RGB8_OES 0x8051
#endif //GL_RGB8_OES
#ifndef GL_RGBA8_OES
#define GL_RGBA8_OES 0x8058
#endif //GL_RGBA8_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_sample_shading
#define GL_OES_sample_shading
#ifndef GL_SAMPLE_SHADING_OES
#define GL_SAMPLE_SHADING_OES 0x8C36
#endif //GL_SAMPLE_SHADING_OES
#ifndef GL_MIN_SAMPLE_SHADING_VALUE_OES
#define GL_MIN_SAMPLE_SHADING_VALUE_OES 0x8C37
#endif //GL_MIN_SAMPLE_SHADING_VALUE_OES
extern "C" {
}
namespace gl{

typedef void (*PFNGLMINSAMPLESHADINGOESPROC_HPP)(GLfloat);
static inline void MinSampleShadingOES(GLfloat value1)
{
	static PFNGLMINSAMPLESHADINGOESPROC_HPP fn=reinterpret_cast<PFNGLMINSAMPLESHADINGOESPROC_HPP>(_impl::_get_proc_address("glMinSampleShadingOES","GL_OES_sample_shading"));
	 fn(value1);
}}
#endif

#ifndef GL_OES_sample_variables
#define GL_OES_sample_variables
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_shader_image_atomic
#define GL_OES_shader_image_atomic
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_standard_derivatives
#define GL_OES_standard_derivatives
#ifndef GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B
#endif //GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_stencil1
#define GL_OES_stencil1
#ifndef GL_STENCIL_INDEX1_OES
#define GL_STENCIL_INDEX1_OES 0x8D46
#endif //GL_STENCIL_INDEX1_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_stencil4
#define GL_OES_stencil4
#ifndef GL_STENCIL_INDEX4_OES
#define GL_STENCIL_INDEX4_OES 0x8D47
#endif //GL_STENCIL_INDEX4_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_surfaceless_context
#define GL_OES_surfaceless_context
#ifndef GL_FRAMEBUFFER_UNDEFINED_OES
#define GL_FRAMEBUFFER_UNDEFINED_OES 0x8219
#endif //GL_FRAMEBUFFER_UNDEFINED_OES
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage3DOES(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DOESPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage3DOES","GL_OES_texture_3D"));
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage3DOES","GL_OES_texture_3D"));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,imageSize1,data1);
}
typedef void (*PFNGLCOPYTEXSUBIMAGE3DOESPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
static inline void CopyTexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLCOPYTEXSUBIMAGE3DOESPROC_HPP fn=reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DOESPROC_HPP>(_impl::_get_proc_address("glCopyTexSubImage3DOES","GL_OES_texture_3D"));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,x1,y1,width1,height1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURE3DOESPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint,GLint);
static inline void FramebufferTexture3DOES(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLint zoffset1)
{
	static PFNGLFRAMEBUFFERTEXTURE3DOESPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DOESPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture3DOES","GL_OES_texture_3D"));
	 fn(target1,attachment1,textarget1,texture1,level1,zoffset1);
}
typedef void (*PFNGLTEXIMAGE3DOESPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void TexImage3DOES(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXIMAGE3DOESPROC_HPP fn=reinterpret_cast<PFNGLTEXIMAGE3DOESPROC_HPP>(_impl::_get_proc_address("glTexImage3DOES","GL_OES_texture_3D"));
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,format1,type1,pixels1);
}
typedef void (*PFNGLTEXSUBIMAGE3DOESPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,const void *);
static inline void TexSubImage3DOES(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXSUBIMAGE3DOESPROC_HPP fn=reinterpret_cast<PFNGLTEXSUBIMAGE3DOESPROC_HPP>(_impl::_get_proc_address("glTexSubImage3DOES","GL_OES_texture_3D"));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,pixels1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_float
#define GL_OES_texture_float
#ifndef GL_FLOAT
#define GL_FLOAT 0x1406
#endif //GL_FLOAT
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_float_linear
#define GL_OES_texture_float_linear
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_half_float
#define GL_OES_texture_half_float
#ifndef GL_HALF_FLOAT_OES
#define GL_HALF_FLOAT_OES 0x8D61
#endif //GL_HALF_FLOAT_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_half_float_linear
#define GL_OES_texture_half_float_linear
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_npot
#define GL_OES_texture_npot
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_stencil8
#define GL_OES_texture_stencil8
#ifndef GL_STENCIL_INDEX_OES
#define GL_STENCIL_INDEX_OES 0x1901
#endif //GL_STENCIL_INDEX_OES
#ifndef GL_STENCIL_INDEX8_OES
#define GL_STENCIL_INDEX8_OES 0x8D48
#endif //GL_STENCIL_INDEX8_OES
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei,GLboolean);
static inline void TexStorage3DMultisampleOES(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLboolean fixedsamplelocations1)
{
	static PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_HPP fn=reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC_HPP>(_impl::_get_proc_address("glTexStorage3DMultisampleOES","GL_OES_texture_storage_multisample_2d_array"));
	 fn(target1,samples1,internalformat1,width1,height1,depth1,fixedsamplelocations1);
}}
#endif

#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object
#ifndef GL_VERTEX_ARRAY_BINDING_OES
#define GL_VERTEX_ARRAY_BINDING_OES 0x85B5
#endif //GL_VERTEX_ARRAY_BINDING_OES
extern "C" {
}
namespace gl{

typedef void (*PFNGLBINDVERTEXARRAYOESPROC_HPP)(GLuint);
static inline void BindVertexArrayOES(GLuint array1)
{
	static PFNGLBINDVERTEXARRAYOESPROC_HPP fn=reinterpret_cast<PFNGLBINDVERTEXARRAYOESPROC_HPP>(_impl::_get_proc_address("glBindVertexArrayOES","GL_OES_vertex_array_object"));
	 fn(array1);
}
typedef void (*PFNGLDELETEVERTEXARRAYSOESPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteVertexArraysOES(GLsizei n1,const GLuint * arrays1)
{
	static PFNGLDELETEVERTEXARRAYSOESPROC_HPP fn=reinterpret_cast<PFNGLDELETEVERTEXARRAYSOESPROC_HPP>(_impl::_get_proc_address("glDeleteVertexArraysOES","GL_OES_vertex_array_object"));
	 fn(n1,arrays1);
}
typedef void (*PFNGLGENVERTEXARRAYSOESPROC_HPP)(GLsizei,GLuint *);
static inline void GenVertexArraysOES(GLsizei n1,GLuint * arrays1)
{
	static PFNGLGENVERTEXARRAYSOESPROC_HPP fn=reinterpret_cast<PFNGLGENVERTEXARRAYSOESPROC_HPP>(_impl::_get_proc_address("glGenVertexArraysOES","GL_OES_vertex_array_object"));
	 fn(n1,arrays1);
}
typedef GLboolean (*PFNGLISVERTEXARRAYOESPROC_HPP)(GLuint);
static inline GLboolean IsVertexArrayOES(GLuint array1)
{
	static PFNGLISVERTEXARRAYOESPROC_HPP fn=reinterpret_cast<PFNGLISVERTEXARRAYOESPROC_HPP>(_impl::_get_proc_address("glIsVertexArrayOES","GL_OES_vertex_array_object"));
	return fn(array1);
}}
#endif

#ifndef GL_OES_vertex_half_float
#define GL_OES_vertex_half_float
#ifndef GL_HALF_FLOAT_OES
#define GL_HALF_FLOAT_OES 0x8D61
#endif //GL_HALF_FLOAT_OES
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_vertex_type_10_10_10_2
#define GL_OES_vertex_type_10_10_10_2
#ifndef GL_UNSIGNED_INT_10_10_10_2_OES
#define GL_UNSIGNED_INT_10_10_10_2_OES 0x8DF6
#endif //GL_UNSIGNED_INT_10_10_10_2_OES
#ifndef GL_INT_10_10_10_2_OES
#define GL_INT_10_10_10_2_OES 0x8DF7
#endif //GL_INT_10_10_10_2_OES
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLALPHAFUNCQCOMPROC_HPP)(GLenum,GLclampf);
static inline void AlphaFuncQCOM(GLenum func1,GLclampf ref1)
{
	static PFNGLALPHAFUNCQCOMPROC_HPP fn=reinterpret_cast<PFNGLALPHAFUNCQCOMPROC_HPP>(_impl::_get_proc_address("glAlphaFuncQCOM","GL_QCOM_alpha_test"));
	 fn(func1,ref1);
}}
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
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_QCOM_driver_control
#define GL_QCOM_driver_control
extern "C" {
}
namespace gl{

typedef void (*PFNGLDISABLEDRIVERCONTROLQCOMPROC_HPP)(GLuint);
static inline void DisableDriverControlQCOM(GLuint driverControl1)
{
	static PFNGLDISABLEDRIVERCONTROLQCOMPROC_HPP fn=reinterpret_cast<PFNGLDISABLEDRIVERCONTROLQCOMPROC_HPP>(_impl::_get_proc_address("glDisableDriverControlQCOM","GL_QCOM_driver_control"));
	 fn(driverControl1);
}
typedef void (*PFNGLENABLEDRIVERCONTROLQCOMPROC_HPP)(GLuint);
static inline void EnableDriverControlQCOM(GLuint driverControl1)
{
	static PFNGLENABLEDRIVERCONTROLQCOMPROC_HPP fn=reinterpret_cast<PFNGLENABLEDRIVERCONTROLQCOMPROC_HPP>(_impl::_get_proc_address("glEnableDriverControlQCOM","GL_QCOM_driver_control"));
	 fn(driverControl1);
}
typedef void (*PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetDriverControlStringQCOM(GLuint driverControl1,GLsizei bufSize1,GLsizei * length1,GLchar * driverControlString1)
{
	static PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_HPP fn=reinterpret_cast<PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_HPP>(_impl::_get_proc_address("glGetDriverControlStringQCOM","GL_QCOM_driver_control"));
	 fn(driverControl1,bufSize1,length1,driverControlString1);
}
typedef void (*PFNGLGETDRIVERCONTROLSQCOMPROC_HPP)(GLint *,GLsizei,GLuint *);
static inline void GetDriverControlsQCOM(GLint * num1,GLsizei size1,GLuint * driverControls1)
{
	static PFNGLGETDRIVERCONTROLSQCOMPROC_HPP fn=reinterpret_cast<PFNGLGETDRIVERCONTROLSQCOMPROC_HPP>(_impl::_get_proc_address("glGetDriverControlsQCOM","GL_QCOM_driver_control"));
	 fn(num1,size1,driverControls1);
}}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLEXTGETBUFFERPOINTERVQCOMPROC_HPP)(GLenum,void **);
static inline void ExtGetBufferPointervQCOM(GLenum target1,void ** params1)
{
	static PFNGLEXTGETBUFFERPOINTERVQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETBUFFERPOINTERVQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetBufferPointervQCOM","GL_QCOM_extended_get"));
	 fn(target1,params1);
}
typedef void (*PFNGLEXTGETBUFFERSQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetBuffersQCOM(GLuint * buffers1,GLint maxBuffers1,GLint * numBuffers1)
{
	static PFNGLEXTGETBUFFERSQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETBUFFERSQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetBuffersQCOM","GL_QCOM_extended_get"));
	 fn(buffers1,maxBuffers1,numBuffers1);
}
typedef void (*PFNGLEXTGETFRAMEBUFFERSQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetFramebuffersQCOM(GLuint * framebuffers1,GLint maxFramebuffers1,GLint * numFramebuffers1)
{
	static PFNGLEXTGETFRAMEBUFFERSQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETFRAMEBUFFERSQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetFramebuffersQCOM","GL_QCOM_extended_get"));
	 fn(framebuffers1,maxFramebuffers1,numFramebuffers1);
}
typedef void (*PFNGLEXTGETRENDERBUFFERSQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetRenderbuffersQCOM(GLuint * renderbuffers1,GLint maxRenderbuffers1,GLint * numRenderbuffers1)
{
	static PFNGLEXTGETRENDERBUFFERSQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETRENDERBUFFERSQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetRenderbuffersQCOM","GL_QCOM_extended_get"));
	 fn(renderbuffers1,maxRenderbuffers1,numRenderbuffers1);
}
typedef void (*PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_HPP)(GLuint,GLenum,GLint,GLenum,GLint *);
static inline void ExtGetTexLevelParameterivQCOM(GLuint texture1,GLenum face1,GLint level1,GLenum pname1,GLint * params1)
{
	static PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetTexLevelParameterivQCOM","GL_QCOM_extended_get"));
	 fn(texture1,face1,level1,pname1,params1);
}
typedef void (*PFNGLEXTGETTEXSUBIMAGEQCOMPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,void *);
static inline void ExtGetTexSubImageQCOM(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,void * texels1)
{
	static PFNGLEXTGETTEXSUBIMAGEQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETTEXSUBIMAGEQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetTexSubImageQCOM","GL_QCOM_extended_get"));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,texels1);
}
typedef void (*PFNGLEXTGETTEXTURESQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetTexturesQCOM(GLuint * textures1,GLint maxTextures1,GLint * numTextures1)
{
	static PFNGLEXTGETTEXTURESQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETTEXTURESQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetTexturesQCOM","GL_QCOM_extended_get"));
	 fn(textures1,maxTextures1,numTextures1);
}
typedef void (*PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_HPP)(GLenum,GLenum,GLint);
static inline void ExtTexObjectStateOverrideiQCOM(GLenum target1,GLenum pname1,GLint param1)
{
	static PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_HPP>(_impl::_get_proc_address("glExtTexObjectStateOverrideiQCOM","GL_QCOM_extended_get"));
	 fn(target1,pname1,param1);
}}
#endif

#ifndef GL_QCOM_extended_get2
#define GL_QCOM_extended_get2
extern "C" {
}
namespace gl{

typedef void (*PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_HPP)(GLuint,GLenum,GLchar *,GLint *);
static inline void ExtGetProgramBinarySourceQCOM(GLuint program1,GLenum shadertype1,GLchar * source1,GLint * length1)
{
	static PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetProgramBinarySourceQCOM","GL_QCOM_extended_get2"));
	 fn(program1,shadertype1,source1,length1);
}
typedef void (*PFNGLEXTGETPROGRAMSQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetProgramsQCOM(GLuint * programs1,GLint maxPrograms1,GLint * numPrograms1)
{
	static PFNGLEXTGETPROGRAMSQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETPROGRAMSQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetProgramsQCOM","GL_QCOM_extended_get2"));
	 fn(programs1,maxPrograms1,numPrograms1);
}
typedef void (*PFNGLEXTGETSHADERSQCOMPROC_HPP)(GLuint *,GLint,GLint *);
static inline void ExtGetShadersQCOM(GLuint * shaders1,GLint maxShaders1,GLint * numShaders1)
{
	static PFNGLEXTGETSHADERSQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTGETSHADERSQCOMPROC_HPP>(_impl::_get_proc_address("glExtGetShadersQCOM","GL_QCOM_extended_get2"));
	 fn(shaders1,maxShaders1,numShaders1);
}
typedef GLboolean (*PFNGLEXTISPROGRAMBINARYQCOMPROC_HPP)(GLuint);
static inline GLboolean ExtIsProgramBinaryQCOM(GLuint program1)
{
	static PFNGLEXTISPROGRAMBINARYQCOMPROC_HPP fn=reinterpret_cast<PFNGLEXTISPROGRAMBINARYQCOMPROC_HPP>(_impl::_get_proc_address("glExtIsProgramBinaryQCOM","GL_QCOM_extended_get2"));
	return fn(program1);
}}
#endif

#ifndef GL_QCOM_perfmon_global_mode
#define GL_QCOM_perfmon_global_mode
#ifndef GL_PERFMON_GLOBAL_MODE_QCOM
#define GL_PERFMON_GLOBAL_MODE_QCOM 0x8FA0
#endif //GL_PERFMON_GLOBAL_MODE_QCOM
extern "C" {
}
namespace gl{
}
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
extern "C" {
}
namespace gl{

typedef void (*PFNGLENDTILINGQCOMPROC_HPP)(GLbitfield);
static inline void EndTilingQCOM(GLbitfield preserveMask1)
{
	static PFNGLENDTILINGQCOMPROC_HPP fn=reinterpret_cast<PFNGLENDTILINGQCOMPROC_HPP>(_impl::_get_proc_address("glEndTilingQCOM","GL_QCOM_tiled_rendering"));
	 fn(preserveMask1);
}
typedef void (*PFNGLSTARTTILINGQCOMPROC_HPP)(GLuint,GLuint,GLuint,GLuint,GLbitfield);
static inline void StartTilingQCOM(GLuint x1,GLuint y1,GLuint width1,GLuint height1,GLbitfield preserveMask1)
{
	static PFNGLSTARTTILINGQCOMPROC_HPP fn=reinterpret_cast<PFNGLSTARTTILINGQCOMPROC_HPP>(_impl::_get_proc_address("glStartTilingQCOM","GL_QCOM_tiled_rendering"));
	 fn(x1,y1,width1,height1,preserveMask1);
}}
#endif

#ifndef GL_QCOM_writeonly_rendering
#define GL_QCOM_writeonly_rendering
#ifndef GL_WRITEONLY_RENDERING_QCOM
#define GL_WRITEONLY_RENDERING_QCOM 0x8823
#endif //GL_WRITEONLY_RENDERING_QCOM
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_VIV_shader_binary
#define GL_VIV_shader_binary
#ifndef GL_SHADER_BINARY_VIV
#define GL_SHADER_BINARY_VIV 0x8FC4
#endif //GL_SHADER_BINARY_VIV
extern "C" {
}
namespace gl{
}
#endif

#endif
