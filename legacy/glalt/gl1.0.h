#ifndef GL_ALT_GL_VERSION_1_0_ALT
#define GL_ALT_GL_VERSION_1_0_ALT
#include "common.h"


#ifndef GL_ALT_API_NAME
#define GL_ALT_API_NAME GL_ALT_GL_API
#endif
#ifndef GL_ALT_API_VERSION
#define GL_ALT_API_VERSION 100
#endif
CGUARDBEGIN

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Accum
#define GL_ALT_FUNDEF_Accum
extern void glAccum(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_AlphaFunc
#define GL_ALT_FUNDEF_AlphaFunc
extern void glAlphaFunc(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Begin
#define GL_ALT_FUNDEF_Begin
extern void glBegin(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Bitmap
#define GL_ALT_FUNDEF_Bitmap
extern void glBitmap(GLsizei,GLsizei,GLfloat,GLfloat,GLfloat,GLfloat,const GLubyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_BlendFunc
#define GL_ALT_FUNDEF_BlendFunc
extern void glBlendFunc(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_CallList
#define GL_ALT_FUNDEF_CallList
extern void glCallList(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_CallLists
#define GL_ALT_FUNDEF_CallLists
extern void glCallLists(GLsizei,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Clear
#define GL_ALT_FUNDEF_Clear
extern void glClear(GLbitfield);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearAccum
#define GL_ALT_FUNDEF_ClearAccum
extern void glClearAccum(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearColor
#define GL_ALT_FUNDEF_ClearColor
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearDepth
#define GL_ALT_FUNDEF_ClearDepth
extern void glClearDepth(GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearIndex
#define GL_ALT_FUNDEF_ClearIndex
extern void glClearIndex(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearStencil
#define GL_ALT_FUNDEF_ClearStencil
extern void glClearStencil(GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClipPlane
#define GL_ALT_FUNDEF_ClipPlane
extern void glClipPlane(GLenum,const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3b
#define GL_ALT_FUNDEF_Color3b
extern void glColor3b(GLbyte,GLbyte,GLbyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3bv
#define GL_ALT_FUNDEF_Color3bv
extern void glColor3bv(const GLbyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3d
#define GL_ALT_FUNDEF_Color3d
extern void glColor3d(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3dv
#define GL_ALT_FUNDEF_Color3dv
extern void glColor3dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3f
#define GL_ALT_FUNDEF_Color3f
extern void glColor3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3fv
#define GL_ALT_FUNDEF_Color3fv
extern void glColor3fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3i
#define GL_ALT_FUNDEF_Color3i
extern void glColor3i(GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3iv
#define GL_ALT_FUNDEF_Color3iv
extern void glColor3iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3s
#define GL_ALT_FUNDEF_Color3s
extern void glColor3s(GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3sv
#define GL_ALT_FUNDEF_Color3sv
extern void glColor3sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3ub
#define GL_ALT_FUNDEF_Color3ub
extern void glColor3ub(GLubyte,GLubyte,GLubyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3ubv
#define GL_ALT_FUNDEF_Color3ubv
extern void glColor3ubv(const GLubyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3ui
#define GL_ALT_FUNDEF_Color3ui
extern void glColor3ui(GLuint,GLuint,GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3uiv
#define GL_ALT_FUNDEF_Color3uiv
extern void glColor3uiv(const GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3us
#define GL_ALT_FUNDEF_Color3us
extern void glColor3us(GLushort,GLushort,GLushort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color3usv
#define GL_ALT_FUNDEF_Color3usv
extern void glColor3usv(const GLushort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4b
#define GL_ALT_FUNDEF_Color4b
extern void glColor4b(GLbyte,GLbyte,GLbyte,GLbyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4bv
#define GL_ALT_FUNDEF_Color4bv
extern void glColor4bv(const GLbyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4d
#define GL_ALT_FUNDEF_Color4d
extern void glColor4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4dv
#define GL_ALT_FUNDEF_Color4dv
extern void glColor4dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4f
#define GL_ALT_FUNDEF_Color4f
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4fv
#define GL_ALT_FUNDEF_Color4fv
extern void glColor4fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4i
#define GL_ALT_FUNDEF_Color4i
extern void glColor4i(GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4iv
#define GL_ALT_FUNDEF_Color4iv
extern void glColor4iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4s
#define GL_ALT_FUNDEF_Color4s
extern void glColor4s(GLshort,GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4sv
#define GL_ALT_FUNDEF_Color4sv
extern void glColor4sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4ub
#define GL_ALT_FUNDEF_Color4ub
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4ubv
#define GL_ALT_FUNDEF_Color4ubv
extern void glColor4ubv(const GLubyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4ui
#define GL_ALT_FUNDEF_Color4ui
extern void glColor4ui(GLuint,GLuint,GLuint,GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4uiv
#define GL_ALT_FUNDEF_Color4uiv
extern void glColor4uiv(const GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4us
#define GL_ALT_FUNDEF_Color4us
extern void glColor4us(GLushort,GLushort,GLushort,GLushort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4usv
#define GL_ALT_FUNDEF_Color4usv
extern void glColor4usv(const GLushort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ColorMask
#define GL_ALT_FUNDEF_ColorMask
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ColorMaterial
#define GL_ALT_FUNDEF_ColorMaterial
extern void glColorMaterial(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_CopyPixels
#define GL_ALT_FUNDEF_CopyPixels
extern void glCopyPixels(GLint,GLint,GLsizei,GLsizei,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_CullFace
#define GL_ALT_FUNDEF_CullFace
extern void glCullFace(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DeleteLists
#define GL_ALT_FUNDEF_DeleteLists
extern void glDeleteLists(GLuint,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DepthFunc
#define GL_ALT_FUNDEF_DepthFunc
extern void glDepthFunc(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DepthMask
#define GL_ALT_FUNDEF_DepthMask
extern void glDepthMask(GLboolean);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DepthRange
#define GL_ALT_FUNDEF_DepthRange
extern void glDepthRange(GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Disable
#define GL_ALT_FUNDEF_Disable
extern void glDisable(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DrawBuffer
#define GL_ALT_FUNDEF_DrawBuffer
extern void glDrawBuffer(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DrawPixels
#define GL_ALT_FUNDEF_DrawPixels
extern void glDrawPixels(GLsizei,GLsizei,GLenum,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EdgeFlag
#define GL_ALT_FUNDEF_EdgeFlag
extern void glEdgeFlag(GLboolean);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EdgeFlagv
#define GL_ALT_FUNDEF_EdgeFlagv
extern void glEdgeFlagv(const GLboolean *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Enable
#define GL_ALT_FUNDEF_Enable
extern void glEnable(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_End
#define GL_ALT_FUNDEF_End
extern void glEnd();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EndList
#define GL_ALT_FUNDEF_EndList
extern void glEndList();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord1d
#define GL_ALT_FUNDEF_EvalCoord1d
extern void glEvalCoord1d(GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord1dv
#define GL_ALT_FUNDEF_EvalCoord1dv
extern void glEvalCoord1dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord1f
#define GL_ALT_FUNDEF_EvalCoord1f
extern void glEvalCoord1f(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord1fv
#define GL_ALT_FUNDEF_EvalCoord1fv
extern void glEvalCoord1fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord2d
#define GL_ALT_FUNDEF_EvalCoord2d
extern void glEvalCoord2d(GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord2dv
#define GL_ALT_FUNDEF_EvalCoord2dv
extern void glEvalCoord2dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord2f
#define GL_ALT_FUNDEF_EvalCoord2f
extern void glEvalCoord2f(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalCoord2fv
#define GL_ALT_FUNDEF_EvalCoord2fv
extern void glEvalCoord2fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalMesh1
#define GL_ALT_FUNDEF_EvalMesh1
extern void glEvalMesh1(GLenum,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalMesh2
#define GL_ALT_FUNDEF_EvalMesh2
extern void glEvalMesh2(GLenum,GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalPoint1
#define GL_ALT_FUNDEF_EvalPoint1
extern void glEvalPoint1(GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_EvalPoint2
#define GL_ALT_FUNDEF_EvalPoint2
extern void glEvalPoint2(GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_FeedbackBuffer
#define GL_ALT_FUNDEF_FeedbackBuffer
extern void glFeedbackBuffer(GLsizei,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Finish
#define GL_ALT_FUNDEF_Finish
extern void glFinish();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Flush
#define GL_ALT_FUNDEF_Flush
extern void glFlush();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogf
#define GL_ALT_FUNDEF_Fogf
extern void glFogf(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogfv
#define GL_ALT_FUNDEF_Fogfv
extern void glFogfv(GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogi
#define GL_ALT_FUNDEF_Fogi
extern void glFogi(GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogiv
#define GL_ALT_FUNDEF_Fogiv
extern void glFogiv(GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_FrontFace
#define GL_ALT_FUNDEF_FrontFace
extern void glFrontFace(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Frustum
#define GL_ALT_FUNDEF_Frustum
extern void glFrustum(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GenLists
#define GL_ALT_FUNDEF_GenLists
extern GLuint glGenLists(GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetBooleanv
#define GL_ALT_FUNDEF_GetBooleanv
extern void glGetBooleanv(GLenum,GLboolean *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetClipPlane
#define GL_ALT_FUNDEF_GetClipPlane
extern void glGetClipPlane(GLenum,GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetDoublev
#define GL_ALT_FUNDEF_GetDoublev
extern void glGetDoublev(GLenum,GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetError
#define GL_ALT_FUNDEF_GetError
extern GLenum glGetError();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetFloatv
#define GL_ALT_FUNDEF_GetFloatv
extern void glGetFloatv(GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetIntegerv
#define GL_ALT_FUNDEF_GetIntegerv
extern void glGetIntegerv(GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetLightfv
#define GL_ALT_FUNDEF_GetLightfv
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetLightiv
#define GL_ALT_FUNDEF_GetLightiv
extern void glGetLightiv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMapdv
#define GL_ALT_FUNDEF_GetMapdv
extern void glGetMapdv(GLenum,GLenum,GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMapfv
#define GL_ALT_FUNDEF_GetMapfv
extern void glGetMapfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMapiv
#define GL_ALT_FUNDEF_GetMapiv
extern void glGetMapiv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMaterialfv
#define GL_ALT_FUNDEF_GetMaterialfv
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMaterialiv
#define GL_ALT_FUNDEF_GetMaterialiv
extern void glGetMaterialiv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetPixelMapfv
#define GL_ALT_FUNDEF_GetPixelMapfv
extern void glGetPixelMapfv(GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetPixelMapuiv
#define GL_ALT_FUNDEF_GetPixelMapuiv
extern void glGetPixelMapuiv(GLenum,GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetPixelMapusv
#define GL_ALT_FUNDEF_GetPixelMapusv
extern void glGetPixelMapusv(GLenum,GLushort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetPolygonStipple
#define GL_ALT_FUNDEF_GetPolygonStipple
extern void glGetPolygonStipple(GLubyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetString
#define GL_ALT_FUNDEF_GetString
extern const GLubyte * glGetString(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexEnvfv
#define GL_ALT_FUNDEF_GetTexEnvfv
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexEnviv
#define GL_ALT_FUNDEF_GetTexEnviv
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexGendv
#define GL_ALT_FUNDEF_GetTexGendv
extern void glGetTexGendv(GLenum,GLenum,GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexGenfv
#define GL_ALT_FUNDEF_GetTexGenfv
extern void glGetTexGenfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexGeniv
#define GL_ALT_FUNDEF_GetTexGeniv
extern void glGetTexGeniv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexImage
#define GL_ALT_FUNDEF_GetTexImage
extern void glGetTexImage(GLenum,GLint,GLenum,GLenum,void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexLevelParameterfv
#define GL_ALT_FUNDEF_GetTexLevelParameterfv
extern void glGetTexLevelParameterfv(GLenum,GLint,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexLevelParameteriv
#define GL_ALT_FUNDEF_GetTexLevelParameteriv
extern void glGetTexLevelParameteriv(GLenum,GLint,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexParameterfv
#define GL_ALT_FUNDEF_GetTexParameterfv
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexParameteriv
#define GL_ALT_FUNDEF_GetTexParameteriv
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Hint
#define GL_ALT_FUNDEF_Hint
extern void glHint(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_IndexMask
#define GL_ALT_FUNDEF_IndexMask
extern void glIndexMask(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexd
#define GL_ALT_FUNDEF_Indexd
extern void glIndexd(GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexdv
#define GL_ALT_FUNDEF_Indexdv
extern void glIndexdv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexf
#define GL_ALT_FUNDEF_Indexf
extern void glIndexf(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexfv
#define GL_ALT_FUNDEF_Indexfv
extern void glIndexfv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexi
#define GL_ALT_FUNDEF_Indexi
extern void glIndexi(GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexiv
#define GL_ALT_FUNDEF_Indexiv
extern void glIndexiv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexs
#define GL_ALT_FUNDEF_Indexs
extern void glIndexs(GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Indexsv
#define GL_ALT_FUNDEF_Indexsv
extern void glIndexsv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_InitNames
#define GL_ALT_FUNDEF_InitNames
extern void glInitNames();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_IsEnabled
#define GL_ALT_FUNDEF_IsEnabled
extern GLboolean glIsEnabled(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_IsList
#define GL_ALT_FUNDEF_IsList
extern GLboolean glIsList(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModelf
#define GL_ALT_FUNDEF_LightModelf
extern void glLightModelf(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModelfv
#define GL_ALT_FUNDEF_LightModelfv
extern void glLightModelfv(GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModeli
#define GL_ALT_FUNDEF_LightModeli
extern void glLightModeli(GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModeliv
#define GL_ALT_FUNDEF_LightModeliv
extern void glLightModeliv(GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lightf
#define GL_ALT_FUNDEF_Lightf
extern void glLightf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lightfv
#define GL_ALT_FUNDEF_Lightfv
extern void glLightfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lighti
#define GL_ALT_FUNDEF_Lighti
extern void glLighti(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lightiv
#define GL_ALT_FUNDEF_Lightiv
extern void glLightiv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LineStipple
#define GL_ALT_FUNDEF_LineStipple
extern void glLineStipple(GLint,GLushort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LineWidth
#define GL_ALT_FUNDEF_LineWidth
extern void glLineWidth(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ListBase
#define GL_ALT_FUNDEF_ListBase
extern void glListBase(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadIdentity
#define GL_ALT_FUNDEF_LoadIdentity
extern void glLoadIdentity();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadMatrixd
#define GL_ALT_FUNDEF_LoadMatrixd
extern void glLoadMatrixd(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadMatrixf
#define GL_ALT_FUNDEF_LoadMatrixf
extern void glLoadMatrixf(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadName
#define GL_ALT_FUNDEF_LoadName
extern void glLoadName(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LogicOp
#define GL_ALT_FUNDEF_LogicOp
extern void glLogicOp(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Map1d
#define GL_ALT_FUNDEF_Map1d
extern void glMap1d(GLenum,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Map1f
#define GL_ALT_FUNDEF_Map1f
extern void glMap1f(GLenum,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Map2d
#define GL_ALT_FUNDEF_Map2d
extern void glMap2d(GLenum,GLdouble,GLdouble,GLint,GLint,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Map2f
#define GL_ALT_FUNDEF_Map2f
extern void glMap2f(GLenum,GLfloat,GLfloat,GLint,GLint,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MapGrid1d
#define GL_ALT_FUNDEF_MapGrid1d
extern void glMapGrid1d(GLint,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MapGrid1f
#define GL_ALT_FUNDEF_MapGrid1f
extern void glMapGrid1f(GLint,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MapGrid2d
#define GL_ALT_FUNDEF_MapGrid2d
extern void glMapGrid2d(GLint,GLdouble,GLdouble,GLint,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MapGrid2f
#define GL_ALT_FUNDEF_MapGrid2f
extern void glMapGrid2f(GLint,GLfloat,GLfloat,GLint,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materialf
#define GL_ALT_FUNDEF_Materialf
extern void glMaterialf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materialfv
#define GL_ALT_FUNDEF_Materialfv
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materiali
#define GL_ALT_FUNDEF_Materiali
extern void glMateriali(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materialiv
#define GL_ALT_FUNDEF_Materialiv
extern void glMaterialiv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MatrixMode
#define GL_ALT_FUNDEF_MatrixMode
extern void glMatrixMode(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MultMatrixd
#define GL_ALT_FUNDEF_MultMatrixd
extern void glMultMatrixd(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MultMatrixf
#define GL_ALT_FUNDEF_MultMatrixf
extern void glMultMatrixf(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_NewList
#define GL_ALT_FUNDEF_NewList
extern void glNewList(GLuint,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3b
#define GL_ALT_FUNDEF_Normal3b
extern void glNormal3b(GLbyte,GLbyte,GLbyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3bv
#define GL_ALT_FUNDEF_Normal3bv
extern void glNormal3bv(const GLbyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3d
#define GL_ALT_FUNDEF_Normal3d
extern void glNormal3d(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3dv
#define GL_ALT_FUNDEF_Normal3dv
extern void glNormal3dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3f
#define GL_ALT_FUNDEF_Normal3f
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3fv
#define GL_ALT_FUNDEF_Normal3fv
extern void glNormal3fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3i
#define GL_ALT_FUNDEF_Normal3i
extern void glNormal3i(GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3iv
#define GL_ALT_FUNDEF_Normal3iv
extern void glNormal3iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3s
#define GL_ALT_FUNDEF_Normal3s
extern void glNormal3s(GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3sv
#define GL_ALT_FUNDEF_Normal3sv
extern void glNormal3sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Ortho
#define GL_ALT_FUNDEF_Ortho
extern void glOrtho(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PassThrough
#define GL_ALT_FUNDEF_PassThrough
extern void glPassThrough(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelMapfv
#define GL_ALT_FUNDEF_PixelMapfv
extern void glPixelMapfv(GLenum,GLsizei,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelMapuiv
#define GL_ALT_FUNDEF_PixelMapuiv
extern void glPixelMapuiv(GLenum,GLsizei,const GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelMapusv
#define GL_ALT_FUNDEF_PixelMapusv
extern void glPixelMapusv(GLenum,GLsizei,const GLushort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelStoref
#define GL_ALT_FUNDEF_PixelStoref
extern void glPixelStoref(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelStorei
#define GL_ALT_FUNDEF_PixelStorei
extern void glPixelStorei(GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelTransferf
#define GL_ALT_FUNDEF_PixelTransferf
extern void glPixelTransferf(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelTransferi
#define GL_ALT_FUNDEF_PixelTransferi
extern void glPixelTransferi(GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelZoom
#define GL_ALT_FUNDEF_PixelZoom
extern void glPixelZoom(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PointSize
#define GL_ALT_FUNDEF_PointSize
extern void glPointSize(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PolygonMode
#define GL_ALT_FUNDEF_PolygonMode
extern void glPolygonMode(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PolygonStipple
#define GL_ALT_FUNDEF_PolygonStipple
extern void glPolygonStipple(const GLubyte *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PopAttrib
#define GL_ALT_FUNDEF_PopAttrib
extern void glPopAttrib();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PopMatrix
#define GL_ALT_FUNDEF_PopMatrix
extern void glPopMatrix();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PopName
#define GL_ALT_FUNDEF_PopName
extern void glPopName();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PushAttrib
#define GL_ALT_FUNDEF_PushAttrib
extern void glPushAttrib(GLbitfield);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PushMatrix
#define GL_ALT_FUNDEF_PushMatrix
extern void glPushMatrix();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PushName
#define GL_ALT_FUNDEF_PushName
extern void glPushName(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2d
#define GL_ALT_FUNDEF_RasterPos2d
extern void glRasterPos2d(GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2dv
#define GL_ALT_FUNDEF_RasterPos2dv
extern void glRasterPos2dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2f
#define GL_ALT_FUNDEF_RasterPos2f
extern void glRasterPos2f(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2fv
#define GL_ALT_FUNDEF_RasterPos2fv
extern void glRasterPos2fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2i
#define GL_ALT_FUNDEF_RasterPos2i
extern void glRasterPos2i(GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2iv
#define GL_ALT_FUNDEF_RasterPos2iv
extern void glRasterPos2iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2s
#define GL_ALT_FUNDEF_RasterPos2s
extern void glRasterPos2s(GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos2sv
#define GL_ALT_FUNDEF_RasterPos2sv
extern void glRasterPos2sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3d
#define GL_ALT_FUNDEF_RasterPos3d
extern void glRasterPos3d(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3dv
#define GL_ALT_FUNDEF_RasterPos3dv
extern void glRasterPos3dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3f
#define GL_ALT_FUNDEF_RasterPos3f
extern void glRasterPos3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3fv
#define GL_ALT_FUNDEF_RasterPos3fv
extern void glRasterPos3fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3i
#define GL_ALT_FUNDEF_RasterPos3i
extern void glRasterPos3i(GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3iv
#define GL_ALT_FUNDEF_RasterPos3iv
extern void glRasterPos3iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3s
#define GL_ALT_FUNDEF_RasterPos3s
extern void glRasterPos3s(GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos3sv
#define GL_ALT_FUNDEF_RasterPos3sv
extern void glRasterPos3sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4d
#define GL_ALT_FUNDEF_RasterPos4d
extern void glRasterPos4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4dv
#define GL_ALT_FUNDEF_RasterPos4dv
extern void glRasterPos4dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4f
#define GL_ALT_FUNDEF_RasterPos4f
extern void glRasterPos4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4fv
#define GL_ALT_FUNDEF_RasterPos4fv
extern void glRasterPos4fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4i
#define GL_ALT_FUNDEF_RasterPos4i
extern void glRasterPos4i(GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4iv
#define GL_ALT_FUNDEF_RasterPos4iv
extern void glRasterPos4iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4s
#define GL_ALT_FUNDEF_RasterPos4s
extern void glRasterPos4s(GLshort,GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RasterPos4sv
#define GL_ALT_FUNDEF_RasterPos4sv
extern void glRasterPos4sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ReadBuffer
#define GL_ALT_FUNDEF_ReadBuffer
extern void glReadBuffer(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ReadPixels
#define GL_ALT_FUNDEF_ReadPixels
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectd
#define GL_ALT_FUNDEF_Rectd
extern void glRectd(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectdv
#define GL_ALT_FUNDEF_Rectdv
extern void glRectdv(const GLdouble *,const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectf
#define GL_ALT_FUNDEF_Rectf
extern void glRectf(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectfv
#define GL_ALT_FUNDEF_Rectfv
extern void glRectfv(const GLfloat *,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Recti
#define GL_ALT_FUNDEF_Recti
extern void glRecti(GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectiv
#define GL_ALT_FUNDEF_Rectiv
extern void glRectiv(const GLint *,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rects
#define GL_ALT_FUNDEF_Rects
extern void glRects(GLshort,GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rectsv
#define GL_ALT_FUNDEF_Rectsv
extern void glRectsv(const GLshort *,const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_RenderMode
#define GL_ALT_FUNDEF_RenderMode
extern GLint glRenderMode(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rotated
#define GL_ALT_FUNDEF_Rotated
extern void glRotated(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rotatef
#define GL_ALT_FUNDEF_Rotatef
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Scaled
#define GL_ALT_FUNDEF_Scaled
extern void glScaled(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Scalef
#define GL_ALT_FUNDEF_Scalef
extern void glScalef(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Scissor
#define GL_ALT_FUNDEF_Scissor
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_SelectBuffer
#define GL_ALT_FUNDEF_SelectBuffer
extern void glSelectBuffer(GLsizei,GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ShadeModel
#define GL_ALT_FUNDEF_ShadeModel
extern void glShadeModel(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilFunc
#define GL_ALT_FUNDEF_StencilFunc
extern void glStencilFunc(GLenum,GLint,GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilMask
#define GL_ALT_FUNDEF_StencilMask
extern void glStencilMask(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilOp
#define GL_ALT_FUNDEF_StencilOp
extern void glStencilOp(GLenum,GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1d
#define GL_ALT_FUNDEF_TexCoord1d
extern void glTexCoord1d(GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1dv
#define GL_ALT_FUNDEF_TexCoord1dv
extern void glTexCoord1dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1f
#define GL_ALT_FUNDEF_TexCoord1f
extern void glTexCoord1f(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1fv
#define GL_ALT_FUNDEF_TexCoord1fv
extern void glTexCoord1fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1i
#define GL_ALT_FUNDEF_TexCoord1i
extern void glTexCoord1i(GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1iv
#define GL_ALT_FUNDEF_TexCoord1iv
extern void glTexCoord1iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1s
#define GL_ALT_FUNDEF_TexCoord1s
extern void glTexCoord1s(GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord1sv
#define GL_ALT_FUNDEF_TexCoord1sv
extern void glTexCoord1sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2d
#define GL_ALT_FUNDEF_TexCoord2d
extern void glTexCoord2d(GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2dv
#define GL_ALT_FUNDEF_TexCoord2dv
extern void glTexCoord2dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2f
#define GL_ALT_FUNDEF_TexCoord2f
extern void glTexCoord2f(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2fv
#define GL_ALT_FUNDEF_TexCoord2fv
extern void glTexCoord2fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2i
#define GL_ALT_FUNDEF_TexCoord2i
extern void glTexCoord2i(GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2iv
#define GL_ALT_FUNDEF_TexCoord2iv
extern void glTexCoord2iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2s
#define GL_ALT_FUNDEF_TexCoord2s
extern void glTexCoord2s(GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord2sv
#define GL_ALT_FUNDEF_TexCoord2sv
extern void glTexCoord2sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3d
#define GL_ALT_FUNDEF_TexCoord3d
extern void glTexCoord3d(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3dv
#define GL_ALT_FUNDEF_TexCoord3dv
extern void glTexCoord3dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3f
#define GL_ALT_FUNDEF_TexCoord3f
extern void glTexCoord3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3fv
#define GL_ALT_FUNDEF_TexCoord3fv
extern void glTexCoord3fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3i
#define GL_ALT_FUNDEF_TexCoord3i
extern void glTexCoord3i(GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3iv
#define GL_ALT_FUNDEF_TexCoord3iv
extern void glTexCoord3iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3s
#define GL_ALT_FUNDEF_TexCoord3s
extern void glTexCoord3s(GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord3sv
#define GL_ALT_FUNDEF_TexCoord3sv
extern void glTexCoord3sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4d
#define GL_ALT_FUNDEF_TexCoord4d
extern void glTexCoord4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4dv
#define GL_ALT_FUNDEF_TexCoord4dv
extern void glTexCoord4dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4f
#define GL_ALT_FUNDEF_TexCoord4f
extern void glTexCoord4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4fv
#define GL_ALT_FUNDEF_TexCoord4fv
extern void glTexCoord4fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4i
#define GL_ALT_FUNDEF_TexCoord4i
extern void glTexCoord4i(GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4iv
#define GL_ALT_FUNDEF_TexCoord4iv
extern void glTexCoord4iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4s
#define GL_ALT_FUNDEF_TexCoord4s
extern void glTexCoord4s(GLshort,GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexCoord4sv
#define GL_ALT_FUNDEF_TexCoord4sv
extern void glTexCoord4sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvf
#define GL_ALT_FUNDEF_TexEnvf
extern void glTexEnvf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvfv
#define GL_ALT_FUNDEF_TexEnvfv
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvi
#define GL_ALT_FUNDEF_TexEnvi
extern void glTexEnvi(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnviv
#define GL_ALT_FUNDEF_TexEnviv
extern void glTexEnviv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGend
#define GL_ALT_FUNDEF_TexGend
extern void glTexGend(GLenum,GLenum,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGendv
#define GL_ALT_FUNDEF_TexGendv
extern void glTexGendv(GLenum,GLenum,const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGenf
#define GL_ALT_FUNDEF_TexGenf
extern void glTexGenf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGenfv
#define GL_ALT_FUNDEF_TexGenfv
extern void glTexGenfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGeni
#define GL_ALT_FUNDEF_TexGeni
extern void glTexGeni(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexGeniv
#define GL_ALT_FUNDEF_TexGeniv
extern void glTexGeniv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexImage1D
#define GL_ALT_FUNDEF_TexImage1D
extern void glTexImage1D(GLenum,GLint,GLint,GLsizei,GLint,GLenum,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexImage2D
#define GL_ALT_FUNDEF_TexImage2D
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameterf
#define GL_ALT_FUNDEF_TexParameterf
extern void glTexParameterf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameterfv
#define GL_ALT_FUNDEF_TexParameterfv
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameteri
#define GL_ALT_FUNDEF_TexParameteri
extern void glTexParameteri(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameteriv
#define GL_ALT_FUNDEF_TexParameteriv
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Translated
#define GL_ALT_FUNDEF_Translated
extern void glTranslated(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Translatef
#define GL_ALT_FUNDEF_Translatef
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2d
#define GL_ALT_FUNDEF_Vertex2d
extern void glVertex2d(GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2dv
#define GL_ALT_FUNDEF_Vertex2dv
extern void glVertex2dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2f
#define GL_ALT_FUNDEF_Vertex2f
extern void glVertex2f(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2fv
#define GL_ALT_FUNDEF_Vertex2fv
extern void glVertex2fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2i
#define GL_ALT_FUNDEF_Vertex2i
extern void glVertex2i(GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2iv
#define GL_ALT_FUNDEF_Vertex2iv
extern void glVertex2iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2s
#define GL_ALT_FUNDEF_Vertex2s
extern void glVertex2s(GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex2sv
#define GL_ALT_FUNDEF_Vertex2sv
extern void glVertex2sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3d
#define GL_ALT_FUNDEF_Vertex3d
extern void glVertex3d(GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3dv
#define GL_ALT_FUNDEF_Vertex3dv
extern void glVertex3dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3f
#define GL_ALT_FUNDEF_Vertex3f
extern void glVertex3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3fv
#define GL_ALT_FUNDEF_Vertex3fv
extern void glVertex3fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3i
#define GL_ALT_FUNDEF_Vertex3i
extern void glVertex3i(GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3iv
#define GL_ALT_FUNDEF_Vertex3iv
extern void glVertex3iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3s
#define GL_ALT_FUNDEF_Vertex3s
extern void glVertex3s(GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex3sv
#define GL_ALT_FUNDEF_Vertex3sv
extern void glVertex3sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4d
#define GL_ALT_FUNDEF_Vertex4d
extern void glVertex4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4dv
#define GL_ALT_FUNDEF_Vertex4dv
extern void glVertex4dv(const GLdouble *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4f
#define GL_ALT_FUNDEF_Vertex4f
extern void glVertex4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4fv
#define GL_ALT_FUNDEF_Vertex4fv
extern void glVertex4fv(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4i
#define GL_ALT_FUNDEF_Vertex4i
extern void glVertex4i(GLint,GLint,GLint,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4iv
#define GL_ALT_FUNDEF_Vertex4iv
extern void glVertex4iv(const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4s
#define GL_ALT_FUNDEF_Vertex4s
extern void glVertex4s(GLshort,GLshort,GLshort,GLshort);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Vertex4sv
#define GL_ALT_FUNDEF_Vertex4sv
extern void glVertex4sv(const GLshort *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Viewport
#define GL_ALT_FUNDEF_Viewport
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
#endif
#endif

CGUARDEND

#endif
