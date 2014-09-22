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

static inline void Accum(GLenum op1,GLfloat value1)
{
	 glAccum(op1,value1);
}
static inline void AlphaFunc(GLenum func1,GLfloat ref1)
{
	 glAlphaFunc(func1,ref1);
}
static inline void Begin(GLenum mode1)
{
	 glBegin(mode1);
}
static inline void Bitmap(GLsizei width1,GLsizei height1,GLfloat xorig1,GLfloat yorig1,GLfloat xmove1,GLfloat ymove1,const GLubyte * bitmap1)
{
	 glBitmap(width1,height1,xorig1,yorig1,xmove1,ymove1,bitmap1);
}
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	 glBlendFunc(sfactor1,dfactor1);
}
static inline void CallList(GLuint list1)
{
	 glCallList(list1);
}
static inline void CallLists(GLsizei n1,GLenum type1,const void * lists1)
{
	 glCallLists(n1,type1,lists1);
}
static inline void Clear(GLbitfield mask1)
{
	 glClear(mask1);
}
static inline void ClearAccum(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearAccum(red1,green1,blue1,alpha1);
}
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearColor(red1,green1,blue1,alpha1);
}
static inline void ClearDepth(GLdouble depth1)
{
	 glClearDepth(depth1);
}
static inline void ClearIndex(GLfloat c1)
{
	 glClearIndex(c1);
}
static inline void ClearStencil(GLint s1)
{
	 glClearStencil(s1);
}
static inline void ClipPlane(GLenum plane1,const GLdouble * equation1)
{
	 glClipPlane(plane1,equation1);
}
static inline void Color3b(GLbyte red1,GLbyte green1,GLbyte blue1)
{
	 glColor3b(red1,green1,blue1);
}
static inline void Color3bv(const GLbyte * v1)
{
	 glColor3bv(v1);
}
static inline void Color3d(GLdouble red1,GLdouble green1,GLdouble blue1)
{
	 glColor3d(red1,green1,blue1);
}
static inline void Color3dv(const GLdouble * v1)
{
	 glColor3dv(v1);
}
static inline void Color3f(GLfloat red1,GLfloat green1,GLfloat blue1)
{
	 glColor3f(red1,green1,blue1);
}
static inline void Color3fv(const GLfloat * v1)
{
	 glColor3fv(v1);
}
static inline void Color3i(GLint red1,GLint green1,GLint blue1)
{
	 glColor3i(red1,green1,blue1);
}
static inline void Color3iv(const GLint * v1)
{
	 glColor3iv(v1);
}
static inline void Color3s(GLshort red1,GLshort green1,GLshort blue1)
{
	 glColor3s(red1,green1,blue1);
}
static inline void Color3sv(const GLshort * v1)
{
	 glColor3sv(v1);
}
static inline void Color3ub(GLubyte red1,GLubyte green1,GLubyte blue1)
{
	 glColor3ub(red1,green1,blue1);
}
static inline void Color3ubv(const GLubyte * v1)
{
	 glColor3ubv(v1);
}
static inline void Color3ui(GLuint red1,GLuint green1,GLuint blue1)
{
	 glColor3ui(red1,green1,blue1);
}
static inline void Color3uiv(const GLuint * v1)
{
	 glColor3uiv(v1);
}
static inline void Color3us(GLushort red1,GLushort green1,GLushort blue1)
{
	 glColor3us(red1,green1,blue1);
}
static inline void Color3usv(const GLushort * v1)
{
	 glColor3usv(v1);
}
static inline void Color4b(GLbyte red1,GLbyte green1,GLbyte blue1,GLbyte alpha1)
{
	 glColor4b(red1,green1,blue1,alpha1);
}
static inline void Color4bv(const GLbyte * v1)
{
	 glColor4bv(v1);
}
static inline void Color4d(GLdouble red1,GLdouble green1,GLdouble blue1,GLdouble alpha1)
{
	 glColor4d(red1,green1,blue1,alpha1);
}
static inline void Color4dv(const GLdouble * v1)
{
	 glColor4dv(v1);
}
static inline void Color4f(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glColor4f(red1,green1,blue1,alpha1);
}
static inline void Color4fv(const GLfloat * v1)
{
	 glColor4fv(v1);
}
static inline void Color4i(GLint red1,GLint green1,GLint blue1,GLint alpha1)
{
	 glColor4i(red1,green1,blue1,alpha1);
}
static inline void Color4iv(const GLint * v1)
{
	 glColor4iv(v1);
}
static inline void Color4s(GLshort red1,GLshort green1,GLshort blue1,GLshort alpha1)
{
	 glColor4s(red1,green1,blue1,alpha1);
}
static inline void Color4sv(const GLshort * v1)
{
	 glColor4sv(v1);
}
static inline void Color4ub(GLubyte red1,GLubyte green1,GLubyte blue1,GLubyte alpha1)
{
	 glColor4ub(red1,green1,blue1,alpha1);
}
static inline void Color4ubv(const GLubyte * v1)
{
	 glColor4ubv(v1);
}
static inline void Color4ui(GLuint red1,GLuint green1,GLuint blue1,GLuint alpha1)
{
	 glColor4ui(red1,green1,blue1,alpha1);
}
static inline void Color4uiv(const GLuint * v1)
{
	 glColor4uiv(v1);
}
static inline void Color4us(GLushort red1,GLushort green1,GLushort blue1,GLushort alpha1)
{
	 glColor4us(red1,green1,blue1,alpha1);
}
static inline void Color4usv(const GLushort * v1)
{
	 glColor4usv(v1);
}
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	 glColorMask(red1,green1,blue1,alpha1);
}
static inline void ColorMaterial(GLenum face1,GLenum mode1)
{
	 glColorMaterial(face1,mode1);
}
static inline void CopyPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum type1)
{
	 glCopyPixels(x1,y1,width1,height1,type1);
}
static inline void CullFace(GLenum mode1)
{
	 glCullFace(mode1);
}
static inline void DeleteLists(GLuint list1,GLsizei range1)
{
	 glDeleteLists(list1,range1);
}
static inline void DepthFunc(GLenum func1)
{
	 glDepthFunc(func1);
}
static inline void DepthMask(GLboolean flag1)
{
	 glDepthMask(flag1);
}
static inline void DepthRange(GLdouble near1,GLdouble far1)
{
	 glDepthRange(near1,far1);
}
static inline void Disable(GLenum cap1)
{
	 glDisable(cap1);
}
static inline void DrawBuffer(GLenum buf1)
{
	 glDrawBuffer(buf1);
}
static inline void DrawPixels(GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glDrawPixels(width1,height1,format1,type1,pixels1);
}
static inline void EdgeFlag(GLboolean flag1)
{
	 glEdgeFlag(flag1);
}
static inline void EdgeFlagv(const GLboolean * flag1)
{
	 glEdgeFlagv(flag1);
}
static inline void Enable(GLenum cap1)
{
	 glEnable(cap1);
}
static inline void End()
{
	 glEnd();
}
static inline void EndList()
{
	 glEndList();
}
static inline void EvalCoord1d(GLdouble u1)
{
	 glEvalCoord1d(u1);
}
static inline void EvalCoord1dv(const GLdouble * u1)
{
	 glEvalCoord1dv(u1);
}
static inline void EvalCoord1f(GLfloat u1)
{
	 glEvalCoord1f(u1);
}
static inline void EvalCoord1fv(const GLfloat * u1)
{
	 glEvalCoord1fv(u1);
}
static inline void EvalCoord2d(GLdouble u1,GLdouble v1)
{
	 glEvalCoord2d(u1,v1);
}
static inline void EvalCoord2dv(const GLdouble * u1)
{
	 glEvalCoord2dv(u1);
}
static inline void EvalCoord2f(GLfloat u1,GLfloat v1)
{
	 glEvalCoord2f(u1,v1);
}
static inline void EvalCoord2fv(const GLfloat * u1)
{
	 glEvalCoord2fv(u1);
}
static inline void EvalMesh1(GLenum mode1,GLint i11,GLint i21)
{
	 glEvalMesh1(mode1,i11,i21);
}
static inline void EvalMesh2(GLenum mode1,GLint i11,GLint i21,GLint j11,GLint j21)
{
	 glEvalMesh2(mode1,i11,i21,j11,j21);
}
static inline void EvalPoint1(GLint i1)
{
	 glEvalPoint1(i1);
}
static inline void EvalPoint2(GLint i1,GLint j1)
{
	 glEvalPoint2(i1,j1);
}
static inline void FeedbackBuffer(GLsizei size1,GLenum type1,GLfloat * buffer1)
{
	 glFeedbackBuffer(size1,type1,buffer1);
}
static inline void Finish()
{
	 glFinish();
}
static inline void Flush()
{
	 glFlush();
}
static inline void Fogf(GLenum pname1,GLfloat param1)
{
	 glFogf(pname1,param1);
}
static inline void Fogfv(GLenum pname1,const GLfloat * params1)
{
	 glFogfv(pname1,params1);
}
static inline void Fogi(GLenum pname1,GLint param1)
{
	 glFogi(pname1,param1);
}
static inline void Fogiv(GLenum pname1,const GLint * params1)
{
	 glFogiv(pname1,params1);
}
static inline void FrontFace(GLenum mode1)
{
	 glFrontFace(mode1);
}
static inline void Frustum(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	 glFrustum(left1,right1,bottom1,top1,zNear1,zFar1);
}
static inline GLuint GenLists(GLsizei range1)
{
	return glGenLists(range1);
}
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	 glGetBooleanv(pname1,data1);
}
static inline void GetClipPlane(GLenum plane1,GLdouble * equation1)
{
	 glGetClipPlane(plane1,equation1);
}
static inline void GetDoublev(GLenum pname1,GLdouble * data1)
{
	 glGetDoublev(pname1,data1);
}
static inline GLenum GetError()
{
	return glGetError();
}
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	 glGetFloatv(pname1,data1);
}
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	 glGetIntegerv(pname1,data1);
}
static inline void GetLightfv(GLenum light1,GLenum pname1,GLfloat * params1)
{
	 glGetLightfv(light1,pname1,params1);
}
static inline void GetLightiv(GLenum light1,GLenum pname1,GLint * params1)
{
	 glGetLightiv(light1,pname1,params1);
}
static inline void GetMapdv(GLenum target1,GLenum query1,GLdouble * v1)
{
	 glGetMapdv(target1,query1,v1);
}
static inline void GetMapfv(GLenum target1,GLenum query1,GLfloat * v1)
{
	 glGetMapfv(target1,query1,v1);
}
static inline void GetMapiv(GLenum target1,GLenum query1,GLint * v1)
{
	 glGetMapiv(target1,query1,v1);
}
static inline void GetMaterialfv(GLenum face1,GLenum pname1,GLfloat * params1)
{
	 glGetMaterialfv(face1,pname1,params1);
}
static inline void GetMaterialiv(GLenum face1,GLenum pname1,GLint * params1)
{
	 glGetMaterialiv(face1,pname1,params1);
}
static inline void GetPixelMapfv(GLenum map1,GLfloat * values1)
{
	 glGetPixelMapfv(map1,values1);
}
static inline void GetPixelMapuiv(GLenum map1,GLuint * values1)
{
	 glGetPixelMapuiv(map1,values1);
}
static inline void GetPixelMapusv(GLenum map1,GLushort * values1)
{
	 glGetPixelMapusv(map1,values1);
}
static inline void GetPolygonStipple(GLubyte * mask1)
{
	 glGetPolygonStipple(mask1);
}
static inline const GLubyte * GetString(GLenum name1)
{
	return glGetString(name1);
}
static inline void GetTexEnvfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexEnvfv(target1,pname1,params1);
}
static inline void GetTexEnviv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexEnviv(target1,pname1,params1);
}
static inline void GetTexGendv(GLenum coord1,GLenum pname1,GLdouble * params1)
{
	 glGetTexGendv(coord1,pname1,params1);
}
static inline void GetTexGenfv(GLenum coord1,GLenum pname1,GLfloat * params1)
{
	 glGetTexGenfv(coord1,pname1,params1);
}
static inline void GetTexGeniv(GLenum coord1,GLenum pname1,GLint * params1)
{
	 glGetTexGeniv(coord1,pname1,params1);
}
static inline void GetTexImage(GLenum target1,GLint level1,GLenum format1,GLenum type1,void * pixels1)
{
	 glGetTexImage(target1,level1,format1,type1,pixels1);
}
static inline void GetTexLevelParameterfv(GLenum target1,GLint level1,GLenum pname1,GLfloat * params1)
{
	 glGetTexLevelParameterfv(target1,level1,pname1,params1);
}
static inline void GetTexLevelParameteriv(GLenum target1,GLint level1,GLenum pname1,GLint * params1)
{
	 glGetTexLevelParameteriv(target1,level1,pname1,params1);
}
static inline void GetTexParameterfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexParameterfv(target1,pname1,params1);
}
static inline void GetTexParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexParameteriv(target1,pname1,params1);
}
static inline void Hint(GLenum target1,GLenum mode1)
{
	 glHint(target1,mode1);
}
static inline void IndexMask(GLuint mask1)
{
	 glIndexMask(mask1);
}
static inline void Indexd(GLdouble c1)
{
	 glIndexd(c1);
}
static inline void Indexdv(const GLdouble * c1)
{
	 glIndexdv(c1);
}
static inline void Indexf(GLfloat c1)
{
	 glIndexf(c1);
}
static inline void Indexfv(const GLfloat * c1)
{
	 glIndexfv(c1);
}
static inline void Indexi(GLint c1)
{
	 glIndexi(c1);
}
static inline void Indexiv(const GLint * c1)
{
	 glIndexiv(c1);
}
static inline void Indexs(GLshort c1)
{
	 glIndexs(c1);
}
static inline void Indexsv(const GLshort * c1)
{
	 glIndexsv(c1);
}
static inline void InitNames()
{
	 glInitNames();
}
static inline GLboolean IsEnabled(GLenum cap1)
{
	return glIsEnabled(cap1);
}
static inline GLboolean IsList(GLuint list1)
{
	return glIsList(list1);
}
static inline void LightModelf(GLenum pname1,GLfloat param1)
{
	 glLightModelf(pname1,param1);
}
static inline void LightModelfv(GLenum pname1,const GLfloat * params1)
{
	 glLightModelfv(pname1,params1);
}
static inline void LightModeli(GLenum pname1,GLint param1)
{
	 glLightModeli(pname1,param1);
}
static inline void LightModeliv(GLenum pname1,const GLint * params1)
{
	 glLightModeliv(pname1,params1);
}
static inline void Lightf(GLenum light1,GLenum pname1,GLfloat param1)
{
	 glLightf(light1,pname1,param1);
}
static inline void Lightfv(GLenum light1,GLenum pname1,const GLfloat * params1)
{
	 glLightfv(light1,pname1,params1);
}
static inline void Lighti(GLenum light1,GLenum pname1,GLint param1)
{
	 glLighti(light1,pname1,param1);
}
static inline void Lightiv(GLenum light1,GLenum pname1,const GLint * params1)
{
	 glLightiv(light1,pname1,params1);
}
static inline void LineStipple(GLint factor1,GLushort pattern1)
{
	 glLineStipple(factor1,pattern1);
}
static inline void LineWidth(GLfloat width1)
{
	 glLineWidth(width1);
}
static inline void ListBase(GLuint base1)
{
	 glListBase(base1);
}
static inline void LoadIdentity()
{
	 glLoadIdentity();
}
static inline void LoadMatrixd(const GLdouble * m1)
{
	 glLoadMatrixd(m1);
}
static inline void LoadMatrixf(const GLfloat * m1)
{
	 glLoadMatrixf(m1);
}
static inline void LoadName(GLuint name1)
{
	 glLoadName(name1);
}
static inline void LogicOp(GLenum opcode1)
{
	 glLogicOp(opcode1);
}
static inline void Map1d(GLenum target1,GLdouble u11,GLdouble u21,GLint stride1,GLint order1,const GLdouble * points1)
{
	 glMap1d(target1,u11,u21,stride1,order1,points1);
}
static inline void Map1f(GLenum target1,GLfloat u11,GLfloat u21,GLint stride1,GLint order1,const GLfloat * points1)
{
	 glMap1f(target1,u11,u21,stride1,order1,points1);
}
static inline void Map2d(GLenum target1,GLdouble u11,GLdouble u21,GLint ustride1,GLint uorder1,GLdouble v11,GLdouble v21,GLint vstride1,GLint vorder1,const GLdouble * points1)
{
	 glMap2d(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
static inline void Map2f(GLenum target1,GLfloat u11,GLfloat u21,GLint ustride1,GLint uorder1,GLfloat v11,GLfloat v21,GLint vstride1,GLint vorder1,const GLfloat * points1)
{
	 glMap2f(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
static inline void MapGrid1d(GLint un1,GLdouble u11,GLdouble u21)
{
	 glMapGrid1d(un1,u11,u21);
}
static inline void MapGrid1f(GLint un1,GLfloat u11,GLfloat u21)
{
	 glMapGrid1f(un1,u11,u21);
}
static inline void MapGrid2d(GLint un1,GLdouble u11,GLdouble u21,GLint vn1,GLdouble v11,GLdouble v21)
{
	 glMapGrid2d(un1,u11,u21,vn1,v11,v21);
}
static inline void MapGrid2f(GLint un1,GLfloat u11,GLfloat u21,GLint vn1,GLfloat v11,GLfloat v21)
{
	 glMapGrid2f(un1,u11,u21,vn1,v11,v21);
}
static inline void Materialf(GLenum face1,GLenum pname1,GLfloat param1)
{
	 glMaterialf(face1,pname1,param1);
}
static inline void Materialfv(GLenum face1,GLenum pname1,const GLfloat * params1)
{
	 glMaterialfv(face1,pname1,params1);
}
static inline void Materiali(GLenum face1,GLenum pname1,GLint param1)
{
	 glMateriali(face1,pname1,param1);
}
static inline void Materialiv(GLenum face1,GLenum pname1,const GLint * params1)
{
	 glMaterialiv(face1,pname1,params1);
}
static inline void MatrixMode(GLenum mode1)
{
	 glMatrixMode(mode1);
}
static inline void MultMatrixd(const GLdouble * m1)
{
	 glMultMatrixd(m1);
}
static inline void MultMatrixf(const GLfloat * m1)
{
	 glMultMatrixf(m1);
}
static inline void NewList(GLuint list1,GLenum mode1)
{
	 glNewList(list1,mode1);
}
static inline void Normal3b(GLbyte nx1,GLbyte ny1,GLbyte nz1)
{
	 glNormal3b(nx1,ny1,nz1);
}
static inline void Normal3bv(const GLbyte * v1)
{
	 glNormal3bv(v1);
}
static inline void Normal3d(GLdouble nx1,GLdouble ny1,GLdouble nz1)
{
	 glNormal3d(nx1,ny1,nz1);
}
static inline void Normal3dv(const GLdouble * v1)
{
	 glNormal3dv(v1);
}
static inline void Normal3f(GLfloat nx1,GLfloat ny1,GLfloat nz1)
{
	 glNormal3f(nx1,ny1,nz1);
}
static inline void Normal3fv(const GLfloat * v1)
{
	 glNormal3fv(v1);
}
static inline void Normal3i(GLint nx1,GLint ny1,GLint nz1)
{
	 glNormal3i(nx1,ny1,nz1);
}
static inline void Normal3iv(const GLint * v1)
{
	 glNormal3iv(v1);
}
static inline void Normal3s(GLshort nx1,GLshort ny1,GLshort nz1)
{
	 glNormal3s(nx1,ny1,nz1);
}
static inline void Normal3sv(const GLshort * v1)
{
	 glNormal3sv(v1);
}
static inline void Ortho(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	 glOrtho(left1,right1,bottom1,top1,zNear1,zFar1);
}
static inline void PassThrough(GLfloat token1)
{
	 glPassThrough(token1);
}
static inline void PixelMapfv(GLenum map1,GLsizei mapsize1,const GLfloat * values1)
{
	 glPixelMapfv(map1,mapsize1,values1);
}
static inline void PixelMapuiv(GLenum map1,GLsizei mapsize1,const GLuint * values1)
{
	 glPixelMapuiv(map1,mapsize1,values1);
}
static inline void PixelMapusv(GLenum map1,GLsizei mapsize1,const GLushort * values1)
{
	 glPixelMapusv(map1,mapsize1,values1);
}
static inline void PixelStoref(GLenum pname1,GLfloat param1)
{
	 glPixelStoref(pname1,param1);
}
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	 glPixelStorei(pname1,param1);
}
static inline void PixelTransferf(GLenum pname1,GLfloat param1)
{
	 glPixelTransferf(pname1,param1);
}
static inline void PixelTransferi(GLenum pname1,GLint param1)
{
	 glPixelTransferi(pname1,param1);
}
static inline void PixelZoom(GLfloat xfactor1,GLfloat yfactor1)
{
	 glPixelZoom(xfactor1,yfactor1);
}
static inline void PointSize(GLfloat size1)
{
	 glPointSize(size1);
}
static inline void PolygonMode(GLenum face1,GLenum mode1)
{
	 glPolygonMode(face1,mode1);
}
static inline void PolygonStipple(const GLubyte * mask1)
{
	 glPolygonStipple(mask1);
}
static inline void PopAttrib()
{
	 glPopAttrib();
}
static inline void PopMatrix()
{
	 glPopMatrix();
}
static inline void PopName()
{
	 glPopName();
}
static inline void PushAttrib(GLbitfield mask1)
{
	 glPushAttrib(mask1);
}
static inline void PushMatrix()
{
	 glPushMatrix();
}
static inline void PushName(GLuint name1)
{
	 glPushName(name1);
}
static inline void RasterPos2d(GLdouble x1,GLdouble y1)
{
	 glRasterPos2d(x1,y1);
}
static inline void RasterPos2dv(const GLdouble * v1)
{
	 glRasterPos2dv(v1);
}
static inline void RasterPos2f(GLfloat x1,GLfloat y1)
{
	 glRasterPos2f(x1,y1);
}
static inline void RasterPos2fv(const GLfloat * v1)
{
	 glRasterPos2fv(v1);
}
static inline void RasterPos2i(GLint x1,GLint y1)
{
	 glRasterPos2i(x1,y1);
}
static inline void RasterPos2iv(const GLint * v1)
{
	 glRasterPos2iv(v1);
}
static inline void RasterPos2s(GLshort x1,GLshort y1)
{
	 glRasterPos2s(x1,y1);
}
static inline void RasterPos2sv(const GLshort * v1)
{
	 glRasterPos2sv(v1);
}
static inline void RasterPos3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glRasterPos3d(x1,y1,z1);
}
static inline void RasterPos3dv(const GLdouble * v1)
{
	 glRasterPos3dv(v1);
}
static inline void RasterPos3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glRasterPos3f(x1,y1,z1);
}
static inline void RasterPos3fv(const GLfloat * v1)
{
	 glRasterPos3fv(v1);
}
static inline void RasterPos3i(GLint x1,GLint y1,GLint z1)
{
	 glRasterPos3i(x1,y1,z1);
}
static inline void RasterPos3iv(const GLint * v1)
{
	 glRasterPos3iv(v1);
}
static inline void RasterPos3s(GLshort x1,GLshort y1,GLshort z1)
{
	 glRasterPos3s(x1,y1,z1);
}
static inline void RasterPos3sv(const GLshort * v1)
{
	 glRasterPos3sv(v1);
}
static inline void RasterPos4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	 glRasterPos4d(x1,y1,z1,w1);
}
static inline void RasterPos4dv(const GLdouble * v1)
{
	 glRasterPos4dv(v1);
}
static inline void RasterPos4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	 glRasterPos4f(x1,y1,z1,w1);
}
static inline void RasterPos4fv(const GLfloat * v1)
{
	 glRasterPos4fv(v1);
}
static inline void RasterPos4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	 glRasterPos4i(x1,y1,z1,w1);
}
static inline void RasterPos4iv(const GLint * v1)
{
	 glRasterPos4iv(v1);
}
static inline void RasterPos4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	 glRasterPos4s(x1,y1,z1,w1);
}
static inline void RasterPos4sv(const GLshort * v1)
{
	 glRasterPos4sv(v1);
}
static inline void ReadBuffer(GLenum src1)
{
	 glReadBuffer(src1);
}
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	 glReadPixels(x1,y1,width1,height1,format1,type1,pixels1);
}
static inline void Rectd(GLdouble x11,GLdouble y11,GLdouble x21,GLdouble y21)
{
	 glRectd(x11,y11,x21,y21);
}
static inline void Rectdv(const GLdouble * v11,const GLdouble * v21)
{
	 glRectdv(v11,v21);
}
static inline void Rectf(GLfloat x11,GLfloat y11,GLfloat x21,GLfloat y21)
{
	 glRectf(x11,y11,x21,y21);
}
static inline void Rectfv(const GLfloat * v11,const GLfloat * v21)
{
	 glRectfv(v11,v21);
}
static inline void Recti(GLint x11,GLint y11,GLint x21,GLint y21)
{
	 glRecti(x11,y11,x21,y21);
}
static inline void Rectiv(const GLint * v11,const GLint * v21)
{
	 glRectiv(v11,v21);
}
static inline void Rects(GLshort x11,GLshort y11,GLshort x21,GLshort y21)
{
	 glRects(x11,y11,x21,y21);
}
static inline void Rectsv(const GLshort * v11,const GLshort * v21)
{
	 glRectsv(v11,v21);
}
static inline GLint RenderMode(GLenum mode1)
{
	return glRenderMode(mode1);
}
static inline void Rotated(GLdouble angle1,GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glRotated(angle1,x1,y1,z1);
}
static inline void Rotatef(GLfloat angle1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glRotatef(angle1,x1,y1,z1);
}
static inline void Scaled(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glScaled(x1,y1,z1);
}
static inline void Scalef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glScalef(x1,y1,z1);
}
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glScissor(x1,y1,width1,height1);
}
static inline void SelectBuffer(GLsizei size1,GLuint * buffer1)
{
	 glSelectBuffer(size1,buffer1);
}
static inline void ShadeModel(GLenum mode1)
{
	 glShadeModel(mode1);
}
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	 glStencilFunc(func1,ref1,mask1);
}
static inline void StencilMask(GLuint mask1)
{
	 glStencilMask(mask1);
}
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	 glStencilOp(fail1,zfail1,zpass1);
}
static inline void TexCoord1d(GLdouble s1)
{
	 glTexCoord1d(s1);
}
static inline void TexCoord1dv(const GLdouble * v1)
{
	 glTexCoord1dv(v1);
}
static inline void TexCoord1f(GLfloat s1)
{
	 glTexCoord1f(s1);
}
static inline void TexCoord1fv(const GLfloat * v1)
{
	 glTexCoord1fv(v1);
}
static inline void TexCoord1i(GLint s1)
{
	 glTexCoord1i(s1);
}
static inline void TexCoord1iv(const GLint * v1)
{
	 glTexCoord1iv(v1);
}
static inline void TexCoord1s(GLshort s1)
{
	 glTexCoord1s(s1);
}
static inline void TexCoord1sv(const GLshort * v1)
{
	 glTexCoord1sv(v1);
}
static inline void TexCoord2d(GLdouble s1,GLdouble t1)
{
	 glTexCoord2d(s1,t1);
}
static inline void TexCoord2dv(const GLdouble * v1)
{
	 glTexCoord2dv(v1);
}
static inline void TexCoord2f(GLfloat s1,GLfloat t1)
{
	 glTexCoord2f(s1,t1);
}
static inline void TexCoord2fv(const GLfloat * v1)
{
	 glTexCoord2fv(v1);
}
static inline void TexCoord2i(GLint s1,GLint t1)
{
	 glTexCoord2i(s1,t1);
}
static inline void TexCoord2iv(const GLint * v1)
{
	 glTexCoord2iv(v1);
}
static inline void TexCoord2s(GLshort s1,GLshort t1)
{
	 glTexCoord2s(s1,t1);
}
static inline void TexCoord2sv(const GLshort * v1)
{
	 glTexCoord2sv(v1);
}
static inline void TexCoord3d(GLdouble s1,GLdouble t1,GLdouble r1)
{
	 glTexCoord3d(s1,t1,r1);
}
static inline void TexCoord3dv(const GLdouble * v1)
{
	 glTexCoord3dv(v1);
}
static inline void TexCoord3f(GLfloat s1,GLfloat t1,GLfloat r1)
{
	 glTexCoord3f(s1,t1,r1);
}
static inline void TexCoord3fv(const GLfloat * v1)
{
	 glTexCoord3fv(v1);
}
static inline void TexCoord3i(GLint s1,GLint t1,GLint r1)
{
	 glTexCoord3i(s1,t1,r1);
}
static inline void TexCoord3iv(const GLint * v1)
{
	 glTexCoord3iv(v1);
}
static inline void TexCoord3s(GLshort s1,GLshort t1,GLshort r1)
{
	 glTexCoord3s(s1,t1,r1);
}
static inline void TexCoord3sv(const GLshort * v1)
{
	 glTexCoord3sv(v1);
}
static inline void TexCoord4d(GLdouble s1,GLdouble t1,GLdouble r1,GLdouble q1)
{
	 glTexCoord4d(s1,t1,r1,q1);
}
static inline void TexCoord4dv(const GLdouble * v1)
{
	 glTexCoord4dv(v1);
}
static inline void TexCoord4f(GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
	 glTexCoord4f(s1,t1,r1,q1);
}
static inline void TexCoord4fv(const GLfloat * v1)
{
	 glTexCoord4fv(v1);
}
static inline void TexCoord4i(GLint s1,GLint t1,GLint r1,GLint q1)
{
	 glTexCoord4i(s1,t1,r1,q1);
}
static inline void TexCoord4iv(const GLint * v1)
{
	 glTexCoord4iv(v1);
}
static inline void TexCoord4s(GLshort s1,GLshort t1,GLshort r1,GLshort q1)
{
	 glTexCoord4s(s1,t1,r1,q1);
}
static inline void TexCoord4sv(const GLshort * v1)
{
	 glTexCoord4sv(v1);
}
static inline void TexEnvf(GLenum target1,GLenum pname1,GLfloat param1)
{
	 glTexEnvf(target1,pname1,param1);
}
static inline void TexEnvfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	 glTexEnvfv(target1,pname1,params1);
}
static inline void TexEnvi(GLenum target1,GLenum pname1,GLint param1)
{
	 glTexEnvi(target1,pname1,param1);
}
static inline void TexEnviv(GLenum target1,GLenum pname1,const GLint * params1)
{
	 glTexEnviv(target1,pname1,params1);
}
static inline void TexGend(GLenum coord1,GLenum pname1,GLdouble param1)
{
	 glTexGend(coord1,pname1,param1);
}
static inline void TexGendv(GLenum coord1,GLenum pname1,const GLdouble * params1)
{
	 glTexGendv(coord1,pname1,params1);
}
static inline void TexGenf(GLenum coord1,GLenum pname1,GLfloat param1)
{
	 glTexGenf(coord1,pname1,param1);
}
static inline void TexGenfv(GLenum coord1,GLenum pname1,const GLfloat * params1)
{
	 glTexGenfv(coord1,pname1,params1);
}
static inline void TexGeni(GLenum coord1,GLenum pname1,GLint param1)
{
	 glTexGeni(coord1,pname1,param1);
}
static inline void TexGeniv(GLenum coord1,GLenum pname1,const GLint * params1)
{
	 glTexGeniv(coord1,pname1,params1);
}
static inline void TexImage1D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexImage1D(target1,level1,internalformat1,width1,border1,format1,type1,pixels1);
}
static inline void TexImage2D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexImage2D(target1,level1,internalformat1,width1,height1,border1,format1,type1,pixels1);
}
static inline void TexParameterf(GLenum target1,GLenum pname1,GLfloat param1)
{
	 glTexParameterf(target1,pname1,param1);
}
static inline void TexParameterfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	 glTexParameterfv(target1,pname1,params1);
}
static inline void TexParameteri(GLenum target1,GLenum pname1,GLint param1)
{
	 glTexParameteri(target1,pname1,param1);
}
static inline void TexParameteriv(GLenum target1,GLenum pname1,const GLint * params1)
{
	 glTexParameteriv(target1,pname1,params1);
}
static inline void Translated(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glTranslated(x1,y1,z1);
}
static inline void Translatef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glTranslatef(x1,y1,z1);
}
static inline void Vertex2d(GLdouble x1,GLdouble y1)
{
	 glVertex2d(x1,y1);
}
static inline void Vertex2dv(const GLdouble * v1)
{
	 glVertex2dv(v1);
}
static inline void Vertex2f(GLfloat x1,GLfloat y1)
{
	 glVertex2f(x1,y1);
}
static inline void Vertex2fv(const GLfloat * v1)
{
	 glVertex2fv(v1);
}
static inline void Vertex2i(GLint x1,GLint y1)
{
	 glVertex2i(x1,y1);
}
static inline void Vertex2iv(const GLint * v1)
{
	 glVertex2iv(v1);
}
static inline void Vertex2s(GLshort x1,GLshort y1)
{
	 glVertex2s(x1,y1);
}
static inline void Vertex2sv(const GLshort * v1)
{
	 glVertex2sv(v1);
}
static inline void Vertex3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glVertex3d(x1,y1,z1);
}
static inline void Vertex3dv(const GLdouble * v1)
{
	 glVertex3dv(v1);
}
static inline void Vertex3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glVertex3f(x1,y1,z1);
}
static inline void Vertex3fv(const GLfloat * v1)
{
	 glVertex3fv(v1);
}
static inline void Vertex3i(GLint x1,GLint y1,GLint z1)
{
	 glVertex3i(x1,y1,z1);
}
static inline void Vertex3iv(const GLint * v1)
{
	 glVertex3iv(v1);
}
static inline void Vertex3s(GLshort x1,GLshort y1,GLshort z1)
{
	 glVertex3s(x1,y1,z1);
}
static inline void Vertex3sv(const GLshort * v1)
{
	 glVertex3sv(v1);
}
static inline void Vertex4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	 glVertex4d(x1,y1,z1,w1);
}
static inline void Vertex4dv(const GLdouble * v1)
{
	 glVertex4dv(v1);
}
static inline void Vertex4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	 glVertex4f(x1,y1,z1,w1);
}
static inline void Vertex4fv(const GLfloat * v1)
{
	 glVertex4fv(v1);
}
static inline void Vertex4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	 glVertex4i(x1,y1,z1,w1);
}
static inline void Vertex4iv(const GLint * v1)
{
	 glVertex4iv(v1);
}
static inline void Vertex4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	 glVertex4s(x1,y1,z1,w1);
}
static inline void Vertex4sv(const GLshort * v1)
{
	 glVertex4sv(v1);
}
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glViewport(x1,y1,width1,height1);
}}
#endif
