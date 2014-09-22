#ifndef GL_HPP_gles1EXT_HPP
#define GL_HPP_gles1EXT_HPP
#include "common.hpp"


#ifndef GL_AMD_compressed_3DC_texture
#define GL_AMD_compressed_3DC_texture
#undef GL_3DC_X_AMD
static const GLenum GL_3DC_X_AMD=0x87F9
#undef GL_3DC_XY_AMD
static const GLenum GL_3DC_XY_AMD=0x87FA
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_AMD_compressed_ATC_texture
#define GL_AMD_compressed_ATC_texture
#undef GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD
static const GLenum GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD=0x87EE
#undef GL_ATC_RGB_AMD
static const GLenum GL_ATC_RGB_AMD=0x8C92
#undef GL_ATC_RGBA_EXPLICIT_ALPHA_AMD
static const GLenum GL_ATC_RGBA_EXPLICIT_ALPHA_AMD=0x8C93
extern "C" {
}
namespace gl{
}
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
#undef GL_DRAW_FRAMEBUFFER_BINDING_APPLE
static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_APPLE=0x8CA6
#undef GL_READ_FRAMEBUFFER_APPLE
static const GLenum GL_READ_FRAMEBUFFER_APPLE=0x8CA8
#undef GL_DRAW_FRAMEBUFFER_APPLE
static const GLenum GL_DRAW_FRAMEBUFFER_APPLE=0x8CA9
#undef GL_READ_FRAMEBUFFER_BINDING_APPLE
static const GLenum GL_READ_FRAMEBUFFER_BINDING_APPLE=0x8CAA
#undef GL_RENDERBUFFER_SAMPLES_APPLE
static const GLenum GL_RENDERBUFFER_SAMPLES_APPLE=0x8CAB
#undef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE=0x8D56
#undef GL_MAX_SAMPLES_APPLE
static const GLenum GL_MAX_SAMPLES_APPLE=0x8D57
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

#ifndef GL_APPLE_sync
#define GL_APPLE_sync
#undef GL_SYNC_FLUSH_COMMANDS_BIT_APPLE
static const GLenum GL_SYNC_FLUSH_COMMANDS_BIT_APPLE=0x00000001
#undef GL_SYNC_OBJECT_APPLE
static const GLenum GL_SYNC_OBJECT_APPLE=0x8A53
#undef GL_MAX_SERVER_WAIT_TIMEOUT_APPLE
static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT_APPLE=0x9111
#undef GL_OBJECT_TYPE_APPLE
static const GLenum GL_OBJECT_TYPE_APPLE=0x9112
#undef GL_SYNC_CONDITION_APPLE
static const GLenum GL_SYNC_CONDITION_APPLE=0x9113
#undef GL_SYNC_STATUS_APPLE
static const GLenum GL_SYNC_STATUS_APPLE=0x9114
#undef GL_SYNC_FLAGS_APPLE
static const GLenum GL_SYNC_FLAGS_APPLE=0x9115
#undef GL_SYNC_FENCE_APPLE
static const GLenum GL_SYNC_FENCE_APPLE=0x9116
#undef GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE
static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE=0x9117
#undef GL_UNSIGNALED_APPLE
static const GLenum GL_UNSIGNALED_APPLE=0x9118
#undef GL_SIGNALED_APPLE
static const GLenum GL_SIGNALED_APPLE=0x9119
#undef GL_ALREADY_SIGNALED_APPLE
static const GLenum GL_ALREADY_SIGNALED_APPLE=0x911A
#undef GL_TIMEOUT_EXPIRED_APPLE
static const GLenum GL_TIMEOUT_EXPIRED_APPLE=0x911B
#undef GL_CONDITION_SATISFIED_APPLE
static const GLenum GL_CONDITION_SATISFIED_APPLE=0x911C
#undef GL_WAIT_FAILED_APPLE
static const GLenum GL_WAIT_FAILED_APPLE=0x911D
#undef GL_TIMEOUT_IGNORED_APPLE
static const GLenum GL_TIMEOUT_IGNORED_APPLE=0xFFFFFFFFFFFFFFFF
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

#ifndef GL_APPLE_texture_2D_limited_npot
#define GL_APPLE_texture_2D_limited_npot
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888
#undef GL_BGRA_EXT
static const GLenum GL_BGRA_EXT=0x80E1
#undef GL_BGRA8_EXT
static const GLenum GL_BGRA8_EXT=0x93A1
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level
#undef GL_TEXTURE_MAX_LEVEL_APPLE
static const GLenum GL_TEXTURE_MAX_LEVEL_APPLE=0x813D
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

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax
#undef GL_FUNC_ADD_EXT
static const GLenum GL_FUNC_ADD_EXT=0x8006
#undef GL_MIN_EXT
static const GLenum GL_MIN_EXT=0x8007
#undef GL_MAX_EXT
static const GLenum GL_MAX_EXT=0x8008
#undef GL_BLEND_EQUATION_EXT
static const GLenum GL_BLEND_EQUATION_EXT=0x8009
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

#ifndef GL_EXT_discard_framebuffer
#define GL_EXT_discard_framebuffer
#undef GL_COLOR_EXT
static const GLenum GL_COLOR_EXT=0x1800
#undef GL_DEPTH_EXT
static const GLenum GL_DEPTH_EXT=0x1801
#undef GL_STENCIL_EXT
static const GLenum GL_STENCIL_EXT=0x1802
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

#ifndef GL_EXT_map_buffer_range
#define GL_EXT_map_buffer_range
#undef GL_MAP_READ_BIT_EXT
static const GLenum GL_MAP_READ_BIT_EXT=0x0001
#undef GL_MAP_WRITE_BIT_EXT
static const GLenum GL_MAP_WRITE_BIT_EXT=0x0002
#undef GL_MAP_INVALIDATE_RANGE_BIT_EXT
static const GLenum GL_MAP_INVALIDATE_RANGE_BIT_EXT=0x0004
#undef GL_MAP_INVALIDATE_BUFFER_BIT_EXT
static const GLenum GL_MAP_INVALIDATE_BUFFER_BIT_EXT=0x0008
#undef GL_MAP_FLUSH_EXPLICIT_BIT_EXT
static const GLenum GL_MAP_FLUSH_EXPLICIT_BIT_EXT=0x0010
#undef GL_MAP_UNSYNCHRONIZED_BIT_EXT
static const GLenum GL_MAP_UNSYNCHRONIZED_BIT_EXT=0x0020
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
#undef GL_RENDERBUFFER_SAMPLES_EXT
static const GLenum GL_RENDERBUFFER_SAMPLES_EXT=0x8CAB
#undef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT=0x8D56
#undef GL_MAX_SAMPLES_EXT
static const GLenum GL_MAX_SAMPLES_EXT=0x8D57
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT=0x8D6C
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

#ifndef GL_EXT_read_format_bgra
#define GL_EXT_read_format_bgra
#undef GL_BGRA_EXT
static const GLenum GL_BGRA_EXT=0x80E1
#undef GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT=0x8365
#undef GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT
static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT=0x8366
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_robustness
#define GL_EXT_robustness
#undef GL_NO_ERROR
static const GLenum GL_NO_ERROR=0
#undef GL_LOSE_CONTEXT_ON_RESET_EXT
static const GLenum GL_LOSE_CONTEXT_ON_RESET_EXT=0x8252
#undef GL_GUILTY_CONTEXT_RESET_EXT
static const GLenum GL_GUILTY_CONTEXT_RESET_EXT=0x8253
#undef GL_INNOCENT_CONTEXT_RESET_EXT
static const GLenum GL_INNOCENT_CONTEXT_RESET_EXT=0x8254
#undef GL_UNKNOWN_CONTEXT_RESET_EXT
static const GLenum GL_UNKNOWN_CONTEXT_RESET_EXT=0x8255
#undef GL_RESET_NOTIFICATION_STRATEGY_EXT
static const GLenum GL_RESET_NOTIFICATION_STRATEGY_EXT=0x8256
#undef GL_NO_RESET_NOTIFICATION_EXT
static const GLenum GL_NO_RESET_NOTIFICATION_EXT=0x8261
#undef GL_CONTEXT_ROBUST_ACCESS_EXT
static const GLenum GL_CONTEXT_ROBUST_ACCESS_EXT=0x90F3
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
#undef GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT=0x8210
#undef GL_SRGB_EXT
static const GLenum GL_SRGB_EXT=0x8C40
#undef GL_SRGB_ALPHA_EXT
static const GLenum GL_SRGB_ALPHA_EXT=0x8C42
#undef GL_SRGB8_ALPHA8_EXT
static const GLenum GL_SRGB8_ALPHA8_EXT=0x8C43
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_compression_dxt1
#define GL_EXT_texture_compression_dxt1
#undef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT=0x83F0
#undef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT=0x83F1
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic
#undef GL_TEXTURE_MAX_ANISOTROPY_EXT
static const GLenum GL_TEXTURE_MAX_ANISOTROPY_EXT=0x84FE
#undef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
static const GLenum GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT=0x84FF
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_format_BGRA8888
#define GL_EXT_texture_format_BGRA8888
#undef GL_BGRA_EXT
static const GLenum GL_BGRA_EXT=0x80E1
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias
#undef GL_MAX_TEXTURE_LOD_BIAS_EXT
static const GLenum GL_MAX_TEXTURE_LOD_BIAS_EXT=0x84FD
#undef GL_TEXTURE_FILTER_CONTROL_EXT
static const GLenum GL_TEXTURE_FILTER_CONTROL_EXT=0x8500
#undef GL_TEXTURE_LOD_BIAS_EXT
static const GLenum GL_TEXTURE_LOD_BIAS_EXT=0x8501
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_EXT_texture_storage
#define GL_EXT_texture_storage
#undef GL_ALPHA8_EXT
static const GLenum GL_ALPHA8_EXT=0x803C
#undef GL_LUMINANCE8_EXT
static const GLenum GL_LUMINANCE8_EXT=0x8040
#undef GL_LUMINANCE8_ALPHA8_EXT
static const GLenum GL_LUMINANCE8_ALPHA8_EXT=0x8045
#undef GL_RGB10_EXT
static const GLenum GL_RGB10_EXT=0x8052
#undef GL_RGB10_A2_EXT
static const GLenum GL_RGB10_A2_EXT=0x8059
#undef GL_R8_EXT
static const GLenum GL_R8_EXT=0x8229
#undef GL_RG8_EXT
static const GLenum GL_RG8_EXT=0x822B
#undef GL_R16F_EXT
static const GLenum GL_R16F_EXT=0x822D
#undef GL_R32F_EXT
static const GLenum GL_R32F_EXT=0x822E
#undef GL_RG16F_EXT
static const GLenum GL_RG16F_EXT=0x822F
#undef GL_RG32F_EXT
static const GLenum GL_RG32F_EXT=0x8230
#undef GL_RGBA32F_EXT
static const GLenum GL_RGBA32F_EXT=0x8814
#undef GL_RGB32F_EXT
static const GLenum GL_RGB32F_EXT=0x8815
#undef GL_ALPHA32F_EXT
static const GLenum GL_ALPHA32F_EXT=0x8816
#undef GL_LUMINANCE32F_EXT
static const GLenum GL_LUMINANCE32F_EXT=0x8818
#undef GL_LUMINANCE_ALPHA32F_EXT
static const GLenum GL_LUMINANCE_ALPHA32F_EXT=0x8819
#undef GL_RGBA16F_EXT
static const GLenum GL_RGBA16F_EXT=0x881A
#undef GL_RGB16F_EXT
static const GLenum GL_RGB16F_EXT=0x881B
#undef GL_ALPHA16F_EXT
static const GLenum GL_ALPHA16F_EXT=0x881C
#undef GL_LUMINANCE16F_EXT
static const GLenum GL_LUMINANCE16F_EXT=0x881E
#undef GL_LUMINANCE_ALPHA16F_EXT
static const GLenum GL_LUMINANCE_ALPHA16F_EXT=0x881F
#undef GL_TEXTURE_IMMUTABLE_FORMAT_EXT
static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT_EXT=0x912F
#undef GL_BGRA8_EXT
static const GLenum GL_BGRA8_EXT=0x93A1
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

#ifndef GL_IMG_multisampled_render_to_texture
#define GL_IMG_multisampled_render_to_texture
#undef GL_RENDERBUFFER_SAMPLES_IMG
static const GLenum GL_RENDERBUFFER_SAMPLES_IMG=0x9133
#undef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG=0x9134
#undef GL_MAX_SAMPLES_IMG
static const GLenum GL_MAX_SAMPLES_IMG=0x9135
#undef GL_TEXTURE_SAMPLES_IMG
static const GLenum GL_TEXTURE_SAMPLES_IMG=0x9136
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

#ifndef GL_IMG_read_format
#define GL_IMG_read_format
#undef GL_BGRA_IMG
static const GLenum GL_BGRA_IMG=0x80E1
#undef GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG=0x8365
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_texture_compression_pvrtc
#define GL_IMG_texture_compression_pvrtc
#undef GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG
static const GLenum GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG=0x8C00
#undef GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG
static const GLenum GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG=0x8C01
#undef GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
static const GLenum GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG=0x8C02
#undef GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
static const GLenum GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG=0x8C03
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_texture_env_enhanced_fixed_function
#define GL_IMG_texture_env_enhanced_fixed_function
#undef GL_DOT3_RGBA_IMG
static const GLenum GL_DOT3_RGBA_IMG=0x86AF
#undef GL_MODULATE_COLOR_IMG
static const GLenum GL_MODULATE_COLOR_IMG=0x8C04
#undef GL_RECIP_ADD_SIGNED_ALPHA_IMG
static const GLenum GL_RECIP_ADD_SIGNED_ALPHA_IMG=0x8C05
#undef GL_TEXTURE_ALPHA_MODULATE_IMG
static const GLenum GL_TEXTURE_ALPHA_MODULATE_IMG=0x8C06
#undef GL_FACTOR_ALPHA_MODULATE_IMG
static const GLenum GL_FACTOR_ALPHA_MODULATE_IMG=0x8C07
#undef GL_FRAGMENT_ALPHA_MODULATE_IMG
static const GLenum GL_FRAGMENT_ALPHA_MODULATE_IMG=0x8C08
#undef GL_ADD_BLEND_IMG
static const GLenum GL_ADD_BLEND_IMG=0x8C09
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_IMG_user_clip_plane
#define GL_IMG_user_clip_plane
#undef GL_MAX_CLIP_PLANES_IMG
static const GLenum GL_MAX_CLIP_PLANES_IMG=0x0D32
#undef GL_CLIP_PLANE0_IMG
static const GLenum GL_CLIP_PLANE0_IMG=0x3000
#undef GL_CLIP_PLANE1_IMG
static const GLenum GL_CLIP_PLANE1_IMG=0x3001
#undef GL_CLIP_PLANE2_IMG
static const GLenum GL_CLIP_PLANE2_IMG=0x3002
#undef GL_CLIP_PLANE3_IMG
static const GLenum GL_CLIP_PLANE3_IMG=0x3003
#undef GL_CLIP_PLANE4_IMG
static const GLenum GL_CLIP_PLANE4_IMG=0x3004
#undef GL_CLIP_PLANE5_IMG
static const GLenum GL_CLIP_PLANE5_IMG=0x3005
extern "C" {
}
namespace gl{

typedef void (*PFNGLCLIPPLANEFIMGPROC_HPP)(GLenum,const GLfloat *);
static inline void ClipPlanefIMG(GLenum p1,const GLfloat * eqn1)
{
	static PFNGLCLIPPLANEFIMGPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEFIMGPROC_HPP>(_impl::_get_proc_address("glClipPlanefIMG","GL_IMG_user_clip_plane"));
	 fn(p1,eqn1);
}
typedef void (*PFNGLCLIPPLANEXIMGPROC_HPP)(GLenum,const GLfixed *);
static inline void ClipPlanexIMG(GLenum p1,const GLfixed * eqn1)
{
	static PFNGLCLIPPLANEXIMGPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEXIMGPROC_HPP>(_impl::_get_proc_address("glClipPlanexIMG","GL_IMG_user_clip_plane"));
	 fn(p1,eqn1);
}}
#endif

#ifndef GL_NV_fence
#define GL_NV_fence
#undef GL_ALL_COMPLETED_NV
static const GLenum GL_ALL_COMPLETED_NV=0x84F2
#undef GL_FENCE_STATUS_NV
static const GLenum GL_FENCE_STATUS_NV=0x84F3
#undef GL_FENCE_CONDITION_NV
static const GLenum GL_FENCE_CONDITION_NV=0x84F4
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
#undef GL_TEXTURE_EXTERNAL_OES
static const GLenum GL_TEXTURE_EXTERNAL_OES=0x8D65
#undef GL_SAMPLER_EXTERNAL_OES
static const GLenum GL_SAMPLER_EXTERNAL_OES=0x8D66
#undef GL_TEXTURE_BINDING_EXTERNAL_OES
static const GLenum GL_TEXTURE_BINDING_EXTERNAL_OES=0x8D67
#undef GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES
static const GLenum GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES=0x8D68
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_blend_equation_separate
#define GL_OES_blend_equation_separate
#undef GL_BLEND_EQUATION_RGB_OES
static const GLenum GL_BLEND_EQUATION_RGB_OES=0x8009
#undef GL_BLEND_EQUATION_ALPHA_OES
static const GLenum GL_BLEND_EQUATION_ALPHA_OES=0x883D
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDEQUATIONSEPARATEOESPROC_HPP)(GLenum,GLenum);
static inline void BlendEquationSeparateOES(GLenum modeRGB1,GLenum modeAlpha1)
{
	static PFNGLBLENDEQUATIONSEPARATEOESPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEOESPROC_HPP>(_impl::_get_proc_address("glBlendEquationSeparateOES","GL_OES_blend_equation_separate"));
	 fn(modeRGB1,modeAlpha1);
}}
#endif

#ifndef GL_OES_blend_func_separate
#define GL_OES_blend_func_separate
#undef GL_BLEND_DST_RGB_OES
static const GLenum GL_BLEND_DST_RGB_OES=0x80C8
#undef GL_BLEND_SRC_RGB_OES
static const GLenum GL_BLEND_SRC_RGB_OES=0x80C9
#undef GL_BLEND_DST_ALPHA_OES
static const GLenum GL_BLEND_DST_ALPHA_OES=0x80CA
#undef GL_BLEND_SRC_ALPHA_OES
static const GLenum GL_BLEND_SRC_ALPHA_OES=0x80CB
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDFUNCSEPARATEOESPROC_HPP)(GLenum,GLenum,GLenum,GLenum);
static inline void BlendFuncSeparateOES(GLenum srcRGB1,GLenum dstRGB1,GLenum srcAlpha1,GLenum dstAlpha1)
{
	static PFNGLBLENDFUNCSEPARATEOESPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCSEPARATEOESPROC_HPP>(_impl::_get_proc_address("glBlendFuncSeparateOES","GL_OES_blend_func_separate"));
	 fn(srcRGB1,dstRGB1,srcAlpha1,dstAlpha1);
}}
#endif

#ifndef GL_OES_blend_subtract
#define GL_OES_blend_subtract
#undef GL_FUNC_ADD_OES
static const GLenum GL_FUNC_ADD_OES=0x8006
#undef GL_BLEND_EQUATION_OES
static const GLenum GL_BLEND_EQUATION_OES=0x8009
#undef GL_FUNC_SUBTRACT_OES
static const GLenum GL_FUNC_SUBTRACT_OES=0x800A
#undef GL_FUNC_REVERSE_SUBTRACT_OES
static const GLenum GL_FUNC_REVERSE_SUBTRACT_OES=0x800B
extern "C" {
}
namespace gl{

typedef void (*PFNGLBLENDEQUATIONOESPROC_HPP)(GLenum);
static inline void BlendEquationOES(GLenum mode1)
{
	static PFNGLBLENDEQUATIONOESPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONOESPROC_HPP>(_impl::_get_proc_address("glBlendEquationOES","GL_OES_blend_subtract"));
	 fn(mode1);
}}
#endif

#ifndef GL_OES_byte_coordinates
#define GL_OES_byte_coordinates
#undef GL_BYTE
static const GLenum GL_BYTE=0x1400
extern "C" {
}
namespace gl{

typedef void (*PFNGLMULTITEXCOORD1BOESPROC_HPP)(GLenum,GLbyte);
static inline void MultiTexCoord1bOES(GLenum texture1,GLbyte s1)
{
	static PFNGLMULTITEXCOORD1BOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1BOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1bOES","GL_OES_byte_coordinates"));
	 fn(texture1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1BVOESPROC_HPP)(GLenum,const GLbyte *);
static inline void MultiTexCoord1bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD1BVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1BVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1bvOES","GL_OES_byte_coordinates"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD2BOESPROC_HPP)(GLenum,GLbyte,GLbyte);
static inline void MultiTexCoord2bOES(GLenum texture1,GLbyte s1,GLbyte t1)
{
	static PFNGLMULTITEXCOORD2BOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2BOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2bOES","GL_OES_byte_coordinates"));
	 fn(texture1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2BVOESPROC_HPP)(GLenum,const GLbyte *);
static inline void MultiTexCoord2bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD2BVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2BVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2bvOES","GL_OES_byte_coordinates"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD3BOESPROC_HPP)(GLenum,GLbyte,GLbyte,GLbyte);
static inline void MultiTexCoord3bOES(GLenum texture1,GLbyte s1,GLbyte t1,GLbyte r1)
{
	static PFNGLMULTITEXCOORD3BOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3BOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3bOES","GL_OES_byte_coordinates"));
	 fn(texture1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3BVOESPROC_HPP)(GLenum,const GLbyte *);
static inline void MultiTexCoord3bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD3BVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3BVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3bvOES","GL_OES_byte_coordinates"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD4BOESPROC_HPP)(GLenum,GLbyte,GLbyte,GLbyte,GLbyte);
static inline void MultiTexCoord4bOES(GLenum texture1,GLbyte s1,GLbyte t1,GLbyte r1,GLbyte q1)
{
	static PFNGLMULTITEXCOORD4BOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4BOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4bOES","GL_OES_byte_coordinates"));
	 fn(texture1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4BVOESPROC_HPP)(GLenum,const GLbyte *);
static inline void MultiTexCoord4bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD4BVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4BVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4bvOES","GL_OES_byte_coordinates"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLTEXCOORD1BOESPROC_HPP)(GLbyte);
static inline void TexCoord1bOES(GLbyte s1)
{
	static PFNGLTEXCOORD1BOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1BOESPROC_HPP>(_impl::_get_proc_address("glTexCoord1bOES","GL_OES_byte_coordinates"));
	 fn(s1);
}
typedef void (*PFNGLTEXCOORD1BVOESPROC_HPP)(const GLbyte *);
static inline void TexCoord1bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD1BVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1BVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord1bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD2BOESPROC_HPP)(GLbyte,GLbyte);
static inline void TexCoord2bOES(GLbyte s1,GLbyte t1)
{
	static PFNGLTEXCOORD2BOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2BOESPROC_HPP>(_impl::_get_proc_address("glTexCoord2bOES","GL_OES_byte_coordinates"));
	 fn(s1,t1);
}
typedef void (*PFNGLTEXCOORD2BVOESPROC_HPP)(const GLbyte *);
static inline void TexCoord2bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD2BVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2BVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord2bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD3BOESPROC_HPP)(GLbyte,GLbyte,GLbyte);
static inline void TexCoord3bOES(GLbyte s1,GLbyte t1,GLbyte r1)
{
	static PFNGLTEXCOORD3BOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3BOESPROC_HPP>(_impl::_get_proc_address("glTexCoord3bOES","GL_OES_byte_coordinates"));
	 fn(s1,t1,r1);
}
typedef void (*PFNGLTEXCOORD3BVOESPROC_HPP)(const GLbyte *);
static inline void TexCoord3bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD3BVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3BVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord3bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD4BOESPROC_HPP)(GLbyte,GLbyte,GLbyte,GLbyte);
static inline void TexCoord4bOES(GLbyte s1,GLbyte t1,GLbyte r1,GLbyte q1)
{
	static PFNGLTEXCOORD4BOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4BOESPROC_HPP>(_impl::_get_proc_address("glTexCoord4bOES","GL_OES_byte_coordinates"));
	 fn(s1,t1,r1,q1);
}
typedef void (*PFNGLTEXCOORD4BVOESPROC_HPP)(const GLbyte *);
static inline void TexCoord4bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD4BVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4BVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord4bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLVERTEX2BOESPROC_HPP)(GLbyte,GLbyte);
static inline void Vertex2bOES(GLbyte x1,GLbyte y1)
{
	static PFNGLVERTEX2BOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2BOESPROC_HPP>(_impl::_get_proc_address("glVertex2bOES","GL_OES_byte_coordinates"));
	 fn(x1,y1);
}
typedef void (*PFNGLVERTEX2BVOESPROC_HPP)(const GLbyte *);
static inline void Vertex2bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX2BVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2BVOESPROC_HPP>(_impl::_get_proc_address("glVertex2bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLVERTEX3BOESPROC_HPP)(GLbyte,GLbyte,GLbyte);
static inline void Vertex3bOES(GLbyte x1,GLbyte y1,GLbyte z1)
{
	static PFNGLVERTEX3BOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3BOESPROC_HPP>(_impl::_get_proc_address("glVertex3bOES","GL_OES_byte_coordinates"));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLVERTEX3BVOESPROC_HPP)(const GLbyte *);
static inline void Vertex3bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX3BVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3BVOESPROC_HPP>(_impl::_get_proc_address("glVertex3bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}
typedef void (*PFNGLVERTEX4BOESPROC_HPP)(GLbyte,GLbyte,GLbyte,GLbyte);
static inline void Vertex4bOES(GLbyte x1,GLbyte y1,GLbyte z1,GLbyte w1)
{
	static PFNGLVERTEX4BOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4BOESPROC_HPP>(_impl::_get_proc_address("glVertex4bOES","GL_OES_byte_coordinates"));
	 fn(x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEX4BVOESPROC_HPP)(const GLbyte *);
static inline void Vertex4bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX4BVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4BVOESPROC_HPP>(_impl::_get_proc_address("glVertex4bvOES","GL_OES_byte_coordinates"));
	 fn(coords1);
}}
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
#undef GL_ETC1_RGB8_OES
static const GLenum GL_ETC1_RGB8_OES=0x8D64
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture
#undef GL_PALETTE4_RGB8_OES
static const GLenum GL_PALETTE4_RGB8_OES=0x8B90
#undef GL_PALETTE4_RGBA8_OES
static const GLenum GL_PALETTE4_RGBA8_OES=0x8B91
#undef GL_PALETTE4_R5_G6_B5_OES
static const GLenum GL_PALETTE4_R5_G6_B5_OES=0x8B92
#undef GL_PALETTE4_RGBA4_OES
static const GLenum GL_PALETTE4_RGBA4_OES=0x8B93
#undef GL_PALETTE4_RGB5_A1_OES
static const GLenum GL_PALETTE4_RGB5_A1_OES=0x8B94
#undef GL_PALETTE8_RGB8_OES
static const GLenum GL_PALETTE8_RGB8_OES=0x8B95
#undef GL_PALETTE8_RGBA8_OES
static const GLenum GL_PALETTE8_RGBA8_OES=0x8B96
#undef GL_PALETTE8_R5_G6_B5_OES
static const GLenum GL_PALETTE8_R5_G6_B5_OES=0x8B97
#undef GL_PALETTE8_RGBA4_OES
static const GLenum GL_PALETTE8_RGBA4_OES=0x8B98
#undef GL_PALETTE8_RGB5_A1_OES
static const GLenum GL_PALETTE8_RGB5_A1_OES=0x8B99
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_depth24
#define GL_OES_depth24
#undef GL_DEPTH_COMPONENT24_OES
static const GLenum GL_DEPTH_COMPONENT24_OES=0x81A6
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_depth32
#define GL_OES_depth32
#undef GL_DEPTH_COMPONENT32_OES
static const GLenum GL_DEPTH_COMPONENT32_OES=0x81A7
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_draw_texture
#define GL_OES_draw_texture
#undef GL_TEXTURE_CROP_RECT_OES
static const GLenum GL_TEXTURE_CROP_RECT_OES=0x8B9D
extern "C" {
}
namespace gl{

typedef void (*PFNGLDRAWTEXFOESPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void DrawTexfOES(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat width1,GLfloat height1)
{
	static PFNGLDRAWTEXFOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXFOESPROC_HPP>(_impl::_get_proc_address("glDrawTexfOES","GL_OES_draw_texture"));
	 fn(x1,y1,z1,width1,height1);
}
typedef void (*PFNGLDRAWTEXFVOESPROC_HPP)(const GLfloat *);
static inline void DrawTexfvOES(const GLfloat * coords1)
{
	static PFNGLDRAWTEXFVOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXFVOESPROC_HPP>(_impl::_get_proc_address("glDrawTexfvOES","GL_OES_draw_texture"));
	 fn(coords1);
}
typedef void (*PFNGLDRAWTEXIOESPROC_HPP)(GLint,GLint,GLint,GLint,GLint);
static inline void DrawTexiOES(GLint x1,GLint y1,GLint z1,GLint width1,GLint height1)
{
	static PFNGLDRAWTEXIOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXIOESPROC_HPP>(_impl::_get_proc_address("glDrawTexiOES","GL_OES_draw_texture"));
	 fn(x1,y1,z1,width1,height1);
}
typedef void (*PFNGLDRAWTEXIVOESPROC_HPP)(const GLint *);
static inline void DrawTexivOES(const GLint * coords1)
{
	static PFNGLDRAWTEXIVOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXIVOESPROC_HPP>(_impl::_get_proc_address("glDrawTexivOES","GL_OES_draw_texture"));
	 fn(coords1);
}
typedef void (*PFNGLDRAWTEXSOESPROC_HPP)(GLshort,GLshort,GLshort,GLshort,GLshort);
static inline void DrawTexsOES(GLshort x1,GLshort y1,GLshort z1,GLshort width1,GLshort height1)
{
	static PFNGLDRAWTEXSOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXSOESPROC_HPP>(_impl::_get_proc_address("glDrawTexsOES","GL_OES_draw_texture"));
	 fn(x1,y1,z1,width1,height1);
}
typedef void (*PFNGLDRAWTEXSVOESPROC_HPP)(const GLshort *);
static inline void DrawTexsvOES(const GLshort * coords1)
{
	static PFNGLDRAWTEXSVOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXSVOESPROC_HPP>(_impl::_get_proc_address("glDrawTexsvOES","GL_OES_draw_texture"));
	 fn(coords1);
}
typedef void (*PFNGLDRAWTEXXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void DrawTexxOES(GLfixed x1,GLfixed y1,GLfixed z1,GLfixed width1,GLfixed height1)
{
	static PFNGLDRAWTEXXOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXXOESPROC_HPP>(_impl::_get_proc_address("glDrawTexxOES","GL_OES_draw_texture"));
	 fn(x1,y1,z1,width1,height1);
}
typedef void (*PFNGLDRAWTEXXVOESPROC_HPP)(const GLfixed *);
static inline void DrawTexxvOES(const GLfixed * coords1)
{
	static PFNGLDRAWTEXXVOESPROC_HPP fn=reinterpret_cast<PFNGLDRAWTEXXVOESPROC_HPP>(_impl::_get_proc_address("glDrawTexxvOES","GL_OES_draw_texture"));
	 fn(coords1);
}}
#endif

#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint
#undef GL_UNSIGNED_INT
static const GLenum GL_UNSIGNED_INT=0x1405
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_extended_matrix_palette
#define GL_OES_extended_matrix_palette
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

#ifndef GL_OES_fixed_point
#define GL_OES_fixed_point
#undef GL_FIXED_OES
static const GLenum GL_FIXED_OES=0x140C
extern "C" {
}
namespace gl{

typedef void (*PFNGLACCUMXOESPROC_HPP)(GLenum,GLfixed);
static inline void AccumxOES(GLenum op1,GLfixed value1)
{
	static PFNGLACCUMXOESPROC_HPP fn=reinterpret_cast<PFNGLACCUMXOESPROC_HPP>(_impl::_get_proc_address("glAccumxOES","GL_OES_fixed_point"));
	 fn(op1,value1);
}
typedef void (*PFNGLALPHAFUNCXOESPROC_HPP)(GLenum,GLfixed);
static inline void AlphaFuncxOES(GLenum func1,GLfixed ref1)
{
	static PFNGLALPHAFUNCXOESPROC_HPP fn=reinterpret_cast<PFNGLALPHAFUNCXOESPROC_HPP>(_impl::_get_proc_address("glAlphaFuncxOES","GL_OES_fixed_point"));
	 fn(func1,ref1);
}
typedef void (*PFNGLBITMAPXOESPROC_HPP)(GLsizei,GLsizei,GLfixed,GLfixed,GLfixed,GLfixed,const GLubyte *);
static inline void BitmapxOES(GLsizei width1,GLsizei height1,GLfixed xorig1,GLfixed yorig1,GLfixed xmove1,GLfixed ymove1,const GLubyte * bitmap1)
{
	static PFNGLBITMAPXOESPROC_HPP fn=reinterpret_cast<PFNGLBITMAPXOESPROC_HPP>(_impl::_get_proc_address("glBitmapxOES","GL_OES_fixed_point"));
	 fn(width1,height1,xorig1,yorig1,xmove1,ymove1,bitmap1);
}
typedef void (*PFNGLBLENDCOLORXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void BlendColorxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLBLENDCOLORXOESPROC_HPP fn=reinterpret_cast<PFNGLBLENDCOLORXOESPROC_HPP>(_impl::_get_proc_address("glBlendColorxOES","GL_OES_fixed_point"));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARACCUMXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void ClearAccumxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCLEARACCUMXOESPROC_HPP fn=reinterpret_cast<PFNGLCLEARACCUMXOESPROC_HPP>(_impl::_get_proc_address("glClearAccumxOES","GL_OES_fixed_point"));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARCOLORXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void ClearColorxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCLEARCOLORXOESPROC_HPP fn=reinterpret_cast<PFNGLCLEARCOLORXOESPROC_HPP>(_impl::_get_proc_address("glClearColorxOES","GL_OES_fixed_point"));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARDEPTHXOESPROC_HPP)(GLfixed);
static inline void ClearDepthxOES(GLfixed depth1)
{
	static PFNGLCLEARDEPTHXOESPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHXOESPROC_HPP>(_impl::_get_proc_address("glClearDepthxOES","GL_OES_fixed_point"));
	 fn(depth1);
}
typedef void (*PFNGLCLIPPLANEXOESPROC_HPP)(GLenum,const GLfixed *);
static inline void ClipPlanexOES(GLenum plane1,const GLfixed * equation1)
{
	static PFNGLCLIPPLANEXOESPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEXOESPROC_HPP>(_impl::_get_proc_address("glClipPlanexOES","GL_OES_fixed_point"));
	 fn(plane1,equation1);
}
typedef void (*PFNGLCOLOR3XOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Color3xOES(GLfixed red1,GLfixed green1,GLfixed blue1)
{
	static PFNGLCOLOR3XOESPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3XOESPROC_HPP>(_impl::_get_proc_address("glColor3xOES","GL_OES_fixed_point"));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLCOLOR3XVOESPROC_HPP)(const GLfixed *);
static inline void Color3xvOES(const GLfixed * components1)
{
	static PFNGLCOLOR3XVOESPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3XVOESPROC_HPP>(_impl::_get_proc_address("glColor3xvOES","GL_OES_fixed_point"));
	 fn(components1);
}
typedef void (*PFNGLCOLOR4XOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void Color4xOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCOLOR4XOESPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4XOESPROC_HPP>(_impl::_get_proc_address("glColor4xOES","GL_OES_fixed_point"));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCOLOR4XVOESPROC_HPP)(const GLfixed *);
static inline void Color4xvOES(const GLfixed * components1)
{
	static PFNGLCOLOR4XVOESPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4XVOESPROC_HPP>(_impl::_get_proc_address("glColor4xvOES","GL_OES_fixed_point"));
	 fn(components1);
}
typedef void (*PFNGLCONVOLUTIONPARAMETERXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void ConvolutionParameterxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLCONVOLUTIONPARAMETERXOESPROC_HPP fn=reinterpret_cast<PFNGLCONVOLUTIONPARAMETERXOESPROC_HPP>(_impl::_get_proc_address("glConvolutionParameterxOES","GL_OES_fixed_point"));
	 fn(target1,pname1,param1);
}
typedef void (*PFNGLCONVOLUTIONPARAMETERXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void ConvolutionParameterxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLCONVOLUTIONPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLCONVOLUTIONPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glConvolutionParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLDEPTHRANGEXOESPROC_HPP)(GLfixed,GLfixed);
static inline void DepthRangexOES(GLfixed n1,GLfixed f1)
{
	static PFNGLDEPTHRANGEXOESPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEXOESPROC_HPP>(_impl::_get_proc_address("glDepthRangexOES","GL_OES_fixed_point"));
	 fn(n1,f1);
}
typedef void (*PFNGLEVALCOORD1XOESPROC_HPP)(GLfixed);
static inline void EvalCoord1xOES(GLfixed u1)
{
	static PFNGLEVALCOORD1XOESPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1XOESPROC_HPP>(_impl::_get_proc_address("glEvalCoord1xOES","GL_OES_fixed_point"));
	 fn(u1);
}
typedef void (*PFNGLEVALCOORD1XVOESPROC_HPP)(const GLfixed *);
static inline void EvalCoord1xvOES(const GLfixed * coords1)
{
	static PFNGLEVALCOORD1XVOESPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1XVOESPROC_HPP>(_impl::_get_proc_address("glEvalCoord1xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLEVALCOORD2XOESPROC_HPP)(GLfixed,GLfixed);
static inline void EvalCoord2xOES(GLfixed u1,GLfixed v1)
{
	static PFNGLEVALCOORD2XOESPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2XOESPROC_HPP>(_impl::_get_proc_address("glEvalCoord2xOES","GL_OES_fixed_point"));
	 fn(u1,v1);
}
typedef void (*PFNGLEVALCOORD2XVOESPROC_HPP)(const GLfixed *);
static inline void EvalCoord2xvOES(const GLfixed * coords1)
{
	static PFNGLEVALCOORD2XVOESPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2XVOESPROC_HPP>(_impl::_get_proc_address("glEvalCoord2xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLFEEDBACKBUFFERXOESPROC_HPP)(GLsizei,GLenum,const GLfixed *);
static inline void FeedbackBufferxOES(GLsizei n1,GLenum type1,const GLfixed * buffer1)
{
	static PFNGLFEEDBACKBUFFERXOESPROC_HPP fn=reinterpret_cast<PFNGLFEEDBACKBUFFERXOESPROC_HPP>(_impl::_get_proc_address("glFeedbackBufferxOES","GL_OES_fixed_point"));
	 fn(n1,type1,buffer1);
}
typedef void (*PFNGLFOGXOESPROC_HPP)(GLenum,GLfixed);
static inline void FogxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLFOGXOESPROC_HPP fn=reinterpret_cast<PFNGLFOGXOESPROC_HPP>(_impl::_get_proc_address("glFogxOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLFOGXVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void FogxvOES(GLenum pname1,const GLfixed * param1)
{
	static PFNGLFOGXVOESPROC_HPP fn=reinterpret_cast<PFNGLFOGXVOESPROC_HPP>(_impl::_get_proc_address("glFogxvOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLFRUSTUMXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void FrustumxOES(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLFRUSTUMXOESPROC_HPP fn=reinterpret_cast<PFNGLFRUSTUMXOESPROC_HPP>(_impl::_get_proc_address("glFrustumxOES","GL_OES_fixed_point"));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLGETCLIPPLANEXOESPROC_HPP)(GLenum,GLfixed *);
static inline void GetClipPlanexOES(GLenum plane1,GLfixed * equation1)
{
	static PFNGLGETCLIPPLANEXOESPROC_HPP fn=reinterpret_cast<PFNGLGETCLIPPLANEXOESPROC_HPP>(_impl::_get_proc_address("glGetClipPlanexOES","GL_OES_fixed_point"));
	 fn(plane1,equation1);
}
typedef void (*PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetConvolutionParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glGetConvolutionParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETFIXEDVOESPROC_HPP)(GLenum,GLfixed *);
static inline void GetFixedvOES(GLenum pname1,GLfixed * params1)
{
	static PFNGLGETFIXEDVOESPROC_HPP fn=reinterpret_cast<PFNGLGETFIXEDVOESPROC_HPP>(_impl::_get_proc_address("glGetFixedvOES","GL_OES_fixed_point"));
	 fn(pname1,params1);
}
typedef void (*PFNGLGETHISTOGRAMPARAMETERXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetHistogramParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETHISTOGRAMPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glGetHistogramParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETLIGHTXOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetLightxOES(GLenum light1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETLIGHTXOESPROC_HPP fn=reinterpret_cast<PFNGLGETLIGHTXOESPROC_HPP>(_impl::_get_proc_address("glGetLightxOES","GL_OES_fixed_point"));
	 fn(light1,pname1,params1);
}
typedef void (*PFNGLGETLIGHTXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetLightxvOES(GLenum light1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETLIGHTXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETLIGHTXVOESPROC_HPP>(_impl::_get_proc_address("glGetLightxvOES","GL_OES_fixed_point"));
	 fn(light1,pname1,params1);
}
typedef void (*PFNGLGETMAPXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetMapxvOES(GLenum target1,GLenum query1,GLfixed * v1)
{
	static PFNGLGETMAPXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETMAPXVOESPROC_HPP>(_impl::_get_proc_address("glGetMapxvOES","GL_OES_fixed_point"));
	 fn(target1,query1,v1);
}
typedef void (*PFNGLGETMATERIALXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void GetMaterialxOES(GLenum face1,GLenum pname1,GLfixed param1)
{
	static PFNGLGETMATERIALXOESPROC_HPP fn=reinterpret_cast<PFNGLGETMATERIALXOESPROC_HPP>(_impl::_get_proc_address("glGetMaterialxOES","GL_OES_fixed_point"));
	 fn(face1,pname1,param1);
}
typedef void (*PFNGLGETMATERIALXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetMaterialxvOES(GLenum face1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETMATERIALXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETMATERIALXVOESPROC_HPP>(_impl::_get_proc_address("glGetMaterialxvOES","GL_OES_fixed_point"));
	 fn(face1,pname1,params1);
}
typedef void (*PFNGLGETPIXELMAPXVPROC_HPP)(GLenum,GLint,GLfixed *);
static inline void GetPixelMapxv(GLenum map1,GLint size1,GLfixed * values1)
{
	static PFNGLGETPIXELMAPXVPROC_HPP fn=reinterpret_cast<PFNGLGETPIXELMAPXVPROC_HPP>(_impl::_get_proc_address("glGetPixelMapxv","GL_OES_fixed_point"));
	 fn(map1,size1,values1);
}
typedef void (*PFNGLGETTEXENVXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexEnvxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXENVXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXENVXVOESPROC_HPP>(_impl::_get_proc_address("glGetTexEnvxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETTEXGENXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexGenxvOES(GLenum coord1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXGENXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENXVOESPROC_HPP>(_impl::_get_proc_address("glGetTexGenxvOES","GL_OES_fixed_point"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLGETTEXLEVELPARAMETERXVOESPROC_HPP)(GLenum,GLint,GLenum,GLfixed *);
static inline void GetTexLevelParameterxvOES(GLenum target1,GLint level1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXLEVELPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXLEVELPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glGetTexLevelParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,level1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glGetTexParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLINDEXXOESPROC_HPP)(GLfixed);
static inline void IndexxOES(GLfixed component1)
{
	static PFNGLINDEXXOESPROC_HPP fn=reinterpret_cast<PFNGLINDEXXOESPROC_HPP>(_impl::_get_proc_address("glIndexxOES","GL_OES_fixed_point"));
	 fn(component1);
}
typedef void (*PFNGLINDEXXVOESPROC_HPP)(const GLfixed *);
static inline void IndexxvOES(const GLfixed * component1)
{
	static PFNGLINDEXXVOESPROC_HPP fn=reinterpret_cast<PFNGLINDEXXVOESPROC_HPP>(_impl::_get_proc_address("glIndexxvOES","GL_OES_fixed_point"));
	 fn(component1);
}
typedef void (*PFNGLLIGHTMODELXOESPROC_HPP)(GLenum,GLfixed);
static inline void LightModelxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTMODELXOESPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELXOESPROC_HPP>(_impl::_get_proc_address("glLightModelxOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLLIGHTMODELXVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void LightModelxvOES(GLenum pname1,const GLfixed * param1)
{
	static PFNGLLIGHTMODELXVOESPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELXVOESPROC_HPP>(_impl::_get_proc_address("glLightModelxvOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLLIGHTXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void LightxOES(GLenum light1,GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTXOESPROC_HPP fn=reinterpret_cast<PFNGLLIGHTXOESPROC_HPP>(_impl::_get_proc_address("glLightxOES","GL_OES_fixed_point"));
	 fn(light1,pname1,param1);
}
typedef void (*PFNGLLIGHTXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void LightxvOES(GLenum light1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLLIGHTXVOESPROC_HPP fn=reinterpret_cast<PFNGLLIGHTXVOESPROC_HPP>(_impl::_get_proc_address("glLightxvOES","GL_OES_fixed_point"));
	 fn(light1,pname1,params1);
}
typedef void (*PFNGLLINEWIDTHXOESPROC_HPP)(GLfixed);
static inline void LineWidthxOES(GLfixed width1)
{
	static PFNGLLINEWIDTHXOESPROC_HPP fn=reinterpret_cast<PFNGLLINEWIDTHXOESPROC_HPP>(_impl::_get_proc_address("glLineWidthxOES","GL_OES_fixed_point"));
	 fn(width1);
}
typedef void (*PFNGLLOADMATRIXXOESPROC_HPP)(const GLfixed *);
static inline void LoadMatrixxOES(const GLfixed * m1)
{
	static PFNGLLOADMATRIXXOESPROC_HPP fn=reinterpret_cast<PFNGLLOADMATRIXXOESPROC_HPP>(_impl::_get_proc_address("glLoadMatrixxOES","GL_OES_fixed_point"));
	 fn(m1);
}
typedef void (*PFNGLLOADTRANSPOSEMATRIXXOESPROC_HPP)(const GLfixed *);
static inline void LoadTransposeMatrixxOES(const GLfixed * m1)
{
	static PFNGLLOADTRANSPOSEMATRIXXOESPROC_HPP fn=reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXXOESPROC_HPP>(_impl::_get_proc_address("glLoadTransposeMatrixxOES","GL_OES_fixed_point"));
	 fn(m1);
}
typedef void (*PFNGLMAP1XOESPROC_HPP)(GLenum,GLfixed,GLfixed,GLint,GLint,GLfixed);
static inline void Map1xOES(GLenum target1,GLfixed u11,GLfixed u21,GLint stride1,GLint order1,GLfixed points1)
{
	static PFNGLMAP1XOESPROC_HPP fn=reinterpret_cast<PFNGLMAP1XOESPROC_HPP>(_impl::_get_proc_address("glMap1xOES","GL_OES_fixed_point"));
	 fn(target1,u11,u21,stride1,order1,points1);
}
typedef void (*PFNGLMAP2XOESPROC_HPP)(GLenum,GLfixed,GLfixed,GLint,GLint,GLfixed,GLfixed,GLint,GLint,GLfixed);
static inline void Map2xOES(GLenum target1,GLfixed u11,GLfixed u21,GLint ustride1,GLint uorder1,GLfixed v11,GLfixed v21,GLint vstride1,GLint vorder1,GLfixed points1)
{
	static PFNGLMAP2XOESPROC_HPP fn=reinterpret_cast<PFNGLMAP2XOESPROC_HPP>(_impl::_get_proc_address("glMap2xOES","GL_OES_fixed_point"));
	 fn(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
typedef void (*PFNGLMAPGRID1XOESPROC_HPP)(GLint,GLfixed,GLfixed);
static inline void MapGrid1xOES(GLint n1,GLfixed u11,GLfixed u21)
{
	static PFNGLMAPGRID1XOESPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID1XOESPROC_HPP>(_impl::_get_proc_address("glMapGrid1xOES","GL_OES_fixed_point"));
	 fn(n1,u11,u21);
}
typedef void (*PFNGLMAPGRID2XOESPROC_HPP)(GLint,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void MapGrid2xOES(GLint n1,GLfixed u11,GLfixed u21,GLfixed v11,GLfixed v21)
{
	static PFNGLMAPGRID2XOESPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID2XOESPROC_HPP>(_impl::_get_proc_address("glMapGrid2xOES","GL_OES_fixed_point"));
	 fn(n1,u11,u21,v11,v21);
}
typedef void (*PFNGLMATERIALXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void MaterialxOES(GLenum face1,GLenum pname1,GLfixed param1)
{
	static PFNGLMATERIALXOESPROC_HPP fn=reinterpret_cast<PFNGLMATERIALXOESPROC_HPP>(_impl::_get_proc_address("glMaterialxOES","GL_OES_fixed_point"));
	 fn(face1,pname1,param1);
}
typedef void (*PFNGLMATERIALXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void MaterialxvOES(GLenum face1,GLenum pname1,const GLfixed * param1)
{
	static PFNGLMATERIALXVOESPROC_HPP fn=reinterpret_cast<PFNGLMATERIALXVOESPROC_HPP>(_impl::_get_proc_address("glMaterialxvOES","GL_OES_fixed_point"));
	 fn(face1,pname1,param1);
}
typedef void (*PFNGLMULTMATRIXXOESPROC_HPP)(const GLfixed *);
static inline void MultMatrixxOES(const GLfixed * m1)
{
	static PFNGLMULTMATRIXXOESPROC_HPP fn=reinterpret_cast<PFNGLMULTMATRIXXOESPROC_HPP>(_impl::_get_proc_address("glMultMatrixxOES","GL_OES_fixed_point"));
	 fn(m1);
}
typedef void (*PFNGLMULTTRANSPOSEMATRIXXOESPROC_HPP)(const GLfixed *);
static inline void MultTransposeMatrixxOES(const GLfixed * m1)
{
	static PFNGLMULTTRANSPOSEMATRIXXOESPROC_HPP fn=reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXXOESPROC_HPP>(_impl::_get_proc_address("glMultTransposeMatrixxOES","GL_OES_fixed_point"));
	 fn(m1);
}
typedef void (*PFNGLMULTITEXCOORD1XOESPROC_HPP)(GLenum,GLfixed);
static inline void MultiTexCoord1xOES(GLenum texture1,GLfixed s1)
{
	static PFNGLMULTITEXCOORD1XOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1XOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1xOES","GL_OES_fixed_point"));
	 fn(texture1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1XVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void MultiTexCoord1xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD1XVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1XVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1xvOES","GL_OES_fixed_point"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD2XOESPROC_HPP)(GLenum,GLfixed,GLfixed);
static inline void MultiTexCoord2xOES(GLenum texture1,GLfixed s1,GLfixed t1)
{
	static PFNGLMULTITEXCOORD2XOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2XOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2xOES","GL_OES_fixed_point"));
	 fn(texture1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2XVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void MultiTexCoord2xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD2XVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2XVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2xvOES","GL_OES_fixed_point"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD3XOESPROC_HPP)(GLenum,GLfixed,GLfixed,GLfixed);
static inline void MultiTexCoord3xOES(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1)
{
	static PFNGLMULTITEXCOORD3XOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3XOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3xOES","GL_OES_fixed_point"));
	 fn(texture1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3XVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void MultiTexCoord3xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD3XVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3XVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3xvOES","GL_OES_fixed_point"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLMULTITEXCOORD4XOESPROC_HPP)(GLenum,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void MultiTexCoord4xOES(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
	static PFNGLMULTITEXCOORD4XOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4XOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4xOES","GL_OES_fixed_point"));
	 fn(texture1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4XVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void MultiTexCoord4xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD4XVOESPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4XVOESPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4xvOES","GL_OES_fixed_point"));
	 fn(texture1,coords1);
}
typedef void (*PFNGLNORMAL3XOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Normal3xOES(GLfixed nx1,GLfixed ny1,GLfixed nz1)
{
	static PFNGLNORMAL3XOESPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3XOESPROC_HPP>(_impl::_get_proc_address("glNormal3xOES","GL_OES_fixed_point"));
	 fn(nx1,ny1,nz1);
}
typedef void (*PFNGLNORMAL3XVOESPROC_HPP)(const GLfixed *);
static inline void Normal3xvOES(const GLfixed * coords1)
{
	static PFNGLNORMAL3XVOESPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3XVOESPROC_HPP>(_impl::_get_proc_address("glNormal3xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLORTHOXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void OrthoxOES(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLORTHOXOESPROC_HPP fn=reinterpret_cast<PFNGLORTHOXOESPROC_HPP>(_impl::_get_proc_address("glOrthoxOES","GL_OES_fixed_point"));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLPASSTHROUGHXOESPROC_HPP)(GLfixed);
static inline void PassThroughxOES(GLfixed token1)
{
	static PFNGLPASSTHROUGHXOESPROC_HPP fn=reinterpret_cast<PFNGLPASSTHROUGHXOESPROC_HPP>(_impl::_get_proc_address("glPassThroughxOES","GL_OES_fixed_point"));
	 fn(token1);
}
typedef void (*PFNGLPIXELMAPXPROC_HPP)(GLenum,GLint,const GLfixed *);
static inline void PixelMapx(GLenum map1,GLint size1,const GLfixed * values1)
{
	static PFNGLPIXELMAPXPROC_HPP fn=reinterpret_cast<PFNGLPIXELMAPXPROC_HPP>(_impl::_get_proc_address("glPixelMapx","GL_OES_fixed_point"));
	 fn(map1,size1,values1);
}
typedef void (*PFNGLPIXELSTOREXPROC_HPP)(GLenum,GLfixed);
static inline void PixelStorex(GLenum pname1,GLfixed param1)
{
	static PFNGLPIXELSTOREXPROC_HPP fn=reinterpret_cast<PFNGLPIXELSTOREXPROC_HPP>(_impl::_get_proc_address("glPixelStorex","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLPIXELTRANSFERXOESPROC_HPP)(GLenum,GLfixed);
static inline void PixelTransferxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLPIXELTRANSFERXOESPROC_HPP fn=reinterpret_cast<PFNGLPIXELTRANSFERXOESPROC_HPP>(_impl::_get_proc_address("glPixelTransferxOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLPIXELZOOMXOESPROC_HPP)(GLfixed,GLfixed);
static inline void PixelZoomxOES(GLfixed xfactor1,GLfixed yfactor1)
{
	static PFNGLPIXELZOOMXOESPROC_HPP fn=reinterpret_cast<PFNGLPIXELZOOMXOESPROC_HPP>(_impl::_get_proc_address("glPixelZoomxOES","GL_OES_fixed_point"));
	 fn(xfactor1,yfactor1);
}
typedef void (*PFNGLPOINTPARAMETERXOESPROC_HPP)(GLenum,GLfixed);
static inline void PointParameterxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLPOINTPARAMETERXOESPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERXOESPROC_HPP>(_impl::_get_proc_address("glPointParameterxOES","GL_OES_fixed_point"));
	 fn(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERXVOESPROC_HPP)(GLenum,const GLfixed *);
static inline void PointParameterxvOES(GLenum pname1,const GLfixed * params1)
{
	static PFNGLPOINTPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glPointParameterxvOES","GL_OES_fixed_point"));
	 fn(pname1,params1);
}
typedef void (*PFNGLPOINTSIZEXOESPROC_HPP)(GLfixed);
static inline void PointSizexOES(GLfixed size1)
{
	static PFNGLPOINTSIZEXOESPROC_HPP fn=reinterpret_cast<PFNGLPOINTSIZEXOESPROC_HPP>(_impl::_get_proc_address("glPointSizexOES","GL_OES_fixed_point"));
	 fn(size1);
}
typedef void (*PFNGLPOLYGONOFFSETXOESPROC_HPP)(GLfixed,GLfixed);
static inline void PolygonOffsetxOES(GLfixed factor1,GLfixed units1)
{
	static PFNGLPOLYGONOFFSETXOESPROC_HPP fn=reinterpret_cast<PFNGLPOLYGONOFFSETXOESPROC_HPP>(_impl::_get_proc_address("glPolygonOffsetxOES","GL_OES_fixed_point"));
	 fn(factor1,units1);
}
typedef void (*PFNGLPRIORITIZETEXTURESXOESPROC_HPP)(GLsizei,const GLuint *,const GLfixed *);
static inline void PrioritizeTexturesxOES(GLsizei n1,const GLuint * textures1,const GLfixed * priorities1)
{
	static PFNGLPRIORITIZETEXTURESXOESPROC_HPP fn=reinterpret_cast<PFNGLPRIORITIZETEXTURESXOESPROC_HPP>(_impl::_get_proc_address("glPrioritizeTexturesxOES","GL_OES_fixed_point"));
	 fn(n1,textures1,priorities1);
}
typedef void (*PFNGLRASTERPOS2XOESPROC_HPP)(GLfixed,GLfixed);
static inline void RasterPos2xOES(GLfixed x1,GLfixed y1)
{
	static PFNGLRASTERPOS2XOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2XOESPROC_HPP>(_impl::_get_proc_address("glRasterPos2xOES","GL_OES_fixed_point"));
	 fn(x1,y1);
}
typedef void (*PFNGLRASTERPOS2XVOESPROC_HPP)(const GLfixed *);
static inline void RasterPos2xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS2XVOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2XVOESPROC_HPP>(_impl::_get_proc_address("glRasterPos2xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLRASTERPOS3XOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void RasterPos3xOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLRASTERPOS3XOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3XOESPROC_HPP>(_impl::_get_proc_address("glRasterPos3xOES","GL_OES_fixed_point"));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLRASTERPOS3XVOESPROC_HPP)(const GLfixed *);
static inline void RasterPos3xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS3XVOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3XVOESPROC_HPP>(_impl::_get_proc_address("glRasterPos3xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLRASTERPOS4XOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void RasterPos4xOES(GLfixed x1,GLfixed y1,GLfixed z1,GLfixed w1)
{
	static PFNGLRASTERPOS4XOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4XOESPROC_HPP>(_impl::_get_proc_address("glRasterPos4xOES","GL_OES_fixed_point"));
	 fn(x1,y1,z1,w1);
}
typedef void (*PFNGLRASTERPOS4XVOESPROC_HPP)(const GLfixed *);
static inline void RasterPos4xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS4XVOESPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4XVOESPROC_HPP>(_impl::_get_proc_address("glRasterPos4xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLRECTXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void RectxOES(GLfixed x11,GLfixed y11,GLfixed x21,GLfixed y21)
{
	static PFNGLRECTXOESPROC_HPP fn=reinterpret_cast<PFNGLRECTXOESPROC_HPP>(_impl::_get_proc_address("glRectxOES","GL_OES_fixed_point"));
	 fn(x11,y11,x21,y21);
}
typedef void (*PFNGLRECTXVOESPROC_HPP)(const GLfixed *,const GLfixed *);
static inline void RectxvOES(const GLfixed * v11,const GLfixed * v21)
{
	static PFNGLRECTXVOESPROC_HPP fn=reinterpret_cast<PFNGLRECTXVOESPROC_HPP>(_impl::_get_proc_address("glRectxvOES","GL_OES_fixed_point"));
	 fn(v11,v21);
}
typedef void (*PFNGLROTATEXOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void RotatexOES(GLfixed angle1,GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLROTATEXOESPROC_HPP fn=reinterpret_cast<PFNGLROTATEXOESPROC_HPP>(_impl::_get_proc_address("glRotatexOES","GL_OES_fixed_point"));
	 fn(angle1,x1,y1,z1);
}
typedef void (*PFNGLSAMPLECOVERAGEOESPROC_HPP)(GLfixed,GLboolean);
static inline void SampleCoverageOES(GLfixed value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEOESPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEOESPROC_HPP>(_impl::_get_proc_address("glSampleCoverageOES","GL_OES_fixed_point"));
	 fn(value1,invert1);
}
typedef void (*PFNGLSAMPLECOVERAGEXOESPROC_HPP)(GLclampx,GLboolean);
static inline void SampleCoveragexOES(GLclampx value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEXOESPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEXOESPROC_HPP>(_impl::_get_proc_address("glSampleCoveragexOES","GL_OES_fixed_point"));
	 fn(value1,invert1);
}
typedef void (*PFNGLSCALEXOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void ScalexOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLSCALEXOESPROC_HPP fn=reinterpret_cast<PFNGLSCALEXOESPROC_HPP>(_impl::_get_proc_address("glScalexOES","GL_OES_fixed_point"));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLTEXCOORD1XOESPROC_HPP)(GLfixed);
static inline void TexCoord1xOES(GLfixed s1)
{
	static PFNGLTEXCOORD1XOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1XOESPROC_HPP>(_impl::_get_proc_address("glTexCoord1xOES","GL_OES_fixed_point"));
	 fn(s1);
}
typedef void (*PFNGLTEXCOORD1XVOESPROC_HPP)(const GLfixed *);
static inline void TexCoord1xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD1XVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1XVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord1xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD2XOESPROC_HPP)(GLfixed,GLfixed);
static inline void TexCoord2xOES(GLfixed s1,GLfixed t1)
{
	static PFNGLTEXCOORD2XOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2XOESPROC_HPP>(_impl::_get_proc_address("glTexCoord2xOES","GL_OES_fixed_point"));
	 fn(s1,t1);
}
typedef void (*PFNGLTEXCOORD2XVOESPROC_HPP)(const GLfixed *);
static inline void TexCoord2xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD2XVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2XVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord2xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD3XOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void TexCoord3xOES(GLfixed s1,GLfixed t1,GLfixed r1)
{
	static PFNGLTEXCOORD3XOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3XOESPROC_HPP>(_impl::_get_proc_address("glTexCoord3xOES","GL_OES_fixed_point"));
	 fn(s1,t1,r1);
}
typedef void (*PFNGLTEXCOORD3XVOESPROC_HPP)(const GLfixed *);
static inline void TexCoord3xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD3XVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3XVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord3xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLTEXCOORD4XOESPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void TexCoord4xOES(GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
	static PFNGLTEXCOORD4XOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4XOESPROC_HPP>(_impl::_get_proc_address("glTexCoord4xOES","GL_OES_fixed_point"));
	 fn(s1,t1,r1,q1);
}
typedef void (*PFNGLTEXCOORD4XVOESPROC_HPP)(const GLfixed *);
static inline void TexCoord4xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD4XVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4XVOESPROC_HPP>(_impl::_get_proc_address("glTexCoord4xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLTEXENVXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexEnvxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXENVXOESPROC_HPP fn=reinterpret_cast<PFNGLTEXENVXOESPROC_HPP>(_impl::_get_proc_address("glTexEnvxOES","GL_OES_fixed_point"));
	 fn(target1,pname1,param1);
}
typedef void (*PFNGLTEXENVXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexEnvxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXENVXVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXENVXVOESPROC_HPP>(_impl::_get_proc_address("glTexEnvxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLTEXGENXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexGenxOES(GLenum coord1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXGENXOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENXOESPROC_HPP>(_impl::_get_proc_address("glTexGenxOES","GL_OES_fixed_point"));
	 fn(coord1,pname1,param1);
}
typedef void (*PFNGLTEXGENXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexGenxvOES(GLenum coord1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXGENXVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENXVOESPROC_HPP>(_impl::_get_proc_address("glTexGenxvOES","GL_OES_fixed_point"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLTEXPARAMETERXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexParameterxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXPARAMETERXOESPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERXOESPROC_HPP>(_impl::_get_proc_address("glTexParameterxOES","GL_OES_fixed_point"));
	 fn(target1,pname1,param1);
}
typedef void (*PFNGLTEXPARAMETERXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexParameterxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXPARAMETERXVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERXVOESPROC_HPP>(_impl::_get_proc_address("glTexParameterxvOES","GL_OES_fixed_point"));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLTRANSLATEXOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void TranslatexOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLTRANSLATEXOESPROC_HPP fn=reinterpret_cast<PFNGLTRANSLATEXOESPROC_HPP>(_impl::_get_proc_address("glTranslatexOES","GL_OES_fixed_point"));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLVERTEX2XOESPROC_HPP)(GLfixed);
static inline void Vertex2xOES(GLfixed x1)
{
	static PFNGLVERTEX2XOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2XOESPROC_HPP>(_impl::_get_proc_address("glVertex2xOES","GL_OES_fixed_point"));
	 fn(x1);
}
typedef void (*PFNGLVERTEX2XVOESPROC_HPP)(const GLfixed *);
static inline void Vertex2xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX2XVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2XVOESPROC_HPP>(_impl::_get_proc_address("glVertex2xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLVERTEX3XOESPROC_HPP)(GLfixed,GLfixed);
static inline void Vertex3xOES(GLfixed x1,GLfixed y1)
{
	static PFNGLVERTEX3XOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3XOESPROC_HPP>(_impl::_get_proc_address("glVertex3xOES","GL_OES_fixed_point"));
	 fn(x1,y1);
}
typedef void (*PFNGLVERTEX3XVOESPROC_HPP)(const GLfixed *);
static inline void Vertex3xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX3XVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3XVOESPROC_HPP>(_impl::_get_proc_address("glVertex3xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}
typedef void (*PFNGLVERTEX4XOESPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Vertex4xOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLVERTEX4XOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4XOESPROC_HPP>(_impl::_get_proc_address("glVertex4xOES","GL_OES_fixed_point"));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLVERTEX4XVOESPROC_HPP)(const GLfixed *);
static inline void Vertex4xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX4XVOESPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4XVOESPROC_HPP>(_impl::_get_proc_address("glVertex4xvOES","GL_OES_fixed_point"));
	 fn(coords1);
}}
#endif

#ifndef GL_OES_framebuffer_object
#define GL_OES_framebuffer_object
#undef GL_NONE_OES
static const GLenum GL_NONE_OES=0
#undef GL_INVALID_FRAMEBUFFER_OPERATION_OES
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION_OES=0x0506
#undef GL_RGBA4_OES
static const GLenum GL_RGBA4_OES=0x8056
#undef GL_RGB5_A1_OES
static const GLenum GL_RGB5_A1_OES=0x8057
#undef GL_DEPTH_COMPONENT16_OES
static const GLenum GL_DEPTH_COMPONENT16_OES=0x81A5
#undef GL_MAX_RENDERBUFFER_SIZE_OES
static const GLenum GL_MAX_RENDERBUFFER_SIZE_OES=0x84E8
#undef GL_FRAMEBUFFER_BINDING_OES
static const GLenum GL_FRAMEBUFFER_BINDING_OES=0x8CA6
#undef GL_RENDERBUFFER_BINDING_OES
static const GLenum GL_RENDERBUFFER_BINDING_OES=0x8CA7
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES=0x8CD0
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES=0x8CD1
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES=0x8CD2
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES=0x8CD3
#undef GL_FRAMEBUFFER_COMPLETE_OES
static const GLenum GL_FRAMEBUFFER_COMPLETE_OES=0x8CD5
#undef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES=0x8CD6
#undef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES=0x8CD7
#undef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES=0x8CD9
#undef GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES=0x8CDA
#undef GL_FRAMEBUFFER_UNSUPPORTED_OES
static const GLenum GL_FRAMEBUFFER_UNSUPPORTED_OES=0x8CDD
#undef GL_COLOR_ATTACHMENT0_OES
static const GLenum GL_COLOR_ATTACHMENT0_OES=0x8CE0
#undef GL_DEPTH_ATTACHMENT_OES
static const GLenum GL_DEPTH_ATTACHMENT_OES=0x8D00
#undef GL_STENCIL_ATTACHMENT_OES
static const GLenum GL_STENCIL_ATTACHMENT_OES=0x8D20
#undef GL_FRAMEBUFFER_OES
static const GLenum GL_FRAMEBUFFER_OES=0x8D40
#undef GL_RENDERBUFFER_OES
static const GLenum GL_RENDERBUFFER_OES=0x8D41
#undef GL_RENDERBUFFER_WIDTH_OES
static const GLenum GL_RENDERBUFFER_WIDTH_OES=0x8D42
#undef GL_RENDERBUFFER_HEIGHT_OES
static const GLenum GL_RENDERBUFFER_HEIGHT_OES=0x8D43
#undef GL_RENDERBUFFER_INTERNAL_FORMAT_OES
static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT_OES=0x8D44
#undef GL_RENDERBUFFER_RED_SIZE_OES
static const GLenum GL_RENDERBUFFER_RED_SIZE_OES=0x8D50
#undef GL_RENDERBUFFER_GREEN_SIZE_OES
static const GLenum GL_RENDERBUFFER_GREEN_SIZE_OES=0x8D51
#undef GL_RENDERBUFFER_BLUE_SIZE_OES
static const GLenum GL_RENDERBUFFER_BLUE_SIZE_OES=0x8D52
#undef GL_RENDERBUFFER_ALPHA_SIZE_OES
static const GLenum GL_RENDERBUFFER_ALPHA_SIZE_OES=0x8D53
#undef GL_RENDERBUFFER_DEPTH_SIZE_OES
static const GLenum GL_RENDERBUFFER_DEPTH_SIZE_OES=0x8D54
#undef GL_RENDERBUFFER_STENCIL_SIZE_OES
static const GLenum GL_RENDERBUFFER_STENCIL_SIZE_OES=0x8D55
#undef GL_RGB565_OES
static const GLenum GL_RGB565_OES=0x8D62
extern "C" {
}
namespace gl{

typedef void (*PFNGLBINDFRAMEBUFFEROESPROC_HPP)(GLenum,GLuint);
static inline void BindFramebufferOES(GLenum target1,GLuint framebuffer1)
{
	static PFNGLBINDFRAMEBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLBINDFRAMEBUFFEROESPROC_HPP>(_impl::_get_proc_address("glBindFramebufferOES","GL_OES_framebuffer_object"));
	 fn(target1,framebuffer1);
}
typedef void (*PFNGLBINDRENDERBUFFEROESPROC_HPP)(GLenum,GLuint);
static inline void BindRenderbufferOES(GLenum target1,GLuint renderbuffer1)
{
	static PFNGLBINDRENDERBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLBINDRENDERBUFFEROESPROC_HPP>(_impl::_get_proc_address("glBindRenderbufferOES","GL_OES_framebuffer_object"));
	 fn(target1,renderbuffer1);
}
typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_HPP)(GLenum);
static inline GLenum CheckFramebufferStatusOES(GLenum target1)
{
	static PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_HPP fn=reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_HPP>(_impl::_get_proc_address("glCheckFramebufferStatusOES","GL_OES_framebuffer_object"));
	return fn(target1);
}
typedef void (*PFNGLDELETEFRAMEBUFFERSOESPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteFramebuffersOES(GLsizei n1,const GLuint * framebuffers1)
{
	static PFNGLDELETEFRAMEBUFFERSOESPROC_HPP fn=reinterpret_cast<PFNGLDELETEFRAMEBUFFERSOESPROC_HPP>(_impl::_get_proc_address("glDeleteFramebuffersOES","GL_OES_framebuffer_object"));
	 fn(n1,framebuffers1);
}
typedef void (*PFNGLDELETERENDERBUFFERSOESPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteRenderbuffersOES(GLsizei n1,const GLuint * renderbuffers1)
{
	static PFNGLDELETERENDERBUFFERSOESPROC_HPP fn=reinterpret_cast<PFNGLDELETERENDERBUFFERSOESPROC_HPP>(_impl::_get_proc_address("glDeleteRenderbuffersOES","GL_OES_framebuffer_object"));
	 fn(n1,renderbuffers1);
}
typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_HPP)(GLenum,GLenum,GLenum,GLuint);
static inline void FramebufferRenderbufferOES(GLenum target1,GLenum attachment1,GLenum renderbuffertarget1,GLuint renderbuffer1)
{
	static PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_HPP>(_impl::_get_proc_address("glFramebufferRenderbufferOES","GL_OES_framebuffer_object"));
	 fn(target1,attachment1,renderbuffertarget1,renderbuffer1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DOESPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint);
static inline void FramebufferTexture2DOES(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DOESPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DOESPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture2DOES","GL_OES_framebuffer_object"));
	 fn(target1,attachment1,textarget1,texture1,level1);
}
typedef void (*PFNGLGENFRAMEBUFFERSOESPROC_HPP)(GLsizei,GLuint *);
static inline void GenFramebuffersOES(GLsizei n1,GLuint * framebuffers1)
{
	static PFNGLGENFRAMEBUFFERSOESPROC_HPP fn=reinterpret_cast<PFNGLGENFRAMEBUFFERSOESPROC_HPP>(_impl::_get_proc_address("glGenFramebuffersOES","GL_OES_framebuffer_object"));
	 fn(n1,framebuffers1);
}
typedef void (*PFNGLGENRENDERBUFFERSOESPROC_HPP)(GLsizei,GLuint *);
static inline void GenRenderbuffersOES(GLsizei n1,GLuint * renderbuffers1)
{
	static PFNGLGENRENDERBUFFERSOESPROC_HPP fn=reinterpret_cast<PFNGLGENRENDERBUFFERSOESPROC_HPP>(_impl::_get_proc_address("glGenRenderbuffersOES","GL_OES_framebuffer_object"));
	 fn(n1,renderbuffers1);
}
typedef void (*PFNGLGENERATEMIPMAPOESPROC_HPP)(GLenum);
static inline void GenerateMipmapOES(GLenum target1)
{
	static PFNGLGENERATEMIPMAPOESPROC_HPP fn=reinterpret_cast<PFNGLGENERATEMIPMAPOESPROC_HPP>(_impl::_get_proc_address("glGenerateMipmapOES","GL_OES_framebuffer_object"));
	 fn(target1);
}
typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_HPP)(GLenum,GLenum,GLenum,GLint *);
static inline void GetFramebufferAttachmentParameterivOES(GLenum target1,GLenum attachment1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_HPP fn=reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_HPP>(_impl::_get_proc_address("glGetFramebufferAttachmentParameterivOES","GL_OES_framebuffer_object"));
	 fn(target1,attachment1,pname1,params1);
}
typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetRenderbufferParameterivOES(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_HPP fn=reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_HPP>(_impl::_get_proc_address("glGetRenderbufferParameterivOES","GL_OES_framebuffer_object"));
	 fn(target1,pname1,params1);
}
typedef GLboolean (*PFNGLISFRAMEBUFFEROESPROC_HPP)(GLuint);
static inline GLboolean IsFramebufferOES(GLuint framebuffer1)
{
	static PFNGLISFRAMEBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLISFRAMEBUFFEROESPROC_HPP>(_impl::_get_proc_address("glIsFramebufferOES","GL_OES_framebuffer_object"));
	return fn(framebuffer1);
}
typedef GLboolean (*PFNGLISRENDERBUFFEROESPROC_HPP)(GLuint);
static inline GLboolean IsRenderbufferOES(GLuint renderbuffer1)
{
	static PFNGLISRENDERBUFFEROESPROC_HPP fn=reinterpret_cast<PFNGLISRENDERBUFFEROESPROC_HPP>(_impl::_get_proc_address("glIsRenderbufferOES","GL_OES_framebuffer_object"));
	return fn(renderbuffer1);
}
typedef void (*PFNGLRENDERBUFFERSTORAGEOESPROC_HPP)(GLenum,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageOES(GLenum target1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEOESPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEOESPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageOES","GL_OES_framebuffer_object"));
	 fn(target1,internalformat1,width1,height1);
}}
#endif

#ifndef GL_OES_mapbuffer
#define GL_OES_mapbuffer
#undef GL_WRITE_ONLY_OES
static const GLenum GL_WRITE_ONLY_OES=0x88B9
#undef GL_BUFFER_ACCESS_OES
static const GLenum GL_BUFFER_ACCESS_OES=0x88BB
#undef GL_BUFFER_MAPPED_OES
static const GLenum GL_BUFFER_MAPPED_OES=0x88BC
#undef GL_BUFFER_MAP_POINTER_OES
static const GLenum GL_BUFFER_MAP_POINTER_OES=0x88BD
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

#ifndef GL_OES_matrix_get
#define GL_OES_matrix_get
#undef GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES
static const GLenum GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES=0x898D
#undef GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES
static const GLenum GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES=0x898E
#undef GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES
static const GLenum GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES=0x898F
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_matrix_palette
#define GL_OES_matrix_palette
#undef GL_MAX_VERTEX_UNITS_OES
static const GLenum GL_MAX_VERTEX_UNITS_OES=0x86A4
#undef GL_WEIGHT_ARRAY_TYPE_OES
static const GLenum GL_WEIGHT_ARRAY_TYPE_OES=0x86A9
#undef GL_WEIGHT_ARRAY_STRIDE_OES
static const GLenum GL_WEIGHT_ARRAY_STRIDE_OES=0x86AA
#undef GL_WEIGHT_ARRAY_SIZE_OES
static const GLenum GL_WEIGHT_ARRAY_SIZE_OES=0x86AB
#undef GL_WEIGHT_ARRAY_POINTER_OES
static const GLenum GL_WEIGHT_ARRAY_POINTER_OES=0x86AC
#undef GL_WEIGHT_ARRAY_OES
static const GLenum GL_WEIGHT_ARRAY_OES=0x86AD
#undef GL_MATRIX_PALETTE_OES
static const GLenum GL_MATRIX_PALETTE_OES=0x8840
#undef GL_MAX_PALETTE_MATRICES_OES
static const GLenum GL_MAX_PALETTE_MATRICES_OES=0x8842
#undef GL_CURRENT_PALETTE_MATRIX_OES
static const GLenum GL_CURRENT_PALETTE_MATRIX_OES=0x8843
#undef GL_MATRIX_INDEX_ARRAY_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_OES=0x8844
#undef GL_MATRIX_INDEX_ARRAY_SIZE_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_SIZE_OES=0x8846
#undef GL_MATRIX_INDEX_ARRAY_TYPE_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_TYPE_OES=0x8847
#undef GL_MATRIX_INDEX_ARRAY_STRIDE_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_STRIDE_OES=0x8848
#undef GL_MATRIX_INDEX_ARRAY_POINTER_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_POINTER_OES=0x8849
#undef GL_WEIGHT_ARRAY_BUFFER_BINDING_OES
static const GLenum GL_WEIGHT_ARRAY_BUFFER_BINDING_OES=0x889E
#undef GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES
static const GLenum GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES=0x8B9E
extern "C" {
}
namespace gl{

typedef void (*PFNGLCURRENTPALETTEMATRIXOESPROC_HPP)(GLuint);
static inline void CurrentPaletteMatrixOES(GLuint matrixpaletteindex1)
{
	static PFNGLCURRENTPALETTEMATRIXOESPROC_HPP fn=reinterpret_cast<PFNGLCURRENTPALETTEMATRIXOESPROC_HPP>(_impl::_get_proc_address("glCurrentPaletteMatrixOES","GL_OES_matrix_palette"));
	 fn(matrixpaletteindex1);
}
typedef void (*PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_HPP)();
static inline void LoadPaletteFromModelViewMatrixOES()
{
	static PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_HPP fn=reinterpret_cast<PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_HPP>(_impl::_get_proc_address("glLoadPaletteFromModelViewMatrixOES","GL_OES_matrix_palette"));
	 fn();
}
typedef void (*PFNGLMATRIXINDEXPOINTEROESPROC_HPP)(GLint,GLenum,GLsizei,const void *);
static inline void MatrixIndexPointerOES(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLMATRIXINDEXPOINTEROESPROC_HPP fn=reinterpret_cast<PFNGLMATRIXINDEXPOINTEROESPROC_HPP>(_impl::_get_proc_address("glMatrixIndexPointerOES","GL_OES_matrix_palette"));
	 fn(size1,type1,stride1,pointer1);
}
typedef void (*PFNGLWEIGHTPOINTEROESPROC_HPP)(GLint,GLenum,GLsizei,const void *);
static inline void WeightPointerOES(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLWEIGHTPOINTEROESPROC_HPP fn=reinterpret_cast<PFNGLWEIGHTPOINTEROESPROC_HPP>(_impl::_get_proc_address("glWeightPointerOES","GL_OES_matrix_palette"));
	 fn(size1,type1,stride1,pointer1);
}}
#endif

#ifndef GL_OES_packed_depth_stencil
#define GL_OES_packed_depth_stencil
#undef GL_DEPTH_STENCIL_OES
static const GLenum GL_DEPTH_STENCIL_OES=0x84F9
#undef GL_UNSIGNED_INT_24_8_OES
static const GLenum GL_UNSIGNED_INT_24_8_OES=0x84FA
#undef GL_DEPTH24_STENCIL8_OES
static const GLenum GL_DEPTH24_STENCIL8_OES=0x88F0
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_point_size_array
#define GL_OES_point_size_array
#undef GL_POINT_SIZE_ARRAY_TYPE_OES
static const GLenum GL_POINT_SIZE_ARRAY_TYPE_OES=0x898A
#undef GL_POINT_SIZE_ARRAY_STRIDE_OES
static const GLenum GL_POINT_SIZE_ARRAY_STRIDE_OES=0x898B
#undef GL_POINT_SIZE_ARRAY_POINTER_OES
static const GLenum GL_POINT_SIZE_ARRAY_POINTER_OES=0x898C
#undef GL_POINT_SIZE_ARRAY_OES
static const GLenum GL_POINT_SIZE_ARRAY_OES=0x8B9C
#undef GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES
static const GLenum GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES=0x8B9F
extern "C" {
}
namespace gl{

typedef void (*PFNGLPOINTSIZEPOINTEROESPROC_HPP)(GLenum,GLsizei,const void *);
static inline void PointSizePointerOES(GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLPOINTSIZEPOINTEROESPROC_HPP fn=reinterpret_cast<PFNGLPOINTSIZEPOINTEROESPROC_HPP>(_impl::_get_proc_address("glPointSizePointerOES","GL_OES_point_size_array"));
	 fn(type1,stride1,pointer1);
}}
#endif

#ifndef GL_OES_point_sprite
#define GL_OES_point_sprite
#undef GL_POINT_SPRITE_OES
static const GLenum GL_POINT_SPRITE_OES=0x8861
#undef GL_COORD_REPLACE_OES
static const GLenum GL_COORD_REPLACE_OES=0x8862
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_query_matrix
#define GL_OES_query_matrix
extern "C" {
}
namespace gl{

typedef GLbitfield (*PFNGLQUERYMATRIXXOESPROC_HPP)(GLfixed *,GLint *);
static inline GLbitfield QueryMatrixxOES(GLfixed * mantissa1,GLint * exponent1)
{
	static PFNGLQUERYMATRIXXOESPROC_HPP fn=reinterpret_cast<PFNGLQUERYMATRIXXOESPROC_HPP>(_impl::_get_proc_address("glQueryMatrixxOES","GL_OES_query_matrix"));
	return fn(mantissa1,exponent1);
}}
#endif

#ifndef GL_OES_read_format
#define GL_OES_read_format
#undef GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE_OES=0x8B9A
#undef GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES=0x8B9B
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_required_internalformat
#define GL_OES_required_internalformat
#undef GL_ALPHA8_OES
static const GLenum GL_ALPHA8_OES=0x803C
#undef GL_LUMINANCE8_OES
static const GLenum GL_LUMINANCE8_OES=0x8040
#undef GL_LUMINANCE4_ALPHA4_OES
static const GLenum GL_LUMINANCE4_ALPHA4_OES=0x8043
#undef GL_LUMINANCE8_ALPHA8_OES
static const GLenum GL_LUMINANCE8_ALPHA8_OES=0x8045
#undef GL_RGB8_OES
static const GLenum GL_RGB8_OES=0x8051
#undef GL_RGB10_EXT
static const GLenum GL_RGB10_EXT=0x8052
#undef GL_RGBA4_OES
static const GLenum GL_RGBA4_OES=0x8056
#undef GL_RGB5_A1_OES
static const GLenum GL_RGB5_A1_OES=0x8057
#undef GL_RGBA8_OES
static const GLenum GL_RGBA8_OES=0x8058
#undef GL_RGB10_A2_EXT
static const GLenum GL_RGB10_A2_EXT=0x8059
#undef GL_DEPTH_COMPONENT16_OES
static const GLenum GL_DEPTH_COMPONENT16_OES=0x81A5
#undef GL_DEPTH_COMPONENT24_OES
static const GLenum GL_DEPTH_COMPONENT24_OES=0x81A6
#undef GL_DEPTH_COMPONENT32_OES
static const GLenum GL_DEPTH_COMPONENT32_OES=0x81A7
#undef GL_DEPTH24_STENCIL8_OES
static const GLenum GL_DEPTH24_STENCIL8_OES=0x88F0
#undef GL_RGB565_OES
static const GLenum GL_RGB565_OES=0x8D62
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8
#undef GL_RGB8_OES
static const GLenum GL_RGB8_OES=0x8051
#undef GL_RGBA8_OES
static const GLenum GL_RGBA8_OES=0x8058
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_single_precision
#define GL_OES_single_precision
extern "C" {
}
namespace gl{

typedef void (*PFNGLCLEARDEPTHFOESPROC_HPP)(GLclampf);
static inline void ClearDepthfOES(GLclampf depth1)
{
	static PFNGLCLEARDEPTHFOESPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHFOESPROC_HPP>(_impl::_get_proc_address("glClearDepthfOES","GL_OES_single_precision"));
	 fn(depth1);
}
typedef void (*PFNGLCLIPPLANEFOESPROC_HPP)(GLenum,const GLfloat *);
static inline void ClipPlanefOES(GLenum plane1,const GLfloat * equation1)
{
	static PFNGLCLIPPLANEFOESPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEFOESPROC_HPP>(_impl::_get_proc_address("glClipPlanefOES","GL_OES_single_precision"));
	 fn(plane1,equation1);
}
typedef void (*PFNGLDEPTHRANGEFOESPROC_HPP)(GLclampf,GLclampf);
static inline void DepthRangefOES(GLclampf n1,GLclampf f1)
{
	static PFNGLDEPTHRANGEFOESPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEFOESPROC_HPP>(_impl::_get_proc_address("glDepthRangefOES","GL_OES_single_precision"));
	 fn(n1,f1);
}
typedef void (*PFNGLFRUSTUMFOESPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void FrustumfOES(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLFRUSTUMFOESPROC_HPP fn=reinterpret_cast<PFNGLFRUSTUMFOESPROC_HPP>(_impl::_get_proc_address("glFrustumfOES","GL_OES_single_precision"));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLGETCLIPPLANEFOESPROC_HPP)(GLenum,GLfloat *);
static inline void GetClipPlanefOES(GLenum plane1,GLfloat * equation1)
{
	static PFNGLGETCLIPPLANEFOESPROC_HPP fn=reinterpret_cast<PFNGLGETCLIPPLANEFOESPROC_HPP>(_impl::_get_proc_address("glGetClipPlanefOES","GL_OES_single_precision"));
	 fn(plane1,equation1);
}
typedef void (*PFNGLORTHOFOESPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void OrthofOES(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLORTHOFOESPROC_HPP fn=reinterpret_cast<PFNGLORTHOFOESPROC_HPP>(_impl::_get_proc_address("glOrthofOES","GL_OES_single_precision"));
	 fn(l1,r1,b1,t1,n1,f1);
}}
#endif

#ifndef GL_OES_stencil1
#define GL_OES_stencil1
#undef GL_STENCIL_INDEX1_OES
static const GLenum GL_STENCIL_INDEX1_OES=0x8D46
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_stencil4
#define GL_OES_stencil4
#undef GL_STENCIL_INDEX4_OES
static const GLenum GL_STENCIL_INDEX4_OES=0x8D47
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_stencil8
#define GL_OES_stencil8
#undef GL_STENCIL_INDEX8_OES
static const GLenum GL_STENCIL_INDEX8_OES=0x8D48
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_stencil_wrap
#define GL_OES_stencil_wrap
#undef GL_INCR_WRAP_OES
static const GLenum GL_INCR_WRAP_OES=0x8507
#undef GL_DECR_WRAP_OES
static const GLenum GL_DECR_WRAP_OES=0x8508
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_cube_map
#define GL_OES_texture_cube_map
#undef GL_TEXTURE_GEN_MODE_OES
static const GLenum GL_TEXTURE_GEN_MODE_OES=0x2500
#undef GL_NORMAL_MAP_OES
static const GLenum GL_NORMAL_MAP_OES=0x8511
#undef GL_REFLECTION_MAP_OES
static const GLenum GL_REFLECTION_MAP_OES=0x8512
#undef GL_TEXTURE_CUBE_MAP_OES
static const GLenum GL_TEXTURE_CUBE_MAP_OES=0x8513
#undef GL_TEXTURE_BINDING_CUBE_MAP_OES
static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_OES=0x8514
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES=0x8515
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES=0x8516
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES=0x8517
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES=0x8518
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES=0x8519
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES=0x851A
#undef GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES
static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES=0x851C
#undef GL_TEXTURE_GEN_STR_OES
static const GLenum GL_TEXTURE_GEN_STR_OES=0x8D60
extern "C" {
}
namespace gl{

typedef void (*PFNGLGETTEXGENFVOESPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetTexGenfvOES(GLenum coord1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXGENFVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENFVOESPROC_HPP>(_impl::_get_proc_address("glGetTexGenfvOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLGETTEXGENIVOESPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexGenivOES(GLenum coord1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXGENIVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENIVOESPROC_HPP>(_impl::_get_proc_address("glGetTexGenivOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLGETTEXGENXVOESPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexGenxvOES(GLenum coord1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXGENXVOESPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENXVOESPROC_HPP>(_impl::_get_proc_address("glGetTexGenxvOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLTEXGENFOESPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void TexGenfOES(GLenum coord1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXGENFOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENFOESPROC_HPP>(_impl::_get_proc_address("glTexGenfOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,param1);
}
typedef void (*PFNGLTEXGENFVOESPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void TexGenfvOES(GLenum coord1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXGENFVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENFVOESPROC_HPP>(_impl::_get_proc_address("glTexGenfvOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLTEXGENIOESPROC_HPP)(GLenum,GLenum,GLint);
static inline void TexGeniOES(GLenum coord1,GLenum pname1,GLint param1)
{
	static PFNGLTEXGENIOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENIOESPROC_HPP>(_impl::_get_proc_address("glTexGeniOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,param1);
}
typedef void (*PFNGLTEXGENIVOESPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexGenivOES(GLenum coord1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXGENIVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENIVOESPROC_HPP>(_impl::_get_proc_address("glTexGenivOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}
typedef void (*PFNGLTEXGENXOESPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexGenxOES(GLenum coord1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXGENXOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENXOESPROC_HPP>(_impl::_get_proc_address("glTexGenxOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,param1);
}
typedef void (*PFNGLTEXGENXVOESPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexGenxvOES(GLenum coord1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXGENXVOESPROC_HPP fn=reinterpret_cast<PFNGLTEXGENXVOESPROC_HPP>(_impl::_get_proc_address("glTexGenxvOES","GL_OES_texture_cube_map"));
	 fn(coord1,pname1,params1);
}}
#endif

#ifndef GL_OES_texture_env_crossbar
#define GL_OES_texture_env_crossbar
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_texture_mirrored_repeat
#define GL_OES_texture_mirrored_repeat
#undef GL_MIRRORED_REPEAT_OES
static const GLenum GL_MIRRORED_REPEAT_OES=0x8370
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object
#undef GL_VERTEX_ARRAY_BINDING_OES
static const GLenum GL_VERTEX_ARRAY_BINDING_OES=0x85B5
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
#undef GL_TEXTURE_WIDTH_QCOM
static const GLenum GL_TEXTURE_WIDTH_QCOM=0x8BD2
#undef GL_TEXTURE_HEIGHT_QCOM
static const GLenum GL_TEXTURE_HEIGHT_QCOM=0x8BD3
#undef GL_TEXTURE_DEPTH_QCOM
static const GLenum GL_TEXTURE_DEPTH_QCOM=0x8BD4
#undef GL_TEXTURE_INTERNAL_FORMAT_QCOM
static const GLenum GL_TEXTURE_INTERNAL_FORMAT_QCOM=0x8BD5
#undef GL_TEXTURE_FORMAT_QCOM
static const GLenum GL_TEXTURE_FORMAT_QCOM=0x8BD6
#undef GL_TEXTURE_TYPE_QCOM
static const GLenum GL_TEXTURE_TYPE_QCOM=0x8BD7
#undef GL_TEXTURE_IMAGE_VALID_QCOM
static const GLenum GL_TEXTURE_IMAGE_VALID_QCOM=0x8BD8
#undef GL_TEXTURE_NUM_LEVELS_QCOM
static const GLenum GL_TEXTURE_NUM_LEVELS_QCOM=0x8BD9
#undef GL_TEXTURE_TARGET_QCOM
static const GLenum GL_TEXTURE_TARGET_QCOM=0x8BDA
#undef GL_TEXTURE_OBJECT_VALID_QCOM
static const GLenum GL_TEXTURE_OBJECT_VALID_QCOM=0x8BDB
#undef GL_STATE_RESTORE
static const GLenum GL_STATE_RESTORE=0x8BDC
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
#undef GL_PERFMON_GLOBAL_MODE_QCOM
static const GLenum GL_PERFMON_GLOBAL_MODE_QCOM=0x8FA0
extern "C" {
}
namespace gl{
}
#endif

#ifndef GL_QCOM_tiled_rendering
#define GL_QCOM_tiled_rendering
#undef GL_COLOR_BUFFER_BIT0_QCOM
static const GLenum GL_COLOR_BUFFER_BIT0_QCOM=0x00000001
#undef GL_COLOR_BUFFER_BIT1_QCOM
static const GLenum GL_COLOR_BUFFER_BIT1_QCOM=0x00000002
#undef GL_COLOR_BUFFER_BIT2_QCOM
static const GLenum GL_COLOR_BUFFER_BIT2_QCOM=0x00000004
#undef GL_COLOR_BUFFER_BIT3_QCOM
static const GLenum GL_COLOR_BUFFER_BIT3_QCOM=0x00000008
#undef GL_COLOR_BUFFER_BIT4_QCOM
static const GLenum GL_COLOR_BUFFER_BIT4_QCOM=0x00000010
#undef GL_COLOR_BUFFER_BIT5_QCOM
static const GLenum GL_COLOR_BUFFER_BIT5_QCOM=0x00000020
#undef GL_COLOR_BUFFER_BIT6_QCOM
static const GLenum GL_COLOR_BUFFER_BIT6_QCOM=0x00000040
#undef GL_COLOR_BUFFER_BIT7_QCOM
static const GLenum GL_COLOR_BUFFER_BIT7_QCOM=0x00000080
#undef GL_DEPTH_BUFFER_BIT0_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT0_QCOM=0x00000100
#undef GL_DEPTH_BUFFER_BIT1_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT1_QCOM=0x00000200
#undef GL_DEPTH_BUFFER_BIT2_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT2_QCOM=0x00000400
#undef GL_DEPTH_BUFFER_BIT3_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT3_QCOM=0x00000800
#undef GL_DEPTH_BUFFER_BIT4_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT4_QCOM=0x00001000
#undef GL_DEPTH_BUFFER_BIT5_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT5_QCOM=0x00002000
#undef GL_DEPTH_BUFFER_BIT6_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT6_QCOM=0x00004000
#undef GL_DEPTH_BUFFER_BIT7_QCOM
static const GLenum GL_DEPTH_BUFFER_BIT7_QCOM=0x00008000
#undef GL_STENCIL_BUFFER_BIT0_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT0_QCOM=0x00010000
#undef GL_STENCIL_BUFFER_BIT1_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT1_QCOM=0x00020000
#undef GL_STENCIL_BUFFER_BIT2_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT2_QCOM=0x00040000
#undef GL_STENCIL_BUFFER_BIT3_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT3_QCOM=0x00080000
#undef GL_STENCIL_BUFFER_BIT4_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT4_QCOM=0x00100000
#undef GL_STENCIL_BUFFER_BIT5_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT5_QCOM=0x00200000
#undef GL_STENCIL_BUFFER_BIT6_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT6_QCOM=0x00400000
#undef GL_STENCIL_BUFFER_BIT7_QCOM
static const GLenum GL_STENCIL_BUFFER_BIT7_QCOM=0x00800000
#undef GL_MULTISAMPLE_BUFFER_BIT0_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT0_QCOM=0x01000000
#undef GL_MULTISAMPLE_BUFFER_BIT1_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT1_QCOM=0x02000000
#undef GL_MULTISAMPLE_BUFFER_BIT2_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT2_QCOM=0x04000000
#undef GL_MULTISAMPLE_BUFFER_BIT3_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT3_QCOM=0x08000000
#undef GL_MULTISAMPLE_BUFFER_BIT4_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT4_QCOM=0x10000000
#undef GL_MULTISAMPLE_BUFFER_BIT5_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT5_QCOM=0x20000000
#undef GL_MULTISAMPLE_BUFFER_BIT6_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT6_QCOM=0x40000000
#undef GL_MULTISAMPLE_BUFFER_BIT7_QCOM
static const GLenum GL_MULTISAMPLE_BUFFER_BIT7_QCOM=0x80000000
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
#undef GL_WRITEONLY_RENDERING_QCOM
static const GLenum GL_WRITEONLY_RENDERING_QCOM=0x8823
extern "C" {
}
namespace gl{
}
#endif

#endif
