#ifndef GL_ALT_gles1EXT_ALT
#define GL_ALT_gles1EXT_ALT
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

#ifndef GL_APPLE_copy_texture_levels
#define GL_APPLE_copy_texture_levels
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CopyTextureLevelsAPPLE
#define GL_ALT_FUNDEF_CopyTextureLevelsAPPLE
typedef void (*PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT)(GLuint,GLuint,GLint,GLsizei);
static inline void glCopyTextureLevelsAPPLE(GLuint destinationTexture1,GLuint sourceTexture1,GLint sourceBaseLevel1,GLsizei sourceLevelCount1)
{
	static PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT fn=(PFNGLCOPYTEXTURELEVELSAPPLEPROC_ALT)glaltGetProcAddressExtension("glCopyTextureLevelsAPPLE","GL_APPLE_copy_texture_levels");
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
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleAPPLE","GL_APPLE_framebuffer_multisample");
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ResolveMultisampleFramebufferAPPLE
#define GL_ALT_FUNDEF_ResolveMultisampleFramebufferAPPLE
typedef void (*PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT)();
static inline void glResolveMultisampleFramebufferAPPLE()
{
	static PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT fn=(PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC_ALT)glaltGetProcAddressExtension("glResolveMultisampleFramebufferAPPLE","GL_APPLE_framebuffer_multisample");
	 fn();
}
#endif
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
	static PFNGLCLIENTWAITSYNCAPPLEPROC_ALT fn=(PFNGLCLIENTWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glClientWaitSyncAPPLE","GL_APPLE_sync");
	return fn(sync1,flags1,timeout1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DeleteSyncAPPLE
#define GL_ALT_FUNDEF_DeleteSyncAPPLE
typedef void (*PFNGLDELETESYNCAPPLEPROC_ALT)(GLsync);
static inline void glDeleteSyncAPPLE(GLsync sync1)
{
	static PFNGLDELETESYNCAPPLEPROC_ALT fn=(PFNGLDELETESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glDeleteSyncAPPLE","GL_APPLE_sync");
	 fn(sync1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_FenceSyncAPPLE
#define GL_ALT_FUNDEF_FenceSyncAPPLE
typedef GLsync (*PFNGLFENCESYNCAPPLEPROC_ALT)(GLenum,GLbitfield);
static inline GLsync glFenceSyncAPPLE(GLenum condition1,GLbitfield flags1)
{
	static PFNGLFENCESYNCAPPLEPROC_ALT fn=(PFNGLFENCESYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glFenceSyncAPPLE","GL_APPLE_sync");
	return fn(condition1,flags1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetInteger64vAPPLE
#define GL_ALT_FUNDEF_GetInteger64vAPPLE
typedef void (*PFNGLGETINTEGER64VAPPLEPROC_ALT)(GLenum,GLint64 *);
static inline void glGetInteger64vAPPLE(GLenum pname1,GLint64 * params1)
{
	static PFNGLGETINTEGER64VAPPLEPROC_ALT fn=(PFNGLGETINTEGER64VAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetInteger64vAPPLE","GL_APPLE_sync");
	 fn(pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GetSyncivAPPLE
#define GL_ALT_FUNDEF_GetSyncivAPPLE
typedef void (*PFNGLGETSYNCIVAPPLEPROC_ALT)(GLsync,GLenum,GLsizei,GLsizei *,GLint *);
static inline void glGetSyncivAPPLE(GLsync sync1,GLenum pname1,GLsizei bufSize1,GLsizei * length1,GLint * values1)
{
	static PFNGLGETSYNCIVAPPLEPROC_ALT fn=(PFNGLGETSYNCIVAPPLEPROC_ALT)glaltGetProcAddressExtension("glGetSyncivAPPLE","GL_APPLE_sync");
	 fn(sync1,pname1,bufSize1,length1,values1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_IsSyncAPPLE
#define GL_ALT_FUNDEF_IsSyncAPPLE
typedef GLboolean (*PFNGLISSYNCAPPLEPROC_ALT)(GLsync);
static inline GLboolean glIsSyncAPPLE(GLsync sync1)
{
	static PFNGLISSYNCAPPLEPROC_ALT fn=(PFNGLISSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glIsSyncAPPLE","GL_APPLE_sync");
	return fn(sync1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_WaitSyncAPPLE
#define GL_ALT_FUNDEF_WaitSyncAPPLE
typedef void (*PFNGLWAITSYNCAPPLEPROC_ALT)(GLsync,GLbitfield,GLuint64);
static inline void glWaitSyncAPPLE(GLsync sync1,GLbitfield flags1,GLuint64 timeout1)
{
	static PFNGLWAITSYNCAPPLEPROC_ALT fn=(PFNGLWAITSYNCAPPLEPROC_ALT)glaltGetProcAddressExtension("glWaitSyncAPPLE","GL_APPLE_sync");
	 fn(sync1,flags1,timeout1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_APPLE_texture_2D_limited_npot
#define GL_APPLE_texture_2D_limited_npot
CGUARDBEGIN

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

#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8
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
	static PFNGLBLENDEQUATIONEXTPROC_ALT fn=(PFNGLBLENDEQUATIONEXTPROC_ALT)glaltGetProcAddressExtension("glBlendEquationEXT","GL_EXT_blend_minmax");
	 fn(mode1);
}
#endif

//ALIAS
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
	static PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT fn=(PFNGLDISCARDFRAMEBUFFEREXTPROC_ALT)glaltGetProcAddressExtension("glDiscardFramebufferEXT","GL_EXT_discard_framebuffer");
	 fn(target1,numAttachments1,attachments1);
}
#endif
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
	static PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT fn=(PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glFlushMappedBufferRangeEXT","GL_EXT_map_buffer_range");
	 fn(target1,offset1,length1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MapBufferRangeEXT
#define GL_ALT_FUNDEF_MapBufferRangeEXT
typedef void * (*PFNGLMAPBUFFERRANGEEXTPROC_ALT)(GLenum,GLintptr,GLsizeiptr,GLbitfield);
static inline void * glMapBufferRangeEXT(GLenum target1,GLintptr offset1,GLsizeiptr length1,GLbitfield access1)
{
	static PFNGLMAPBUFFERRANGEEXTPROC_ALT fn=(PFNGLMAPBUFFERRANGEEXTPROC_ALT)glaltGetProcAddressExtension("glMapBufferRangeEXT","GL_EXT_map_buffer_range");
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
	static PFNGLMULTIDRAWARRAYSEXTPROC_ALT fn=(PFNGLMULTIDRAWARRAYSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawArraysEXT","GL_EXT_multi_draw_arrays");
	 fn(mode1,first1,count1,primcount1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MultiDrawElementsEXT
#define GL_ALT_FUNDEF_MultiDrawElementsEXT
typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC_ALT)(GLenum,const GLsizei *,GLenum,const void *const*,GLsizei);
static inline void glMultiDrawElementsEXT(GLenum mode1,const GLsizei * count1,GLenum type1,const void *const* indices1,GLsizei primcount1)
{
	static PFNGLMULTIDRAWELEMENTSEXTPROC_ALT fn=(PFNGLMULTIDRAWELEMENTSEXTPROC_ALT)glaltGetProcAddressExtension("glMultiDrawElementsEXT","GL_EXT_multi_draw_arrays");
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
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleEXT","GL_EXT_multisampled_render_to_texture");
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleEXT
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleEXT(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleEXT","GL_EXT_multisampled_render_to_texture");
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif

//ALIAS
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
	static PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT fn=(PFNGLGETGRAPHICSRESETSTATUSEXTPROC_ALT)glaltGetProcAddressExtension("glGetGraphicsResetStatusEXT","GL_EXT_robustness");
	return fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformfvEXT
#define GL_ALT_FUNDEF_GetnUniformfvEXT
typedef void (*PFNGLGETNUNIFORMFVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLfloat *);
static inline void glGetnUniformfvEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLfloat * params1)
{
	static PFNGLGETNUNIFORMFVEXTPROC_ALT fn=(PFNGLGETNUNIFORMFVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformfvEXT","GL_EXT_robustness");
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetnUniformivEXT
#define GL_ALT_FUNDEF_GetnUniformivEXT
typedef void (*PFNGLGETNUNIFORMIVEXTPROC_ALT)(GLuint,GLint,GLsizei,GLint *);
static inline void glGetnUniformivEXT(GLuint program1,GLint location1,GLsizei bufSize1,GLint * params1)
{
	static PFNGLGETNUNIFORMIVEXTPROC_ALT fn=(PFNGLGETNUNIFORMIVEXTPROC_ALT)glaltGetProcAddressExtension("glGetnUniformivEXT","GL_EXT_robustness");
	 fn(program1,location1,bufSize1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ReadnPixelsEXT
#define GL_ALT_FUNDEF_ReadnPixelsEXT
typedef void (*PFNGLREADNPIXELSEXTPROC_ALT)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,GLsizei,void *);
static inline void glReadnPixelsEXT(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,GLsizei bufSize1,void * data1)
{
	static PFNGLREADNPIXELSEXTPROC_ALT fn=(PFNGLREADNPIXELSEXTPROC_ALT)glaltGetProcAddressExtension("glReadnPixelsEXT","GL_EXT_robustness");
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

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias
#ifndef GL_MAX_TEXTURE_LOD_BIAS_EXT
#define GL_MAX_TEXTURE_LOD_BIAS_EXT 0x84FD
#endif //GL_MAX_TEXTURE_LOD_BIAS_EXT
#ifndef GL_TEXTURE_FILTER_CONTROL_EXT
#define GL_TEXTURE_FILTER_CONTROL_EXT 0x8500
#endif //GL_TEXTURE_FILTER_CONTROL_EXT
#ifndef GL_TEXTURE_LOD_BIAS_EXT
#define GL_TEXTURE_LOD_BIAS_EXT 0x8501
#endif //GL_TEXTURE_LOD_BIAS_EXT
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
	static PFNGLTEXSTORAGE1DEXTPROC_ALT fn=(PFNGLTEXSTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage1DEXT","GL_EXT_texture_storage");
	 fn(target1,levels1,internalformat1,width1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexStorage2DEXT
#define GL_ALT_FUNDEF_TexStorage2DEXT
typedef void (*PFNGLTEXSTORAGE2DEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glTexStorage2DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLTEXSTORAGE2DEXTPROC_ALT fn=(PFNGLTEXSTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage2DEXT","GL_EXT_texture_storage");
	 fn(target1,levels1,internalformat1,width1,height1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TexStorage3DEXT
#define GL_ALT_FUNDEF_TexStorage3DEXT
typedef void (*PFNGLTEXSTORAGE3DEXTPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void glTexStorage3DEXT(GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
	static PFNGLTEXSTORAGE3DEXTPROC_ALT fn=(PFNGLTEXSTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTexStorage3DEXT","GL_EXT_texture_storage");
	 fn(target1,levels1,internalformat1,width1,height1,depth1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_TextureStorage1DEXT
#define GL_ALT_FUNDEF_TextureStorage1DEXT
typedef void (*PFNGLTEXTURESTORAGE1DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei);
static inline void glTextureStorage1DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1)
{
	static PFNGLTEXTURESTORAGE1DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE1DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage1DEXT","GL_EXT_texture_storage");
	 fn(texture1,target1,levels1,internalformat1,width1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TextureStorage2DEXT
#define GL_ALT_FUNDEF_TextureStorage2DEXT
typedef void (*PFNGLTEXTURESTORAGE2DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glTextureStorage2DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLTEXTURESTORAGE2DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE2DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage2DEXT","GL_EXT_texture_storage");
	 fn(texture1,target1,levels1,internalformat1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TextureStorage3DEXT
#define GL_ALT_FUNDEF_TextureStorage3DEXT
typedef void (*PFNGLTEXTURESTORAGE3DEXTPROC_ALT)(GLuint,GLenum,GLsizei,GLenum,GLsizei,GLsizei,GLsizei);
static inline void glTextureStorage3DEXT(GLuint texture1,GLenum target1,GLsizei levels1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1)
{
	static PFNGLTEXTURESTORAGE3DEXTPROC_ALT fn=(PFNGLTEXTURESTORAGE3DEXTPROC_ALT)glaltGetProcAddressExtension("glTextureStorage3DEXT","GL_EXT_texture_storage");
	 fn(texture1,target1,levels1,internalformat1,width1,height1,depth1);
}
#endif
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
	static PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DMultisampleIMG","GL_IMG_multisampled_render_to_texture");
	 fn(target1,attachment1,textarget1,texture1,level1,samples1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RenderbufferStorageMultisampleIMG
#define GL_ALT_FUNDEF_RenderbufferStorageMultisampleIMG
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageMultisampleIMG(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageMultisampleIMG","GL_IMG_multisampled_render_to_texture");
	 fn(target1,samples1,internalformat1,width1,height1);
}
#endif
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

#ifndef GL_IMG_texture_env_enhanced_fixed_function
#define GL_IMG_texture_env_enhanced_fixed_function
#ifndef GL_DOT3_RGBA_IMG
#define GL_DOT3_RGBA_IMG 0x86AF
#endif //GL_DOT3_RGBA_IMG
#ifndef GL_MODULATE_COLOR_IMG
#define GL_MODULATE_COLOR_IMG 0x8C04
#endif //GL_MODULATE_COLOR_IMG
#ifndef GL_RECIP_ADD_SIGNED_ALPHA_IMG
#define GL_RECIP_ADD_SIGNED_ALPHA_IMG 0x8C05
#endif //GL_RECIP_ADD_SIGNED_ALPHA_IMG
#ifndef GL_TEXTURE_ALPHA_MODULATE_IMG
#define GL_TEXTURE_ALPHA_MODULATE_IMG 0x8C06
#endif //GL_TEXTURE_ALPHA_MODULATE_IMG
#ifndef GL_FACTOR_ALPHA_MODULATE_IMG
#define GL_FACTOR_ALPHA_MODULATE_IMG 0x8C07
#endif //GL_FACTOR_ALPHA_MODULATE_IMG
#ifndef GL_FRAGMENT_ALPHA_MODULATE_IMG
#define GL_FRAGMENT_ALPHA_MODULATE_IMG 0x8C08
#endif //GL_FRAGMENT_ALPHA_MODULATE_IMG
#ifndef GL_ADD_BLEND_IMG
#define GL_ADD_BLEND_IMG 0x8C09
#endif //GL_ADD_BLEND_IMG
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_IMG_user_clip_plane
#define GL_IMG_user_clip_plane
#ifndef GL_MAX_CLIP_PLANES_IMG
#define GL_MAX_CLIP_PLANES_IMG 0x0D32
#endif //GL_MAX_CLIP_PLANES_IMG
#ifndef GL_CLIP_PLANE0_IMG
#define GL_CLIP_PLANE0_IMG 0x3000
#endif //GL_CLIP_PLANE0_IMG
#ifndef GL_CLIP_PLANE1_IMG
#define GL_CLIP_PLANE1_IMG 0x3001
#endif //GL_CLIP_PLANE1_IMG
#ifndef GL_CLIP_PLANE2_IMG
#define GL_CLIP_PLANE2_IMG 0x3002
#endif //GL_CLIP_PLANE2_IMG
#ifndef GL_CLIP_PLANE3_IMG
#define GL_CLIP_PLANE3_IMG 0x3003
#endif //GL_CLIP_PLANE3_IMG
#ifndef GL_CLIP_PLANE4_IMG
#define GL_CLIP_PLANE4_IMG 0x3004
#endif //GL_CLIP_PLANE4_IMG
#ifndef GL_CLIP_PLANE5_IMG
#define GL_CLIP_PLANE5_IMG 0x3005
#endif //GL_CLIP_PLANE5_IMG
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ClipPlanefIMG
#define GL_ALT_FUNDEF_ClipPlanefIMG
typedef void (*PFNGLCLIPPLANEFIMGPROC_ALT)(GLenum,const GLfloat *);
static inline void glClipPlanefIMG(GLenum p1,const GLfloat * eqn1)
{
	static PFNGLCLIPPLANEFIMGPROC_ALT fn=(PFNGLCLIPPLANEFIMGPROC_ALT)glaltGetProcAddressExtension("glClipPlanefIMG","GL_IMG_user_clip_plane");
	 fn(p1,eqn1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClipPlanexIMG
#define GL_ALT_FUNDEF_ClipPlanexIMG
typedef void (*PFNGLCLIPPLANEXIMGPROC_ALT)(GLenum,const GLfixed *);
static inline void glClipPlanexIMG(GLenum p1,const GLfixed * eqn1)
{
	static PFNGLCLIPPLANEXIMGPROC_ALT fn=(PFNGLCLIPPLANEXIMGPROC_ALT)glaltGetProcAddressExtension("glClipPlanexIMG","GL_IMG_user_clip_plane");
	 fn(p1,eqn1);
}
#endif
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
	static PFNGLDELETEFENCESNVPROC_ALT fn=(PFNGLDELETEFENCESNVPROC_ALT)glaltGetProcAddressExtension("glDeleteFencesNV","GL_NV_fence");
	 fn(n1,fences1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FinishFenceNV
#define GL_ALT_FUNDEF_FinishFenceNV
typedef void (*PFNGLFINISHFENCENVPROC_ALT)(GLuint);
static inline void glFinishFenceNV(GLuint fence1)
{
	static PFNGLFINISHFENCENVPROC_ALT fn=(PFNGLFINISHFENCENVPROC_ALT)glaltGetProcAddressExtension("glFinishFenceNV","GL_NV_fence");
	 fn(fence1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenFencesNV
#define GL_ALT_FUNDEF_GenFencesNV
typedef void (*PFNGLGENFENCESNVPROC_ALT)(GLsizei,GLuint *);
static inline void glGenFencesNV(GLsizei n1,GLuint * fences1)
{
	static PFNGLGENFENCESNVPROC_ALT fn=(PFNGLGENFENCESNVPROC_ALT)glaltGetProcAddressExtension("glGenFencesNV","GL_NV_fence");
	 fn(n1,fences1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFenceivNV
#define GL_ALT_FUNDEF_GetFenceivNV
typedef void (*PFNGLGETFENCEIVNVPROC_ALT)(GLuint,GLenum,GLint *);
static inline void glGetFenceivNV(GLuint fence1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFENCEIVNVPROC_ALT fn=(PFNGLGETFENCEIVNVPROC_ALT)glaltGetProcAddressExtension("glGetFenceivNV","GL_NV_fence");
	 fn(fence1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsFenceNV
#define GL_ALT_FUNDEF_IsFenceNV
typedef GLboolean (*PFNGLISFENCENVPROC_ALT)(GLuint);
static inline GLboolean glIsFenceNV(GLuint fence1)
{
	static PFNGLISFENCENVPROC_ALT fn=(PFNGLISFENCENVPROC_ALT)glaltGetProcAddressExtension("glIsFenceNV","GL_NV_fence");
	return fn(fence1);
}
#endif

#ifndef	GL_ALT_FUNDEF_SetFenceNV
#define GL_ALT_FUNDEF_SetFenceNV
typedef void (*PFNGLSETFENCENVPROC_ALT)(GLuint,GLenum);
static inline void glSetFenceNV(GLuint fence1,GLenum condition1)
{
	static PFNGLSETFENCENVPROC_ALT fn=(PFNGLSETFENCENVPROC_ALT)glaltGetProcAddressExtension("glSetFenceNV","GL_NV_fence");
	 fn(fence1,condition1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TestFenceNV
#define GL_ALT_FUNDEF_TestFenceNV
typedef GLboolean (*PFNGLTESTFENCENVPROC_ALT)(GLuint);
static inline GLboolean glTestFenceNV(GLuint fence1)
{
	static PFNGLTESTFENCENVPROC_ALT fn=(PFNGLTESTFENCENVPROC_ALT)glaltGetProcAddressExtension("glTestFenceNV","GL_NV_fence");
	return fn(fence1);
}
#endif
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
	static PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT fn=(PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetRenderbufferStorageOES","GL_OES_EGL_image");
	 fn(target1,image1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EGLImageTargetTexture2DOES
#define GL_ALT_FUNDEF_EGLImageTargetTexture2DOES
typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT)(GLenum,GLeglImageOES);
static inline void glEGLImageTargetTexture2DOES(GLenum target1,GLeglImageOES image1)
{
	static PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT fn=(PFNGLEGLIMAGETARGETTEXTURE2DOESPROC_ALT)glaltGetProcAddressExtension("glEGLImageTargetTexture2DOES","GL_OES_EGL_image");
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

#ifndef GL_OES_blend_equation_separate
#define GL_OES_blend_equation_separate
#ifndef GL_BLEND_EQUATION_RGB_OES
#define GL_BLEND_EQUATION_RGB_OES 0x8009
#endif //GL_BLEND_EQUATION_RGB_OES
#ifndef GL_BLEND_EQUATION_ALPHA_OES
#define GL_BLEND_EQUATION_ALPHA_OES 0x883D
#endif //GL_BLEND_EQUATION_ALPHA_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendEquationSeparateOES
#define GL_ALT_FUNDEF_BlendEquationSeparateOES
typedef void (*PFNGLBLENDEQUATIONSEPARATEOESPROC_ALT)(GLenum,GLenum);
static inline void glBlendEquationSeparateOES(GLenum modeRGB1,GLenum modeAlpha1)
{
	static PFNGLBLENDEQUATIONSEPARATEOESPROC_ALT fn=(PFNGLBLENDEQUATIONSEPARATEOESPROC_ALT)glaltGetProcAddressExtension("glBlendEquationSeparateOES","GL_OES_blend_equation_separate");
	 fn(modeRGB1,modeAlpha1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_blend_func_separate
#define GL_OES_blend_func_separate
#ifndef GL_BLEND_DST_RGB_OES
#define GL_BLEND_DST_RGB_OES 0x80C8
#endif //GL_BLEND_DST_RGB_OES
#ifndef GL_BLEND_SRC_RGB_OES
#define GL_BLEND_SRC_RGB_OES 0x80C9
#endif //GL_BLEND_SRC_RGB_OES
#ifndef GL_BLEND_DST_ALPHA_OES
#define GL_BLEND_DST_ALPHA_OES 0x80CA
#endif //GL_BLEND_DST_ALPHA_OES
#ifndef GL_BLEND_SRC_ALPHA_OES
#define GL_BLEND_SRC_ALPHA_OES 0x80CB
#endif //GL_BLEND_SRC_ALPHA_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendFuncSeparateOES
#define GL_ALT_FUNDEF_BlendFuncSeparateOES
typedef void (*PFNGLBLENDFUNCSEPARATEOESPROC_ALT)(GLenum,GLenum,GLenum,GLenum);
static inline void glBlendFuncSeparateOES(GLenum srcRGB1,GLenum dstRGB1,GLenum srcAlpha1,GLenum dstAlpha1)
{
	static PFNGLBLENDFUNCSEPARATEOESPROC_ALT fn=(PFNGLBLENDFUNCSEPARATEOESPROC_ALT)glaltGetProcAddressExtension("glBlendFuncSeparateOES","GL_OES_blend_func_separate");
	 fn(srcRGB1,dstRGB1,srcAlpha1,dstAlpha1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_blend_subtract
#define GL_OES_blend_subtract
#ifndef GL_FUNC_ADD_OES
#define GL_FUNC_ADD_OES 0x8006
#endif //GL_FUNC_ADD_OES
#ifndef GL_BLEND_EQUATION_OES
#define GL_BLEND_EQUATION_OES 0x8009
#endif //GL_BLEND_EQUATION_OES
#ifndef GL_FUNC_SUBTRACT_OES
#define GL_FUNC_SUBTRACT_OES 0x800A
#endif //GL_FUNC_SUBTRACT_OES
#ifndef GL_FUNC_REVERSE_SUBTRACT_OES
#define GL_FUNC_REVERSE_SUBTRACT_OES 0x800B
#endif //GL_FUNC_REVERSE_SUBTRACT_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BlendEquationOES
#define GL_ALT_FUNDEF_BlendEquationOES
typedef void (*PFNGLBLENDEQUATIONOESPROC_ALT)(GLenum);
static inline void glBlendEquationOES(GLenum mode1)
{
	static PFNGLBLENDEQUATIONOESPROC_ALT fn=(PFNGLBLENDEQUATIONOESPROC_ALT)glaltGetProcAddressExtension("glBlendEquationOES","GL_OES_blend_subtract");
	 fn(mode1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_byte_coordinates
#define GL_OES_byte_coordinates
#ifndef GL_BYTE
#define GL_BYTE 0x1400
#endif //GL_BYTE
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_MultiTexCoord1bOES
#define GL_ALT_FUNDEF_MultiTexCoord1bOES
typedef void (*PFNGLMULTITEXCOORD1BOESPROC_ALT)(GLenum,GLbyte);
static inline void glMultiTexCoord1bOES(GLenum texture1,GLbyte s1)
{
	static PFNGLMULTITEXCOORD1BOESPROC_ALT fn=(PFNGLMULTITEXCOORD1BOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord1bOES","GL_OES_byte_coordinates");
	 fn(texture1,s1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord1bvOES
#define GL_ALT_FUNDEF_MultiTexCoord1bvOES
typedef void (*PFNGLMULTITEXCOORD1BVOESPROC_ALT)(GLenum,const GLbyte *);
static inline void glMultiTexCoord1bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD1BVOESPROC_ALT fn=(PFNGLMULTITEXCOORD1BVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord1bvOES","GL_OES_byte_coordinates");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord2bOES
#define GL_ALT_FUNDEF_MultiTexCoord2bOES
typedef void (*PFNGLMULTITEXCOORD2BOESPROC_ALT)(GLenum,GLbyte,GLbyte);
static inline void glMultiTexCoord2bOES(GLenum texture1,GLbyte s1,GLbyte t1)
{
	static PFNGLMULTITEXCOORD2BOESPROC_ALT fn=(PFNGLMULTITEXCOORD2BOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord2bOES","GL_OES_byte_coordinates");
	 fn(texture1,s1,t1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord2bvOES
#define GL_ALT_FUNDEF_MultiTexCoord2bvOES
typedef void (*PFNGLMULTITEXCOORD2BVOESPROC_ALT)(GLenum,const GLbyte *);
static inline void glMultiTexCoord2bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD2BVOESPROC_ALT fn=(PFNGLMULTITEXCOORD2BVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord2bvOES","GL_OES_byte_coordinates");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord3bOES
#define GL_ALT_FUNDEF_MultiTexCoord3bOES
typedef void (*PFNGLMULTITEXCOORD3BOESPROC_ALT)(GLenum,GLbyte,GLbyte,GLbyte);
static inline void glMultiTexCoord3bOES(GLenum texture1,GLbyte s1,GLbyte t1,GLbyte r1)
{
	static PFNGLMULTITEXCOORD3BOESPROC_ALT fn=(PFNGLMULTITEXCOORD3BOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord3bOES","GL_OES_byte_coordinates");
	 fn(texture1,s1,t1,r1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord3bvOES
#define GL_ALT_FUNDEF_MultiTexCoord3bvOES
typedef void (*PFNGLMULTITEXCOORD3BVOESPROC_ALT)(GLenum,const GLbyte *);
static inline void glMultiTexCoord3bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD3BVOESPROC_ALT fn=(PFNGLMULTITEXCOORD3BVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord3bvOES","GL_OES_byte_coordinates");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord4bOES
#define GL_ALT_FUNDEF_MultiTexCoord4bOES
typedef void (*PFNGLMULTITEXCOORD4BOESPROC_ALT)(GLenum,GLbyte,GLbyte,GLbyte,GLbyte);
static inline void glMultiTexCoord4bOES(GLenum texture1,GLbyte s1,GLbyte t1,GLbyte r1,GLbyte q1)
{
	static PFNGLMULTITEXCOORD4BOESPROC_ALT fn=(PFNGLMULTITEXCOORD4BOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4bOES","GL_OES_byte_coordinates");
	 fn(texture1,s1,t1,r1,q1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord4bvOES
#define GL_ALT_FUNDEF_MultiTexCoord4bvOES
typedef void (*PFNGLMULTITEXCOORD4BVOESPROC_ALT)(GLenum,const GLbyte *);
static inline void glMultiTexCoord4bvOES(GLenum texture1,const GLbyte * coords1)
{
	static PFNGLMULTITEXCOORD4BVOESPROC_ALT fn=(PFNGLMULTITEXCOORD4BVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4bvOES","GL_OES_byte_coordinates");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord1bOES
#define GL_ALT_FUNDEF_TexCoord1bOES
typedef void (*PFNGLTEXCOORD1BOESPROC_ALT)(GLbyte);
static inline void glTexCoord1bOES(GLbyte s1)
{
	static PFNGLTEXCOORD1BOESPROC_ALT fn=(PFNGLTEXCOORD1BOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord1bOES","GL_OES_byte_coordinates");
	 fn(s1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord1bvOES
#define GL_ALT_FUNDEF_TexCoord1bvOES
typedef void (*PFNGLTEXCOORD1BVOESPROC_ALT)(const GLbyte *);
static inline void glTexCoord1bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD1BVOESPROC_ALT fn=(PFNGLTEXCOORD1BVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord1bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord2bOES
#define GL_ALT_FUNDEF_TexCoord2bOES
typedef void (*PFNGLTEXCOORD2BOESPROC_ALT)(GLbyte,GLbyte);
static inline void glTexCoord2bOES(GLbyte s1,GLbyte t1)
{
	static PFNGLTEXCOORD2BOESPROC_ALT fn=(PFNGLTEXCOORD2BOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord2bOES","GL_OES_byte_coordinates");
	 fn(s1,t1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord2bvOES
#define GL_ALT_FUNDEF_TexCoord2bvOES
typedef void (*PFNGLTEXCOORD2BVOESPROC_ALT)(const GLbyte *);
static inline void glTexCoord2bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD2BVOESPROC_ALT fn=(PFNGLTEXCOORD2BVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord2bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord3bOES
#define GL_ALT_FUNDEF_TexCoord3bOES
typedef void (*PFNGLTEXCOORD3BOESPROC_ALT)(GLbyte,GLbyte,GLbyte);
static inline void glTexCoord3bOES(GLbyte s1,GLbyte t1,GLbyte r1)
{
	static PFNGLTEXCOORD3BOESPROC_ALT fn=(PFNGLTEXCOORD3BOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord3bOES","GL_OES_byte_coordinates");
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord3bvOES
#define GL_ALT_FUNDEF_TexCoord3bvOES
typedef void (*PFNGLTEXCOORD3BVOESPROC_ALT)(const GLbyte *);
static inline void glTexCoord3bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD3BVOESPROC_ALT fn=(PFNGLTEXCOORD3BVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord3bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord4bOES
#define GL_ALT_FUNDEF_TexCoord4bOES
typedef void (*PFNGLTEXCOORD4BOESPROC_ALT)(GLbyte,GLbyte,GLbyte,GLbyte);
static inline void glTexCoord4bOES(GLbyte s1,GLbyte t1,GLbyte r1,GLbyte q1)
{
	static PFNGLTEXCOORD4BOESPROC_ALT fn=(PFNGLTEXCOORD4BOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord4bOES","GL_OES_byte_coordinates");
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord4bvOES
#define GL_ALT_FUNDEF_TexCoord4bvOES
typedef void (*PFNGLTEXCOORD4BVOESPROC_ALT)(const GLbyte *);
static inline void glTexCoord4bvOES(const GLbyte * coords1)
{
	static PFNGLTEXCOORD4BVOESPROC_ALT fn=(PFNGLTEXCOORD4BVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord4bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex2bOES
#define GL_ALT_FUNDEF_Vertex2bOES
typedef void (*PFNGLVERTEX2BOESPROC_ALT)(GLbyte,GLbyte);
static inline void glVertex2bOES(GLbyte x1,GLbyte y1)
{
	static PFNGLVERTEX2BOESPROC_ALT fn=(PFNGLVERTEX2BOESPROC_ALT)glaltGetProcAddressExtension("glVertex2bOES","GL_OES_byte_coordinates");
	 fn(x1,y1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex2bvOES
#define GL_ALT_FUNDEF_Vertex2bvOES
typedef void (*PFNGLVERTEX2BVOESPROC_ALT)(const GLbyte *);
static inline void glVertex2bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX2BVOESPROC_ALT fn=(PFNGLVERTEX2BVOESPROC_ALT)glaltGetProcAddressExtension("glVertex2bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex3bOES
#define GL_ALT_FUNDEF_Vertex3bOES
typedef void (*PFNGLVERTEX3BOESPROC_ALT)(GLbyte,GLbyte,GLbyte);
static inline void glVertex3bOES(GLbyte x1,GLbyte y1,GLbyte z1)
{
	static PFNGLVERTEX3BOESPROC_ALT fn=(PFNGLVERTEX3BOESPROC_ALT)glaltGetProcAddressExtension("glVertex3bOES","GL_OES_byte_coordinates");
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex3bvOES
#define GL_ALT_FUNDEF_Vertex3bvOES
typedef void (*PFNGLVERTEX3BVOESPROC_ALT)(const GLbyte *);
static inline void glVertex3bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX3BVOESPROC_ALT fn=(PFNGLVERTEX3BVOESPROC_ALT)glaltGetProcAddressExtension("glVertex3bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex4bOES
#define GL_ALT_FUNDEF_Vertex4bOES
typedef void (*PFNGLVERTEX4BOESPROC_ALT)(GLbyte,GLbyte,GLbyte,GLbyte);
static inline void glVertex4bOES(GLbyte x1,GLbyte y1,GLbyte z1,GLbyte w1)
{
	static PFNGLVERTEX4BOESPROC_ALT fn=(PFNGLVERTEX4BOESPROC_ALT)glaltGetProcAddressExtension("glVertex4bOES","GL_OES_byte_coordinates");
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex4bvOES
#define GL_ALT_FUNDEF_Vertex4bvOES
typedef void (*PFNGLVERTEX4BVOESPROC_ALT)(const GLbyte *);
static inline void glVertex4bvOES(const GLbyte * coords1)
{
	static PFNGLVERTEX4BVOESPROC_ALT fn=(PFNGLVERTEX4BVOESPROC_ALT)glaltGetProcAddressExtension("glVertex4bvOES","GL_OES_byte_coordinates");
	 fn(coords1);
}
#endif
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

#ifndef GL_OES_draw_texture
#define GL_OES_draw_texture
#ifndef GL_TEXTURE_CROP_RECT_OES
#define GL_TEXTURE_CROP_RECT_OES 0x8B9D
#endif //GL_TEXTURE_CROP_RECT_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_DrawTexfOES
#define GL_ALT_FUNDEF_DrawTexfOES
typedef void (*PFNGLDRAWTEXFOESPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glDrawTexfOES(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat width1,GLfloat height1)
{
	static PFNGLDRAWTEXFOESPROC_ALT fn=(PFNGLDRAWTEXFOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexfOES","GL_OES_draw_texture");
	 fn(x1,y1,z1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexfvOES
#define GL_ALT_FUNDEF_DrawTexfvOES
typedef void (*PFNGLDRAWTEXFVOESPROC_ALT)(const GLfloat *);
static inline void glDrawTexfvOES(const GLfloat * coords1)
{
	static PFNGLDRAWTEXFVOESPROC_ALT fn=(PFNGLDRAWTEXFVOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexfvOES","GL_OES_draw_texture");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexiOES
#define GL_ALT_FUNDEF_DrawTexiOES
typedef void (*PFNGLDRAWTEXIOESPROC_ALT)(GLint,GLint,GLint,GLint,GLint);
static inline void glDrawTexiOES(GLint x1,GLint y1,GLint z1,GLint width1,GLint height1)
{
	static PFNGLDRAWTEXIOESPROC_ALT fn=(PFNGLDRAWTEXIOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexiOES","GL_OES_draw_texture");
	 fn(x1,y1,z1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexivOES
#define GL_ALT_FUNDEF_DrawTexivOES
typedef void (*PFNGLDRAWTEXIVOESPROC_ALT)(const GLint *);
static inline void glDrawTexivOES(const GLint * coords1)
{
	static PFNGLDRAWTEXIVOESPROC_ALT fn=(PFNGLDRAWTEXIVOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexivOES","GL_OES_draw_texture");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexsOES
#define GL_ALT_FUNDEF_DrawTexsOES
typedef void (*PFNGLDRAWTEXSOESPROC_ALT)(GLshort,GLshort,GLshort,GLshort,GLshort);
static inline void glDrawTexsOES(GLshort x1,GLshort y1,GLshort z1,GLshort width1,GLshort height1)
{
	static PFNGLDRAWTEXSOESPROC_ALT fn=(PFNGLDRAWTEXSOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexsOES","GL_OES_draw_texture");
	 fn(x1,y1,z1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexsvOES
#define GL_ALT_FUNDEF_DrawTexsvOES
typedef void (*PFNGLDRAWTEXSVOESPROC_ALT)(const GLshort *);
static inline void glDrawTexsvOES(const GLshort * coords1)
{
	static PFNGLDRAWTEXSVOESPROC_ALT fn=(PFNGLDRAWTEXSVOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexsvOES","GL_OES_draw_texture");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexxOES
#define GL_ALT_FUNDEF_DrawTexxOES
typedef void (*PFNGLDRAWTEXXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glDrawTexxOES(GLfixed x1,GLfixed y1,GLfixed z1,GLfixed width1,GLfixed height1)
{
	static PFNGLDRAWTEXXOESPROC_ALT fn=(PFNGLDRAWTEXXOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexxOES","GL_OES_draw_texture");
	 fn(x1,y1,z1,width1,height1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DrawTexxvOES
#define GL_ALT_FUNDEF_DrawTexxvOES
typedef void (*PFNGLDRAWTEXXVOESPROC_ALT)(const GLfixed *);
static inline void glDrawTexxvOES(const GLfixed * coords1)
{
	static PFNGLDRAWTEXXVOESPROC_ALT fn=(PFNGLDRAWTEXXVOESPROC_ALT)glaltGetProcAddressExtension("glDrawTexxvOES","GL_OES_draw_texture");
	 fn(coords1);
}
#endif
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

#ifndef GL_OES_extended_matrix_palette
#define GL_OES_extended_matrix_palette
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_fbo_render_mipmap
#define GL_OES_fbo_render_mipmap
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_fixed_point
#define GL_OES_fixed_point
#ifndef GL_FIXED_OES
#define GL_FIXED_OES 0x140C
#endif //GL_FIXED_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_AccumxOES
#define GL_ALT_FUNDEF_AccumxOES
typedef void (*PFNGLACCUMXOESPROC_ALT)(GLenum,GLfixed);
static inline void glAccumxOES(GLenum op1,GLfixed value1)
{
	static PFNGLACCUMXOESPROC_ALT fn=(PFNGLACCUMXOESPROC_ALT)glaltGetProcAddressExtension("glAccumxOES","GL_OES_fixed_point");
	 fn(op1,value1);
}
#endif

#ifndef	GL_ALT_FUNDEF_AlphaFuncxOES
#define GL_ALT_FUNDEF_AlphaFuncxOES
typedef void (*PFNGLALPHAFUNCXOESPROC_ALT)(GLenum,GLfixed);
static inline void glAlphaFuncxOES(GLenum func1,GLfixed ref1)
{
	static PFNGLALPHAFUNCXOESPROC_ALT fn=(PFNGLALPHAFUNCXOESPROC_ALT)glaltGetProcAddressExtension("glAlphaFuncxOES","GL_OES_fixed_point");
	 fn(func1,ref1);
}
#endif

#ifndef	GL_ALT_FUNDEF_BitmapxOES
#define GL_ALT_FUNDEF_BitmapxOES
typedef void (*PFNGLBITMAPXOESPROC_ALT)(GLsizei,GLsizei,GLfixed,GLfixed,GLfixed,GLfixed,const GLubyte *);
static inline void glBitmapxOES(GLsizei width1,GLsizei height1,GLfixed xorig1,GLfixed yorig1,GLfixed xmove1,GLfixed ymove1,const GLubyte * bitmap1)
{
	static PFNGLBITMAPXOESPROC_ALT fn=(PFNGLBITMAPXOESPROC_ALT)glaltGetProcAddressExtension("glBitmapxOES","GL_OES_fixed_point");
	 fn(width1,height1,xorig1,yorig1,xmove1,ymove1,bitmap1);
}
#endif

#ifndef	GL_ALT_FUNDEF_BlendColorxOES
#define GL_ALT_FUNDEF_BlendColorxOES
typedef void (*PFNGLBLENDCOLORXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glBlendColorxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLBLENDCOLORXOESPROC_ALT fn=(PFNGLBLENDCOLORXOESPROC_ALT)glaltGetProcAddressExtension("glBlendColorxOES","GL_OES_fixed_point");
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClearAccumxOES
#define GL_ALT_FUNDEF_ClearAccumxOES
typedef void (*PFNGLCLEARACCUMXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glClearAccumxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCLEARACCUMXOESPROC_ALT fn=(PFNGLCLEARACCUMXOESPROC_ALT)glaltGetProcAddressExtension("glClearAccumxOES","GL_OES_fixed_point");
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClearColorxOES
#define GL_ALT_FUNDEF_ClearColorxOES
typedef void (*PFNGLCLEARCOLORXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glClearColorxOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCLEARCOLORXOESPROC_ALT fn=(PFNGLCLEARCOLORXOESPROC_ALT)glaltGetProcAddressExtension("glClearColorxOES","GL_OES_fixed_point");
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClearDepthxOES
#define GL_ALT_FUNDEF_ClearDepthxOES
typedef void (*PFNGLCLEARDEPTHXOESPROC_ALT)(GLfixed);
static inline void glClearDepthxOES(GLfixed depth1)
{
	static PFNGLCLEARDEPTHXOESPROC_ALT fn=(PFNGLCLEARDEPTHXOESPROC_ALT)glaltGetProcAddressExtension("glClearDepthxOES","GL_OES_fixed_point");
	 fn(depth1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClipPlanexOES
#define GL_ALT_FUNDEF_ClipPlanexOES
typedef void (*PFNGLCLIPPLANEXOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glClipPlanexOES(GLenum plane1,const GLfixed * equation1)
{
	static PFNGLCLIPPLANEXOESPROC_ALT fn=(PFNGLCLIPPLANEXOESPROC_ALT)glaltGetProcAddressExtension("glClipPlanexOES","GL_OES_fixed_point");
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Color3xOES
#define GL_ALT_FUNDEF_Color3xOES
typedef void (*PFNGLCOLOR3XOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glColor3xOES(GLfixed red1,GLfixed green1,GLfixed blue1)
{
	static PFNGLCOLOR3XOESPROC_ALT fn=(PFNGLCOLOR3XOESPROC_ALT)glaltGetProcAddressExtension("glColor3xOES","GL_OES_fixed_point");
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Color3xvOES
#define GL_ALT_FUNDEF_Color3xvOES
typedef void (*PFNGLCOLOR3XVOESPROC_ALT)(const GLfixed *);
static inline void glColor3xvOES(const GLfixed * components1)
{
	static PFNGLCOLOR3XVOESPROC_ALT fn=(PFNGLCOLOR3XVOESPROC_ALT)glaltGetProcAddressExtension("glColor3xvOES","GL_OES_fixed_point");
	 fn(components1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Color4xOES
#define GL_ALT_FUNDEF_Color4xOES
typedef void (*PFNGLCOLOR4XOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glColor4xOES(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCOLOR4XOESPROC_ALT fn=(PFNGLCOLOR4XOESPROC_ALT)glaltGetProcAddressExtension("glColor4xOES","GL_OES_fixed_point");
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Color4xvOES
#define GL_ALT_FUNDEF_Color4xvOES
typedef void (*PFNGLCOLOR4XVOESPROC_ALT)(const GLfixed *);
static inline void glColor4xvOES(const GLfixed * components1)
{
	static PFNGLCOLOR4XVOESPROC_ALT fn=(PFNGLCOLOR4XVOESPROC_ALT)glaltGetProcAddressExtension("glColor4xvOES","GL_OES_fixed_point");
	 fn(components1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ConvolutionParameterxOES
#define GL_ALT_FUNDEF_ConvolutionParameterxOES
typedef void (*PFNGLCONVOLUTIONPARAMETERXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glConvolutionParameterxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLCONVOLUTIONPARAMETERXOESPROC_ALT fn=(PFNGLCONVOLUTIONPARAMETERXOESPROC_ALT)glaltGetProcAddressExtension("glConvolutionParameterxOES","GL_OES_fixed_point");
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ConvolutionParameterxvOES
#define GL_ALT_FUNDEF_ConvolutionParameterxvOES
typedef void (*PFNGLCONVOLUTIONPARAMETERXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glConvolutionParameterxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLCONVOLUTIONPARAMETERXVOESPROC_ALT fn=(PFNGLCONVOLUTIONPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glConvolutionParameterxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DepthRangexOES
#define GL_ALT_FUNDEF_DepthRangexOES
typedef void (*PFNGLDEPTHRANGEXOESPROC_ALT)(GLfixed,GLfixed);
static inline void glDepthRangexOES(GLfixed n1,GLfixed f1)
{
	static PFNGLDEPTHRANGEXOESPROC_ALT fn=(PFNGLDEPTHRANGEXOESPROC_ALT)glaltGetProcAddressExtension("glDepthRangexOES","GL_OES_fixed_point");
	 fn(n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EvalCoord1xOES
#define GL_ALT_FUNDEF_EvalCoord1xOES
typedef void (*PFNGLEVALCOORD1XOESPROC_ALT)(GLfixed);
static inline void glEvalCoord1xOES(GLfixed u1)
{
	static PFNGLEVALCOORD1XOESPROC_ALT fn=(PFNGLEVALCOORD1XOESPROC_ALT)glaltGetProcAddressExtension("glEvalCoord1xOES","GL_OES_fixed_point");
	 fn(u1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EvalCoord1xvOES
#define GL_ALT_FUNDEF_EvalCoord1xvOES
typedef void (*PFNGLEVALCOORD1XVOESPROC_ALT)(const GLfixed *);
static inline void glEvalCoord1xvOES(const GLfixed * coords1)
{
	static PFNGLEVALCOORD1XVOESPROC_ALT fn=(PFNGLEVALCOORD1XVOESPROC_ALT)glaltGetProcAddressExtension("glEvalCoord1xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EvalCoord2xOES
#define GL_ALT_FUNDEF_EvalCoord2xOES
typedef void (*PFNGLEVALCOORD2XOESPROC_ALT)(GLfixed,GLfixed);
static inline void glEvalCoord2xOES(GLfixed u1,GLfixed v1)
{
	static PFNGLEVALCOORD2XOESPROC_ALT fn=(PFNGLEVALCOORD2XOESPROC_ALT)glaltGetProcAddressExtension("glEvalCoord2xOES","GL_OES_fixed_point");
	 fn(u1,v1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EvalCoord2xvOES
#define GL_ALT_FUNDEF_EvalCoord2xvOES
typedef void (*PFNGLEVALCOORD2XVOESPROC_ALT)(const GLfixed *);
static inline void glEvalCoord2xvOES(const GLfixed * coords1)
{
	static PFNGLEVALCOORD2XVOESPROC_ALT fn=(PFNGLEVALCOORD2XVOESPROC_ALT)glaltGetProcAddressExtension("glEvalCoord2xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FeedbackBufferxOES
#define GL_ALT_FUNDEF_FeedbackBufferxOES
typedef void (*PFNGLFEEDBACKBUFFERXOESPROC_ALT)(GLsizei,GLenum,const GLfixed *);
static inline void glFeedbackBufferxOES(GLsizei n1,GLenum type1,const GLfixed * buffer1)
{
	static PFNGLFEEDBACKBUFFERXOESPROC_ALT fn=(PFNGLFEEDBACKBUFFERXOESPROC_ALT)glaltGetProcAddressExtension("glFeedbackBufferxOES","GL_OES_fixed_point");
	 fn(n1,type1,buffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FogxOES
#define GL_ALT_FUNDEF_FogxOES
typedef void (*PFNGLFOGXOESPROC_ALT)(GLenum,GLfixed);
static inline void glFogxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLFOGXOESPROC_ALT fn=(PFNGLFOGXOESPROC_ALT)glaltGetProcAddressExtension("glFogxOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FogxvOES
#define GL_ALT_FUNDEF_FogxvOES
typedef void (*PFNGLFOGXVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glFogxvOES(GLenum pname1,const GLfixed * param1)
{
	static PFNGLFOGXVOESPROC_ALT fn=(PFNGLFOGXVOESPROC_ALT)glaltGetProcAddressExtension("glFogxvOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FrustumxOES
#define GL_ALT_FUNDEF_FrustumxOES
typedef void (*PFNGLFRUSTUMXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glFrustumxOES(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLFRUSTUMXOESPROC_ALT fn=(PFNGLFRUSTUMXOESPROC_ALT)glaltGetProcAddressExtension("glFrustumxOES","GL_OES_fixed_point");
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetClipPlanexOES
#define GL_ALT_FUNDEF_GetClipPlanexOES
typedef void (*PFNGLGETCLIPPLANEXOESPROC_ALT)(GLenum,GLfixed *);
static inline void glGetClipPlanexOES(GLenum plane1,GLfixed * equation1)
{
	static PFNGLGETCLIPPLANEXOESPROC_ALT fn=(PFNGLGETCLIPPLANEXOESPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanexOES","GL_OES_fixed_point");
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetConvolutionParameterxvOES
#define GL_ALT_FUNDEF_GetConvolutionParameterxvOES
typedef void (*PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetConvolutionParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_ALT fn=(PFNGLGETCONVOLUTIONPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glGetConvolutionParameterxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFixedvOES
#define GL_ALT_FUNDEF_GetFixedvOES
typedef void (*PFNGLGETFIXEDVOESPROC_ALT)(GLenum,GLfixed *);
static inline void glGetFixedvOES(GLenum pname1,GLfixed * params1)
{
	static PFNGLGETFIXEDVOESPROC_ALT fn=(PFNGLGETFIXEDVOESPROC_ALT)glaltGetProcAddressExtension("glGetFixedvOES","GL_OES_fixed_point");
	 fn(pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetHistogramParameterxvOES
#define GL_ALT_FUNDEF_GetHistogramParameterxvOES
typedef void (*PFNGLGETHISTOGRAMPARAMETERXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetHistogramParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETHISTOGRAMPARAMETERXVOESPROC_ALT fn=(PFNGLGETHISTOGRAMPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glGetHistogramParameterxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetLightxOES
#define GL_ALT_FUNDEF_GetLightxOES
typedef void (*PFNGLGETLIGHTXOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetLightxOES(GLenum light1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETLIGHTXOESPROC_ALT fn=(PFNGLGETLIGHTXOESPROC_ALT)glaltGetProcAddressExtension("glGetLightxOES","GL_OES_fixed_point");
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetLightxvOES
#define GL_ALT_FUNDEF_GetLightxvOES
typedef void (*PFNGLGETLIGHTXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetLightxvOES(GLenum light1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETLIGHTXVOESPROC_ALT fn=(PFNGLGETLIGHTXVOESPROC_ALT)glaltGetProcAddressExtension("glGetLightxvOES","GL_OES_fixed_point");
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetMapxvOES
#define GL_ALT_FUNDEF_GetMapxvOES
typedef void (*PFNGLGETMAPXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetMapxvOES(GLenum target1,GLenum query1,GLfixed * v1)
{
	static PFNGLGETMAPXVOESPROC_ALT fn=(PFNGLGETMAPXVOESPROC_ALT)glaltGetProcAddressExtension("glGetMapxvOES","GL_OES_fixed_point");
	 fn(target1,query1,v1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetMaterialxOES
#define GL_ALT_FUNDEF_GetMaterialxOES
typedef void (*PFNGLGETMATERIALXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glGetMaterialxOES(GLenum face1,GLenum pname1,GLfixed param1)
{
	static PFNGLGETMATERIALXOESPROC_ALT fn=(PFNGLGETMATERIALXOESPROC_ALT)glaltGetProcAddressExtension("glGetMaterialxOES","GL_OES_fixed_point");
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetMaterialxvOES
#define GL_ALT_FUNDEF_GetMaterialxvOES
typedef void (*PFNGLGETMATERIALXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetMaterialxvOES(GLenum face1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETMATERIALXVOESPROC_ALT fn=(PFNGLGETMATERIALXVOESPROC_ALT)glaltGetProcAddressExtension("glGetMaterialxvOES","GL_OES_fixed_point");
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetPixelMapxv
#define GL_ALT_FUNDEF_GetPixelMapxv
typedef void (*PFNGLGETPIXELMAPXVPROC_ALT)(GLenum,GLint,GLfixed *);
static inline void glGetPixelMapxv(GLenum map1,GLint size1,GLfixed * values1)
{
	static PFNGLGETPIXELMAPXVPROC_ALT fn=(PFNGLGETPIXELMAPXVPROC_ALT)glaltGetProcAddressExtension("glGetPixelMapxv","GL_OES_fixed_point");
	 fn(map1,size1,values1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexEnvxvOES
#define GL_ALT_FUNDEF_GetTexEnvxvOES
typedef void (*PFNGLGETTEXENVXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexEnvxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXENVXVOESPROC_ALT fn=(PFNGLGETTEXENVXVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexEnvxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexGenxvOES
#define GL_ALT_FUNDEF_GetTexGenxvOES
typedef void (*PFNGLGETTEXGENXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexGenxvOES(GLenum coord1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXGENXVOESPROC_ALT fn=(PFNGLGETTEXGENXVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexGenxvOES","GL_OES_fixed_point");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexLevelParameterxvOES
#define GL_ALT_FUNDEF_GetTexLevelParameterxvOES
typedef void (*PFNGLGETTEXLEVELPARAMETERXVOESPROC_ALT)(GLenum,GLint,GLenum,GLfixed *);
static inline void glGetTexLevelParameterxvOES(GLenum target1,GLint level1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXLEVELPARAMETERXVOESPROC_ALT fn=(PFNGLGETTEXLEVELPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexLevelParameterxvOES","GL_OES_fixed_point");
	 fn(target1,level1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexParameterxvOES
#define GL_ALT_FUNDEF_GetTexParameterxvOES
typedef void (*PFNGLGETTEXPARAMETERXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexParameterxvOES(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXPARAMETERXVOESPROC_ALT fn=(PFNGLGETTEXPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IndexxOES
#define GL_ALT_FUNDEF_IndexxOES
typedef void (*PFNGLINDEXXOESPROC_ALT)(GLfixed);
static inline void glIndexxOES(GLfixed component1)
{
	static PFNGLINDEXXOESPROC_ALT fn=(PFNGLINDEXXOESPROC_ALT)glaltGetProcAddressExtension("glIndexxOES","GL_OES_fixed_point");
	 fn(component1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IndexxvOES
#define GL_ALT_FUNDEF_IndexxvOES
typedef void (*PFNGLINDEXXVOESPROC_ALT)(const GLfixed *);
static inline void glIndexxvOES(const GLfixed * component1)
{
	static PFNGLINDEXXVOESPROC_ALT fn=(PFNGLINDEXXVOESPROC_ALT)glaltGetProcAddressExtension("glIndexxvOES","GL_OES_fixed_point");
	 fn(component1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LightModelxOES
#define GL_ALT_FUNDEF_LightModelxOES
typedef void (*PFNGLLIGHTMODELXOESPROC_ALT)(GLenum,GLfixed);
static inline void glLightModelxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTMODELXOESPROC_ALT fn=(PFNGLLIGHTMODELXOESPROC_ALT)glaltGetProcAddressExtension("glLightModelxOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LightModelxvOES
#define GL_ALT_FUNDEF_LightModelxvOES
typedef void (*PFNGLLIGHTMODELXVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glLightModelxvOES(GLenum pname1,const GLfixed * param1)
{
	static PFNGLLIGHTMODELXVOESPROC_ALT fn=(PFNGLLIGHTMODELXVOESPROC_ALT)glaltGetProcAddressExtension("glLightModelxvOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LightxOES
#define GL_ALT_FUNDEF_LightxOES
typedef void (*PFNGLLIGHTXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glLightxOES(GLenum light1,GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTXOESPROC_ALT fn=(PFNGLLIGHTXOESPROC_ALT)glaltGetProcAddressExtension("glLightxOES","GL_OES_fixed_point");
	 fn(light1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LightxvOES
#define GL_ALT_FUNDEF_LightxvOES
typedef void (*PFNGLLIGHTXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glLightxvOES(GLenum light1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLLIGHTXVOESPROC_ALT fn=(PFNGLLIGHTXVOESPROC_ALT)glaltGetProcAddressExtension("glLightxvOES","GL_OES_fixed_point");
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LineWidthxOES
#define GL_ALT_FUNDEF_LineWidthxOES
typedef void (*PFNGLLINEWIDTHXOESPROC_ALT)(GLfixed);
static inline void glLineWidthxOES(GLfixed width1)
{
	static PFNGLLINEWIDTHXOESPROC_ALT fn=(PFNGLLINEWIDTHXOESPROC_ALT)glaltGetProcAddressExtension("glLineWidthxOES","GL_OES_fixed_point");
	 fn(width1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LoadMatrixxOES
#define GL_ALT_FUNDEF_LoadMatrixxOES
typedef void (*PFNGLLOADMATRIXXOESPROC_ALT)(const GLfixed *);
static inline void glLoadMatrixxOES(const GLfixed * m1)
{
	static PFNGLLOADMATRIXXOESPROC_ALT fn=(PFNGLLOADMATRIXXOESPROC_ALT)glaltGetProcAddressExtension("glLoadMatrixxOES","GL_OES_fixed_point");
	 fn(m1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LoadTransposeMatrixxOES
#define GL_ALT_FUNDEF_LoadTransposeMatrixxOES
typedef void (*PFNGLLOADTRANSPOSEMATRIXXOESPROC_ALT)(const GLfixed *);
static inline void glLoadTransposeMatrixxOES(const GLfixed * m1)
{
	static PFNGLLOADTRANSPOSEMATRIXXOESPROC_ALT fn=(PFNGLLOADTRANSPOSEMATRIXXOESPROC_ALT)glaltGetProcAddressExtension("glLoadTransposeMatrixxOES","GL_OES_fixed_point");
	 fn(m1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Map1xOES
#define GL_ALT_FUNDEF_Map1xOES
typedef void (*PFNGLMAP1XOESPROC_ALT)(GLenum,GLfixed,GLfixed,GLint,GLint,GLfixed);
static inline void glMap1xOES(GLenum target1,GLfixed u11,GLfixed u21,GLint stride1,GLint order1,GLfixed points1)
{
	static PFNGLMAP1XOESPROC_ALT fn=(PFNGLMAP1XOESPROC_ALT)glaltGetProcAddressExtension("glMap1xOES","GL_OES_fixed_point");
	 fn(target1,u11,u21,stride1,order1,points1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Map2xOES
#define GL_ALT_FUNDEF_Map2xOES
typedef void (*PFNGLMAP2XOESPROC_ALT)(GLenum,GLfixed,GLfixed,GLint,GLint,GLfixed,GLfixed,GLint,GLint,GLfixed);
static inline void glMap2xOES(GLenum target1,GLfixed u11,GLfixed u21,GLint ustride1,GLint uorder1,GLfixed v11,GLfixed v21,GLint vstride1,GLint vorder1,GLfixed points1)
{
	static PFNGLMAP2XOESPROC_ALT fn=(PFNGLMAP2XOESPROC_ALT)glaltGetProcAddressExtension("glMap2xOES","GL_OES_fixed_point");
	 fn(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MapGrid1xOES
#define GL_ALT_FUNDEF_MapGrid1xOES
typedef void (*PFNGLMAPGRID1XOESPROC_ALT)(GLint,GLfixed,GLfixed);
static inline void glMapGrid1xOES(GLint n1,GLfixed u11,GLfixed u21)
{
	static PFNGLMAPGRID1XOESPROC_ALT fn=(PFNGLMAPGRID1XOESPROC_ALT)glaltGetProcAddressExtension("glMapGrid1xOES","GL_OES_fixed_point");
	 fn(n1,u11,u21);
}
#endif

#ifndef	GL_ALT_FUNDEF_MapGrid2xOES
#define GL_ALT_FUNDEF_MapGrid2xOES
typedef void (*PFNGLMAPGRID2XOESPROC_ALT)(GLint,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glMapGrid2xOES(GLint n1,GLfixed u11,GLfixed u21,GLfixed v11,GLfixed v21)
{
	static PFNGLMAPGRID2XOESPROC_ALT fn=(PFNGLMAPGRID2XOESPROC_ALT)glaltGetProcAddressExtension("glMapGrid2xOES","GL_OES_fixed_point");
	 fn(n1,u11,u21,v11,v21);
}
#endif

#ifndef	GL_ALT_FUNDEF_MaterialxOES
#define GL_ALT_FUNDEF_MaterialxOES
typedef void (*PFNGLMATERIALXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glMaterialxOES(GLenum face1,GLenum pname1,GLfixed param1)
{
	static PFNGLMATERIALXOESPROC_ALT fn=(PFNGLMATERIALXOESPROC_ALT)glaltGetProcAddressExtension("glMaterialxOES","GL_OES_fixed_point");
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MaterialxvOES
#define GL_ALT_FUNDEF_MaterialxvOES
typedef void (*PFNGLMATERIALXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glMaterialxvOES(GLenum face1,GLenum pname1,const GLfixed * param1)
{
	static PFNGLMATERIALXVOESPROC_ALT fn=(PFNGLMATERIALXVOESPROC_ALT)glaltGetProcAddressExtension("glMaterialxvOES","GL_OES_fixed_point");
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultMatrixxOES
#define GL_ALT_FUNDEF_MultMatrixxOES
typedef void (*PFNGLMULTMATRIXXOESPROC_ALT)(const GLfixed *);
static inline void glMultMatrixxOES(const GLfixed * m1)
{
	static PFNGLMULTMATRIXXOESPROC_ALT fn=(PFNGLMULTMATRIXXOESPROC_ALT)glaltGetProcAddressExtension("glMultMatrixxOES","GL_OES_fixed_point");
	 fn(m1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultTransposeMatrixxOES
#define GL_ALT_FUNDEF_MultTransposeMatrixxOES
typedef void (*PFNGLMULTTRANSPOSEMATRIXXOESPROC_ALT)(const GLfixed *);
static inline void glMultTransposeMatrixxOES(const GLfixed * m1)
{
	static PFNGLMULTTRANSPOSEMATRIXXOESPROC_ALT fn=(PFNGLMULTTRANSPOSEMATRIXXOESPROC_ALT)glaltGetProcAddressExtension("glMultTransposeMatrixxOES","GL_OES_fixed_point");
	 fn(m1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord1xOES
#define GL_ALT_FUNDEF_MultiTexCoord1xOES
typedef void (*PFNGLMULTITEXCOORD1XOESPROC_ALT)(GLenum,GLfixed);
static inline void glMultiTexCoord1xOES(GLenum texture1,GLfixed s1)
{
	static PFNGLMULTITEXCOORD1XOESPROC_ALT fn=(PFNGLMULTITEXCOORD1XOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord1xOES","GL_OES_fixed_point");
	 fn(texture1,s1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord1xvOES
#define GL_ALT_FUNDEF_MultiTexCoord1xvOES
typedef void (*PFNGLMULTITEXCOORD1XVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glMultiTexCoord1xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD1XVOESPROC_ALT fn=(PFNGLMULTITEXCOORD1XVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord1xvOES","GL_OES_fixed_point");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord2xOES
#define GL_ALT_FUNDEF_MultiTexCoord2xOES
typedef void (*PFNGLMULTITEXCOORD2XOESPROC_ALT)(GLenum,GLfixed,GLfixed);
static inline void glMultiTexCoord2xOES(GLenum texture1,GLfixed s1,GLfixed t1)
{
	static PFNGLMULTITEXCOORD2XOESPROC_ALT fn=(PFNGLMULTITEXCOORD2XOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord2xOES","GL_OES_fixed_point");
	 fn(texture1,s1,t1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord2xvOES
#define GL_ALT_FUNDEF_MultiTexCoord2xvOES
typedef void (*PFNGLMULTITEXCOORD2XVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glMultiTexCoord2xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD2XVOESPROC_ALT fn=(PFNGLMULTITEXCOORD2XVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord2xvOES","GL_OES_fixed_point");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord3xOES
#define GL_ALT_FUNDEF_MultiTexCoord3xOES
typedef void (*PFNGLMULTITEXCOORD3XOESPROC_ALT)(GLenum,GLfixed,GLfixed,GLfixed);
static inline void glMultiTexCoord3xOES(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1)
{
	static PFNGLMULTITEXCOORD3XOESPROC_ALT fn=(PFNGLMULTITEXCOORD3XOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord3xOES","GL_OES_fixed_point");
	 fn(texture1,s1,t1,r1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord3xvOES
#define GL_ALT_FUNDEF_MultiTexCoord3xvOES
typedef void (*PFNGLMULTITEXCOORD3XVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glMultiTexCoord3xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD3XVOESPROC_ALT fn=(PFNGLMULTITEXCOORD3XVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord3xvOES","GL_OES_fixed_point");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord4xOES
#define GL_ALT_FUNDEF_MultiTexCoord4xOES
typedef void (*PFNGLMULTITEXCOORD4XOESPROC_ALT)(GLenum,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glMultiTexCoord4xOES(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
	static PFNGLMULTITEXCOORD4XOESPROC_ALT fn=(PFNGLMULTITEXCOORD4XOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4xOES","GL_OES_fixed_point");
	 fn(texture1,s1,t1,r1,q1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultiTexCoord4xvOES
#define GL_ALT_FUNDEF_MultiTexCoord4xvOES
typedef void (*PFNGLMULTITEXCOORD4XVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glMultiTexCoord4xvOES(GLenum texture1,const GLfixed * coords1)
{
	static PFNGLMULTITEXCOORD4XVOESPROC_ALT fn=(PFNGLMULTITEXCOORD4XVOESPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4xvOES","GL_OES_fixed_point");
	 fn(texture1,coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Normal3xOES
#define GL_ALT_FUNDEF_Normal3xOES
typedef void (*PFNGLNORMAL3XOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glNormal3xOES(GLfixed nx1,GLfixed ny1,GLfixed nz1)
{
	static PFNGLNORMAL3XOESPROC_ALT fn=(PFNGLNORMAL3XOESPROC_ALT)glaltGetProcAddressExtension("glNormal3xOES","GL_OES_fixed_point");
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Normal3xvOES
#define GL_ALT_FUNDEF_Normal3xvOES
typedef void (*PFNGLNORMAL3XVOESPROC_ALT)(const GLfixed *);
static inline void glNormal3xvOES(const GLfixed * coords1)
{
	static PFNGLNORMAL3XVOESPROC_ALT fn=(PFNGLNORMAL3XVOESPROC_ALT)glaltGetProcAddressExtension("glNormal3xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_OrthoxOES
#define GL_ALT_FUNDEF_OrthoxOES
typedef void (*PFNGLORTHOXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glOrthoxOES(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLORTHOXOESPROC_ALT fn=(PFNGLORTHOXOESPROC_ALT)glaltGetProcAddressExtension("glOrthoxOES","GL_OES_fixed_point");
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PassThroughxOES
#define GL_ALT_FUNDEF_PassThroughxOES
typedef void (*PFNGLPASSTHROUGHXOESPROC_ALT)(GLfixed);
static inline void glPassThroughxOES(GLfixed token1)
{
	static PFNGLPASSTHROUGHXOESPROC_ALT fn=(PFNGLPASSTHROUGHXOESPROC_ALT)glaltGetProcAddressExtension("glPassThroughxOES","GL_OES_fixed_point");
	 fn(token1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PixelMapx
#define GL_ALT_FUNDEF_PixelMapx
typedef void (*PFNGLPIXELMAPXPROC_ALT)(GLenum,GLint,const GLfixed *);
static inline void glPixelMapx(GLenum map1,GLint size1,const GLfixed * values1)
{
	static PFNGLPIXELMAPXPROC_ALT fn=(PFNGLPIXELMAPXPROC_ALT)glaltGetProcAddressExtension("glPixelMapx","GL_OES_fixed_point");
	 fn(map1,size1,values1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PixelStorex
#define GL_ALT_FUNDEF_PixelStorex
typedef void (*PFNGLPIXELSTOREXPROC_ALT)(GLenum,GLfixed);
static inline void glPixelStorex(GLenum pname1,GLfixed param1)
{
	static PFNGLPIXELSTOREXPROC_ALT fn=(PFNGLPIXELSTOREXPROC_ALT)glaltGetProcAddressExtension("glPixelStorex","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PixelTransferxOES
#define GL_ALT_FUNDEF_PixelTransferxOES
typedef void (*PFNGLPIXELTRANSFERXOESPROC_ALT)(GLenum,GLfixed);
static inline void glPixelTransferxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLPIXELTRANSFERXOESPROC_ALT fn=(PFNGLPIXELTRANSFERXOESPROC_ALT)glaltGetProcAddressExtension("glPixelTransferxOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PixelZoomxOES
#define GL_ALT_FUNDEF_PixelZoomxOES
typedef void (*PFNGLPIXELZOOMXOESPROC_ALT)(GLfixed,GLfixed);
static inline void glPixelZoomxOES(GLfixed xfactor1,GLfixed yfactor1)
{
	static PFNGLPIXELZOOMXOESPROC_ALT fn=(PFNGLPIXELZOOMXOESPROC_ALT)glaltGetProcAddressExtension("glPixelZoomxOES","GL_OES_fixed_point");
	 fn(xfactor1,yfactor1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PointParameterxOES
#define GL_ALT_FUNDEF_PointParameterxOES
typedef void (*PFNGLPOINTPARAMETERXOESPROC_ALT)(GLenum,GLfixed);
static inline void glPointParameterxOES(GLenum pname1,GLfixed param1)
{
	static PFNGLPOINTPARAMETERXOESPROC_ALT fn=(PFNGLPOINTPARAMETERXOESPROC_ALT)glaltGetProcAddressExtension("glPointParameterxOES","GL_OES_fixed_point");
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PointParameterxvOES
#define GL_ALT_FUNDEF_PointParameterxvOES
typedef void (*PFNGLPOINTPARAMETERXVOESPROC_ALT)(GLenum,const GLfixed *);
static inline void glPointParameterxvOES(GLenum pname1,const GLfixed * params1)
{
	static PFNGLPOINTPARAMETERXVOESPROC_ALT fn=(PFNGLPOINTPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glPointParameterxvOES","GL_OES_fixed_point");
	 fn(pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PointSizexOES
#define GL_ALT_FUNDEF_PointSizexOES
typedef void (*PFNGLPOINTSIZEXOESPROC_ALT)(GLfixed);
static inline void glPointSizexOES(GLfixed size1)
{
	static PFNGLPOINTSIZEXOESPROC_ALT fn=(PFNGLPOINTSIZEXOESPROC_ALT)glaltGetProcAddressExtension("glPointSizexOES","GL_OES_fixed_point");
	 fn(size1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PolygonOffsetxOES
#define GL_ALT_FUNDEF_PolygonOffsetxOES
typedef void (*PFNGLPOLYGONOFFSETXOESPROC_ALT)(GLfixed,GLfixed);
static inline void glPolygonOffsetxOES(GLfixed factor1,GLfixed units1)
{
	static PFNGLPOLYGONOFFSETXOESPROC_ALT fn=(PFNGLPOLYGONOFFSETXOESPROC_ALT)glaltGetProcAddressExtension("glPolygonOffsetxOES","GL_OES_fixed_point");
	 fn(factor1,units1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PrioritizeTexturesxOES
#define GL_ALT_FUNDEF_PrioritizeTexturesxOES
typedef void (*PFNGLPRIORITIZETEXTURESXOESPROC_ALT)(GLsizei,const GLuint *,const GLfixed *);
static inline void glPrioritizeTexturesxOES(GLsizei n1,const GLuint * textures1,const GLfixed * priorities1)
{
	static PFNGLPRIORITIZETEXTURESXOESPROC_ALT fn=(PFNGLPRIORITIZETEXTURESXOESPROC_ALT)glaltGetProcAddressExtension("glPrioritizeTexturesxOES","GL_OES_fixed_point");
	 fn(n1,textures1,priorities1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos2xOES
#define GL_ALT_FUNDEF_RasterPos2xOES
typedef void (*PFNGLRASTERPOS2XOESPROC_ALT)(GLfixed,GLfixed);
static inline void glRasterPos2xOES(GLfixed x1,GLfixed y1)
{
	static PFNGLRASTERPOS2XOESPROC_ALT fn=(PFNGLRASTERPOS2XOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos2xOES","GL_OES_fixed_point");
	 fn(x1,y1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos2xvOES
#define GL_ALT_FUNDEF_RasterPos2xvOES
typedef void (*PFNGLRASTERPOS2XVOESPROC_ALT)(const GLfixed *);
static inline void glRasterPos2xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS2XVOESPROC_ALT fn=(PFNGLRASTERPOS2XVOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos2xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos3xOES
#define GL_ALT_FUNDEF_RasterPos3xOES
typedef void (*PFNGLRASTERPOS3XOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glRasterPos3xOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLRASTERPOS3XOESPROC_ALT fn=(PFNGLRASTERPOS3XOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos3xOES","GL_OES_fixed_point");
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos3xvOES
#define GL_ALT_FUNDEF_RasterPos3xvOES
typedef void (*PFNGLRASTERPOS3XVOESPROC_ALT)(const GLfixed *);
static inline void glRasterPos3xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS3XVOESPROC_ALT fn=(PFNGLRASTERPOS3XVOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos3xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos4xOES
#define GL_ALT_FUNDEF_RasterPos4xOES
typedef void (*PFNGLRASTERPOS4XOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glRasterPos4xOES(GLfixed x1,GLfixed y1,GLfixed z1,GLfixed w1)
{
	static PFNGLRASTERPOS4XOESPROC_ALT fn=(PFNGLRASTERPOS4XOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos4xOES","GL_OES_fixed_point");
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RasterPos4xvOES
#define GL_ALT_FUNDEF_RasterPos4xvOES
typedef void (*PFNGLRASTERPOS4XVOESPROC_ALT)(const GLfixed *);
static inline void glRasterPos4xvOES(const GLfixed * coords1)
{
	static PFNGLRASTERPOS4XVOESPROC_ALT fn=(PFNGLRASTERPOS4XVOESPROC_ALT)glaltGetProcAddressExtension("glRasterPos4xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RectxOES
#define GL_ALT_FUNDEF_RectxOES
typedef void (*PFNGLRECTXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glRectxOES(GLfixed x11,GLfixed y11,GLfixed x21,GLfixed y21)
{
	static PFNGLRECTXOESPROC_ALT fn=(PFNGLRECTXOESPROC_ALT)glaltGetProcAddressExtension("glRectxOES","GL_OES_fixed_point");
	 fn(x11,y11,x21,y21);
}
#endif

#ifndef	GL_ALT_FUNDEF_RectxvOES
#define GL_ALT_FUNDEF_RectxvOES
typedef void (*PFNGLRECTXVOESPROC_ALT)(const GLfixed *,const GLfixed *);
static inline void glRectxvOES(const GLfixed * v11,const GLfixed * v21)
{
	static PFNGLRECTXVOESPROC_ALT fn=(PFNGLRECTXVOESPROC_ALT)glaltGetProcAddressExtension("glRectxvOES","GL_OES_fixed_point");
	 fn(v11,v21);
}
#endif

#ifndef	GL_ALT_FUNDEF_RotatexOES
#define GL_ALT_FUNDEF_RotatexOES
typedef void (*PFNGLROTATEXOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glRotatexOES(GLfixed angle1,GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLROTATEXOESPROC_ALT fn=(PFNGLROTATEXOESPROC_ALT)glaltGetProcAddressExtension("glRotatexOES","GL_OES_fixed_point");
	 fn(angle1,x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_SampleCoverageOES
#define GL_ALT_FUNDEF_SampleCoverageOES
typedef void (*PFNGLSAMPLECOVERAGEOESPROC_ALT)(GLfixed,GLboolean);
static inline void glSampleCoverageOES(GLfixed value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEOESPROC_ALT fn=(PFNGLSAMPLECOVERAGEOESPROC_ALT)glaltGetProcAddressExtension("glSampleCoverageOES","GL_OES_fixed_point");
	 fn(value1,invert1);
}
#endif

#ifndef	GL_ALT_FUNDEF_SampleCoveragexOES
#define GL_ALT_FUNDEF_SampleCoveragexOES
typedef void (*PFNGLSAMPLECOVERAGEXOESPROC_ALT)(GLclampx,GLboolean);
static inline void glSampleCoveragexOES(GLclampx value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEXOESPROC_ALT fn=(PFNGLSAMPLECOVERAGEXOESPROC_ALT)glaltGetProcAddressExtension("glSampleCoveragexOES","GL_OES_fixed_point");
	 fn(value1,invert1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ScalexOES
#define GL_ALT_FUNDEF_ScalexOES
typedef void (*PFNGLSCALEXOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glScalexOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLSCALEXOESPROC_ALT fn=(PFNGLSCALEXOESPROC_ALT)glaltGetProcAddressExtension("glScalexOES","GL_OES_fixed_point");
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord1xOES
#define GL_ALT_FUNDEF_TexCoord1xOES
typedef void (*PFNGLTEXCOORD1XOESPROC_ALT)(GLfixed);
static inline void glTexCoord1xOES(GLfixed s1)
{
	static PFNGLTEXCOORD1XOESPROC_ALT fn=(PFNGLTEXCOORD1XOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord1xOES","GL_OES_fixed_point");
	 fn(s1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord1xvOES
#define GL_ALT_FUNDEF_TexCoord1xvOES
typedef void (*PFNGLTEXCOORD1XVOESPROC_ALT)(const GLfixed *);
static inline void glTexCoord1xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD1XVOESPROC_ALT fn=(PFNGLTEXCOORD1XVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord1xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord2xOES
#define GL_ALT_FUNDEF_TexCoord2xOES
typedef void (*PFNGLTEXCOORD2XOESPROC_ALT)(GLfixed,GLfixed);
static inline void glTexCoord2xOES(GLfixed s1,GLfixed t1)
{
	static PFNGLTEXCOORD2XOESPROC_ALT fn=(PFNGLTEXCOORD2XOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord2xOES","GL_OES_fixed_point");
	 fn(s1,t1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord2xvOES
#define GL_ALT_FUNDEF_TexCoord2xvOES
typedef void (*PFNGLTEXCOORD2XVOESPROC_ALT)(const GLfixed *);
static inline void glTexCoord2xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD2XVOESPROC_ALT fn=(PFNGLTEXCOORD2XVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord2xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord3xOES
#define GL_ALT_FUNDEF_TexCoord3xOES
typedef void (*PFNGLTEXCOORD3XOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glTexCoord3xOES(GLfixed s1,GLfixed t1,GLfixed r1)
{
	static PFNGLTEXCOORD3XOESPROC_ALT fn=(PFNGLTEXCOORD3XOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord3xOES","GL_OES_fixed_point");
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord3xvOES
#define GL_ALT_FUNDEF_TexCoord3xvOES
typedef void (*PFNGLTEXCOORD3XVOESPROC_ALT)(const GLfixed *);
static inline void glTexCoord3xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD3XVOESPROC_ALT fn=(PFNGLTEXCOORD3XVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord3xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord4xOES
#define GL_ALT_FUNDEF_TexCoord4xOES
typedef void (*PFNGLTEXCOORD4XOESPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glTexCoord4xOES(GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
	static PFNGLTEXCOORD4XOESPROC_ALT fn=(PFNGLTEXCOORD4XOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord4xOES","GL_OES_fixed_point");
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexCoord4xvOES
#define GL_ALT_FUNDEF_TexCoord4xvOES
typedef void (*PFNGLTEXCOORD4XVOESPROC_ALT)(const GLfixed *);
static inline void glTexCoord4xvOES(const GLfixed * coords1)
{
	static PFNGLTEXCOORD4XVOESPROC_ALT fn=(PFNGLTEXCOORD4XVOESPROC_ALT)glaltGetProcAddressExtension("glTexCoord4xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexEnvxOES
#define GL_ALT_FUNDEF_TexEnvxOES
typedef void (*PFNGLTEXENVXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexEnvxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXENVXOESPROC_ALT fn=(PFNGLTEXENVXOESPROC_ALT)glaltGetProcAddressExtension("glTexEnvxOES","GL_OES_fixed_point");
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexEnvxvOES
#define GL_ALT_FUNDEF_TexEnvxvOES
typedef void (*PFNGLTEXENVXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexEnvxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXENVXVOESPROC_ALT fn=(PFNGLTEXENVXVOESPROC_ALT)glaltGetProcAddressExtension("glTexEnvxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenxOES
#define GL_ALT_FUNDEF_TexGenxOES
typedef void (*PFNGLTEXGENXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexGenxOES(GLenum coord1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXGENXOESPROC_ALT fn=(PFNGLTEXGENXOESPROC_ALT)glaltGetProcAddressExtension("glTexGenxOES","GL_OES_fixed_point");
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenxvOES
#define GL_ALT_FUNDEF_TexGenxvOES
typedef void (*PFNGLTEXGENXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexGenxvOES(GLenum coord1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXGENXVOESPROC_ALT fn=(PFNGLTEXGENXVOESPROC_ALT)glaltGetProcAddressExtension("glTexGenxvOES","GL_OES_fixed_point");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexParameterxOES
#define GL_ALT_FUNDEF_TexParameterxOES
typedef void (*PFNGLTEXPARAMETERXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexParameterxOES(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXPARAMETERXOESPROC_ALT fn=(PFNGLTEXPARAMETERXOESPROC_ALT)glaltGetProcAddressExtension("glTexParameterxOES","GL_OES_fixed_point");
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexParameterxvOES
#define GL_ALT_FUNDEF_TexParameterxvOES
typedef void (*PFNGLTEXPARAMETERXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexParameterxvOES(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXPARAMETERXVOESPROC_ALT fn=(PFNGLTEXPARAMETERXVOESPROC_ALT)glaltGetProcAddressExtension("glTexParameterxvOES","GL_OES_fixed_point");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TranslatexOES
#define GL_ALT_FUNDEF_TranslatexOES
typedef void (*PFNGLTRANSLATEXOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glTranslatexOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLTRANSLATEXOESPROC_ALT fn=(PFNGLTRANSLATEXOESPROC_ALT)glaltGetProcAddressExtension("glTranslatexOES","GL_OES_fixed_point");
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex2xOES
#define GL_ALT_FUNDEF_Vertex2xOES
typedef void (*PFNGLVERTEX2XOESPROC_ALT)(GLfixed);
static inline void glVertex2xOES(GLfixed x1)
{
	static PFNGLVERTEX2XOESPROC_ALT fn=(PFNGLVERTEX2XOESPROC_ALT)glaltGetProcAddressExtension("glVertex2xOES","GL_OES_fixed_point");
	 fn(x1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex2xvOES
#define GL_ALT_FUNDEF_Vertex2xvOES
typedef void (*PFNGLVERTEX2XVOESPROC_ALT)(const GLfixed *);
static inline void glVertex2xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX2XVOESPROC_ALT fn=(PFNGLVERTEX2XVOESPROC_ALT)glaltGetProcAddressExtension("glVertex2xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex3xOES
#define GL_ALT_FUNDEF_Vertex3xOES
typedef void (*PFNGLVERTEX3XOESPROC_ALT)(GLfixed,GLfixed);
static inline void glVertex3xOES(GLfixed x1,GLfixed y1)
{
	static PFNGLVERTEX3XOESPROC_ALT fn=(PFNGLVERTEX3XOESPROC_ALT)glaltGetProcAddressExtension("glVertex3xOES","GL_OES_fixed_point");
	 fn(x1,y1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex3xvOES
#define GL_ALT_FUNDEF_Vertex3xvOES
typedef void (*PFNGLVERTEX3XVOESPROC_ALT)(const GLfixed *);
static inline void glVertex3xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX3XVOESPROC_ALT fn=(PFNGLVERTEX3XVOESPROC_ALT)glaltGetProcAddressExtension("glVertex3xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex4xOES
#define GL_ALT_FUNDEF_Vertex4xOES
typedef void (*PFNGLVERTEX4XOESPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glVertex4xOES(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLVERTEX4XOESPROC_ALT fn=(PFNGLVERTEX4XOESPROC_ALT)glaltGetProcAddressExtension("glVertex4xOES","GL_OES_fixed_point");
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Vertex4xvOES
#define GL_ALT_FUNDEF_Vertex4xvOES
typedef void (*PFNGLVERTEX4XVOESPROC_ALT)(const GLfixed *);
static inline void glVertex4xvOES(const GLfixed * coords1)
{
	static PFNGLVERTEX4XVOESPROC_ALT fn=(PFNGLVERTEX4XVOESPROC_ALT)glaltGetProcAddressExtension("glVertex4xvOES","GL_OES_fixed_point");
	 fn(coords1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_framebuffer_object
#define GL_OES_framebuffer_object
#ifndef GL_NONE_OES
#define GL_NONE_OES 0
#endif //GL_NONE_OES
#ifndef GL_INVALID_FRAMEBUFFER_OPERATION_OES
#define GL_INVALID_FRAMEBUFFER_OPERATION_OES 0x0506
#endif //GL_INVALID_FRAMEBUFFER_OPERATION_OES
#ifndef GL_RGBA4_OES
#define GL_RGBA4_OES 0x8056
#endif //GL_RGBA4_OES
#ifndef GL_RGB5_A1_OES
#define GL_RGB5_A1_OES 0x8057
#endif //GL_RGB5_A1_OES
#ifndef GL_DEPTH_COMPONENT16_OES
#define GL_DEPTH_COMPONENT16_OES 0x81A5
#endif //GL_DEPTH_COMPONENT16_OES
#ifndef GL_MAX_RENDERBUFFER_SIZE_OES
#define GL_MAX_RENDERBUFFER_SIZE_OES 0x84E8
#endif //GL_MAX_RENDERBUFFER_SIZE_OES
#ifndef GL_FRAMEBUFFER_BINDING_OES
#define GL_FRAMEBUFFER_BINDING_OES 0x8CA6
#endif //GL_FRAMEBUFFER_BINDING_OES
#ifndef GL_RENDERBUFFER_BINDING_OES
#define GL_RENDERBUFFER_BINDING_OES 0x8CA7
#endif //GL_RENDERBUFFER_BINDING_OES
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES 0x8CD0
#endif //GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES 0x8CD1
#endif //GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES 0x8CD2
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES 0x8CD3
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES
#ifndef GL_FRAMEBUFFER_COMPLETE_OES
#define GL_FRAMEBUFFER_COMPLETE_OES 0x8CD5
#endif //GL_FRAMEBUFFER_COMPLETE_OES
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES 0x8CD6
#endif //GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES 0x8CD7
#endif //GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES 0x8CD9
#endif //GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES
#ifndef GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES 0x8CDA
#endif //GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES
#ifndef GL_FRAMEBUFFER_UNSUPPORTED_OES
#define GL_FRAMEBUFFER_UNSUPPORTED_OES 0x8CDD
#endif //GL_FRAMEBUFFER_UNSUPPORTED_OES
#ifndef GL_COLOR_ATTACHMENT0_OES
#define GL_COLOR_ATTACHMENT0_OES 0x8CE0
#endif //GL_COLOR_ATTACHMENT0_OES
#ifndef GL_DEPTH_ATTACHMENT_OES
#define GL_DEPTH_ATTACHMENT_OES 0x8D00
#endif //GL_DEPTH_ATTACHMENT_OES
#ifndef GL_STENCIL_ATTACHMENT_OES
#define GL_STENCIL_ATTACHMENT_OES 0x8D20
#endif //GL_STENCIL_ATTACHMENT_OES
#ifndef GL_FRAMEBUFFER_OES
#define GL_FRAMEBUFFER_OES 0x8D40
#endif //GL_FRAMEBUFFER_OES
#ifndef GL_RENDERBUFFER_OES
#define GL_RENDERBUFFER_OES 0x8D41
#endif //GL_RENDERBUFFER_OES
#ifndef GL_RENDERBUFFER_WIDTH_OES
#define GL_RENDERBUFFER_WIDTH_OES 0x8D42
#endif //GL_RENDERBUFFER_WIDTH_OES
#ifndef GL_RENDERBUFFER_HEIGHT_OES
#define GL_RENDERBUFFER_HEIGHT_OES 0x8D43
#endif //GL_RENDERBUFFER_HEIGHT_OES
#ifndef GL_RENDERBUFFER_INTERNAL_FORMAT_OES
#define GL_RENDERBUFFER_INTERNAL_FORMAT_OES 0x8D44
#endif //GL_RENDERBUFFER_INTERNAL_FORMAT_OES
#ifndef GL_RENDERBUFFER_RED_SIZE_OES
#define GL_RENDERBUFFER_RED_SIZE_OES 0x8D50
#endif //GL_RENDERBUFFER_RED_SIZE_OES
#ifndef GL_RENDERBUFFER_GREEN_SIZE_OES
#define GL_RENDERBUFFER_GREEN_SIZE_OES 0x8D51
#endif //GL_RENDERBUFFER_GREEN_SIZE_OES
#ifndef GL_RENDERBUFFER_BLUE_SIZE_OES
#define GL_RENDERBUFFER_BLUE_SIZE_OES 0x8D52
#endif //GL_RENDERBUFFER_BLUE_SIZE_OES
#ifndef GL_RENDERBUFFER_ALPHA_SIZE_OES
#define GL_RENDERBUFFER_ALPHA_SIZE_OES 0x8D53
#endif //GL_RENDERBUFFER_ALPHA_SIZE_OES
#ifndef GL_RENDERBUFFER_DEPTH_SIZE_OES
#define GL_RENDERBUFFER_DEPTH_SIZE_OES 0x8D54
#endif //GL_RENDERBUFFER_DEPTH_SIZE_OES
#ifndef GL_RENDERBUFFER_STENCIL_SIZE_OES
#define GL_RENDERBUFFER_STENCIL_SIZE_OES 0x8D55
#endif //GL_RENDERBUFFER_STENCIL_SIZE_OES
#ifndef GL_RGB565_OES
#define GL_RGB565_OES 0x8D62
#endif //GL_RGB565_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_BindFramebufferOES
#define GL_ALT_FUNDEF_BindFramebufferOES
typedef void (*PFNGLBINDFRAMEBUFFEROESPROC_ALT)(GLenum,GLuint);
static inline void glBindFramebufferOES(GLenum target1,GLuint framebuffer1)
{
	static PFNGLBINDFRAMEBUFFEROESPROC_ALT fn=(PFNGLBINDFRAMEBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glBindFramebufferOES","GL_OES_framebuffer_object");
	 fn(target1,framebuffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_BindRenderbufferOES
#define GL_ALT_FUNDEF_BindRenderbufferOES
typedef void (*PFNGLBINDRENDERBUFFEROESPROC_ALT)(GLenum,GLuint);
static inline void glBindRenderbufferOES(GLenum target1,GLuint renderbuffer1)
{
	static PFNGLBINDRENDERBUFFEROESPROC_ALT fn=(PFNGLBINDRENDERBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glBindRenderbufferOES","GL_OES_framebuffer_object");
	 fn(target1,renderbuffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_CheckFramebufferStatusOES
#define GL_ALT_FUNDEF_CheckFramebufferStatusOES
typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_ALT)(GLenum);
static inline GLenum glCheckFramebufferStatusOES(GLenum target1)
{
	static PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_ALT fn=(PFNGLCHECKFRAMEBUFFERSTATUSOESPROC_ALT)glaltGetProcAddressExtension("glCheckFramebufferStatusOES","GL_OES_framebuffer_object");
	return fn(target1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeleteFramebuffersOES
#define GL_ALT_FUNDEF_DeleteFramebuffersOES
typedef void (*PFNGLDELETEFRAMEBUFFERSOESPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteFramebuffersOES(GLsizei n1,const GLuint * framebuffers1)
{
	static PFNGLDELETEFRAMEBUFFERSOESPROC_ALT fn=(PFNGLDELETEFRAMEBUFFERSOESPROC_ALT)glaltGetProcAddressExtension("glDeleteFramebuffersOES","GL_OES_framebuffer_object");
	 fn(n1,framebuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DeleteRenderbuffersOES
#define GL_ALT_FUNDEF_DeleteRenderbuffersOES
typedef void (*PFNGLDELETERENDERBUFFERSOESPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteRenderbuffersOES(GLsizei n1,const GLuint * renderbuffers1)
{
	static PFNGLDELETERENDERBUFFERSOESPROC_ALT fn=(PFNGLDELETERENDERBUFFERSOESPROC_ALT)glaltGetProcAddressExtension("glDeleteRenderbuffersOES","GL_OES_framebuffer_object");
	 fn(n1,renderbuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FramebufferRenderbufferOES
#define GL_ALT_FUNDEF_FramebufferRenderbufferOES
typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_ALT)(GLenum,GLenum,GLenum,GLuint);
static inline void glFramebufferRenderbufferOES(GLenum target1,GLenum attachment1,GLenum renderbuffertarget1,GLuint renderbuffer1)
{
	static PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_ALT fn=(PFNGLFRAMEBUFFERRENDERBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glFramebufferRenderbufferOES","GL_OES_framebuffer_object");
	 fn(target1,attachment1,renderbuffertarget1,renderbuffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_FramebufferTexture2DOES
#define GL_ALT_FUNDEF_FramebufferTexture2DOES
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DOESPROC_ALT)(GLenum,GLenum,GLenum,GLuint,GLint);
static inline void glFramebufferTexture2DOES(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DOESPROC_ALT fn=(PFNGLFRAMEBUFFERTEXTURE2DOESPROC_ALT)glaltGetProcAddressExtension("glFramebufferTexture2DOES","GL_OES_framebuffer_object");
	 fn(target1,attachment1,textarget1,texture1,level1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenFramebuffersOES
#define GL_ALT_FUNDEF_GenFramebuffersOES
typedef void (*PFNGLGENFRAMEBUFFERSOESPROC_ALT)(GLsizei,GLuint *);
static inline void glGenFramebuffersOES(GLsizei n1,GLuint * framebuffers1)
{
	static PFNGLGENFRAMEBUFFERSOESPROC_ALT fn=(PFNGLGENFRAMEBUFFERSOESPROC_ALT)glaltGetProcAddressExtension("glGenFramebuffersOES","GL_OES_framebuffer_object");
	 fn(n1,framebuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenRenderbuffersOES
#define GL_ALT_FUNDEF_GenRenderbuffersOES
typedef void (*PFNGLGENRENDERBUFFERSOESPROC_ALT)(GLsizei,GLuint *);
static inline void glGenRenderbuffersOES(GLsizei n1,GLuint * renderbuffers1)
{
	static PFNGLGENRENDERBUFFERSOESPROC_ALT fn=(PFNGLGENRENDERBUFFERSOESPROC_ALT)glaltGetProcAddressExtension("glGenRenderbuffersOES","GL_OES_framebuffer_object");
	 fn(n1,renderbuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GenerateMipmapOES
#define GL_ALT_FUNDEF_GenerateMipmapOES
typedef void (*PFNGLGENERATEMIPMAPOESPROC_ALT)(GLenum);
static inline void glGenerateMipmapOES(GLenum target1)
{
	static PFNGLGENERATEMIPMAPOESPROC_ALT fn=(PFNGLGENERATEMIPMAPOESPROC_ALT)glaltGetProcAddressExtension("glGenerateMipmapOES","GL_OES_framebuffer_object");
	 fn(target1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFramebufferAttachmentParameterivOES
#define GL_ALT_FUNDEF_GetFramebufferAttachmentParameterivOES
typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_ALT)(GLenum,GLenum,GLenum,GLint *);
static inline void glGetFramebufferAttachmentParameterivOES(GLenum target1,GLenum attachment1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_ALT fn=(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC_ALT)glaltGetProcAddressExtension("glGetFramebufferAttachmentParameterivOES","GL_OES_framebuffer_object");
	 fn(target1,attachment1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetRenderbufferParameterivOES
#define GL_ALT_FUNDEF_GetRenderbufferParameterivOES
typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetRenderbufferParameterivOES(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_ALT fn=(PFNGLGETRENDERBUFFERPARAMETERIVOESPROC_ALT)glaltGetProcAddressExtension("glGetRenderbufferParameterivOES","GL_OES_framebuffer_object");
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsFramebufferOES
#define GL_ALT_FUNDEF_IsFramebufferOES
typedef GLboolean (*PFNGLISFRAMEBUFFEROESPROC_ALT)(GLuint);
static inline GLboolean glIsFramebufferOES(GLuint framebuffer1)
{
	static PFNGLISFRAMEBUFFEROESPROC_ALT fn=(PFNGLISFRAMEBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glIsFramebufferOES","GL_OES_framebuffer_object");
	return fn(framebuffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_IsRenderbufferOES
#define GL_ALT_FUNDEF_IsRenderbufferOES
typedef GLboolean (*PFNGLISRENDERBUFFEROESPROC_ALT)(GLuint);
static inline GLboolean glIsRenderbufferOES(GLuint renderbuffer1)
{
	static PFNGLISRENDERBUFFEROESPROC_ALT fn=(PFNGLISRENDERBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glIsRenderbufferOES","GL_OES_framebuffer_object");
	return fn(renderbuffer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_RenderbufferStorageOES
#define GL_ALT_FUNDEF_RenderbufferStorageOES
typedef void (*PFNGLRENDERBUFFERSTORAGEOESPROC_ALT)(GLenum,GLenum,GLsizei,GLsizei);
static inline void glRenderbufferStorageOES(GLenum target1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEOESPROC_ALT fn=(PFNGLRENDERBUFFERSTORAGEOESPROC_ALT)glaltGetProcAddressExtension("glRenderbufferStorageOES","GL_OES_framebuffer_object");
	 fn(target1,internalformat1,width1,height1);
}
#endif
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
	static PFNGLGETBUFFERPOINTERVOESPROC_ALT fn=(PFNGLGETBUFFERPOINTERVOESPROC_ALT)glaltGetProcAddressExtension("glGetBufferPointervOES","GL_OES_mapbuffer");
	 fn(target1,pname1,params1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_MapBufferOES
#define GL_ALT_FUNDEF_MapBufferOES
typedef void * (*PFNGLMAPBUFFEROESPROC_ALT)(GLenum,GLenum);
static inline void * glMapBufferOES(GLenum target1,GLenum access1)
{
	static PFNGLMAPBUFFEROESPROC_ALT fn=(PFNGLMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glMapBufferOES","GL_OES_mapbuffer");
	return fn(target1,access1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_UnmapBufferOES
#define GL_ALT_FUNDEF_UnmapBufferOES
typedef GLboolean (*PFNGLUNMAPBUFFEROESPROC_ALT)(GLenum);
static inline GLboolean glUnmapBufferOES(GLenum target1)
{
	static PFNGLUNMAPBUFFEROESPROC_ALT fn=(PFNGLUNMAPBUFFEROESPROC_ALT)glaltGetProcAddressExtension("glUnmapBufferOES","GL_OES_mapbuffer");
	return fn(target1);
}
#endif

//ALIAS
CGUARDEND

#endif

#ifndef GL_OES_matrix_get
#define GL_OES_matrix_get
#ifndef GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES
#define GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES 0x898D
#endif //GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES
#ifndef GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES
#define GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES 0x898E
#endif //GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES
#ifndef GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES
#define GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES 0x898F
#endif //GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_matrix_palette
#define GL_OES_matrix_palette
#ifndef GL_MAX_VERTEX_UNITS_OES
#define GL_MAX_VERTEX_UNITS_OES 0x86A4
#endif //GL_MAX_VERTEX_UNITS_OES
#ifndef GL_WEIGHT_ARRAY_TYPE_OES
#define GL_WEIGHT_ARRAY_TYPE_OES 0x86A9
#endif //GL_WEIGHT_ARRAY_TYPE_OES
#ifndef GL_WEIGHT_ARRAY_STRIDE_OES
#define GL_WEIGHT_ARRAY_STRIDE_OES 0x86AA
#endif //GL_WEIGHT_ARRAY_STRIDE_OES
#ifndef GL_WEIGHT_ARRAY_SIZE_OES
#define GL_WEIGHT_ARRAY_SIZE_OES 0x86AB
#endif //GL_WEIGHT_ARRAY_SIZE_OES
#ifndef GL_WEIGHT_ARRAY_POINTER_OES
#define GL_WEIGHT_ARRAY_POINTER_OES 0x86AC
#endif //GL_WEIGHT_ARRAY_POINTER_OES
#ifndef GL_WEIGHT_ARRAY_OES
#define GL_WEIGHT_ARRAY_OES 0x86AD
#endif //GL_WEIGHT_ARRAY_OES
#ifndef GL_MATRIX_PALETTE_OES
#define GL_MATRIX_PALETTE_OES 0x8840
#endif //GL_MATRIX_PALETTE_OES
#ifndef GL_MAX_PALETTE_MATRICES_OES
#define GL_MAX_PALETTE_MATRICES_OES 0x8842
#endif //GL_MAX_PALETTE_MATRICES_OES
#ifndef GL_CURRENT_PALETTE_MATRIX_OES
#define GL_CURRENT_PALETTE_MATRIX_OES 0x8843
#endif //GL_CURRENT_PALETTE_MATRIX_OES
#ifndef GL_MATRIX_INDEX_ARRAY_OES
#define GL_MATRIX_INDEX_ARRAY_OES 0x8844
#endif //GL_MATRIX_INDEX_ARRAY_OES
#ifndef GL_MATRIX_INDEX_ARRAY_SIZE_OES
#define GL_MATRIX_INDEX_ARRAY_SIZE_OES 0x8846
#endif //GL_MATRIX_INDEX_ARRAY_SIZE_OES
#ifndef GL_MATRIX_INDEX_ARRAY_TYPE_OES
#define GL_MATRIX_INDEX_ARRAY_TYPE_OES 0x8847
#endif //GL_MATRIX_INDEX_ARRAY_TYPE_OES
#ifndef GL_MATRIX_INDEX_ARRAY_STRIDE_OES
#define GL_MATRIX_INDEX_ARRAY_STRIDE_OES 0x8848
#endif //GL_MATRIX_INDEX_ARRAY_STRIDE_OES
#ifndef GL_MATRIX_INDEX_ARRAY_POINTER_OES
#define GL_MATRIX_INDEX_ARRAY_POINTER_OES 0x8849
#endif //GL_MATRIX_INDEX_ARRAY_POINTER_OES
#ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING_OES
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_OES 0x889E
#endif //GL_WEIGHT_ARRAY_BUFFER_BINDING_OES
#ifndef GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES
#define GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES 0x8B9E
#endif //GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_CurrentPaletteMatrixOES
#define GL_ALT_FUNDEF_CurrentPaletteMatrixOES
typedef void (*PFNGLCURRENTPALETTEMATRIXOESPROC_ALT)(GLuint);
static inline void glCurrentPaletteMatrixOES(GLuint matrixpaletteindex1)
{
	static PFNGLCURRENTPALETTEMATRIXOESPROC_ALT fn=(PFNGLCURRENTPALETTEMATRIXOESPROC_ALT)glaltGetProcAddressExtension("glCurrentPaletteMatrixOES","GL_OES_matrix_palette");
	 fn(matrixpaletteindex1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LoadPaletteFromModelViewMatrixOES
#define GL_ALT_FUNDEF_LoadPaletteFromModelViewMatrixOES
typedef void (*PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_ALT)();
static inline void glLoadPaletteFromModelViewMatrixOES()
{
	static PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_ALT fn=(PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC_ALT)glaltGetProcAddressExtension("glLoadPaletteFromModelViewMatrixOES","GL_OES_matrix_palette");
	 fn();
}
#endif

#ifndef	GL_ALT_FUNDEF_MatrixIndexPointerOES
#define GL_ALT_FUNDEF_MatrixIndexPointerOES
typedef void (*PFNGLMATRIXINDEXPOINTEROESPROC_ALT)(GLint,GLenum,GLsizei,const void *);
static inline void glMatrixIndexPointerOES(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLMATRIXINDEXPOINTEROESPROC_ALT fn=(PFNGLMATRIXINDEXPOINTEROESPROC_ALT)glaltGetProcAddressExtension("glMatrixIndexPointerOES","GL_OES_matrix_palette");
	 fn(size1,type1,stride1,pointer1);
}
#endif

#ifndef	GL_ALT_FUNDEF_WeightPointerOES
#define GL_ALT_FUNDEF_WeightPointerOES
typedef void (*PFNGLWEIGHTPOINTEROESPROC_ALT)(GLint,GLenum,GLsizei,const void *);
static inline void glWeightPointerOES(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLWEIGHTPOINTEROESPROC_ALT fn=(PFNGLWEIGHTPOINTEROESPROC_ALT)glaltGetProcAddressExtension("glWeightPointerOES","GL_OES_matrix_palette");
	 fn(size1,type1,stride1,pointer1);
}
#endif
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

#ifndef GL_OES_point_size_array
#define GL_OES_point_size_array
#ifndef GL_POINT_SIZE_ARRAY_TYPE_OES
#define GL_POINT_SIZE_ARRAY_TYPE_OES 0x898A
#endif //GL_POINT_SIZE_ARRAY_TYPE_OES
#ifndef GL_POINT_SIZE_ARRAY_STRIDE_OES
#define GL_POINT_SIZE_ARRAY_STRIDE_OES 0x898B
#endif //GL_POINT_SIZE_ARRAY_STRIDE_OES
#ifndef GL_POINT_SIZE_ARRAY_POINTER_OES
#define GL_POINT_SIZE_ARRAY_POINTER_OES 0x898C
#endif //GL_POINT_SIZE_ARRAY_POINTER_OES
#ifndef GL_POINT_SIZE_ARRAY_OES
#define GL_POINT_SIZE_ARRAY_OES 0x8B9C
#endif //GL_POINT_SIZE_ARRAY_OES
#ifndef GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES
#define GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES 0x8B9F
#endif //GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_PointSizePointerOES
#define GL_ALT_FUNDEF_PointSizePointerOES
typedef void (*PFNGLPOINTSIZEPOINTEROESPROC_ALT)(GLenum,GLsizei,const void *);
static inline void glPointSizePointerOES(GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLPOINTSIZEPOINTEROESPROC_ALT fn=(PFNGLPOINTSIZEPOINTEROESPROC_ALT)glaltGetProcAddressExtension("glPointSizePointerOES","GL_OES_point_size_array");
	 fn(type1,stride1,pointer1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_point_sprite
#define GL_OES_point_sprite
#ifndef GL_POINT_SPRITE_OES
#define GL_POINT_SPRITE_OES 0x8861
#endif //GL_POINT_SPRITE_OES
#ifndef GL_COORD_REPLACE_OES
#define GL_COORD_REPLACE_OES 0x8862
#endif //GL_COORD_REPLACE_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_query_matrix
#define GL_OES_query_matrix
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_QueryMatrixxOES
#define GL_ALT_FUNDEF_QueryMatrixxOES
typedef GLbitfield (*PFNGLQUERYMATRIXXOESPROC_ALT)(GLfixed *,GLint *);
static inline GLbitfield glQueryMatrixxOES(GLfixed * mantissa1,GLint * exponent1)
{
	static PFNGLQUERYMATRIXXOESPROC_ALT fn=(PFNGLQUERYMATRIXXOESPROC_ALT)glaltGetProcAddressExtension("glQueryMatrixxOES","GL_OES_query_matrix");
	return fn(mantissa1,exponent1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_read_format
#define GL_OES_read_format
#ifndef GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#endif //GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
#ifndef GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B
#endif //GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
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

#ifndef GL_OES_single_precision
#define GL_OES_single_precision
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_ClearDepthfOES
#define GL_ALT_FUNDEF_ClearDepthfOES
typedef void (*PFNGLCLEARDEPTHFOESPROC_ALT)(GLclampf);
static inline void glClearDepthfOES(GLclampf depth1)
{
	static PFNGLCLEARDEPTHFOESPROC_ALT fn=(PFNGLCLEARDEPTHFOESPROC_ALT)glaltGetProcAddressExtension("glClearDepthfOES","GL_OES_single_precision");
	 fn(depth1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_ClipPlanefOES
#define GL_ALT_FUNDEF_ClipPlanefOES
typedef void (*PFNGLCLIPPLANEFOESPROC_ALT)(GLenum,const GLfloat *);
static inline void glClipPlanefOES(GLenum plane1,const GLfloat * equation1)
{
	static PFNGLCLIPPLANEFOESPROC_ALT fn=(PFNGLCLIPPLANEFOESPROC_ALT)glaltGetProcAddressExtension("glClipPlanefOES","GL_OES_single_precision");
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_DepthRangefOES
#define GL_ALT_FUNDEF_DepthRangefOES
typedef void (*PFNGLDEPTHRANGEFOESPROC_ALT)(GLclampf,GLclampf);
static inline void glDepthRangefOES(GLclampf n1,GLclampf f1)
{
	static PFNGLDEPTHRANGEFOESPROC_ALT fn=(PFNGLDEPTHRANGEFOESPROC_ALT)glaltGetProcAddressExtension("glDepthRangefOES","GL_OES_single_precision");
	 fn(n1,f1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_FrustumfOES
#define GL_ALT_FUNDEF_FrustumfOES
typedef void (*PFNGLFRUSTUMFOESPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glFrustumfOES(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLFRUSTUMFOESPROC_ALT fn=(PFNGLFRUSTUMFOESPROC_ALT)glaltGetProcAddressExtension("glFrustumfOES","GL_OES_single_precision");
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetClipPlanefOES
#define GL_ALT_FUNDEF_GetClipPlanefOES
typedef void (*PFNGLGETCLIPPLANEFOESPROC_ALT)(GLenum,GLfloat *);
static inline void glGetClipPlanefOES(GLenum plane1,GLfloat * equation1)
{
	static PFNGLGETCLIPPLANEFOESPROC_ALT fn=(PFNGLGETCLIPPLANEFOESPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanefOES","GL_OES_single_precision");
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_OrthofOES
#define GL_ALT_FUNDEF_OrthofOES
typedef void (*PFNGLORTHOFOESPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glOrthofOES(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLORTHOFOESPROC_ALT fn=(PFNGLORTHOFOESPROC_ALT)glaltGetProcAddressExtension("glOrthofOES","GL_OES_single_precision");
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif
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

#ifndef GL_OES_stencil8
#define GL_OES_stencil8
#ifndef GL_STENCIL_INDEX8_OES
#define GL_STENCIL_INDEX8_OES 0x8D48
#endif //GL_STENCIL_INDEX8_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_stencil_wrap
#define GL_OES_stencil_wrap
#ifndef GL_INCR_WRAP_OES
#define GL_INCR_WRAP_OES 0x8507
#endif //GL_INCR_WRAP_OES
#ifndef GL_DECR_WRAP_OES
#define GL_DECR_WRAP_OES 0x8508
#endif //GL_DECR_WRAP_OES
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_cube_map
#define GL_OES_texture_cube_map
#ifndef GL_TEXTURE_GEN_MODE_OES
#define GL_TEXTURE_GEN_MODE_OES 0x2500
#endif //GL_TEXTURE_GEN_MODE_OES
#ifndef GL_NORMAL_MAP_OES
#define GL_NORMAL_MAP_OES 0x8511
#endif //GL_NORMAL_MAP_OES
#ifndef GL_REFLECTION_MAP_OES
#define GL_REFLECTION_MAP_OES 0x8512
#endif //GL_REFLECTION_MAP_OES
#ifndef GL_TEXTURE_CUBE_MAP_OES
#define GL_TEXTURE_CUBE_MAP_OES 0x8513
#endif //GL_TEXTURE_CUBE_MAP_OES
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_OES
#define GL_TEXTURE_BINDING_CUBE_MAP_OES 0x8514
#endif //GL_TEXTURE_BINDING_CUBE_MAP_OES
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES 0x8515
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES 0x8516
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES 0x8517
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES 0x8518
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES 0x8519
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES 0x851A
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES 0x851C
#endif //GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES
#ifndef GL_TEXTURE_GEN_STR_OES
#define GL_TEXTURE_GEN_STR_OES 0x8D60
#endif //GL_TEXTURE_GEN_STR_OES
CGUARDBEGIN


#ifndef	GL_ALT_FUNDEF_GetTexGenfvOES
#define GL_ALT_FUNDEF_GetTexGenfvOES
typedef void (*PFNGLGETTEXGENFVOESPROC_ALT)(GLenum,GLenum,GLfloat *);
static inline void glGetTexGenfvOES(GLenum coord1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXGENFVOESPROC_ALT fn=(PFNGLGETTEXGENFVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexGenfvOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexGenivOES
#define GL_ALT_FUNDEF_GetTexGenivOES
typedef void (*PFNGLGETTEXGENIVOESPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetTexGenivOES(GLenum coord1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXGENIVOESPROC_ALT fn=(PFNGLGETTEXGENIVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexGenivOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexGenxvOES
#define GL_ALT_FUNDEF_GetTexGenxvOES
typedef void (*PFNGLGETTEXGENXVOESPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexGenxvOES(GLenum coord1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXGENXVOESPROC_ALT fn=(PFNGLGETTEXGENXVOESPROC_ALT)glaltGetProcAddressExtension("glGetTexGenxvOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenfOES
#define GL_ALT_FUNDEF_TexGenfOES
typedef void (*PFNGLTEXGENFOESPROC_ALT)(GLenum,GLenum,GLfloat);
static inline void glTexGenfOES(GLenum coord1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXGENFOESPROC_ALT fn=(PFNGLTEXGENFOESPROC_ALT)glaltGetProcAddressExtension("glTexGenfOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenfvOES
#define GL_ALT_FUNDEF_TexGenfvOES
typedef void (*PFNGLTEXGENFVOESPROC_ALT)(GLenum,GLenum,const GLfloat *);
static inline void glTexGenfvOES(GLenum coord1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXGENFVOESPROC_ALT fn=(PFNGLTEXGENFVOESPROC_ALT)glaltGetProcAddressExtension("glTexGenfvOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGeniOES
#define GL_ALT_FUNDEF_TexGeniOES
typedef void (*PFNGLTEXGENIOESPROC_ALT)(GLenum,GLenum,GLint);
static inline void glTexGeniOES(GLenum coord1,GLenum pname1,GLint param1)
{
	static PFNGLTEXGENIOESPROC_ALT fn=(PFNGLTEXGENIOESPROC_ALT)glaltGetProcAddressExtension("glTexGeniOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenivOES
#define GL_ALT_FUNDEF_TexGenivOES
typedef void (*PFNGLTEXGENIVOESPROC_ALT)(GLenum,GLenum,const GLint *);
static inline void glTexGenivOES(GLenum coord1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXGENIVOESPROC_ALT fn=(PFNGLTEXGENIVOESPROC_ALT)glaltGetProcAddressExtension("glTexGenivOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenxOES
#define GL_ALT_FUNDEF_TexGenxOES
typedef void (*PFNGLTEXGENXOESPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexGenxOES(GLenum coord1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXGENXOESPROC_ALT fn=(PFNGLTEXGENXOESPROC_ALT)glaltGetProcAddressExtension("glTexGenxOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexGenxvOES
#define GL_ALT_FUNDEF_TexGenxvOES
typedef void (*PFNGLTEXGENXVOESPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexGenxvOES(GLenum coord1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXGENXVOESPROC_ALT fn=(PFNGLTEXGENXVOESPROC_ALT)glaltGetProcAddressExtension("glTexGenxvOES","GL_OES_texture_cube_map");
	 fn(coord1,pname1,params1);
}
#endif
CGUARDEND

#endif

#ifndef GL_OES_texture_env_crossbar
#define GL_OES_texture_env_crossbar
CGUARDBEGIN

CGUARDEND

#endif

#ifndef GL_OES_texture_mirrored_repeat
#define GL_OES_texture_mirrored_repeat
#ifndef GL_MIRRORED_REPEAT_OES
#define GL_MIRRORED_REPEAT_OES 0x8370
#endif //GL_MIRRORED_REPEAT_OES
CGUARDBEGIN

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
	static PFNGLBINDVERTEXARRAYOESPROC_ALT fn=(PFNGLBINDVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glBindVertexArrayOES","GL_OES_vertex_array_object");
	 fn(array1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_DeleteVertexArraysOES
#define GL_ALT_FUNDEF_DeleteVertexArraysOES
typedef void (*PFNGLDELETEVERTEXARRAYSOESPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteVertexArraysOES(GLsizei n1,const GLuint * arrays1)
{
	static PFNGLDELETEVERTEXARRAYSOESPROC_ALT fn=(PFNGLDELETEVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glDeleteVertexArraysOES","GL_OES_vertex_array_object");
	 fn(n1,arrays1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_GenVertexArraysOES
#define GL_ALT_FUNDEF_GenVertexArraysOES
typedef void (*PFNGLGENVERTEXARRAYSOESPROC_ALT)(GLsizei,GLuint *);
static inline void glGenVertexArraysOES(GLsizei n1,GLuint * arrays1)
{
	static PFNGLGENVERTEXARRAYSOESPROC_ALT fn=(PFNGLGENVERTEXARRAYSOESPROC_ALT)glaltGetProcAddressExtension("glGenVertexArraysOES","GL_OES_vertex_array_object");
	 fn(n1,arrays1);
}
#endif

//ALIAS

#ifndef	GL_ALT_FUNDEF_IsVertexArrayOES
#define GL_ALT_FUNDEF_IsVertexArrayOES
typedef GLboolean (*PFNGLISVERTEXARRAYOESPROC_ALT)(GLuint);
static inline GLboolean glIsVertexArrayOES(GLuint array1)
{
	static PFNGLISVERTEXARRAYOESPROC_ALT fn=(PFNGLISVERTEXARRAYOESPROC_ALT)glaltGetProcAddressExtension("glIsVertexArrayOES","GL_OES_vertex_array_object");
	return fn(array1);
}
#endif

//ALIAS
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
	static PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT fn=(PFNGLDISABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glDisableDriverControlQCOM","GL_QCOM_driver_control");
	 fn(driverControl1);
}
#endif

#ifndef	GL_ALT_FUNDEF_EnableDriverControlQCOM
#define GL_ALT_FUNDEF_EnableDriverControlQCOM
typedef void (*PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT)(GLuint);
static inline void glEnableDriverControlQCOM(GLuint driverControl1)
{
	static PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT fn=(PFNGLENABLEDRIVERCONTROLQCOMPROC_ALT)glaltGetProcAddressExtension("glEnableDriverControlQCOM","GL_QCOM_driver_control");
	 fn(driverControl1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetDriverControlStringQCOM
#define GL_ALT_FUNDEF_GetDriverControlStringQCOM
typedef void (*PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void glGetDriverControlStringQCOM(GLuint driverControl1,GLsizei bufSize1,GLsizei * length1,GLchar * driverControlString1)
{
	static PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT fn=(PFNGLGETDRIVERCONTROLSTRINGQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlStringQCOM","GL_QCOM_driver_control");
	 fn(driverControl1,bufSize1,length1,driverControlString1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetDriverControlsQCOM
#define GL_ALT_FUNDEF_GetDriverControlsQCOM
typedef void (*PFNGLGETDRIVERCONTROLSQCOMPROC_ALT)(GLint *,GLsizei,GLuint *);
static inline void glGetDriverControlsQCOM(GLint * num1,GLsizei size1,GLuint * driverControls1)
{
	static PFNGLGETDRIVERCONTROLSQCOMPROC_ALT fn=(PFNGLGETDRIVERCONTROLSQCOMPROC_ALT)glaltGetProcAddressExtension("glGetDriverControlsQCOM","GL_QCOM_driver_control");
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
	static PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT fn=(PFNGLEXTGETBUFFERPOINTERVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBufferPointervQCOM","GL_QCOM_extended_get");
	 fn(target1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetBuffersQCOM
#define GL_ALT_FUNDEF_ExtGetBuffersQCOM
typedef void (*PFNGLEXTGETBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetBuffersQCOM(GLuint * buffers1,GLint maxBuffers1,GLint * numBuffers1)
{
	static PFNGLEXTGETBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetBuffersQCOM","GL_QCOM_extended_get");
	 fn(buffers1,maxBuffers1,numBuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetFramebuffersQCOM
#define GL_ALT_FUNDEF_ExtGetFramebuffersQCOM
typedef void (*PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetFramebuffersQCOM(GLuint * framebuffers1,GLint maxFramebuffers1,GLint * numFramebuffers1)
{
	static PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETFRAMEBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetFramebuffersQCOM","GL_QCOM_extended_get");
	 fn(framebuffers1,maxFramebuffers1,numFramebuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetRenderbuffersQCOM
#define GL_ALT_FUNDEF_ExtGetRenderbuffersQCOM
typedef void (*PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetRenderbuffersQCOM(GLuint * renderbuffers1,GLint maxRenderbuffers1,GLint * numRenderbuffers1)
{
	static PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT fn=(PFNGLEXTGETRENDERBUFFERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetRenderbuffersQCOM","GL_QCOM_extended_get");
	 fn(renderbuffers1,maxRenderbuffers1,numRenderbuffers1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexLevelParameterivQCOM
#define GL_ALT_FUNDEF_ExtGetTexLevelParameterivQCOM
typedef void (*PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT)(GLuint,GLenum,GLint,GLenum,GLint *);
static inline void glExtGetTexLevelParameterivQCOM(GLuint texture1,GLenum face1,GLint level1,GLenum pname1,GLint * params1)
{
	static PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT fn=(PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexLevelParameterivQCOM","GL_QCOM_extended_get");
	 fn(texture1,face1,level1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexSubImageQCOM
#define GL_ALT_FUNDEF_ExtGetTexSubImageQCOM
typedef void (*PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,void *);
static inline void glExtGetTexSubImageQCOM(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,void * texels1)
{
	static PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT fn=(PFNGLEXTGETTEXSUBIMAGEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexSubImageQCOM","GL_QCOM_extended_get");
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,texels1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetTexturesQCOM
#define GL_ALT_FUNDEF_ExtGetTexturesQCOM
typedef void (*PFNGLEXTGETTEXTURESQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetTexturesQCOM(GLuint * textures1,GLint maxTextures1,GLint * numTextures1)
{
	static PFNGLEXTGETTEXTURESQCOMPROC_ALT fn=(PFNGLEXTGETTEXTURESQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetTexturesQCOM","GL_QCOM_extended_get");
	 fn(textures1,maxTextures1,numTextures1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtTexObjectStateOverrideiQCOM
#define GL_ALT_FUNDEF_ExtTexObjectStateOverrideiQCOM
typedef void (*PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT)(GLenum,GLenum,GLint);
static inline void glExtTexObjectStateOverrideiQCOM(GLenum target1,GLenum pname1,GLint param1)
{
	static PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT fn=(PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC_ALT)glaltGetProcAddressExtension("glExtTexObjectStateOverrideiQCOM","GL_QCOM_extended_get");
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
	static PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT fn=(PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramBinarySourceQCOM","GL_QCOM_extended_get2");
	 fn(program1,shadertype1,source1,length1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetProgramsQCOM
#define GL_ALT_FUNDEF_ExtGetProgramsQCOM
typedef void (*PFNGLEXTGETPROGRAMSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetProgramsQCOM(GLuint * programs1,GLint maxPrograms1,GLint * numPrograms1)
{
	static PFNGLEXTGETPROGRAMSQCOMPROC_ALT fn=(PFNGLEXTGETPROGRAMSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetProgramsQCOM","GL_QCOM_extended_get2");
	 fn(programs1,maxPrograms1,numPrograms1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtGetShadersQCOM
#define GL_ALT_FUNDEF_ExtGetShadersQCOM
typedef void (*PFNGLEXTGETSHADERSQCOMPROC_ALT)(GLuint *,GLint,GLint *);
static inline void glExtGetShadersQCOM(GLuint * shaders1,GLint maxShaders1,GLint * numShaders1)
{
	static PFNGLEXTGETSHADERSQCOMPROC_ALT fn=(PFNGLEXTGETSHADERSQCOMPROC_ALT)glaltGetProcAddressExtension("glExtGetShadersQCOM","GL_QCOM_extended_get2");
	 fn(shaders1,maxShaders1,numShaders1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ExtIsProgramBinaryQCOM
#define GL_ALT_FUNDEF_ExtIsProgramBinaryQCOM
typedef GLboolean (*PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT)(GLuint);
static inline GLboolean glExtIsProgramBinaryQCOM(GLuint program1)
{
	static PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT fn=(PFNGLEXTISPROGRAMBINARYQCOMPROC_ALT)glaltGetProcAddressExtension("glExtIsProgramBinaryQCOM","GL_QCOM_extended_get2");
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
	static PFNGLENDTILINGQCOMPROC_ALT fn=(PFNGLENDTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glEndTilingQCOM","GL_QCOM_tiled_rendering");
	 fn(preserveMask1);
}
#endif

#ifndef	GL_ALT_FUNDEF_StartTilingQCOM
#define GL_ALT_FUNDEF_StartTilingQCOM
typedef void (*PFNGLSTARTTILINGQCOMPROC_ALT)(GLuint,GLuint,GLuint,GLuint,GLbitfield);
static inline void glStartTilingQCOM(GLuint x1,GLuint y1,GLuint width1,GLuint height1,GLbitfield preserveMask1)
{
	static PFNGLSTARTTILINGQCOMPROC_ALT fn=(PFNGLSTARTTILINGQCOMPROC_ALT)glaltGetProcAddressExtension("glStartTilingQCOM","GL_QCOM_tiled_rendering");
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

#endif
