#ifndef GL_HPP_GL_VERSION_1_0_HPP
#define GL_HPP_GL_VERSION_1_0_HPP
#include "common.hpp"


#ifndef GL_HPP_API_NAME
#define GL_HPP_API_NAME GL_HPP_GL_API
#endif
#ifndef GL_HPP_API_VERSION
#define GL_HPP_API_VERSION 100
#endif
extern "C" {
extern void glAccum(GLenum,GLfloat);
extern void glAlphaFunc(GLenum,GLfloat);
extern void glBegin(GLenum);
extern void glBitmap(GLsizei,GLsizei,GLfloat,GLfloat,GLfloat,GLfloat,const GLubyte *);
extern void glBlendFunc(GLenum,GLenum);
extern void glCallList(GLuint);
extern void glCallLists(GLsizei,GLenum,const void *);
extern void glClear(GLbitfield);
extern void glClearAccum(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearDepth(GLdouble);
extern void glClearIndex(GLfloat);
extern void glClearStencil(GLint);
extern void glClipPlane(GLenum,const GLdouble *);
extern void glColor3b(GLbyte,GLbyte,GLbyte);
extern void glColor3bv(const GLbyte *);
extern void glColor3d(GLdouble,GLdouble,GLdouble);
extern void glColor3dv(const GLdouble *);
extern void glColor3f(GLfloat,GLfloat,GLfloat);
extern void glColor3fv(const GLfloat *);
extern void glColor3i(GLint,GLint,GLint);
extern void glColor3iv(const GLint *);
extern void glColor3s(GLshort,GLshort,GLshort);
extern void glColor3sv(const GLshort *);
extern void glColor3ub(GLubyte,GLubyte,GLubyte);
extern void glColor3ubv(const GLubyte *);
extern void glColor3ui(GLuint,GLuint,GLuint);
extern void glColor3uiv(const GLuint *);
extern void glColor3us(GLushort,GLushort,GLushort);
extern void glColor3usv(const GLushort *);
extern void glColor4b(GLbyte,GLbyte,GLbyte,GLbyte);
extern void glColor4bv(const GLbyte *);
extern void glColor4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glColor4dv(const GLdouble *);
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glColor4fv(const GLfloat *);
extern void glColor4i(GLint,GLint,GLint,GLint);
extern void glColor4iv(const GLint *);
extern void glColor4s(GLshort,GLshort,GLshort,GLshort);
extern void glColor4sv(const GLshort *);
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
extern void glColor4ubv(const GLubyte *);
extern void glColor4ui(GLuint,GLuint,GLuint,GLuint);
extern void glColor4uiv(const GLuint *);
extern void glColor4us(GLushort,GLushort,GLushort,GLushort);
extern void glColor4usv(const GLushort *);
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
extern void glColorMaterial(GLenum,GLenum);
extern void glCopyPixels(GLint,GLint,GLsizei,GLsizei,GLenum);
extern void glCullFace(GLenum);
extern void glDeleteLists(GLuint,GLsizei);
extern void glDepthFunc(GLenum);
extern void glDepthMask(GLboolean);
extern void glDepthRange(GLdouble,GLdouble);
extern void glDisable(GLenum);
extern void glDrawBuffer(GLenum);
extern void glDrawPixels(GLsizei,GLsizei,GLenum,GLenum,const void *);
extern void glEdgeFlag(GLboolean);
extern void glEdgeFlagv(const GLboolean *);
extern void glEnable(GLenum);
extern void glEnd();
extern void glEndList();
extern void glEvalCoord1d(GLdouble);
extern void glEvalCoord1dv(const GLdouble *);
extern void glEvalCoord1f(GLfloat);
extern void glEvalCoord1fv(const GLfloat *);
extern void glEvalCoord2d(GLdouble,GLdouble);
extern void glEvalCoord2dv(const GLdouble *);
extern void glEvalCoord2f(GLfloat,GLfloat);
extern void glEvalCoord2fv(const GLfloat *);
extern void glEvalMesh1(GLenum,GLint,GLint);
extern void glEvalMesh2(GLenum,GLint,GLint,GLint,GLint);
extern void glEvalPoint1(GLint);
extern void glEvalPoint2(GLint,GLint);
extern void glFeedbackBuffer(GLsizei,GLenum,GLfloat *);
extern void glFinish();
extern void glFlush();
extern void glFogf(GLenum,GLfloat);
extern void glFogfv(GLenum,const GLfloat *);
extern void glFogi(GLenum,GLint);
extern void glFogiv(GLenum,const GLint *);
extern void glFrontFace(GLenum);
extern void glFrustum(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
extern GLuint glGenLists(GLsizei);
extern void glGetBooleanv(GLenum,GLboolean *);
extern void glGetClipPlane(GLenum,GLdouble *);
extern void glGetDoublev(GLenum,GLdouble *);
extern GLenum glGetError();
extern void glGetFloatv(GLenum,GLfloat *);
extern void glGetIntegerv(GLenum,GLint *);
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
extern void glGetLightiv(GLenum,GLenum,GLint *);
extern void glGetMapdv(GLenum,GLenum,GLdouble *);
extern void glGetMapfv(GLenum,GLenum,GLfloat *);
extern void glGetMapiv(GLenum,GLenum,GLint *);
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
extern void glGetMaterialiv(GLenum,GLenum,GLint *);
extern void glGetPixelMapfv(GLenum,GLfloat *);
extern void glGetPixelMapuiv(GLenum,GLuint *);
extern void glGetPixelMapusv(GLenum,GLushort *);
extern void glGetPolygonStipple(GLubyte *);
extern const GLubyte * glGetString(GLenum);
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
extern void glGetTexGendv(GLenum,GLenum,GLdouble *);
extern void glGetTexGenfv(GLenum,GLenum,GLfloat *);
extern void glGetTexGeniv(GLenum,GLenum,GLint *);
extern void glGetTexImage(GLenum,GLint,GLenum,GLenum,void *);
extern void glGetTexLevelParameterfv(GLenum,GLint,GLenum,GLfloat *);
extern void glGetTexLevelParameteriv(GLenum,GLint,GLenum,GLint *);
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
extern void glHint(GLenum,GLenum);
extern void glIndexMask(GLuint);
extern void glIndexd(GLdouble);
extern void glIndexdv(const GLdouble *);
extern void glIndexf(GLfloat);
extern void glIndexfv(const GLfloat *);
extern void glIndexi(GLint);
extern void glIndexiv(const GLint *);
extern void glIndexs(GLshort);
extern void glIndexsv(const GLshort *);
extern void glInitNames();
extern GLboolean glIsEnabled(GLenum);
extern GLboolean glIsList(GLuint);
extern void glLightModelf(GLenum,GLfloat);
extern void glLightModelfv(GLenum,const GLfloat *);
extern void glLightModeli(GLenum,GLint);
extern void glLightModeliv(GLenum,const GLint *);
extern void glLightf(GLenum,GLenum,GLfloat);
extern void glLightfv(GLenum,GLenum,const GLfloat *);
extern void glLighti(GLenum,GLenum,GLint);
extern void glLightiv(GLenum,GLenum,const GLint *);
extern void glLineStipple(GLint,GLushort);
extern void glLineWidth(GLfloat);
extern void glListBase(GLuint);
extern void glLoadIdentity();
extern void glLoadMatrixd(const GLdouble *);
extern void glLoadMatrixf(const GLfloat *);
extern void glLoadName(GLuint);
extern void glLogicOp(GLenum);
extern void glMap1d(GLenum,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
extern void glMap1f(GLenum,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
extern void glMap2d(GLenum,GLdouble,GLdouble,GLint,GLint,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
extern void glMap2f(GLenum,GLfloat,GLfloat,GLint,GLint,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
extern void glMapGrid1d(GLint,GLdouble,GLdouble);
extern void glMapGrid1f(GLint,GLfloat,GLfloat);
extern void glMapGrid2d(GLint,GLdouble,GLdouble,GLint,GLdouble,GLdouble);
extern void glMapGrid2f(GLint,GLfloat,GLfloat,GLint,GLfloat,GLfloat);
extern void glMaterialf(GLenum,GLenum,GLfloat);
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
extern void glMateriali(GLenum,GLenum,GLint);
extern void glMaterialiv(GLenum,GLenum,const GLint *);
extern void glMatrixMode(GLenum);
extern void glMultMatrixd(const GLdouble *);
extern void glMultMatrixf(const GLfloat *);
extern void glNewList(GLuint,GLenum);
extern void glNormal3b(GLbyte,GLbyte,GLbyte);
extern void glNormal3bv(const GLbyte *);
extern void glNormal3d(GLdouble,GLdouble,GLdouble);
extern void glNormal3dv(const GLdouble *);
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
extern void glNormal3fv(const GLfloat *);
extern void glNormal3i(GLint,GLint,GLint);
extern void glNormal3iv(const GLint *);
extern void glNormal3s(GLshort,GLshort,GLshort);
extern void glNormal3sv(const GLshort *);
extern void glOrtho(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
extern void glPassThrough(GLfloat);
extern void glPixelMapfv(GLenum,GLsizei,const GLfloat *);
extern void glPixelMapuiv(GLenum,GLsizei,const GLuint *);
extern void glPixelMapusv(GLenum,GLsizei,const GLushort *);
extern void glPixelStoref(GLenum,GLfloat);
extern void glPixelStorei(GLenum,GLint);
extern void glPixelTransferf(GLenum,GLfloat);
extern void glPixelTransferi(GLenum,GLint);
extern void glPixelZoom(GLfloat,GLfloat);
extern void glPointSize(GLfloat);
extern void glPolygonMode(GLenum,GLenum);
extern void glPolygonStipple(const GLubyte *);
extern void glPopAttrib();
extern void glPopMatrix();
extern void glPopName();
extern void glPushAttrib(GLbitfield);
extern void glPushMatrix();
extern void glPushName(GLuint);
extern void glRasterPos2d(GLdouble,GLdouble);
extern void glRasterPos2dv(const GLdouble *);
extern void glRasterPos2f(GLfloat,GLfloat);
extern void glRasterPos2fv(const GLfloat *);
extern void glRasterPos2i(GLint,GLint);
extern void glRasterPos2iv(const GLint *);
extern void glRasterPos2s(GLshort,GLshort);
extern void glRasterPos2sv(const GLshort *);
extern void glRasterPos3d(GLdouble,GLdouble,GLdouble);
extern void glRasterPos3dv(const GLdouble *);
extern void glRasterPos3f(GLfloat,GLfloat,GLfloat);
extern void glRasterPos3fv(const GLfloat *);
extern void glRasterPos3i(GLint,GLint,GLint);
extern void glRasterPos3iv(const GLint *);
extern void glRasterPos3s(GLshort,GLshort,GLshort);
extern void glRasterPos3sv(const GLshort *);
extern void glRasterPos4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRasterPos4dv(const GLdouble *);
extern void glRasterPos4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glRasterPos4fv(const GLfloat *);
extern void glRasterPos4i(GLint,GLint,GLint,GLint);
extern void glRasterPos4iv(const GLint *);
extern void glRasterPos4s(GLshort,GLshort,GLshort,GLshort);
extern void glRasterPos4sv(const GLshort *);
extern void glReadBuffer(GLenum);
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
extern void glRectd(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRectdv(const GLdouble *,const GLdouble *);
extern void glRectf(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glRectfv(const GLfloat *,const GLfloat *);
extern void glRecti(GLint,GLint,GLint,GLint);
extern void glRectiv(const GLint *,const GLint *);
extern void glRects(GLshort,GLshort,GLshort,GLshort);
extern void glRectsv(const GLshort *,const GLshort *);
extern GLint glRenderMode(GLenum);
extern void glRotated(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glScaled(GLdouble,GLdouble,GLdouble);
extern void glScalef(GLfloat,GLfloat,GLfloat);
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
extern void glSelectBuffer(GLsizei,GLuint *);
extern void glShadeModel(GLenum);
extern void glStencilFunc(GLenum,GLint,GLuint);
extern void glStencilMask(GLuint);
extern void glStencilOp(GLenum,GLenum,GLenum);
extern void glTexCoord1d(GLdouble);
extern void glTexCoord1dv(const GLdouble *);
extern void glTexCoord1f(GLfloat);
extern void glTexCoord1fv(const GLfloat *);
extern void glTexCoord1i(GLint);
extern void glTexCoord1iv(const GLint *);
extern void glTexCoord1s(GLshort);
extern void glTexCoord1sv(const GLshort *);
extern void glTexCoord2d(GLdouble,GLdouble);
extern void glTexCoord2dv(const GLdouble *);
extern void glTexCoord2f(GLfloat,GLfloat);
extern void glTexCoord2fv(const GLfloat *);
extern void glTexCoord2i(GLint,GLint);
extern void glTexCoord2iv(const GLint *);
extern void glTexCoord2s(GLshort,GLshort);
extern void glTexCoord2sv(const GLshort *);
extern void glTexCoord3d(GLdouble,GLdouble,GLdouble);
extern void glTexCoord3dv(const GLdouble *);
extern void glTexCoord3f(GLfloat,GLfloat,GLfloat);
extern void glTexCoord3fv(const GLfloat *);
extern void glTexCoord3i(GLint,GLint,GLint);
extern void glTexCoord3iv(const GLint *);
extern void glTexCoord3s(GLshort,GLshort,GLshort);
extern void glTexCoord3sv(const GLshort *);
extern void glTexCoord4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glTexCoord4dv(const GLdouble *);
extern void glTexCoord4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glTexCoord4fv(const GLfloat *);
extern void glTexCoord4i(GLint,GLint,GLint,GLint);
extern void glTexCoord4iv(const GLint *);
extern void glTexCoord4s(GLshort,GLshort,GLshort,GLshort);
extern void glTexCoord4sv(const GLshort *);
extern void glTexEnvf(GLenum,GLenum,GLfloat);
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
extern void glTexEnvi(GLenum,GLenum,GLint);
extern void glTexEnviv(GLenum,GLenum,const GLint *);
extern void glTexGend(GLenum,GLenum,GLdouble);
extern void glTexGendv(GLenum,GLenum,const GLdouble *);
extern void glTexGenf(GLenum,GLenum,GLfloat);
extern void glTexGenfv(GLenum,GLenum,const GLfloat *);
extern void glTexGeni(GLenum,GLenum,GLint);
extern void glTexGeniv(GLenum,GLenum,const GLint *);
extern void glTexImage1D(GLenum,GLint,GLint,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexParameterf(GLenum,GLenum,GLfloat);
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
extern void glTexParameteri(GLenum,GLenum,GLint);
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
extern void glTranslated(GLdouble,GLdouble,GLdouble);
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
extern void glVertex2d(GLdouble,GLdouble);
extern void glVertex2dv(const GLdouble *);
extern void glVertex2f(GLfloat,GLfloat);
extern void glVertex2fv(const GLfloat *);
extern void glVertex2i(GLint,GLint);
extern void glVertex2iv(const GLint *);
extern void glVertex2s(GLshort,GLshort);
extern void glVertex2sv(const GLshort *);
extern void glVertex3d(GLdouble,GLdouble,GLdouble);
extern void glVertex3dv(const GLdouble *);
extern void glVertex3f(GLfloat,GLfloat,GLfloat);
extern void glVertex3fv(const GLfloat *);
extern void glVertex3i(GLint,GLint,GLint);
extern void glVertex3iv(const GLint *);
extern void glVertex3s(GLshort,GLshort,GLshort);
extern void glVertex3sv(const GLshort *);
extern void glVertex4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glVertex4dv(const GLdouble *);
extern void glVertex4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glVertex4fv(const GLfloat *);
extern void glVertex4i(GLint,GLint,GLint,GLint);
extern void glVertex4iv(const GLint *);
extern void glVertex4s(GLshort,GLshort,GLshort,GLshort);
extern void glVertex4sv(const GLshort *);
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
}
namespace gl{

#ifndef	GL_HPP_FUNDEF_Accum
#define GL_HPP_FUNDEF_Accum
typedef void (*PFNGLACCUMPROC_HPP)(GLenum,GLfloat);
static inline void Accum(GLenum op1,GLfloat value1)
{
	static PFNGLACCUMPROC_HPP fn=reinterpret_cast<PFNGLACCUMPROC_HPP>(_impl::_get_proc_address("glAccum",1,0));
	 fn(op1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_AlphaFunc
#define GL_HPP_FUNDEF_AlphaFunc
typedef void (*PFNGLALPHAFUNCPROC_HPP)(GLenum,GLfloat);
static inline void AlphaFunc(GLenum func1,GLfloat ref1)
{
	static PFNGLALPHAFUNCPROC_HPP fn=reinterpret_cast<PFNGLALPHAFUNCPROC_HPP>(_impl::_get_proc_address("glAlphaFunc",1,0));
	 fn(func1,ref1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Begin
#define GL_HPP_FUNDEF_Begin
typedef void (*PFNGLBEGINPROC_HPP)(GLenum);
static inline void Begin(GLenum mode1)
{
	static PFNGLBEGINPROC_HPP fn=reinterpret_cast<PFNGLBEGINPROC_HPP>(_impl::_get_proc_address("glBegin",1,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Bitmap
#define GL_HPP_FUNDEF_Bitmap
typedef void (*PFNGLBITMAPPROC_HPP)(GLsizei,GLsizei,GLfloat,GLfloat,GLfloat,GLfloat,const GLubyte *);
static inline void Bitmap(GLsizei width1,GLsizei height1,GLfloat xorig1,GLfloat yorig1,GLfloat xmove1,GLfloat ymove1,const GLubyte * bitmap1)
{
	static PFNGLBITMAPPROC_HPP fn=reinterpret_cast<PFNGLBITMAPPROC_HPP>(_impl::_get_proc_address("glBitmap",1,0));
	 fn(width1,height1,xorig1,yorig1,xmove1,ymove1,bitmap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendFunc
#define GL_HPP_FUNDEF_BlendFunc
typedef void (*PFNGLBLENDFUNCPROC_HPP)(GLenum,GLenum);
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	static PFNGLBLENDFUNCPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCPROC_HPP>(_impl::_get_proc_address("glBlendFunc",1,0));
	 fn(sfactor1,dfactor1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CallList
#define GL_HPP_FUNDEF_CallList
typedef void (*PFNGLCALLLISTPROC_HPP)(GLuint);
static inline void CallList(GLuint list1)
{
	static PFNGLCALLLISTPROC_HPP fn=reinterpret_cast<PFNGLCALLLISTPROC_HPP>(_impl::_get_proc_address("glCallList",1,0));
	 fn(list1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CallLists
#define GL_HPP_FUNDEF_CallLists
typedef void (*PFNGLCALLLISTSPROC_HPP)(GLsizei,GLenum,const void *);
static inline void CallLists(GLsizei n1,GLenum type1,const void * lists1)
{
	static PFNGLCALLLISTSPROC_HPP fn=reinterpret_cast<PFNGLCALLLISTSPROC_HPP>(_impl::_get_proc_address("glCallLists",1,0));
	 fn(n1,type1,lists1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Clear
#define GL_HPP_FUNDEF_Clear
typedef void (*PFNGLCLEARPROC_HPP)(GLbitfield);
static inline void Clear(GLbitfield mask1)
{
	static PFNGLCLEARPROC_HPP fn=reinterpret_cast<PFNGLCLEARPROC_HPP>(_impl::_get_proc_address("glClear",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearAccum
#define GL_HPP_FUNDEF_ClearAccum
typedef void (*PFNGLCLEARACCUMPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void ClearAccum(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLCLEARACCUMPROC_HPP fn=reinterpret_cast<PFNGLCLEARACCUMPROC_HPP>(_impl::_get_proc_address("glClearAccum",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearColor
#define GL_HPP_FUNDEF_ClearColor
typedef void (*PFNGLCLEARCOLORPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLCLEARCOLORPROC_HPP fn=reinterpret_cast<PFNGLCLEARCOLORPROC_HPP>(_impl::_get_proc_address("glClearColor",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearDepth
#define GL_HPP_FUNDEF_ClearDepth
typedef void (*PFNGLCLEARDEPTHPROC_HPP)(GLdouble);
static inline void ClearDepth(GLdouble depth1)
{
	static PFNGLCLEARDEPTHPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHPROC_HPP>(_impl::_get_proc_address("glClearDepth",1,0));
	 fn(depth1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearIndex
#define GL_HPP_FUNDEF_ClearIndex
typedef void (*PFNGLCLEARINDEXPROC_HPP)(GLfloat);
static inline void ClearIndex(GLfloat c1)
{
	static PFNGLCLEARINDEXPROC_HPP fn=reinterpret_cast<PFNGLCLEARINDEXPROC_HPP>(_impl::_get_proc_address("glClearIndex",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearStencil
#define GL_HPP_FUNDEF_ClearStencil
typedef void (*PFNGLCLEARSTENCILPROC_HPP)(GLint);
static inline void ClearStencil(GLint s1)
{
	static PFNGLCLEARSTENCILPROC_HPP fn=reinterpret_cast<PFNGLCLEARSTENCILPROC_HPP>(_impl::_get_proc_address("glClearStencil",1,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClipPlane
#define GL_HPP_FUNDEF_ClipPlane
typedef void (*PFNGLCLIPPLANEPROC_HPP)(GLenum,const GLdouble *);
static inline void ClipPlane(GLenum plane1,const GLdouble * equation1)
{
	static PFNGLCLIPPLANEPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEPROC_HPP>(_impl::_get_proc_address("glClipPlane",1,0));
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3b
#define GL_HPP_FUNDEF_Color3b
typedef void (*PFNGLCOLOR3BPROC_HPP)(GLbyte,GLbyte,GLbyte);
static inline void Color3b(GLbyte red1,GLbyte green1,GLbyte blue1)
{
	static PFNGLCOLOR3BPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3BPROC_HPP>(_impl::_get_proc_address("glColor3b",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3bv
#define GL_HPP_FUNDEF_Color3bv
typedef void (*PFNGLCOLOR3BVPROC_HPP)(const GLbyte *);
static inline void Color3bv(const GLbyte * v1)
{
	static PFNGLCOLOR3BVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3BVPROC_HPP>(_impl::_get_proc_address("glColor3bv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3d
#define GL_HPP_FUNDEF_Color3d
typedef void (*PFNGLCOLOR3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void Color3d(GLdouble red1,GLdouble green1,GLdouble blue1)
{
	static PFNGLCOLOR3DPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3DPROC_HPP>(_impl::_get_proc_address("glColor3d",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3dv
#define GL_HPP_FUNDEF_Color3dv
typedef void (*PFNGLCOLOR3DVPROC_HPP)(const GLdouble *);
static inline void Color3dv(const GLdouble * v1)
{
	static PFNGLCOLOR3DVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3DVPROC_HPP>(_impl::_get_proc_address("glColor3dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3f
#define GL_HPP_FUNDEF_Color3f
typedef void (*PFNGLCOLOR3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void Color3f(GLfloat red1,GLfloat green1,GLfloat blue1)
{
	static PFNGLCOLOR3FPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3FPROC_HPP>(_impl::_get_proc_address("glColor3f",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3fv
#define GL_HPP_FUNDEF_Color3fv
typedef void (*PFNGLCOLOR3FVPROC_HPP)(const GLfloat *);
static inline void Color3fv(const GLfloat * v1)
{
	static PFNGLCOLOR3FVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3FVPROC_HPP>(_impl::_get_proc_address("glColor3fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3i
#define GL_HPP_FUNDEF_Color3i
typedef void (*PFNGLCOLOR3IPROC_HPP)(GLint,GLint,GLint);
static inline void Color3i(GLint red1,GLint green1,GLint blue1)
{
	static PFNGLCOLOR3IPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3IPROC_HPP>(_impl::_get_proc_address("glColor3i",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3iv
#define GL_HPP_FUNDEF_Color3iv
typedef void (*PFNGLCOLOR3IVPROC_HPP)(const GLint *);
static inline void Color3iv(const GLint * v1)
{
	static PFNGLCOLOR3IVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3IVPROC_HPP>(_impl::_get_proc_address("glColor3iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3s
#define GL_HPP_FUNDEF_Color3s
typedef void (*PFNGLCOLOR3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void Color3s(GLshort red1,GLshort green1,GLshort blue1)
{
	static PFNGLCOLOR3SPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3SPROC_HPP>(_impl::_get_proc_address("glColor3s",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3sv
#define GL_HPP_FUNDEF_Color3sv
typedef void (*PFNGLCOLOR3SVPROC_HPP)(const GLshort *);
static inline void Color3sv(const GLshort * v1)
{
	static PFNGLCOLOR3SVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3SVPROC_HPP>(_impl::_get_proc_address("glColor3sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3ub
#define GL_HPP_FUNDEF_Color3ub
typedef void (*PFNGLCOLOR3UBPROC_HPP)(GLubyte,GLubyte,GLubyte);
static inline void Color3ub(GLubyte red1,GLubyte green1,GLubyte blue1)
{
	static PFNGLCOLOR3UBPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3UBPROC_HPP>(_impl::_get_proc_address("glColor3ub",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3ubv
#define GL_HPP_FUNDEF_Color3ubv
typedef void (*PFNGLCOLOR3UBVPROC_HPP)(const GLubyte *);
static inline void Color3ubv(const GLubyte * v1)
{
	static PFNGLCOLOR3UBVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3UBVPROC_HPP>(_impl::_get_proc_address("glColor3ubv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3ui
#define GL_HPP_FUNDEF_Color3ui
typedef void (*PFNGLCOLOR3UIPROC_HPP)(GLuint,GLuint,GLuint);
static inline void Color3ui(GLuint red1,GLuint green1,GLuint blue1)
{
	static PFNGLCOLOR3UIPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3UIPROC_HPP>(_impl::_get_proc_address("glColor3ui",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3uiv
#define GL_HPP_FUNDEF_Color3uiv
typedef void (*PFNGLCOLOR3UIVPROC_HPP)(const GLuint *);
static inline void Color3uiv(const GLuint * v1)
{
	static PFNGLCOLOR3UIVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3UIVPROC_HPP>(_impl::_get_proc_address("glColor3uiv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3us
#define GL_HPP_FUNDEF_Color3us
typedef void (*PFNGLCOLOR3USPROC_HPP)(GLushort,GLushort,GLushort);
static inline void Color3us(GLushort red1,GLushort green1,GLushort blue1)
{
	static PFNGLCOLOR3USPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3USPROC_HPP>(_impl::_get_proc_address("glColor3us",1,0));
	 fn(red1,green1,blue1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color3usv
#define GL_HPP_FUNDEF_Color3usv
typedef void (*PFNGLCOLOR3USVPROC_HPP)(const GLushort *);
static inline void Color3usv(const GLushort * v1)
{
	static PFNGLCOLOR3USVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR3USVPROC_HPP>(_impl::_get_proc_address("glColor3usv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4b
#define GL_HPP_FUNDEF_Color4b
typedef void (*PFNGLCOLOR4BPROC_HPP)(GLbyte,GLbyte,GLbyte,GLbyte);
static inline void Color4b(GLbyte red1,GLbyte green1,GLbyte blue1,GLbyte alpha1)
{
	static PFNGLCOLOR4BPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4BPROC_HPP>(_impl::_get_proc_address("glColor4b",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4bv
#define GL_HPP_FUNDEF_Color4bv
typedef void (*PFNGLCOLOR4BVPROC_HPP)(const GLbyte *);
static inline void Color4bv(const GLbyte * v1)
{
	static PFNGLCOLOR4BVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4BVPROC_HPP>(_impl::_get_proc_address("glColor4bv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4d
#define GL_HPP_FUNDEF_Color4d
typedef void (*PFNGLCOLOR4DPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Color4d(GLdouble red1,GLdouble green1,GLdouble blue1,GLdouble alpha1)
{
	static PFNGLCOLOR4DPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4DPROC_HPP>(_impl::_get_proc_address("glColor4d",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4dv
#define GL_HPP_FUNDEF_Color4dv
typedef void (*PFNGLCOLOR4DVPROC_HPP)(const GLdouble *);
static inline void Color4dv(const GLdouble * v1)
{
	static PFNGLCOLOR4DVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4DVPROC_HPP>(_impl::_get_proc_address("glColor4dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4f
#define GL_HPP_FUNDEF_Color4f
typedef void (*PFNGLCOLOR4FPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Color4f(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLCOLOR4FPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4FPROC_HPP>(_impl::_get_proc_address("glColor4f",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4fv
#define GL_HPP_FUNDEF_Color4fv
typedef void (*PFNGLCOLOR4FVPROC_HPP)(const GLfloat *);
static inline void Color4fv(const GLfloat * v1)
{
	static PFNGLCOLOR4FVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4FVPROC_HPP>(_impl::_get_proc_address("glColor4fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4i
#define GL_HPP_FUNDEF_Color4i
typedef void (*PFNGLCOLOR4IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void Color4i(GLint red1,GLint green1,GLint blue1,GLint alpha1)
{
	static PFNGLCOLOR4IPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4IPROC_HPP>(_impl::_get_proc_address("glColor4i",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4iv
#define GL_HPP_FUNDEF_Color4iv
typedef void (*PFNGLCOLOR4IVPROC_HPP)(const GLint *);
static inline void Color4iv(const GLint * v1)
{
	static PFNGLCOLOR4IVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4IVPROC_HPP>(_impl::_get_proc_address("glColor4iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4s
#define GL_HPP_FUNDEF_Color4s
typedef void (*PFNGLCOLOR4SPROC_HPP)(GLshort,GLshort,GLshort,GLshort);
static inline void Color4s(GLshort red1,GLshort green1,GLshort blue1,GLshort alpha1)
{
	static PFNGLCOLOR4SPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4SPROC_HPP>(_impl::_get_proc_address("glColor4s",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4sv
#define GL_HPP_FUNDEF_Color4sv
typedef void (*PFNGLCOLOR4SVPROC_HPP)(const GLshort *);
static inline void Color4sv(const GLshort * v1)
{
	static PFNGLCOLOR4SVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4SVPROC_HPP>(_impl::_get_proc_address("glColor4sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4ub
#define GL_HPP_FUNDEF_Color4ub
typedef void (*PFNGLCOLOR4UBPROC_HPP)(GLubyte,GLubyte,GLubyte,GLubyte);
static inline void Color4ub(GLubyte red1,GLubyte green1,GLubyte blue1,GLubyte alpha1)
{
	static PFNGLCOLOR4UBPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4UBPROC_HPP>(_impl::_get_proc_address("glColor4ub",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4ubv
#define GL_HPP_FUNDEF_Color4ubv
typedef void (*PFNGLCOLOR4UBVPROC_HPP)(const GLubyte *);
static inline void Color4ubv(const GLubyte * v1)
{
	static PFNGLCOLOR4UBVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4UBVPROC_HPP>(_impl::_get_proc_address("glColor4ubv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4ui
#define GL_HPP_FUNDEF_Color4ui
typedef void (*PFNGLCOLOR4UIPROC_HPP)(GLuint,GLuint,GLuint,GLuint);
static inline void Color4ui(GLuint red1,GLuint green1,GLuint blue1,GLuint alpha1)
{
	static PFNGLCOLOR4UIPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4UIPROC_HPP>(_impl::_get_proc_address("glColor4ui",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4uiv
#define GL_HPP_FUNDEF_Color4uiv
typedef void (*PFNGLCOLOR4UIVPROC_HPP)(const GLuint *);
static inline void Color4uiv(const GLuint * v1)
{
	static PFNGLCOLOR4UIVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4UIVPROC_HPP>(_impl::_get_proc_address("glColor4uiv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4us
#define GL_HPP_FUNDEF_Color4us
typedef void (*PFNGLCOLOR4USPROC_HPP)(GLushort,GLushort,GLushort,GLushort);
static inline void Color4us(GLushort red1,GLushort green1,GLushort blue1,GLushort alpha1)
{
	static PFNGLCOLOR4USPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4USPROC_HPP>(_impl::_get_proc_address("glColor4us",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Color4usv
#define GL_HPP_FUNDEF_Color4usv
typedef void (*PFNGLCOLOR4USVPROC_HPP)(const GLushort *);
static inline void Color4usv(const GLushort * v1)
{
	static PFNGLCOLOR4USVPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4USVPROC_HPP>(_impl::_get_proc_address("glColor4usv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ColorMask
#define GL_HPP_FUNDEF_ColorMask
typedef void (*PFNGLCOLORMASKPROC_HPP)(GLboolean,GLboolean,GLboolean,GLboolean);
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	static PFNGLCOLORMASKPROC_HPP fn=reinterpret_cast<PFNGLCOLORMASKPROC_HPP>(_impl::_get_proc_address("glColorMask",1,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ColorMaterial
#define GL_HPP_FUNDEF_ColorMaterial
typedef void (*PFNGLCOLORMATERIALPROC_HPP)(GLenum,GLenum);
static inline void ColorMaterial(GLenum face1,GLenum mode1)
{
	static PFNGLCOLORMATERIALPROC_HPP fn=reinterpret_cast<PFNGLCOLORMATERIALPROC_HPP>(_impl::_get_proc_address("glColorMaterial",1,0));
	 fn(face1,mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CopyPixels
#define GL_HPP_FUNDEF_CopyPixels
typedef void (*PFNGLCOPYPIXELSPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum);
static inline void CopyPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum type1)
{
	static PFNGLCOPYPIXELSPROC_HPP fn=reinterpret_cast<PFNGLCOPYPIXELSPROC_HPP>(_impl::_get_proc_address("glCopyPixels",1,0));
	 fn(x1,y1,width1,height1,type1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CullFace
#define GL_HPP_FUNDEF_CullFace
typedef void (*PFNGLCULLFACEPROC_HPP)(GLenum);
static inline void CullFace(GLenum mode1)
{
	static PFNGLCULLFACEPROC_HPP fn=reinterpret_cast<PFNGLCULLFACEPROC_HPP>(_impl::_get_proc_address("glCullFace",1,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteLists
#define GL_HPP_FUNDEF_DeleteLists
typedef void (*PFNGLDELETELISTSPROC_HPP)(GLuint,GLsizei);
static inline void DeleteLists(GLuint list1,GLsizei range1)
{
	static PFNGLDELETELISTSPROC_HPP fn=reinterpret_cast<PFNGLDELETELISTSPROC_HPP>(_impl::_get_proc_address("glDeleteLists",1,0));
	 fn(list1,range1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthFunc
#define GL_HPP_FUNDEF_DepthFunc
typedef void (*PFNGLDEPTHFUNCPROC_HPP)(GLenum);
static inline void DepthFunc(GLenum func1)
{
	static PFNGLDEPTHFUNCPROC_HPP fn=reinterpret_cast<PFNGLDEPTHFUNCPROC_HPP>(_impl::_get_proc_address("glDepthFunc",1,0));
	 fn(func1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthMask
#define GL_HPP_FUNDEF_DepthMask
typedef void (*PFNGLDEPTHMASKPROC_HPP)(GLboolean);
static inline void DepthMask(GLboolean flag1)
{
	static PFNGLDEPTHMASKPROC_HPP fn=reinterpret_cast<PFNGLDEPTHMASKPROC_HPP>(_impl::_get_proc_address("glDepthMask",1,0));
	 fn(flag1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthRange
#define GL_HPP_FUNDEF_DepthRange
typedef void (*PFNGLDEPTHRANGEPROC_HPP)(GLdouble,GLdouble);
static inline void DepthRange(GLdouble near1,GLdouble far1)
{
	static PFNGLDEPTHRANGEPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEPROC_HPP>(_impl::_get_proc_address("glDepthRange",1,0));
	 fn(near1,far1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Disable
#define GL_HPP_FUNDEF_Disable
typedef void (*PFNGLDISABLEPROC_HPP)(GLenum);
static inline void Disable(GLenum cap1)
{
	static PFNGLDISABLEPROC_HPP fn=reinterpret_cast<PFNGLDISABLEPROC_HPP>(_impl::_get_proc_address("glDisable",1,0));
	 fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DrawBuffer
#define GL_HPP_FUNDEF_DrawBuffer
typedef void (*PFNGLDRAWBUFFERPROC_HPP)(GLenum);
static inline void DrawBuffer(GLenum buf1)
{
	static PFNGLDRAWBUFFERPROC_HPP fn=reinterpret_cast<PFNGLDRAWBUFFERPROC_HPP>(_impl::_get_proc_address("glDrawBuffer",1,0));
	 fn(buf1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DrawPixels
#define GL_HPP_FUNDEF_DrawPixels
typedef void (*PFNGLDRAWPIXELSPROC_HPP)(GLsizei,GLsizei,GLenum,GLenum,const void *);
static inline void DrawPixels(GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLDRAWPIXELSPROC_HPP fn=reinterpret_cast<PFNGLDRAWPIXELSPROC_HPP>(_impl::_get_proc_address("glDrawPixels",1,0));
	 fn(width1,height1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EdgeFlag
#define GL_HPP_FUNDEF_EdgeFlag
typedef void (*PFNGLEDGEFLAGPROC_HPP)(GLboolean);
static inline void EdgeFlag(GLboolean flag1)
{
	static PFNGLEDGEFLAGPROC_HPP fn=reinterpret_cast<PFNGLEDGEFLAGPROC_HPP>(_impl::_get_proc_address("glEdgeFlag",1,0));
	 fn(flag1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EdgeFlagv
#define GL_HPP_FUNDEF_EdgeFlagv
typedef void (*PFNGLEDGEFLAGVPROC_HPP)(const GLboolean *);
static inline void EdgeFlagv(const GLboolean * flag1)
{
	static PFNGLEDGEFLAGVPROC_HPP fn=reinterpret_cast<PFNGLEDGEFLAGVPROC_HPP>(_impl::_get_proc_address("glEdgeFlagv",1,0));
	 fn(flag1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Enable
#define GL_HPP_FUNDEF_Enable
typedef void (*PFNGLENABLEPROC_HPP)(GLenum);
static inline void Enable(GLenum cap1)
{
	static PFNGLENABLEPROC_HPP fn=reinterpret_cast<PFNGLENABLEPROC_HPP>(_impl::_get_proc_address("glEnable",1,0));
	 fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_End
#define GL_HPP_FUNDEF_End
typedef void (*PFNGLENDPROC_HPP)();
static inline void End()
{
	static PFNGLENDPROC_HPP fn=reinterpret_cast<PFNGLENDPROC_HPP>(_impl::_get_proc_address("glEnd",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_EndList
#define GL_HPP_FUNDEF_EndList
typedef void (*PFNGLENDLISTPROC_HPP)();
static inline void EndList()
{
	static PFNGLENDLISTPROC_HPP fn=reinterpret_cast<PFNGLENDLISTPROC_HPP>(_impl::_get_proc_address("glEndList",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord1d
#define GL_HPP_FUNDEF_EvalCoord1d
typedef void (*PFNGLEVALCOORD1DPROC_HPP)(GLdouble);
static inline void EvalCoord1d(GLdouble u1)
{
	static PFNGLEVALCOORD1DPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1DPROC_HPP>(_impl::_get_proc_address("glEvalCoord1d",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord1dv
#define GL_HPP_FUNDEF_EvalCoord1dv
typedef void (*PFNGLEVALCOORD1DVPROC_HPP)(const GLdouble *);
static inline void EvalCoord1dv(const GLdouble * u1)
{
	static PFNGLEVALCOORD1DVPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1DVPROC_HPP>(_impl::_get_proc_address("glEvalCoord1dv",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord1f
#define GL_HPP_FUNDEF_EvalCoord1f
typedef void (*PFNGLEVALCOORD1FPROC_HPP)(GLfloat);
static inline void EvalCoord1f(GLfloat u1)
{
	static PFNGLEVALCOORD1FPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1FPROC_HPP>(_impl::_get_proc_address("glEvalCoord1f",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord1fv
#define GL_HPP_FUNDEF_EvalCoord1fv
typedef void (*PFNGLEVALCOORD1FVPROC_HPP)(const GLfloat *);
static inline void EvalCoord1fv(const GLfloat * u1)
{
	static PFNGLEVALCOORD1FVPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD1FVPROC_HPP>(_impl::_get_proc_address("glEvalCoord1fv",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord2d
#define GL_HPP_FUNDEF_EvalCoord2d
typedef void (*PFNGLEVALCOORD2DPROC_HPP)(GLdouble,GLdouble);
static inline void EvalCoord2d(GLdouble u1,GLdouble v1)
{
	static PFNGLEVALCOORD2DPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2DPROC_HPP>(_impl::_get_proc_address("glEvalCoord2d",1,0));
	 fn(u1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord2dv
#define GL_HPP_FUNDEF_EvalCoord2dv
typedef void (*PFNGLEVALCOORD2DVPROC_HPP)(const GLdouble *);
static inline void EvalCoord2dv(const GLdouble * u1)
{
	static PFNGLEVALCOORD2DVPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2DVPROC_HPP>(_impl::_get_proc_address("glEvalCoord2dv",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord2f
#define GL_HPP_FUNDEF_EvalCoord2f
typedef void (*PFNGLEVALCOORD2FPROC_HPP)(GLfloat,GLfloat);
static inline void EvalCoord2f(GLfloat u1,GLfloat v1)
{
	static PFNGLEVALCOORD2FPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2FPROC_HPP>(_impl::_get_proc_address("glEvalCoord2f",1,0));
	 fn(u1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalCoord2fv
#define GL_HPP_FUNDEF_EvalCoord2fv
typedef void (*PFNGLEVALCOORD2FVPROC_HPP)(const GLfloat *);
static inline void EvalCoord2fv(const GLfloat * u1)
{
	static PFNGLEVALCOORD2FVPROC_HPP fn=reinterpret_cast<PFNGLEVALCOORD2FVPROC_HPP>(_impl::_get_proc_address("glEvalCoord2fv",1,0));
	 fn(u1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalMesh1
#define GL_HPP_FUNDEF_EvalMesh1
typedef void (*PFNGLEVALMESH1PROC_HPP)(GLenum,GLint,GLint);
static inline void EvalMesh1(GLenum mode1,GLint i11,GLint i21)
{
	static PFNGLEVALMESH1PROC_HPP fn=reinterpret_cast<PFNGLEVALMESH1PROC_HPP>(_impl::_get_proc_address("glEvalMesh1",1,0));
	 fn(mode1,i11,i21);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalMesh2
#define GL_HPP_FUNDEF_EvalMesh2
typedef void (*PFNGLEVALMESH2PROC_HPP)(GLenum,GLint,GLint,GLint,GLint);
static inline void EvalMesh2(GLenum mode1,GLint i11,GLint i21,GLint j11,GLint j21)
{
	static PFNGLEVALMESH2PROC_HPP fn=reinterpret_cast<PFNGLEVALMESH2PROC_HPP>(_impl::_get_proc_address("glEvalMesh2",1,0));
	 fn(mode1,i11,i21,j11,j21);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalPoint1
#define GL_HPP_FUNDEF_EvalPoint1
typedef void (*PFNGLEVALPOINT1PROC_HPP)(GLint);
static inline void EvalPoint1(GLint i1)
{
	static PFNGLEVALPOINT1PROC_HPP fn=reinterpret_cast<PFNGLEVALPOINT1PROC_HPP>(_impl::_get_proc_address("glEvalPoint1",1,0));
	 fn(i1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EvalPoint2
#define GL_HPP_FUNDEF_EvalPoint2
typedef void (*PFNGLEVALPOINT2PROC_HPP)(GLint,GLint);
static inline void EvalPoint2(GLint i1,GLint j1)
{
	static PFNGLEVALPOINT2PROC_HPP fn=reinterpret_cast<PFNGLEVALPOINT2PROC_HPP>(_impl::_get_proc_address("glEvalPoint2",1,0));
	 fn(i1,j1);
}
#endif

#ifndef	GL_HPP_FUNDEF_FeedbackBuffer
#define GL_HPP_FUNDEF_FeedbackBuffer
typedef void (*PFNGLFEEDBACKBUFFERPROC_HPP)(GLsizei,GLenum,GLfloat *);
static inline void FeedbackBuffer(GLsizei size1,GLenum type1,GLfloat * buffer1)
{
	static PFNGLFEEDBACKBUFFERPROC_HPP fn=reinterpret_cast<PFNGLFEEDBACKBUFFERPROC_HPP>(_impl::_get_proc_address("glFeedbackBuffer",1,0));
	 fn(size1,type1,buffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Finish
#define GL_HPP_FUNDEF_Finish
typedef void (*PFNGLFINISHPROC_HPP)();
static inline void Finish()
{
	static PFNGLFINISHPROC_HPP fn=reinterpret_cast<PFNGLFINISHPROC_HPP>(_impl::_get_proc_address("glFinish",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_Flush
#define GL_HPP_FUNDEF_Flush
typedef void (*PFNGLFLUSHPROC_HPP)();
static inline void Flush()
{
	static PFNGLFLUSHPROC_HPP fn=reinterpret_cast<PFNGLFLUSHPROC_HPP>(_impl::_get_proc_address("glFlush",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_Fogf
#define GL_HPP_FUNDEF_Fogf
typedef void (*PFNGLFOGFPROC_HPP)(GLenum,GLfloat);
static inline void Fogf(GLenum pname1,GLfloat param1)
{
	static PFNGLFOGFPROC_HPP fn=reinterpret_cast<PFNGLFOGFPROC_HPP>(_impl::_get_proc_address("glFogf",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Fogfv
#define GL_HPP_FUNDEF_Fogfv
typedef void (*PFNGLFOGFVPROC_HPP)(GLenum,const GLfloat *);
static inline void Fogfv(GLenum pname1,const GLfloat * params1)
{
	static PFNGLFOGFVPROC_HPP fn=reinterpret_cast<PFNGLFOGFVPROC_HPP>(_impl::_get_proc_address("glFogfv",1,0));
	 fn(pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Fogi
#define GL_HPP_FUNDEF_Fogi
typedef void (*PFNGLFOGIPROC_HPP)(GLenum,GLint);
static inline void Fogi(GLenum pname1,GLint param1)
{
	static PFNGLFOGIPROC_HPP fn=reinterpret_cast<PFNGLFOGIPROC_HPP>(_impl::_get_proc_address("glFogi",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Fogiv
#define GL_HPP_FUNDEF_Fogiv
typedef void (*PFNGLFOGIVPROC_HPP)(GLenum,const GLint *);
static inline void Fogiv(GLenum pname1,const GLint * params1)
{
	static PFNGLFOGIVPROC_HPP fn=reinterpret_cast<PFNGLFOGIVPROC_HPP>(_impl::_get_proc_address("glFogiv",1,0));
	 fn(pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_FrontFace
#define GL_HPP_FUNDEF_FrontFace
typedef void (*PFNGLFRONTFACEPROC_HPP)(GLenum);
static inline void FrontFace(GLenum mode1)
{
	static PFNGLFRONTFACEPROC_HPP fn=reinterpret_cast<PFNGLFRONTFACEPROC_HPP>(_impl::_get_proc_address("glFrontFace",1,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Frustum
#define GL_HPP_FUNDEF_Frustum
typedef void (*PFNGLFRUSTUMPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Frustum(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	static PFNGLFRUSTUMPROC_HPP fn=reinterpret_cast<PFNGLFRUSTUMPROC_HPP>(_impl::_get_proc_address("glFrustum",1,0));
	 fn(left1,right1,bottom1,top1,zNear1,zFar1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenLists
#define GL_HPP_FUNDEF_GenLists
typedef GLuint (*PFNGLGENLISTSPROC_HPP)(GLsizei);
static inline GLuint GenLists(GLsizei range1)
{
	static PFNGLGENLISTSPROC_HPP fn=reinterpret_cast<PFNGLGENLISTSPROC_HPP>(_impl::_get_proc_address("glGenLists",1,0));
	return fn(range1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetBooleanv
#define GL_HPP_FUNDEF_GetBooleanv
typedef void (*PFNGLGETBOOLEANVPROC_HPP)(GLenum,GLboolean *);
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	static PFNGLGETBOOLEANVPROC_HPP fn=reinterpret_cast<PFNGLGETBOOLEANVPROC_HPP>(_impl::_get_proc_address("glGetBooleanv",1,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetClipPlane
#define GL_HPP_FUNDEF_GetClipPlane
typedef void (*PFNGLGETCLIPPLANEPROC_HPP)(GLenum,GLdouble *);
static inline void GetClipPlane(GLenum plane1,GLdouble * equation1)
{
	static PFNGLGETCLIPPLANEPROC_HPP fn=reinterpret_cast<PFNGLGETCLIPPLANEPROC_HPP>(_impl::_get_proc_address("glGetClipPlane",1,0));
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetDoublev
#define GL_HPP_FUNDEF_GetDoublev
typedef void (*PFNGLGETDOUBLEVPROC_HPP)(GLenum,GLdouble *);
static inline void GetDoublev(GLenum pname1,GLdouble * data1)
{
	static PFNGLGETDOUBLEVPROC_HPP fn=reinterpret_cast<PFNGLGETDOUBLEVPROC_HPP>(_impl::_get_proc_address("glGetDoublev",1,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetError
#define GL_HPP_FUNDEF_GetError
typedef GLenum (*PFNGLGETERRORPROC_HPP)();
static inline GLenum GetError()
{
	static PFNGLGETERRORPROC_HPP fn=reinterpret_cast<PFNGLGETERRORPROC_HPP>(_impl::_get_proc_address("glGetError",1,0));
	return fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_GetFloatv
#define GL_HPP_FUNDEF_GetFloatv
typedef void (*PFNGLGETFLOATVPROC_HPP)(GLenum,GLfloat *);
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	static PFNGLGETFLOATVPROC_HPP fn=reinterpret_cast<PFNGLGETFLOATVPROC_HPP>(_impl::_get_proc_address("glGetFloatv",1,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetIntegerv
#define GL_HPP_FUNDEF_GetIntegerv
typedef void (*PFNGLGETINTEGERVPROC_HPP)(GLenum,GLint *);
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	static PFNGLGETINTEGERVPROC_HPP fn=reinterpret_cast<PFNGLGETINTEGERVPROC_HPP>(_impl::_get_proc_address("glGetIntegerv",1,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetLightfv
#define GL_HPP_FUNDEF_GetLightfv
typedef void (*PFNGLGETLIGHTFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetLightfv(GLenum light1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETLIGHTFVPROC_HPP fn=reinterpret_cast<PFNGLGETLIGHTFVPROC_HPP>(_impl::_get_proc_address("glGetLightfv",1,0));
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetLightiv
#define GL_HPP_FUNDEF_GetLightiv
typedef void (*PFNGLGETLIGHTIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetLightiv(GLenum light1,GLenum pname1,GLint * params1)
{
	static PFNGLGETLIGHTIVPROC_HPP fn=reinterpret_cast<PFNGLGETLIGHTIVPROC_HPP>(_impl::_get_proc_address("glGetLightiv",1,0));
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetMapdv
#define GL_HPP_FUNDEF_GetMapdv
typedef void (*PFNGLGETMAPDVPROC_HPP)(GLenum,GLenum,GLdouble *);
static inline void GetMapdv(GLenum target1,GLenum query1,GLdouble * v1)
{
	static PFNGLGETMAPDVPROC_HPP fn=reinterpret_cast<PFNGLGETMAPDVPROC_HPP>(_impl::_get_proc_address("glGetMapdv",1,0));
	 fn(target1,query1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetMapfv
#define GL_HPP_FUNDEF_GetMapfv
typedef void (*PFNGLGETMAPFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetMapfv(GLenum target1,GLenum query1,GLfloat * v1)
{
	static PFNGLGETMAPFVPROC_HPP fn=reinterpret_cast<PFNGLGETMAPFVPROC_HPP>(_impl::_get_proc_address("glGetMapfv",1,0));
	 fn(target1,query1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetMapiv
#define GL_HPP_FUNDEF_GetMapiv
typedef void (*PFNGLGETMAPIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetMapiv(GLenum target1,GLenum query1,GLint * v1)
{
	static PFNGLGETMAPIVPROC_HPP fn=reinterpret_cast<PFNGLGETMAPIVPROC_HPP>(_impl::_get_proc_address("glGetMapiv",1,0));
	 fn(target1,query1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetMaterialfv
#define GL_HPP_FUNDEF_GetMaterialfv
typedef void (*PFNGLGETMATERIALFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetMaterialfv(GLenum face1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETMATERIALFVPROC_HPP fn=reinterpret_cast<PFNGLGETMATERIALFVPROC_HPP>(_impl::_get_proc_address("glGetMaterialfv",1,0));
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetMaterialiv
#define GL_HPP_FUNDEF_GetMaterialiv
typedef void (*PFNGLGETMATERIALIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetMaterialiv(GLenum face1,GLenum pname1,GLint * params1)
{
	static PFNGLGETMATERIALIVPROC_HPP fn=reinterpret_cast<PFNGLGETMATERIALIVPROC_HPP>(_impl::_get_proc_address("glGetMaterialiv",1,0));
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetPixelMapfv
#define GL_HPP_FUNDEF_GetPixelMapfv
typedef void (*PFNGLGETPIXELMAPFVPROC_HPP)(GLenum,GLfloat *);
static inline void GetPixelMapfv(GLenum map1,GLfloat * values1)
{
	static PFNGLGETPIXELMAPFVPROC_HPP fn=reinterpret_cast<PFNGLGETPIXELMAPFVPROC_HPP>(_impl::_get_proc_address("glGetPixelMapfv",1,0));
	 fn(map1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetPixelMapuiv
#define GL_HPP_FUNDEF_GetPixelMapuiv
typedef void (*PFNGLGETPIXELMAPUIVPROC_HPP)(GLenum,GLuint *);
static inline void GetPixelMapuiv(GLenum map1,GLuint * values1)
{
	static PFNGLGETPIXELMAPUIVPROC_HPP fn=reinterpret_cast<PFNGLGETPIXELMAPUIVPROC_HPP>(_impl::_get_proc_address("glGetPixelMapuiv",1,0));
	 fn(map1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetPixelMapusv
#define GL_HPP_FUNDEF_GetPixelMapusv
typedef void (*PFNGLGETPIXELMAPUSVPROC_HPP)(GLenum,GLushort *);
static inline void GetPixelMapusv(GLenum map1,GLushort * values1)
{
	static PFNGLGETPIXELMAPUSVPROC_HPP fn=reinterpret_cast<PFNGLGETPIXELMAPUSVPROC_HPP>(_impl::_get_proc_address("glGetPixelMapusv",1,0));
	 fn(map1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetPolygonStipple
#define GL_HPP_FUNDEF_GetPolygonStipple
typedef void (*PFNGLGETPOLYGONSTIPPLEPROC_HPP)(GLubyte *);
static inline void GetPolygonStipple(GLubyte * mask1)
{
	static PFNGLGETPOLYGONSTIPPLEPROC_HPP fn=reinterpret_cast<PFNGLGETPOLYGONSTIPPLEPROC_HPP>(_impl::_get_proc_address("glGetPolygonStipple",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetString
#define GL_HPP_FUNDEF_GetString
typedef const GLubyte * (*PFNGLGETSTRINGPROC_HPP)(GLenum);
static inline const GLubyte * GetString(GLenum name1)
{
	static PFNGLGETSTRINGPROC_HPP fn=reinterpret_cast<PFNGLGETSTRINGPROC_HPP>(_impl::_get_proc_address("glGetString",1,0));
	return fn(name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexEnvfv
#define GL_HPP_FUNDEF_GetTexEnvfv
typedef void (*PFNGLGETTEXENVFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetTexEnvfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXENVFVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXENVFVPROC_HPP>(_impl::_get_proc_address("glGetTexEnvfv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexEnviv
#define GL_HPP_FUNDEF_GetTexEnviv
typedef void (*PFNGLGETTEXENVIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexEnviv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXENVIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXENVIVPROC_HPP>(_impl::_get_proc_address("glGetTexEnviv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexGendv
#define GL_HPP_FUNDEF_GetTexGendv
typedef void (*PFNGLGETTEXGENDVPROC_HPP)(GLenum,GLenum,GLdouble *);
static inline void GetTexGendv(GLenum coord1,GLenum pname1,GLdouble * params1)
{
	static PFNGLGETTEXGENDVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENDVPROC_HPP>(_impl::_get_proc_address("glGetTexGendv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexGenfv
#define GL_HPP_FUNDEF_GetTexGenfv
typedef void (*PFNGLGETTEXGENFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetTexGenfv(GLenum coord1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXGENFVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENFVPROC_HPP>(_impl::_get_proc_address("glGetTexGenfv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexGeniv
#define GL_HPP_FUNDEF_GetTexGeniv
typedef void (*PFNGLGETTEXGENIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexGeniv(GLenum coord1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXGENIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXGENIVPROC_HPP>(_impl::_get_proc_address("glGetTexGeniv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexImage
#define GL_HPP_FUNDEF_GetTexImage
typedef void (*PFNGLGETTEXIMAGEPROC_HPP)(GLenum,GLint,GLenum,GLenum,void *);
static inline void GetTexImage(GLenum target1,GLint level1,GLenum format1,GLenum type1,void * pixels1)
{
	static PFNGLGETTEXIMAGEPROC_HPP fn=reinterpret_cast<PFNGLGETTEXIMAGEPROC_HPP>(_impl::_get_proc_address("glGetTexImage",1,0));
	 fn(target1,level1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexLevelParameterfv
#define GL_HPP_FUNDEF_GetTexLevelParameterfv
typedef void (*PFNGLGETTEXLEVELPARAMETERFVPROC_HPP)(GLenum,GLint,GLenum,GLfloat *);
static inline void GetTexLevelParameterfv(GLenum target1,GLint level1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXLEVELPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXLEVELPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glGetTexLevelParameterfv",1,0));
	 fn(target1,level1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexLevelParameteriv
#define GL_HPP_FUNDEF_GetTexLevelParameteriv
typedef void (*PFNGLGETTEXLEVELPARAMETERIVPROC_HPP)(GLenum,GLint,GLenum,GLint *);
static inline void GetTexLevelParameteriv(GLenum target1,GLint level1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXLEVELPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXLEVELPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetTexLevelParameteriv",1,0));
	 fn(target1,level1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexParameterfv
#define GL_HPP_FUNDEF_GetTexParameterfv
typedef void (*PFNGLGETTEXPARAMETERFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetTexParameterfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glGetTexParameterfv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexParameteriv
#define GL_HPP_FUNDEF_GetTexParameteriv
typedef void (*PFNGLGETTEXPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetTexParameteriv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Hint
#define GL_HPP_FUNDEF_Hint
typedef void (*PFNGLHINTPROC_HPP)(GLenum,GLenum);
static inline void Hint(GLenum target1,GLenum mode1)
{
	static PFNGLHINTPROC_HPP fn=reinterpret_cast<PFNGLHINTPROC_HPP>(_impl::_get_proc_address("glHint",1,0));
	 fn(target1,mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IndexMask
#define GL_HPP_FUNDEF_IndexMask
typedef void (*PFNGLINDEXMASKPROC_HPP)(GLuint);
static inline void IndexMask(GLuint mask1)
{
	static PFNGLINDEXMASKPROC_HPP fn=reinterpret_cast<PFNGLINDEXMASKPROC_HPP>(_impl::_get_proc_address("glIndexMask",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexd
#define GL_HPP_FUNDEF_Indexd
typedef void (*PFNGLINDEXDPROC_HPP)(GLdouble);
static inline void Indexd(GLdouble c1)
{
	static PFNGLINDEXDPROC_HPP fn=reinterpret_cast<PFNGLINDEXDPROC_HPP>(_impl::_get_proc_address("glIndexd",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexdv
#define GL_HPP_FUNDEF_Indexdv
typedef void (*PFNGLINDEXDVPROC_HPP)(const GLdouble *);
static inline void Indexdv(const GLdouble * c1)
{
	static PFNGLINDEXDVPROC_HPP fn=reinterpret_cast<PFNGLINDEXDVPROC_HPP>(_impl::_get_proc_address("glIndexdv",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexf
#define GL_HPP_FUNDEF_Indexf
typedef void (*PFNGLINDEXFPROC_HPP)(GLfloat);
static inline void Indexf(GLfloat c1)
{
	static PFNGLINDEXFPROC_HPP fn=reinterpret_cast<PFNGLINDEXFPROC_HPP>(_impl::_get_proc_address("glIndexf",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexfv
#define GL_HPP_FUNDEF_Indexfv
typedef void (*PFNGLINDEXFVPROC_HPP)(const GLfloat *);
static inline void Indexfv(const GLfloat * c1)
{
	static PFNGLINDEXFVPROC_HPP fn=reinterpret_cast<PFNGLINDEXFVPROC_HPP>(_impl::_get_proc_address("glIndexfv",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexi
#define GL_HPP_FUNDEF_Indexi
typedef void (*PFNGLINDEXIPROC_HPP)(GLint);
static inline void Indexi(GLint c1)
{
	static PFNGLINDEXIPROC_HPP fn=reinterpret_cast<PFNGLINDEXIPROC_HPP>(_impl::_get_proc_address("glIndexi",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexiv
#define GL_HPP_FUNDEF_Indexiv
typedef void (*PFNGLINDEXIVPROC_HPP)(const GLint *);
static inline void Indexiv(const GLint * c1)
{
	static PFNGLINDEXIVPROC_HPP fn=reinterpret_cast<PFNGLINDEXIVPROC_HPP>(_impl::_get_proc_address("glIndexiv",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexs
#define GL_HPP_FUNDEF_Indexs
typedef void (*PFNGLINDEXSPROC_HPP)(GLshort);
static inline void Indexs(GLshort c1)
{
	static PFNGLINDEXSPROC_HPP fn=reinterpret_cast<PFNGLINDEXSPROC_HPP>(_impl::_get_proc_address("glIndexs",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Indexsv
#define GL_HPP_FUNDEF_Indexsv
typedef void (*PFNGLINDEXSVPROC_HPP)(const GLshort *);
static inline void Indexsv(const GLshort * c1)
{
	static PFNGLINDEXSVPROC_HPP fn=reinterpret_cast<PFNGLINDEXSVPROC_HPP>(_impl::_get_proc_address("glIndexsv",1,0));
	 fn(c1);
}
#endif

#ifndef	GL_HPP_FUNDEF_InitNames
#define GL_HPP_FUNDEF_InitNames
typedef void (*PFNGLINITNAMESPROC_HPP)();
static inline void InitNames()
{
	static PFNGLINITNAMESPROC_HPP fn=reinterpret_cast<PFNGLINITNAMESPROC_HPP>(_impl::_get_proc_address("glInitNames",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_IsEnabled
#define GL_HPP_FUNDEF_IsEnabled
typedef GLboolean (*PFNGLISENABLEDPROC_HPP)(GLenum);
static inline GLboolean IsEnabled(GLenum cap1)
{
	static PFNGLISENABLEDPROC_HPP fn=reinterpret_cast<PFNGLISENABLEDPROC_HPP>(_impl::_get_proc_address("glIsEnabled",1,0));
	return fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsList
#define GL_HPP_FUNDEF_IsList
typedef GLboolean (*PFNGLISLISTPROC_HPP)(GLuint);
static inline GLboolean IsList(GLuint list1)
{
	static PFNGLISLISTPROC_HPP fn=reinterpret_cast<PFNGLISLISTPROC_HPP>(_impl::_get_proc_address("glIsList",1,0));
	return fn(list1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LightModelf
#define GL_HPP_FUNDEF_LightModelf
typedef void (*PFNGLLIGHTMODELFPROC_HPP)(GLenum,GLfloat);
static inline void LightModelf(GLenum pname1,GLfloat param1)
{
	static PFNGLLIGHTMODELFPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELFPROC_HPP>(_impl::_get_proc_address("glLightModelf",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LightModelfv
#define GL_HPP_FUNDEF_LightModelfv
typedef void (*PFNGLLIGHTMODELFVPROC_HPP)(GLenum,const GLfloat *);
static inline void LightModelfv(GLenum pname1,const GLfloat * params1)
{
	static PFNGLLIGHTMODELFVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELFVPROC_HPP>(_impl::_get_proc_address("glLightModelfv",1,0));
	 fn(pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LightModeli
#define GL_HPP_FUNDEF_LightModeli
typedef void (*PFNGLLIGHTMODELIPROC_HPP)(GLenum,GLint);
static inline void LightModeli(GLenum pname1,GLint param1)
{
	static PFNGLLIGHTMODELIPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELIPROC_HPP>(_impl::_get_proc_address("glLightModeli",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LightModeliv
#define GL_HPP_FUNDEF_LightModeliv
typedef void (*PFNGLLIGHTMODELIVPROC_HPP)(GLenum,const GLint *);
static inline void LightModeliv(GLenum pname1,const GLint * params1)
{
	static PFNGLLIGHTMODELIVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELIVPROC_HPP>(_impl::_get_proc_address("glLightModeliv",1,0));
	 fn(pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Lightf
#define GL_HPP_FUNDEF_Lightf
typedef void (*PFNGLLIGHTFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void Lightf(GLenum light1,GLenum pname1,GLfloat param1)
{
	static PFNGLLIGHTFPROC_HPP fn=reinterpret_cast<PFNGLLIGHTFPROC_HPP>(_impl::_get_proc_address("glLightf",1,0));
	 fn(light1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Lightfv
#define GL_HPP_FUNDEF_Lightfv
typedef void (*PFNGLLIGHTFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void Lightfv(GLenum light1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLLIGHTFVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTFVPROC_HPP>(_impl::_get_proc_address("glLightfv",1,0));
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Lighti
#define GL_HPP_FUNDEF_Lighti
typedef void (*PFNGLLIGHTIPROC_HPP)(GLenum,GLenum,GLint);
static inline void Lighti(GLenum light1,GLenum pname1,GLint param1)
{
	static PFNGLLIGHTIPROC_HPP fn=reinterpret_cast<PFNGLLIGHTIPROC_HPP>(_impl::_get_proc_address("glLighti",1,0));
	 fn(light1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Lightiv
#define GL_HPP_FUNDEF_Lightiv
typedef void (*PFNGLLIGHTIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void Lightiv(GLenum light1,GLenum pname1,const GLint * params1)
{
	static PFNGLLIGHTIVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTIVPROC_HPP>(_impl::_get_proc_address("glLightiv",1,0));
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LineStipple
#define GL_HPP_FUNDEF_LineStipple
typedef void (*PFNGLLINESTIPPLEPROC_HPP)(GLint,GLushort);
static inline void LineStipple(GLint factor1,GLushort pattern1)
{
	static PFNGLLINESTIPPLEPROC_HPP fn=reinterpret_cast<PFNGLLINESTIPPLEPROC_HPP>(_impl::_get_proc_address("glLineStipple",1,0));
	 fn(factor1,pattern1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LineWidth
#define GL_HPP_FUNDEF_LineWidth
typedef void (*PFNGLLINEWIDTHPROC_HPP)(GLfloat);
static inline void LineWidth(GLfloat width1)
{
	static PFNGLLINEWIDTHPROC_HPP fn=reinterpret_cast<PFNGLLINEWIDTHPROC_HPP>(_impl::_get_proc_address("glLineWidth",1,0));
	 fn(width1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ListBase
#define GL_HPP_FUNDEF_ListBase
typedef void (*PFNGLLISTBASEPROC_HPP)(GLuint);
static inline void ListBase(GLuint base1)
{
	static PFNGLLISTBASEPROC_HPP fn=reinterpret_cast<PFNGLLISTBASEPROC_HPP>(_impl::_get_proc_address("glListBase",1,0));
	 fn(base1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LoadIdentity
#define GL_HPP_FUNDEF_LoadIdentity
typedef void (*PFNGLLOADIDENTITYPROC_HPP)();
static inline void LoadIdentity()
{
	static PFNGLLOADIDENTITYPROC_HPP fn=reinterpret_cast<PFNGLLOADIDENTITYPROC_HPP>(_impl::_get_proc_address("glLoadIdentity",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_LoadMatrixd
#define GL_HPP_FUNDEF_LoadMatrixd
typedef void (*PFNGLLOADMATRIXDPROC_HPP)(const GLdouble *);
static inline void LoadMatrixd(const GLdouble * m1)
{
	static PFNGLLOADMATRIXDPROC_HPP fn=reinterpret_cast<PFNGLLOADMATRIXDPROC_HPP>(_impl::_get_proc_address("glLoadMatrixd",1,0));
	 fn(m1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LoadMatrixf
#define GL_HPP_FUNDEF_LoadMatrixf
typedef void (*PFNGLLOADMATRIXFPROC_HPP)(const GLfloat *);
static inline void LoadMatrixf(const GLfloat * m1)
{
	static PFNGLLOADMATRIXFPROC_HPP fn=reinterpret_cast<PFNGLLOADMATRIXFPROC_HPP>(_impl::_get_proc_address("glLoadMatrixf",1,0));
	 fn(m1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LoadName
#define GL_HPP_FUNDEF_LoadName
typedef void (*PFNGLLOADNAMEPROC_HPP)(GLuint);
static inline void LoadName(GLuint name1)
{
	static PFNGLLOADNAMEPROC_HPP fn=reinterpret_cast<PFNGLLOADNAMEPROC_HPP>(_impl::_get_proc_address("glLoadName",1,0));
	 fn(name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LogicOp
#define GL_HPP_FUNDEF_LogicOp
typedef void (*PFNGLLOGICOPPROC_HPP)(GLenum);
static inline void LogicOp(GLenum opcode1)
{
	static PFNGLLOGICOPPROC_HPP fn=reinterpret_cast<PFNGLLOGICOPPROC_HPP>(_impl::_get_proc_address("glLogicOp",1,0));
	 fn(opcode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Map1d
#define GL_HPP_FUNDEF_Map1d
typedef void (*PFNGLMAP1DPROC_HPP)(GLenum,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
static inline void Map1d(GLenum target1,GLdouble u11,GLdouble u21,GLint stride1,GLint order1,const GLdouble * points1)
{
	static PFNGLMAP1DPROC_HPP fn=reinterpret_cast<PFNGLMAP1DPROC_HPP>(_impl::_get_proc_address("glMap1d",1,0));
	 fn(target1,u11,u21,stride1,order1,points1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Map1f
#define GL_HPP_FUNDEF_Map1f
typedef void (*PFNGLMAP1FPROC_HPP)(GLenum,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
static inline void Map1f(GLenum target1,GLfloat u11,GLfloat u21,GLint stride1,GLint order1,const GLfloat * points1)
{
	static PFNGLMAP1FPROC_HPP fn=reinterpret_cast<PFNGLMAP1FPROC_HPP>(_impl::_get_proc_address("glMap1f",1,0));
	 fn(target1,u11,u21,stride1,order1,points1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Map2d
#define GL_HPP_FUNDEF_Map2d
typedef void (*PFNGLMAP2DPROC_HPP)(GLenum,GLdouble,GLdouble,GLint,GLint,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
static inline void Map2d(GLenum target1,GLdouble u11,GLdouble u21,GLint ustride1,GLint uorder1,GLdouble v11,GLdouble v21,GLint vstride1,GLint vorder1,const GLdouble * points1)
{
	static PFNGLMAP2DPROC_HPP fn=reinterpret_cast<PFNGLMAP2DPROC_HPP>(_impl::_get_proc_address("glMap2d",1,0));
	 fn(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Map2f
#define GL_HPP_FUNDEF_Map2f
typedef void (*PFNGLMAP2FPROC_HPP)(GLenum,GLfloat,GLfloat,GLint,GLint,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
static inline void Map2f(GLenum target1,GLfloat u11,GLfloat u21,GLint ustride1,GLint uorder1,GLfloat v11,GLfloat v21,GLint vstride1,GLint vorder1,const GLfloat * points1)
{
	static PFNGLMAP2FPROC_HPP fn=reinterpret_cast<PFNGLMAP2FPROC_HPP>(_impl::_get_proc_address("glMap2f",1,0));
	 fn(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
#endif

#ifndef	GL_HPP_FUNDEF_MapGrid1d
#define GL_HPP_FUNDEF_MapGrid1d
typedef void (*PFNGLMAPGRID1DPROC_HPP)(GLint,GLdouble,GLdouble);
static inline void MapGrid1d(GLint un1,GLdouble u11,GLdouble u21)
{
	static PFNGLMAPGRID1DPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID1DPROC_HPP>(_impl::_get_proc_address("glMapGrid1d",1,0));
	 fn(un1,u11,u21);
}
#endif

#ifndef	GL_HPP_FUNDEF_MapGrid1f
#define GL_HPP_FUNDEF_MapGrid1f
typedef void (*PFNGLMAPGRID1FPROC_HPP)(GLint,GLfloat,GLfloat);
static inline void MapGrid1f(GLint un1,GLfloat u11,GLfloat u21)
{
	static PFNGLMAPGRID1FPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID1FPROC_HPP>(_impl::_get_proc_address("glMapGrid1f",1,0));
	 fn(un1,u11,u21);
}
#endif

#ifndef	GL_HPP_FUNDEF_MapGrid2d
#define GL_HPP_FUNDEF_MapGrid2d
typedef void (*PFNGLMAPGRID2DPROC_HPP)(GLint,GLdouble,GLdouble,GLint,GLdouble,GLdouble);
static inline void MapGrid2d(GLint un1,GLdouble u11,GLdouble u21,GLint vn1,GLdouble v11,GLdouble v21)
{
	static PFNGLMAPGRID2DPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID2DPROC_HPP>(_impl::_get_proc_address("glMapGrid2d",1,0));
	 fn(un1,u11,u21,vn1,v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_MapGrid2f
#define GL_HPP_FUNDEF_MapGrid2f
typedef void (*PFNGLMAPGRID2FPROC_HPP)(GLint,GLfloat,GLfloat,GLint,GLfloat,GLfloat);
static inline void MapGrid2f(GLint un1,GLfloat u11,GLfloat u21,GLint vn1,GLfloat v11,GLfloat v21)
{
	static PFNGLMAPGRID2FPROC_HPP fn=reinterpret_cast<PFNGLMAPGRID2FPROC_HPP>(_impl::_get_proc_address("glMapGrid2f",1,0));
	 fn(un1,u11,u21,vn1,v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Materialf
#define GL_HPP_FUNDEF_Materialf
typedef void (*PFNGLMATERIALFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void Materialf(GLenum face1,GLenum pname1,GLfloat param1)
{
	static PFNGLMATERIALFPROC_HPP fn=reinterpret_cast<PFNGLMATERIALFPROC_HPP>(_impl::_get_proc_address("glMaterialf",1,0));
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Materialfv
#define GL_HPP_FUNDEF_Materialfv
typedef void (*PFNGLMATERIALFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void Materialfv(GLenum face1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLMATERIALFVPROC_HPP fn=reinterpret_cast<PFNGLMATERIALFVPROC_HPP>(_impl::_get_proc_address("glMaterialfv",1,0));
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Materiali
#define GL_HPP_FUNDEF_Materiali
typedef void (*PFNGLMATERIALIPROC_HPP)(GLenum,GLenum,GLint);
static inline void Materiali(GLenum face1,GLenum pname1,GLint param1)
{
	static PFNGLMATERIALIPROC_HPP fn=reinterpret_cast<PFNGLMATERIALIPROC_HPP>(_impl::_get_proc_address("glMateriali",1,0));
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Materialiv
#define GL_HPP_FUNDEF_Materialiv
typedef void (*PFNGLMATERIALIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void Materialiv(GLenum face1,GLenum pname1,const GLint * params1)
{
	static PFNGLMATERIALIVPROC_HPP fn=reinterpret_cast<PFNGLMATERIALIVPROC_HPP>(_impl::_get_proc_address("glMaterialiv",1,0));
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_MatrixMode
#define GL_HPP_FUNDEF_MatrixMode
typedef void (*PFNGLMATRIXMODEPROC_HPP)(GLenum);
static inline void MatrixMode(GLenum mode1)
{
	static PFNGLMATRIXMODEPROC_HPP fn=reinterpret_cast<PFNGLMATRIXMODEPROC_HPP>(_impl::_get_proc_address("glMatrixMode",1,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_MultMatrixd
#define GL_HPP_FUNDEF_MultMatrixd
typedef void (*PFNGLMULTMATRIXDPROC_HPP)(const GLdouble *);
static inline void MultMatrixd(const GLdouble * m1)
{
	static PFNGLMULTMATRIXDPROC_HPP fn=reinterpret_cast<PFNGLMULTMATRIXDPROC_HPP>(_impl::_get_proc_address("glMultMatrixd",1,0));
	 fn(m1);
}
#endif

#ifndef	GL_HPP_FUNDEF_MultMatrixf
#define GL_HPP_FUNDEF_MultMatrixf
typedef void (*PFNGLMULTMATRIXFPROC_HPP)(const GLfloat *);
static inline void MultMatrixf(const GLfloat * m1)
{
	static PFNGLMULTMATRIXFPROC_HPP fn=reinterpret_cast<PFNGLMULTMATRIXFPROC_HPP>(_impl::_get_proc_address("glMultMatrixf",1,0));
	 fn(m1);
}
#endif

#ifndef	GL_HPP_FUNDEF_NewList
#define GL_HPP_FUNDEF_NewList
typedef void (*PFNGLNEWLISTPROC_HPP)(GLuint,GLenum);
static inline void NewList(GLuint list1,GLenum mode1)
{
	static PFNGLNEWLISTPROC_HPP fn=reinterpret_cast<PFNGLNEWLISTPROC_HPP>(_impl::_get_proc_address("glNewList",1,0));
	 fn(list1,mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3b
#define GL_HPP_FUNDEF_Normal3b
typedef void (*PFNGLNORMAL3BPROC_HPP)(GLbyte,GLbyte,GLbyte);
static inline void Normal3b(GLbyte nx1,GLbyte ny1,GLbyte nz1)
{
	static PFNGLNORMAL3BPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3BPROC_HPP>(_impl::_get_proc_address("glNormal3b",1,0));
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3bv
#define GL_HPP_FUNDEF_Normal3bv
typedef void (*PFNGLNORMAL3BVPROC_HPP)(const GLbyte *);
static inline void Normal3bv(const GLbyte * v1)
{
	static PFNGLNORMAL3BVPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3BVPROC_HPP>(_impl::_get_proc_address("glNormal3bv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3d
#define GL_HPP_FUNDEF_Normal3d
typedef void (*PFNGLNORMAL3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void Normal3d(GLdouble nx1,GLdouble ny1,GLdouble nz1)
{
	static PFNGLNORMAL3DPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3DPROC_HPP>(_impl::_get_proc_address("glNormal3d",1,0));
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3dv
#define GL_HPP_FUNDEF_Normal3dv
typedef void (*PFNGLNORMAL3DVPROC_HPP)(const GLdouble *);
static inline void Normal3dv(const GLdouble * v1)
{
	static PFNGLNORMAL3DVPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3DVPROC_HPP>(_impl::_get_proc_address("glNormal3dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3f
#define GL_HPP_FUNDEF_Normal3f
typedef void (*PFNGLNORMAL3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void Normal3f(GLfloat nx1,GLfloat ny1,GLfloat nz1)
{
	static PFNGLNORMAL3FPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3FPROC_HPP>(_impl::_get_proc_address("glNormal3f",1,0));
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3fv
#define GL_HPP_FUNDEF_Normal3fv
typedef void (*PFNGLNORMAL3FVPROC_HPP)(const GLfloat *);
static inline void Normal3fv(const GLfloat * v1)
{
	static PFNGLNORMAL3FVPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3FVPROC_HPP>(_impl::_get_proc_address("glNormal3fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3i
#define GL_HPP_FUNDEF_Normal3i
typedef void (*PFNGLNORMAL3IPROC_HPP)(GLint,GLint,GLint);
static inline void Normal3i(GLint nx1,GLint ny1,GLint nz1)
{
	static PFNGLNORMAL3IPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3IPROC_HPP>(_impl::_get_proc_address("glNormal3i",1,0));
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3iv
#define GL_HPP_FUNDEF_Normal3iv
typedef void (*PFNGLNORMAL3IVPROC_HPP)(const GLint *);
static inline void Normal3iv(const GLint * v1)
{
	static PFNGLNORMAL3IVPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3IVPROC_HPP>(_impl::_get_proc_address("glNormal3iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3s
#define GL_HPP_FUNDEF_Normal3s
typedef void (*PFNGLNORMAL3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void Normal3s(GLshort nx1,GLshort ny1,GLshort nz1)
{
	static PFNGLNORMAL3SPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3SPROC_HPP>(_impl::_get_proc_address("glNormal3s",1,0));
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Normal3sv
#define GL_HPP_FUNDEF_Normal3sv
typedef void (*PFNGLNORMAL3SVPROC_HPP)(const GLshort *);
static inline void Normal3sv(const GLshort * v1)
{
	static PFNGLNORMAL3SVPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3SVPROC_HPP>(_impl::_get_proc_address("glNormal3sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Ortho
#define GL_HPP_FUNDEF_Ortho
typedef void (*PFNGLORTHOPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Ortho(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	static PFNGLORTHOPROC_HPP fn=reinterpret_cast<PFNGLORTHOPROC_HPP>(_impl::_get_proc_address("glOrtho",1,0));
	 fn(left1,right1,bottom1,top1,zNear1,zFar1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PassThrough
#define GL_HPP_FUNDEF_PassThrough
typedef void (*PFNGLPASSTHROUGHPROC_HPP)(GLfloat);
static inline void PassThrough(GLfloat token1)
{
	static PFNGLPASSTHROUGHPROC_HPP fn=reinterpret_cast<PFNGLPASSTHROUGHPROC_HPP>(_impl::_get_proc_address("glPassThrough",1,0));
	 fn(token1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelMapfv
#define GL_HPP_FUNDEF_PixelMapfv
typedef void (*PFNGLPIXELMAPFVPROC_HPP)(GLenum,GLsizei,const GLfloat *);
static inline void PixelMapfv(GLenum map1,GLsizei mapsize1,const GLfloat * values1)
{
	static PFNGLPIXELMAPFVPROC_HPP fn=reinterpret_cast<PFNGLPIXELMAPFVPROC_HPP>(_impl::_get_proc_address("glPixelMapfv",1,0));
	 fn(map1,mapsize1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelMapuiv
#define GL_HPP_FUNDEF_PixelMapuiv
typedef void (*PFNGLPIXELMAPUIVPROC_HPP)(GLenum,GLsizei,const GLuint *);
static inline void PixelMapuiv(GLenum map1,GLsizei mapsize1,const GLuint * values1)
{
	static PFNGLPIXELMAPUIVPROC_HPP fn=reinterpret_cast<PFNGLPIXELMAPUIVPROC_HPP>(_impl::_get_proc_address("glPixelMapuiv",1,0));
	 fn(map1,mapsize1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelMapusv
#define GL_HPP_FUNDEF_PixelMapusv
typedef void (*PFNGLPIXELMAPUSVPROC_HPP)(GLenum,GLsizei,const GLushort *);
static inline void PixelMapusv(GLenum map1,GLsizei mapsize1,const GLushort * values1)
{
	static PFNGLPIXELMAPUSVPROC_HPP fn=reinterpret_cast<PFNGLPIXELMAPUSVPROC_HPP>(_impl::_get_proc_address("glPixelMapusv",1,0));
	 fn(map1,mapsize1,values1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelStoref
#define GL_HPP_FUNDEF_PixelStoref
typedef void (*PFNGLPIXELSTOREFPROC_HPP)(GLenum,GLfloat);
static inline void PixelStoref(GLenum pname1,GLfloat param1)
{
	static PFNGLPIXELSTOREFPROC_HPP fn=reinterpret_cast<PFNGLPIXELSTOREFPROC_HPP>(_impl::_get_proc_address("glPixelStoref",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelStorei
#define GL_HPP_FUNDEF_PixelStorei
typedef void (*PFNGLPIXELSTOREIPROC_HPP)(GLenum,GLint);
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	static PFNGLPIXELSTOREIPROC_HPP fn=reinterpret_cast<PFNGLPIXELSTOREIPROC_HPP>(_impl::_get_proc_address("glPixelStorei",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelTransferf
#define GL_HPP_FUNDEF_PixelTransferf
typedef void (*PFNGLPIXELTRANSFERFPROC_HPP)(GLenum,GLfloat);
static inline void PixelTransferf(GLenum pname1,GLfloat param1)
{
	static PFNGLPIXELTRANSFERFPROC_HPP fn=reinterpret_cast<PFNGLPIXELTRANSFERFPROC_HPP>(_impl::_get_proc_address("glPixelTransferf",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelTransferi
#define GL_HPP_FUNDEF_PixelTransferi
typedef void (*PFNGLPIXELTRANSFERIPROC_HPP)(GLenum,GLint);
static inline void PixelTransferi(GLenum pname1,GLint param1)
{
	static PFNGLPIXELTRANSFERIPROC_HPP fn=reinterpret_cast<PFNGLPIXELTRANSFERIPROC_HPP>(_impl::_get_proc_address("glPixelTransferi",1,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelZoom
#define GL_HPP_FUNDEF_PixelZoom
typedef void (*PFNGLPIXELZOOMPROC_HPP)(GLfloat,GLfloat);
static inline void PixelZoom(GLfloat xfactor1,GLfloat yfactor1)
{
	static PFNGLPIXELZOOMPROC_HPP fn=reinterpret_cast<PFNGLPIXELZOOMPROC_HPP>(_impl::_get_proc_address("glPixelZoom",1,0));
	 fn(xfactor1,yfactor1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PointSize
#define GL_HPP_FUNDEF_PointSize
typedef void (*PFNGLPOINTSIZEPROC_HPP)(GLfloat);
static inline void PointSize(GLfloat size1)
{
	static PFNGLPOINTSIZEPROC_HPP fn=reinterpret_cast<PFNGLPOINTSIZEPROC_HPP>(_impl::_get_proc_address("glPointSize",1,0));
	 fn(size1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PolygonMode
#define GL_HPP_FUNDEF_PolygonMode
typedef void (*PFNGLPOLYGONMODEPROC_HPP)(GLenum,GLenum);
static inline void PolygonMode(GLenum face1,GLenum mode1)
{
	static PFNGLPOLYGONMODEPROC_HPP fn=reinterpret_cast<PFNGLPOLYGONMODEPROC_HPP>(_impl::_get_proc_address("glPolygonMode",1,0));
	 fn(face1,mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PolygonStipple
#define GL_HPP_FUNDEF_PolygonStipple
typedef void (*PFNGLPOLYGONSTIPPLEPROC_HPP)(const GLubyte *);
static inline void PolygonStipple(const GLubyte * mask1)
{
	static PFNGLPOLYGONSTIPPLEPROC_HPP fn=reinterpret_cast<PFNGLPOLYGONSTIPPLEPROC_HPP>(_impl::_get_proc_address("glPolygonStipple",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PopAttrib
#define GL_HPP_FUNDEF_PopAttrib
typedef void (*PFNGLPOPATTRIBPROC_HPP)();
static inline void PopAttrib()
{
	static PFNGLPOPATTRIBPROC_HPP fn=reinterpret_cast<PFNGLPOPATTRIBPROC_HPP>(_impl::_get_proc_address("glPopAttrib",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_PopMatrix
#define GL_HPP_FUNDEF_PopMatrix
typedef void (*PFNGLPOPMATRIXPROC_HPP)();
static inline void PopMatrix()
{
	static PFNGLPOPMATRIXPROC_HPP fn=reinterpret_cast<PFNGLPOPMATRIXPROC_HPP>(_impl::_get_proc_address("glPopMatrix",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_PopName
#define GL_HPP_FUNDEF_PopName
typedef void (*PFNGLPOPNAMEPROC_HPP)();
static inline void PopName()
{
	static PFNGLPOPNAMEPROC_HPP fn=reinterpret_cast<PFNGLPOPNAMEPROC_HPP>(_impl::_get_proc_address("glPopName",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_PushAttrib
#define GL_HPP_FUNDEF_PushAttrib
typedef void (*PFNGLPUSHATTRIBPROC_HPP)(GLbitfield);
static inline void PushAttrib(GLbitfield mask1)
{
	static PFNGLPUSHATTRIBPROC_HPP fn=reinterpret_cast<PFNGLPUSHATTRIBPROC_HPP>(_impl::_get_proc_address("glPushAttrib",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PushMatrix
#define GL_HPP_FUNDEF_PushMatrix
typedef void (*PFNGLPUSHMATRIXPROC_HPP)();
static inline void PushMatrix()
{
	static PFNGLPUSHMATRIXPROC_HPP fn=reinterpret_cast<PFNGLPUSHMATRIXPROC_HPP>(_impl::_get_proc_address("glPushMatrix",1,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_PushName
#define GL_HPP_FUNDEF_PushName
typedef void (*PFNGLPUSHNAMEPROC_HPP)(GLuint);
static inline void PushName(GLuint name1)
{
	static PFNGLPUSHNAMEPROC_HPP fn=reinterpret_cast<PFNGLPUSHNAMEPROC_HPP>(_impl::_get_proc_address("glPushName",1,0));
	 fn(name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2d
#define GL_HPP_FUNDEF_RasterPos2d
typedef void (*PFNGLRASTERPOS2DPROC_HPP)(GLdouble,GLdouble);
static inline void RasterPos2d(GLdouble x1,GLdouble y1)
{
	static PFNGLRASTERPOS2DPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2DPROC_HPP>(_impl::_get_proc_address("glRasterPos2d",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2dv
#define GL_HPP_FUNDEF_RasterPos2dv
typedef void (*PFNGLRASTERPOS2DVPROC_HPP)(const GLdouble *);
static inline void RasterPos2dv(const GLdouble * v1)
{
	static PFNGLRASTERPOS2DVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2DVPROC_HPP>(_impl::_get_proc_address("glRasterPos2dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2f
#define GL_HPP_FUNDEF_RasterPos2f
typedef void (*PFNGLRASTERPOS2FPROC_HPP)(GLfloat,GLfloat);
static inline void RasterPos2f(GLfloat x1,GLfloat y1)
{
	static PFNGLRASTERPOS2FPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2FPROC_HPP>(_impl::_get_proc_address("glRasterPos2f",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2fv
#define GL_HPP_FUNDEF_RasterPos2fv
typedef void (*PFNGLRASTERPOS2FVPROC_HPP)(const GLfloat *);
static inline void RasterPos2fv(const GLfloat * v1)
{
	static PFNGLRASTERPOS2FVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2FVPROC_HPP>(_impl::_get_proc_address("glRasterPos2fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2i
#define GL_HPP_FUNDEF_RasterPos2i
typedef void (*PFNGLRASTERPOS2IPROC_HPP)(GLint,GLint);
static inline void RasterPos2i(GLint x1,GLint y1)
{
	static PFNGLRASTERPOS2IPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2IPROC_HPP>(_impl::_get_proc_address("glRasterPos2i",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2iv
#define GL_HPP_FUNDEF_RasterPos2iv
typedef void (*PFNGLRASTERPOS2IVPROC_HPP)(const GLint *);
static inline void RasterPos2iv(const GLint * v1)
{
	static PFNGLRASTERPOS2IVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2IVPROC_HPP>(_impl::_get_proc_address("glRasterPos2iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2s
#define GL_HPP_FUNDEF_RasterPos2s
typedef void (*PFNGLRASTERPOS2SPROC_HPP)(GLshort,GLshort);
static inline void RasterPos2s(GLshort x1,GLshort y1)
{
	static PFNGLRASTERPOS2SPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2SPROC_HPP>(_impl::_get_proc_address("glRasterPos2s",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos2sv
#define GL_HPP_FUNDEF_RasterPos2sv
typedef void (*PFNGLRASTERPOS2SVPROC_HPP)(const GLshort *);
static inline void RasterPos2sv(const GLshort * v1)
{
	static PFNGLRASTERPOS2SVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS2SVPROC_HPP>(_impl::_get_proc_address("glRasterPos2sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3d
#define GL_HPP_FUNDEF_RasterPos3d
typedef void (*PFNGLRASTERPOS3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void RasterPos3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLRASTERPOS3DPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3DPROC_HPP>(_impl::_get_proc_address("glRasterPos3d",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3dv
#define GL_HPP_FUNDEF_RasterPos3dv
typedef void (*PFNGLRASTERPOS3DVPROC_HPP)(const GLdouble *);
static inline void RasterPos3dv(const GLdouble * v1)
{
	static PFNGLRASTERPOS3DVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3DVPROC_HPP>(_impl::_get_proc_address("glRasterPos3dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3f
#define GL_HPP_FUNDEF_RasterPos3f
typedef void (*PFNGLRASTERPOS3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void RasterPos3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLRASTERPOS3FPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3FPROC_HPP>(_impl::_get_proc_address("glRasterPos3f",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3fv
#define GL_HPP_FUNDEF_RasterPos3fv
typedef void (*PFNGLRASTERPOS3FVPROC_HPP)(const GLfloat *);
static inline void RasterPos3fv(const GLfloat * v1)
{
	static PFNGLRASTERPOS3FVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3FVPROC_HPP>(_impl::_get_proc_address("glRasterPos3fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3i
#define GL_HPP_FUNDEF_RasterPos3i
typedef void (*PFNGLRASTERPOS3IPROC_HPP)(GLint,GLint,GLint);
static inline void RasterPos3i(GLint x1,GLint y1,GLint z1)
{
	static PFNGLRASTERPOS3IPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3IPROC_HPP>(_impl::_get_proc_address("glRasterPos3i",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3iv
#define GL_HPP_FUNDEF_RasterPos3iv
typedef void (*PFNGLRASTERPOS3IVPROC_HPP)(const GLint *);
static inline void RasterPos3iv(const GLint * v1)
{
	static PFNGLRASTERPOS3IVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3IVPROC_HPP>(_impl::_get_proc_address("glRasterPos3iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3s
#define GL_HPP_FUNDEF_RasterPos3s
typedef void (*PFNGLRASTERPOS3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void RasterPos3s(GLshort x1,GLshort y1,GLshort z1)
{
	static PFNGLRASTERPOS3SPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3SPROC_HPP>(_impl::_get_proc_address("glRasterPos3s",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos3sv
#define GL_HPP_FUNDEF_RasterPos3sv
typedef void (*PFNGLRASTERPOS3SVPROC_HPP)(const GLshort *);
static inline void RasterPos3sv(const GLshort * v1)
{
	static PFNGLRASTERPOS3SVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS3SVPROC_HPP>(_impl::_get_proc_address("glRasterPos3sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4d
#define GL_HPP_FUNDEF_RasterPos4d
typedef void (*PFNGLRASTERPOS4DPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void RasterPos4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	static PFNGLRASTERPOS4DPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4DPROC_HPP>(_impl::_get_proc_address("glRasterPos4d",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4dv
#define GL_HPP_FUNDEF_RasterPos4dv
typedef void (*PFNGLRASTERPOS4DVPROC_HPP)(const GLdouble *);
static inline void RasterPos4dv(const GLdouble * v1)
{
	static PFNGLRASTERPOS4DVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4DVPROC_HPP>(_impl::_get_proc_address("glRasterPos4dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4f
#define GL_HPP_FUNDEF_RasterPos4f
typedef void (*PFNGLRASTERPOS4FPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void RasterPos4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	static PFNGLRASTERPOS4FPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4FPROC_HPP>(_impl::_get_proc_address("glRasterPos4f",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4fv
#define GL_HPP_FUNDEF_RasterPos4fv
typedef void (*PFNGLRASTERPOS4FVPROC_HPP)(const GLfloat *);
static inline void RasterPos4fv(const GLfloat * v1)
{
	static PFNGLRASTERPOS4FVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4FVPROC_HPP>(_impl::_get_proc_address("glRasterPos4fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4i
#define GL_HPP_FUNDEF_RasterPos4i
typedef void (*PFNGLRASTERPOS4IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void RasterPos4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	static PFNGLRASTERPOS4IPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4IPROC_HPP>(_impl::_get_proc_address("glRasterPos4i",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4iv
#define GL_HPP_FUNDEF_RasterPos4iv
typedef void (*PFNGLRASTERPOS4IVPROC_HPP)(const GLint *);
static inline void RasterPos4iv(const GLint * v1)
{
	static PFNGLRASTERPOS4IVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4IVPROC_HPP>(_impl::_get_proc_address("glRasterPos4iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4s
#define GL_HPP_FUNDEF_RasterPos4s
typedef void (*PFNGLRASTERPOS4SPROC_HPP)(GLshort,GLshort,GLshort,GLshort);
static inline void RasterPos4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	static PFNGLRASTERPOS4SPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4SPROC_HPP>(_impl::_get_proc_address("glRasterPos4s",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_RasterPos4sv
#define GL_HPP_FUNDEF_RasterPos4sv
typedef void (*PFNGLRASTERPOS4SVPROC_HPP)(const GLshort *);
static inline void RasterPos4sv(const GLshort * v1)
{
	static PFNGLRASTERPOS4SVPROC_HPP fn=reinterpret_cast<PFNGLRASTERPOS4SVPROC_HPP>(_impl::_get_proc_address("glRasterPos4sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ReadBuffer
#define GL_HPP_FUNDEF_ReadBuffer
typedef void (*PFNGLREADBUFFERPROC_HPP)(GLenum);
static inline void ReadBuffer(GLenum src1)
{
	static PFNGLREADBUFFERPROC_HPP fn=reinterpret_cast<PFNGLREADBUFFERPROC_HPP>(_impl::_get_proc_address("glReadBuffer",1,0));
	 fn(src1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ReadPixels
#define GL_HPP_FUNDEF_ReadPixels
typedef void (*PFNGLREADPIXELSPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	static PFNGLREADPIXELSPROC_HPP fn=reinterpret_cast<PFNGLREADPIXELSPROC_HPP>(_impl::_get_proc_address("glReadPixels",1,0));
	 fn(x1,y1,width1,height1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectd
#define GL_HPP_FUNDEF_Rectd
typedef void (*PFNGLRECTDPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Rectd(GLdouble x11,GLdouble y11,GLdouble x21,GLdouble y21)
{
	static PFNGLRECTDPROC_HPP fn=reinterpret_cast<PFNGLRECTDPROC_HPP>(_impl::_get_proc_address("glRectd",1,0));
	 fn(x11,y11,x21,y21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectdv
#define GL_HPP_FUNDEF_Rectdv
typedef void (*PFNGLRECTDVPROC_HPP)(const GLdouble *,const GLdouble *);
static inline void Rectdv(const GLdouble * v11,const GLdouble * v21)
{
	static PFNGLRECTDVPROC_HPP fn=reinterpret_cast<PFNGLRECTDVPROC_HPP>(_impl::_get_proc_address("glRectdv",1,0));
	 fn(v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectf
#define GL_HPP_FUNDEF_Rectf
typedef void (*PFNGLRECTFPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Rectf(GLfloat x11,GLfloat y11,GLfloat x21,GLfloat y21)
{
	static PFNGLRECTFPROC_HPP fn=reinterpret_cast<PFNGLRECTFPROC_HPP>(_impl::_get_proc_address("glRectf",1,0));
	 fn(x11,y11,x21,y21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectfv
#define GL_HPP_FUNDEF_Rectfv
typedef void (*PFNGLRECTFVPROC_HPP)(const GLfloat *,const GLfloat *);
static inline void Rectfv(const GLfloat * v11,const GLfloat * v21)
{
	static PFNGLRECTFVPROC_HPP fn=reinterpret_cast<PFNGLRECTFVPROC_HPP>(_impl::_get_proc_address("glRectfv",1,0));
	 fn(v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Recti
#define GL_HPP_FUNDEF_Recti
typedef void (*PFNGLRECTIPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void Recti(GLint x11,GLint y11,GLint x21,GLint y21)
{
	static PFNGLRECTIPROC_HPP fn=reinterpret_cast<PFNGLRECTIPROC_HPP>(_impl::_get_proc_address("glRecti",1,0));
	 fn(x11,y11,x21,y21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectiv
#define GL_HPP_FUNDEF_Rectiv
typedef void (*PFNGLRECTIVPROC_HPP)(const GLint *,const GLint *);
static inline void Rectiv(const GLint * v11,const GLint * v21)
{
	static PFNGLRECTIVPROC_HPP fn=reinterpret_cast<PFNGLRECTIVPROC_HPP>(_impl::_get_proc_address("glRectiv",1,0));
	 fn(v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rects
#define GL_HPP_FUNDEF_Rects
typedef void (*PFNGLRECTSPROC_HPP)(GLshort,GLshort,GLshort,GLshort);
static inline void Rects(GLshort x11,GLshort y11,GLshort x21,GLshort y21)
{
	static PFNGLRECTSPROC_HPP fn=reinterpret_cast<PFNGLRECTSPROC_HPP>(_impl::_get_proc_address("glRects",1,0));
	 fn(x11,y11,x21,y21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rectsv
#define GL_HPP_FUNDEF_Rectsv
typedef void (*PFNGLRECTSVPROC_HPP)(const GLshort *,const GLshort *);
static inline void Rectsv(const GLshort * v11,const GLshort * v21)
{
	static PFNGLRECTSVPROC_HPP fn=reinterpret_cast<PFNGLRECTSVPROC_HPP>(_impl::_get_proc_address("glRectsv",1,0));
	 fn(v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_RenderMode
#define GL_HPP_FUNDEF_RenderMode
typedef GLint (*PFNGLRENDERMODEPROC_HPP)(GLenum);
static inline GLint RenderMode(GLenum mode1)
{
	static PFNGLRENDERMODEPROC_HPP fn=reinterpret_cast<PFNGLRENDERMODEPROC_HPP>(_impl::_get_proc_address("glRenderMode",1,0));
	return fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rotated
#define GL_HPP_FUNDEF_Rotated
typedef void (*PFNGLROTATEDPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Rotated(GLdouble angle1,GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLROTATEDPROC_HPP fn=reinterpret_cast<PFNGLROTATEDPROC_HPP>(_impl::_get_proc_address("glRotated",1,0));
	 fn(angle1,x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Rotatef
#define GL_HPP_FUNDEF_Rotatef
typedef void (*PFNGLROTATEFPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Rotatef(GLfloat angle1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLROTATEFPROC_HPP fn=reinterpret_cast<PFNGLROTATEFPROC_HPP>(_impl::_get_proc_address("glRotatef",1,0));
	 fn(angle1,x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Scaled
#define GL_HPP_FUNDEF_Scaled
typedef void (*PFNGLSCALEDPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void Scaled(GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLSCALEDPROC_HPP fn=reinterpret_cast<PFNGLSCALEDPROC_HPP>(_impl::_get_proc_address("glScaled",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Scalef
#define GL_HPP_FUNDEF_Scalef
typedef void (*PFNGLSCALEFPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void Scalef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLSCALEFPROC_HPP fn=reinterpret_cast<PFNGLSCALEFPROC_HPP>(_impl::_get_proc_address("glScalef",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Scissor
#define GL_HPP_FUNDEF_Scissor
typedef void (*PFNGLSCISSORPROC_HPP)(GLint,GLint,GLsizei,GLsizei);
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLSCISSORPROC_HPP fn=reinterpret_cast<PFNGLSCISSORPROC_HPP>(_impl::_get_proc_address("glScissor",1,0));
	 fn(x1,y1,width1,height1);
}
#endif

#ifndef	GL_HPP_FUNDEF_SelectBuffer
#define GL_HPP_FUNDEF_SelectBuffer
typedef void (*PFNGLSELECTBUFFERPROC_HPP)(GLsizei,GLuint *);
static inline void SelectBuffer(GLsizei size1,GLuint * buffer1)
{
	static PFNGLSELECTBUFFERPROC_HPP fn=reinterpret_cast<PFNGLSELECTBUFFERPROC_HPP>(_impl::_get_proc_address("glSelectBuffer",1,0));
	 fn(size1,buffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ShadeModel
#define GL_HPP_FUNDEF_ShadeModel
typedef void (*PFNGLSHADEMODELPROC_HPP)(GLenum);
static inline void ShadeModel(GLenum mode1)
{
	static PFNGLSHADEMODELPROC_HPP fn=reinterpret_cast<PFNGLSHADEMODELPROC_HPP>(_impl::_get_proc_address("glShadeModel",1,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilFunc
#define GL_HPP_FUNDEF_StencilFunc
typedef void (*PFNGLSTENCILFUNCPROC_HPP)(GLenum,GLint,GLuint);
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	static PFNGLSTENCILFUNCPROC_HPP fn=reinterpret_cast<PFNGLSTENCILFUNCPROC_HPP>(_impl::_get_proc_address("glStencilFunc",1,0));
	 fn(func1,ref1,mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilMask
#define GL_HPP_FUNDEF_StencilMask
typedef void (*PFNGLSTENCILMASKPROC_HPP)(GLuint);
static inline void StencilMask(GLuint mask1)
{
	static PFNGLSTENCILMASKPROC_HPP fn=reinterpret_cast<PFNGLSTENCILMASKPROC_HPP>(_impl::_get_proc_address("glStencilMask",1,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilOp
#define GL_HPP_FUNDEF_StencilOp
typedef void (*PFNGLSTENCILOPPROC_HPP)(GLenum,GLenum,GLenum);
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	static PFNGLSTENCILOPPROC_HPP fn=reinterpret_cast<PFNGLSTENCILOPPROC_HPP>(_impl::_get_proc_address("glStencilOp",1,0));
	 fn(fail1,zfail1,zpass1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1d
#define GL_HPP_FUNDEF_TexCoord1d
typedef void (*PFNGLTEXCOORD1DPROC_HPP)(GLdouble);
static inline void TexCoord1d(GLdouble s1)
{
	static PFNGLTEXCOORD1DPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1DPROC_HPP>(_impl::_get_proc_address("glTexCoord1d",1,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1dv
#define GL_HPP_FUNDEF_TexCoord1dv
typedef void (*PFNGLTEXCOORD1DVPROC_HPP)(const GLdouble *);
static inline void TexCoord1dv(const GLdouble * v1)
{
	static PFNGLTEXCOORD1DVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1DVPROC_HPP>(_impl::_get_proc_address("glTexCoord1dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1f
#define GL_HPP_FUNDEF_TexCoord1f
typedef void (*PFNGLTEXCOORD1FPROC_HPP)(GLfloat);
static inline void TexCoord1f(GLfloat s1)
{
	static PFNGLTEXCOORD1FPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1FPROC_HPP>(_impl::_get_proc_address("glTexCoord1f",1,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1fv
#define GL_HPP_FUNDEF_TexCoord1fv
typedef void (*PFNGLTEXCOORD1FVPROC_HPP)(const GLfloat *);
static inline void TexCoord1fv(const GLfloat * v1)
{
	static PFNGLTEXCOORD1FVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1FVPROC_HPP>(_impl::_get_proc_address("glTexCoord1fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1i
#define GL_HPP_FUNDEF_TexCoord1i
typedef void (*PFNGLTEXCOORD1IPROC_HPP)(GLint);
static inline void TexCoord1i(GLint s1)
{
	static PFNGLTEXCOORD1IPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1IPROC_HPP>(_impl::_get_proc_address("glTexCoord1i",1,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1iv
#define GL_HPP_FUNDEF_TexCoord1iv
typedef void (*PFNGLTEXCOORD1IVPROC_HPP)(const GLint *);
static inline void TexCoord1iv(const GLint * v1)
{
	static PFNGLTEXCOORD1IVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1IVPROC_HPP>(_impl::_get_proc_address("glTexCoord1iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1s
#define GL_HPP_FUNDEF_TexCoord1s
typedef void (*PFNGLTEXCOORD1SPROC_HPP)(GLshort);
static inline void TexCoord1s(GLshort s1)
{
	static PFNGLTEXCOORD1SPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1SPROC_HPP>(_impl::_get_proc_address("glTexCoord1s",1,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord1sv
#define GL_HPP_FUNDEF_TexCoord1sv
typedef void (*PFNGLTEXCOORD1SVPROC_HPP)(const GLshort *);
static inline void TexCoord1sv(const GLshort * v1)
{
	static PFNGLTEXCOORD1SVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD1SVPROC_HPP>(_impl::_get_proc_address("glTexCoord1sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2d
#define GL_HPP_FUNDEF_TexCoord2d
typedef void (*PFNGLTEXCOORD2DPROC_HPP)(GLdouble,GLdouble);
static inline void TexCoord2d(GLdouble s1,GLdouble t1)
{
	static PFNGLTEXCOORD2DPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2DPROC_HPP>(_impl::_get_proc_address("glTexCoord2d",1,0));
	 fn(s1,t1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2dv
#define GL_HPP_FUNDEF_TexCoord2dv
typedef void (*PFNGLTEXCOORD2DVPROC_HPP)(const GLdouble *);
static inline void TexCoord2dv(const GLdouble * v1)
{
	static PFNGLTEXCOORD2DVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2DVPROC_HPP>(_impl::_get_proc_address("glTexCoord2dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2f
#define GL_HPP_FUNDEF_TexCoord2f
typedef void (*PFNGLTEXCOORD2FPROC_HPP)(GLfloat,GLfloat);
static inline void TexCoord2f(GLfloat s1,GLfloat t1)
{
	static PFNGLTEXCOORD2FPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2FPROC_HPP>(_impl::_get_proc_address("glTexCoord2f",1,0));
	 fn(s1,t1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2fv
#define GL_HPP_FUNDEF_TexCoord2fv
typedef void (*PFNGLTEXCOORD2FVPROC_HPP)(const GLfloat *);
static inline void TexCoord2fv(const GLfloat * v1)
{
	static PFNGLTEXCOORD2FVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2FVPROC_HPP>(_impl::_get_proc_address("glTexCoord2fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2i
#define GL_HPP_FUNDEF_TexCoord2i
typedef void (*PFNGLTEXCOORD2IPROC_HPP)(GLint,GLint);
static inline void TexCoord2i(GLint s1,GLint t1)
{
	static PFNGLTEXCOORD2IPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2IPROC_HPP>(_impl::_get_proc_address("glTexCoord2i",1,0));
	 fn(s1,t1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2iv
#define GL_HPP_FUNDEF_TexCoord2iv
typedef void (*PFNGLTEXCOORD2IVPROC_HPP)(const GLint *);
static inline void TexCoord2iv(const GLint * v1)
{
	static PFNGLTEXCOORD2IVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2IVPROC_HPP>(_impl::_get_proc_address("glTexCoord2iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2s
#define GL_HPP_FUNDEF_TexCoord2s
typedef void (*PFNGLTEXCOORD2SPROC_HPP)(GLshort,GLshort);
static inline void TexCoord2s(GLshort s1,GLshort t1)
{
	static PFNGLTEXCOORD2SPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2SPROC_HPP>(_impl::_get_proc_address("glTexCoord2s",1,0));
	 fn(s1,t1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord2sv
#define GL_HPP_FUNDEF_TexCoord2sv
typedef void (*PFNGLTEXCOORD2SVPROC_HPP)(const GLshort *);
static inline void TexCoord2sv(const GLshort * v1)
{
	static PFNGLTEXCOORD2SVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD2SVPROC_HPP>(_impl::_get_proc_address("glTexCoord2sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3d
#define GL_HPP_FUNDEF_TexCoord3d
typedef void (*PFNGLTEXCOORD3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void TexCoord3d(GLdouble s1,GLdouble t1,GLdouble r1)
{
	static PFNGLTEXCOORD3DPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3DPROC_HPP>(_impl::_get_proc_address("glTexCoord3d",1,0));
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3dv
#define GL_HPP_FUNDEF_TexCoord3dv
typedef void (*PFNGLTEXCOORD3DVPROC_HPP)(const GLdouble *);
static inline void TexCoord3dv(const GLdouble * v1)
{
	static PFNGLTEXCOORD3DVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3DVPROC_HPP>(_impl::_get_proc_address("glTexCoord3dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3f
#define GL_HPP_FUNDEF_TexCoord3f
typedef void (*PFNGLTEXCOORD3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void TexCoord3f(GLfloat s1,GLfloat t1,GLfloat r1)
{
	static PFNGLTEXCOORD3FPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3FPROC_HPP>(_impl::_get_proc_address("glTexCoord3f",1,0));
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3fv
#define GL_HPP_FUNDEF_TexCoord3fv
typedef void (*PFNGLTEXCOORD3FVPROC_HPP)(const GLfloat *);
static inline void TexCoord3fv(const GLfloat * v1)
{
	static PFNGLTEXCOORD3FVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3FVPROC_HPP>(_impl::_get_proc_address("glTexCoord3fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3i
#define GL_HPP_FUNDEF_TexCoord3i
typedef void (*PFNGLTEXCOORD3IPROC_HPP)(GLint,GLint,GLint);
static inline void TexCoord3i(GLint s1,GLint t1,GLint r1)
{
	static PFNGLTEXCOORD3IPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3IPROC_HPP>(_impl::_get_proc_address("glTexCoord3i",1,0));
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3iv
#define GL_HPP_FUNDEF_TexCoord3iv
typedef void (*PFNGLTEXCOORD3IVPROC_HPP)(const GLint *);
static inline void TexCoord3iv(const GLint * v1)
{
	static PFNGLTEXCOORD3IVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3IVPROC_HPP>(_impl::_get_proc_address("glTexCoord3iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3s
#define GL_HPP_FUNDEF_TexCoord3s
typedef void (*PFNGLTEXCOORD3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void TexCoord3s(GLshort s1,GLshort t1,GLshort r1)
{
	static PFNGLTEXCOORD3SPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3SPROC_HPP>(_impl::_get_proc_address("glTexCoord3s",1,0));
	 fn(s1,t1,r1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord3sv
#define GL_HPP_FUNDEF_TexCoord3sv
typedef void (*PFNGLTEXCOORD3SVPROC_HPP)(const GLshort *);
static inline void TexCoord3sv(const GLshort * v1)
{
	static PFNGLTEXCOORD3SVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD3SVPROC_HPP>(_impl::_get_proc_address("glTexCoord3sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4d
#define GL_HPP_FUNDEF_TexCoord4d
typedef void (*PFNGLTEXCOORD4DPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void TexCoord4d(GLdouble s1,GLdouble t1,GLdouble r1,GLdouble q1)
{
	static PFNGLTEXCOORD4DPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4DPROC_HPP>(_impl::_get_proc_address("glTexCoord4d",1,0));
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4dv
#define GL_HPP_FUNDEF_TexCoord4dv
typedef void (*PFNGLTEXCOORD4DVPROC_HPP)(const GLdouble *);
static inline void TexCoord4dv(const GLdouble * v1)
{
	static PFNGLTEXCOORD4DVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4DVPROC_HPP>(_impl::_get_proc_address("glTexCoord4dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4f
#define GL_HPP_FUNDEF_TexCoord4f
typedef void (*PFNGLTEXCOORD4FPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void TexCoord4f(GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
	static PFNGLTEXCOORD4FPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4FPROC_HPP>(_impl::_get_proc_address("glTexCoord4f",1,0));
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4fv
#define GL_HPP_FUNDEF_TexCoord4fv
typedef void (*PFNGLTEXCOORD4FVPROC_HPP)(const GLfloat *);
static inline void TexCoord4fv(const GLfloat * v1)
{
	static PFNGLTEXCOORD4FVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4FVPROC_HPP>(_impl::_get_proc_address("glTexCoord4fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4i
#define GL_HPP_FUNDEF_TexCoord4i
typedef void (*PFNGLTEXCOORD4IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void TexCoord4i(GLint s1,GLint t1,GLint r1,GLint q1)
{
	static PFNGLTEXCOORD4IPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4IPROC_HPP>(_impl::_get_proc_address("glTexCoord4i",1,0));
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4iv
#define GL_HPP_FUNDEF_TexCoord4iv
typedef void (*PFNGLTEXCOORD4IVPROC_HPP)(const GLint *);
static inline void TexCoord4iv(const GLint * v1)
{
	static PFNGLTEXCOORD4IVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4IVPROC_HPP>(_impl::_get_proc_address("glTexCoord4iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4s
#define GL_HPP_FUNDEF_TexCoord4s
typedef void (*PFNGLTEXCOORD4SPROC_HPP)(GLshort,GLshort,GLshort,GLshort);
static inline void TexCoord4s(GLshort s1,GLshort t1,GLshort r1,GLshort q1)
{
	static PFNGLTEXCOORD4SPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4SPROC_HPP>(_impl::_get_proc_address("glTexCoord4s",1,0));
	 fn(s1,t1,r1,q1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexCoord4sv
#define GL_HPP_FUNDEF_TexCoord4sv
typedef void (*PFNGLTEXCOORD4SVPROC_HPP)(const GLshort *);
static inline void TexCoord4sv(const GLshort * v1)
{
	static PFNGLTEXCOORD4SVPROC_HPP fn=reinterpret_cast<PFNGLTEXCOORD4SVPROC_HPP>(_impl::_get_proc_address("glTexCoord4sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexEnvf
#define GL_HPP_FUNDEF_TexEnvf
typedef void (*PFNGLTEXENVFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void TexEnvf(GLenum target1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXENVFPROC_HPP fn=reinterpret_cast<PFNGLTEXENVFPROC_HPP>(_impl::_get_proc_address("glTexEnvf",1,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexEnvfv
#define GL_HPP_FUNDEF_TexEnvfv
typedef void (*PFNGLTEXENVFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void TexEnvfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXENVFVPROC_HPP fn=reinterpret_cast<PFNGLTEXENVFVPROC_HPP>(_impl::_get_proc_address("glTexEnvfv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexEnvi
#define GL_HPP_FUNDEF_TexEnvi
typedef void (*PFNGLTEXENVIPROC_HPP)(GLenum,GLenum,GLint);
static inline void TexEnvi(GLenum target1,GLenum pname1,GLint param1)
{
	static PFNGLTEXENVIPROC_HPP fn=reinterpret_cast<PFNGLTEXENVIPROC_HPP>(_impl::_get_proc_address("glTexEnvi",1,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexEnviv
#define GL_HPP_FUNDEF_TexEnviv
typedef void (*PFNGLTEXENVIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexEnviv(GLenum target1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXENVIVPROC_HPP fn=reinterpret_cast<PFNGLTEXENVIVPROC_HPP>(_impl::_get_proc_address("glTexEnviv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGend
#define GL_HPP_FUNDEF_TexGend
typedef void (*PFNGLTEXGENDPROC_HPP)(GLenum,GLenum,GLdouble);
static inline void TexGend(GLenum coord1,GLenum pname1,GLdouble param1)
{
	static PFNGLTEXGENDPROC_HPP fn=reinterpret_cast<PFNGLTEXGENDPROC_HPP>(_impl::_get_proc_address("glTexGend",1,0));
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGendv
#define GL_HPP_FUNDEF_TexGendv
typedef void (*PFNGLTEXGENDVPROC_HPP)(GLenum,GLenum,const GLdouble *);
static inline void TexGendv(GLenum coord1,GLenum pname1,const GLdouble * params1)
{
	static PFNGLTEXGENDVPROC_HPP fn=reinterpret_cast<PFNGLTEXGENDVPROC_HPP>(_impl::_get_proc_address("glTexGendv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGenf
#define GL_HPP_FUNDEF_TexGenf
typedef void (*PFNGLTEXGENFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void TexGenf(GLenum coord1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXGENFPROC_HPP fn=reinterpret_cast<PFNGLTEXGENFPROC_HPP>(_impl::_get_proc_address("glTexGenf",1,0));
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGenfv
#define GL_HPP_FUNDEF_TexGenfv
typedef void (*PFNGLTEXGENFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void TexGenfv(GLenum coord1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXGENFVPROC_HPP fn=reinterpret_cast<PFNGLTEXGENFVPROC_HPP>(_impl::_get_proc_address("glTexGenfv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGeni
#define GL_HPP_FUNDEF_TexGeni
typedef void (*PFNGLTEXGENIPROC_HPP)(GLenum,GLenum,GLint);
static inline void TexGeni(GLenum coord1,GLenum pname1,GLint param1)
{
	static PFNGLTEXGENIPROC_HPP fn=reinterpret_cast<PFNGLTEXGENIPROC_HPP>(_impl::_get_proc_address("glTexGeni",1,0));
	 fn(coord1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexGeniv
#define GL_HPP_FUNDEF_TexGeniv
typedef void (*PFNGLTEXGENIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexGeniv(GLenum coord1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXGENIVPROC_HPP fn=reinterpret_cast<PFNGLTEXGENIVPROC_HPP>(_impl::_get_proc_address("glTexGeniv",1,0));
	 fn(coord1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexImage1D
#define GL_HPP_FUNDEF_TexImage1D
typedef void (*PFNGLTEXIMAGE1DPROC_HPP)(GLenum,GLint,GLint,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void TexImage1D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXIMAGE1DPROC_HPP fn=reinterpret_cast<PFNGLTEXIMAGE1DPROC_HPP>(_impl::_get_proc_address("glTexImage1D",1,0));
	 fn(target1,level1,internalformat1,width1,border1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexImage2D
#define GL_HPP_FUNDEF_TexImage2D
typedef void (*PFNGLTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void TexImage2D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glTexImage2D",1,0));
	 fn(target1,level1,internalformat1,width1,height1,border1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameterf
#define GL_HPP_FUNDEF_TexParameterf
typedef void (*PFNGLTEXPARAMETERFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void TexParameterf(GLenum target1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXPARAMETERFPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERFPROC_HPP>(_impl::_get_proc_address("glTexParameterf",1,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameterfv
#define GL_HPP_FUNDEF_TexParameterfv
typedef void (*PFNGLTEXPARAMETERFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void TexParameterfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glTexParameterfv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameteri
#define GL_HPP_FUNDEF_TexParameteri
typedef void (*PFNGLTEXPARAMETERIPROC_HPP)(GLenum,GLenum,GLint);
static inline void TexParameteri(GLenum target1,GLenum pname1,GLint param1)
{
	static PFNGLTEXPARAMETERIPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIPROC_HPP>(_impl::_get_proc_address("glTexParameteri",1,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameteriv
#define GL_HPP_FUNDEF_TexParameteriv
typedef void (*PFNGLTEXPARAMETERIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexParameteriv(GLenum target1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glTexParameteriv",1,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Translated
#define GL_HPP_FUNDEF_Translated
typedef void (*PFNGLTRANSLATEDPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void Translated(GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLTRANSLATEDPROC_HPP fn=reinterpret_cast<PFNGLTRANSLATEDPROC_HPP>(_impl::_get_proc_address("glTranslated",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Translatef
#define GL_HPP_FUNDEF_Translatef
typedef void (*PFNGLTRANSLATEFPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void Translatef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLTRANSLATEFPROC_HPP fn=reinterpret_cast<PFNGLTRANSLATEFPROC_HPP>(_impl::_get_proc_address("glTranslatef",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2d
#define GL_HPP_FUNDEF_Vertex2d
typedef void (*PFNGLVERTEX2DPROC_HPP)(GLdouble,GLdouble);
static inline void Vertex2d(GLdouble x1,GLdouble y1)
{
	static PFNGLVERTEX2DPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2DPROC_HPP>(_impl::_get_proc_address("glVertex2d",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2dv
#define GL_HPP_FUNDEF_Vertex2dv
typedef void (*PFNGLVERTEX2DVPROC_HPP)(const GLdouble *);
static inline void Vertex2dv(const GLdouble * v1)
{
	static PFNGLVERTEX2DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2DVPROC_HPP>(_impl::_get_proc_address("glVertex2dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2f
#define GL_HPP_FUNDEF_Vertex2f
typedef void (*PFNGLVERTEX2FPROC_HPP)(GLfloat,GLfloat);
static inline void Vertex2f(GLfloat x1,GLfloat y1)
{
	static PFNGLVERTEX2FPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2FPROC_HPP>(_impl::_get_proc_address("glVertex2f",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2fv
#define GL_HPP_FUNDEF_Vertex2fv
typedef void (*PFNGLVERTEX2FVPROC_HPP)(const GLfloat *);
static inline void Vertex2fv(const GLfloat * v1)
{
	static PFNGLVERTEX2FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2FVPROC_HPP>(_impl::_get_proc_address("glVertex2fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2i
#define GL_HPP_FUNDEF_Vertex2i
typedef void (*PFNGLVERTEX2IPROC_HPP)(GLint,GLint);
static inline void Vertex2i(GLint x1,GLint y1)
{
	static PFNGLVERTEX2IPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2IPROC_HPP>(_impl::_get_proc_address("glVertex2i",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2iv
#define GL_HPP_FUNDEF_Vertex2iv
typedef void (*PFNGLVERTEX2IVPROC_HPP)(const GLint *);
static inline void Vertex2iv(const GLint * v1)
{
	static PFNGLVERTEX2IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2IVPROC_HPP>(_impl::_get_proc_address("glVertex2iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2s
#define GL_HPP_FUNDEF_Vertex2s
typedef void (*PFNGLVERTEX2SPROC_HPP)(GLshort,GLshort);
static inline void Vertex2s(GLshort x1,GLshort y1)
{
	static PFNGLVERTEX2SPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2SPROC_HPP>(_impl::_get_proc_address("glVertex2s",1,0));
	 fn(x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex2sv
#define GL_HPP_FUNDEF_Vertex2sv
typedef void (*PFNGLVERTEX2SVPROC_HPP)(const GLshort *);
static inline void Vertex2sv(const GLshort * v1)
{
	static PFNGLVERTEX2SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX2SVPROC_HPP>(_impl::_get_proc_address("glVertex2sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3d
#define GL_HPP_FUNDEF_Vertex3d
typedef void (*PFNGLVERTEX3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void Vertex3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLVERTEX3DPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3DPROC_HPP>(_impl::_get_proc_address("glVertex3d",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3dv
#define GL_HPP_FUNDEF_Vertex3dv
typedef void (*PFNGLVERTEX3DVPROC_HPP)(const GLdouble *);
static inline void Vertex3dv(const GLdouble * v1)
{
	static PFNGLVERTEX3DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3DVPROC_HPP>(_impl::_get_proc_address("glVertex3dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3f
#define GL_HPP_FUNDEF_Vertex3f
typedef void (*PFNGLVERTEX3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void Vertex3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLVERTEX3FPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3FPROC_HPP>(_impl::_get_proc_address("glVertex3f",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3fv
#define GL_HPP_FUNDEF_Vertex3fv
typedef void (*PFNGLVERTEX3FVPROC_HPP)(const GLfloat *);
static inline void Vertex3fv(const GLfloat * v1)
{
	static PFNGLVERTEX3FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3FVPROC_HPP>(_impl::_get_proc_address("glVertex3fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3i
#define GL_HPP_FUNDEF_Vertex3i
typedef void (*PFNGLVERTEX3IPROC_HPP)(GLint,GLint,GLint);
static inline void Vertex3i(GLint x1,GLint y1,GLint z1)
{
	static PFNGLVERTEX3IPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3IPROC_HPP>(_impl::_get_proc_address("glVertex3i",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3iv
#define GL_HPP_FUNDEF_Vertex3iv
typedef void (*PFNGLVERTEX3IVPROC_HPP)(const GLint *);
static inline void Vertex3iv(const GLint * v1)
{
	static PFNGLVERTEX3IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3IVPROC_HPP>(_impl::_get_proc_address("glVertex3iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3s
#define GL_HPP_FUNDEF_Vertex3s
typedef void (*PFNGLVERTEX3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void Vertex3s(GLshort x1,GLshort y1,GLshort z1)
{
	static PFNGLVERTEX3SPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3SPROC_HPP>(_impl::_get_proc_address("glVertex3s",1,0));
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex3sv
#define GL_HPP_FUNDEF_Vertex3sv
typedef void (*PFNGLVERTEX3SVPROC_HPP)(const GLshort *);
static inline void Vertex3sv(const GLshort * v1)
{
	static PFNGLVERTEX3SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX3SVPROC_HPP>(_impl::_get_proc_address("glVertex3sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4d
#define GL_HPP_FUNDEF_Vertex4d
typedef void (*PFNGLVERTEX4DPROC_HPP)(GLdouble,GLdouble,GLdouble,GLdouble);
static inline void Vertex4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	static PFNGLVERTEX4DPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4DPROC_HPP>(_impl::_get_proc_address("glVertex4d",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4dv
#define GL_HPP_FUNDEF_Vertex4dv
typedef void (*PFNGLVERTEX4DVPROC_HPP)(const GLdouble *);
static inline void Vertex4dv(const GLdouble * v1)
{
	static PFNGLVERTEX4DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4DVPROC_HPP>(_impl::_get_proc_address("glVertex4dv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4f
#define GL_HPP_FUNDEF_Vertex4f
typedef void (*PFNGLVERTEX4FPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Vertex4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	static PFNGLVERTEX4FPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4FPROC_HPP>(_impl::_get_proc_address("glVertex4f",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4fv
#define GL_HPP_FUNDEF_Vertex4fv
typedef void (*PFNGLVERTEX4FVPROC_HPP)(const GLfloat *);
static inline void Vertex4fv(const GLfloat * v1)
{
	static PFNGLVERTEX4FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4FVPROC_HPP>(_impl::_get_proc_address("glVertex4fv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4i
#define GL_HPP_FUNDEF_Vertex4i
typedef void (*PFNGLVERTEX4IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void Vertex4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	static PFNGLVERTEX4IPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4IPROC_HPP>(_impl::_get_proc_address("glVertex4i",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4iv
#define GL_HPP_FUNDEF_Vertex4iv
typedef void (*PFNGLVERTEX4IVPROC_HPP)(const GLint *);
static inline void Vertex4iv(const GLint * v1)
{
	static PFNGLVERTEX4IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4IVPROC_HPP>(_impl::_get_proc_address("glVertex4iv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4s
#define GL_HPP_FUNDEF_Vertex4s
typedef void (*PFNGLVERTEX4SPROC_HPP)(GLshort,GLshort,GLshort,GLshort);
static inline void Vertex4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	static PFNGLVERTEX4SPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4SPROC_HPP>(_impl::_get_proc_address("glVertex4s",1,0));
	 fn(x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Vertex4sv
#define GL_HPP_FUNDEF_Vertex4sv
typedef void (*PFNGLVERTEX4SVPROC_HPP)(const GLshort *);
static inline void Vertex4sv(const GLshort * v1)
{
	static PFNGLVERTEX4SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEX4SVPROC_HPP>(_impl::_get_proc_address("glVertex4sv",1,0));
	 fn(v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Viewport
#define GL_HPP_FUNDEF_Viewport
typedef void (*PFNGLVIEWPORTPROC_HPP)(GLint,GLint,GLsizei,GLsizei);
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLVIEWPORTPROC_HPP fn=reinterpret_cast<PFNGLVIEWPORTPROC_HPP>(_impl::_get_proc_address("glViewport",1,0));
	 fn(x1,y1,width1,height1);
}
#endif
}
#endif
