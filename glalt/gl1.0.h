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
extern void glAccum(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glAlphaFunc(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glBegin(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glBitmap(GLsizei,GLsizei,GLfloat,GLfloat,GLfloat,GLfloat,const GLubyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glBlendFunc(GLenum,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glCallList(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glCallLists(GLsizei,GLenum,const void *);
#endif

#ifndef GL_VERSION_1_0
extern void glClear(GLbitfield);
#endif

#ifndef GL_VERSION_1_0
extern void glClearAccum(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glClearDepth(GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glClearIndex(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glClearStencil(GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glClipPlane(GLenum,const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3b(GLbyte,GLbyte,GLbyte);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3bv(const GLbyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3d(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3f(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3i(GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3s(GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3ub(GLubyte,GLubyte,GLubyte);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3ubv(const GLubyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3ui(GLuint,GLuint,GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3uiv(const GLuint *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3us(GLushort,GLushort,GLushort);
#endif

#ifndef GL_VERSION_1_0
extern void glColor3usv(const GLushort *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4b(GLbyte,GLbyte,GLbyte,GLbyte);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4bv(const GLbyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4i(GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4s(GLshort,GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4ubv(const GLubyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4ui(GLuint,GLuint,GLuint,GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4uiv(const GLuint *);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4us(GLushort,GLushort,GLushort,GLushort);
#endif

#ifndef GL_VERSION_1_0
extern void glColor4usv(const GLushort *);
#endif

#ifndef GL_VERSION_1_0
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
#endif

#ifndef GL_VERSION_1_0
extern void glColorMaterial(GLenum,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glCopyPixels(GLint,GLint,GLsizei,GLsizei,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glCullFace(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glDeleteLists(GLuint,GLsizei);
#endif

#ifndef GL_VERSION_1_0
extern void glDepthFunc(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glDepthMask(GLboolean);
#endif

#ifndef GL_VERSION_1_0
extern void glDepthRange(GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glDisable(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glDrawBuffer(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glDrawPixels(GLsizei,GLsizei,GLenum,GLenum,const void *);
#endif

#ifndef GL_VERSION_1_0
extern void glEdgeFlag(GLboolean);
#endif

#ifndef GL_VERSION_1_0
extern void glEdgeFlagv(const GLboolean *);
#endif

#ifndef GL_VERSION_1_0
extern void glEnable(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glEnd();
#endif

#ifndef GL_VERSION_1_0
extern void glEndList();
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord1d(GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord1dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord1f(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord1fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord2d(GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord2dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord2f(GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalCoord2fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalMesh1(GLenum,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalMesh2(GLenum,GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalPoint1(GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glEvalPoint2(GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glFeedbackBuffer(GLsizei,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glFinish();
#endif

#ifndef GL_VERSION_1_0
extern void glFlush();
#endif

#ifndef GL_VERSION_1_0
extern void glFogf(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glFogfv(GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glFogi(GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glFogiv(GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glFrontFace(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glFrustum(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern GLuint glGenLists(GLsizei);
#endif

#ifndef GL_VERSION_1_0
extern void glGetBooleanv(GLenum,GLboolean *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetClipPlane(GLenum,GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetDoublev(GLenum,GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern GLenum glGetError();
#endif

#ifndef GL_VERSION_1_0
extern void glGetFloatv(GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetIntegerv(GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetLightiv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetMapdv(GLenum,GLenum,GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetMapfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetMapiv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetMaterialiv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetPixelMapfv(GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetPixelMapuiv(GLenum,GLuint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetPixelMapusv(GLenum,GLushort *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetPolygonStipple(GLubyte *);
#endif

#ifndef GL_VERSION_1_0
extern const GLubyte * glGetString(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexGendv(GLenum,GLenum,GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexGenfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexGeniv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexImage(GLenum,GLint,GLenum,GLenum,void *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexLevelParameterfv(GLenum,GLint,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexLevelParameteriv(GLenum,GLint,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glHint(GLenum,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexMask(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexd(GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexdv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexf(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexfv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexi(GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexiv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexs(GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glIndexsv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glInitNames();
#endif

#ifndef GL_VERSION_1_0
extern GLboolean glIsEnabled(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern GLboolean glIsList(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glLightModelf(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glLightModelfv(GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glLightModeli(GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glLightModeliv(GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glLightf(GLenum,GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glLightfv(GLenum,GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glLighti(GLenum,GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glLightiv(GLenum,GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glLineStipple(GLint,GLushort);
#endif

#ifndef GL_VERSION_1_0
extern void glLineWidth(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glListBase(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glLoadIdentity();
#endif

#ifndef GL_VERSION_1_0
extern void glLoadMatrixd(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glLoadMatrixf(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glLoadName(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glLogicOp(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glMap1d(GLenum,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glMap1f(GLenum,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glMap2d(GLenum,GLdouble,GLdouble,GLint,GLint,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glMap2f(GLenum,GLfloat,GLfloat,GLint,GLint,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glMapGrid1d(GLint,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glMapGrid1f(GLint,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glMapGrid2d(GLint,GLdouble,GLdouble,GLint,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glMapGrid2f(GLint,GLfloat,GLfloat,GLint,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glMaterialf(GLenum,GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glMateriali(GLenum,GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glMaterialiv(GLenum,GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glMatrixMode(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glMultMatrixd(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glMultMatrixf(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glNewList(GLuint,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3b(GLbyte,GLbyte,GLbyte);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3bv(const GLbyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3d(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3i(GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3s(GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glNormal3sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glOrtho(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glPassThrough(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelMapfv(GLenum,GLsizei,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelMapuiv(GLenum,GLsizei,const GLuint *);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelMapusv(GLenum,GLsizei,const GLushort *);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelStoref(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelStorei(GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelTransferf(GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelTransferi(GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glPixelZoom(GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glPointSize(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glPolygonMode(GLenum,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glPolygonStipple(const GLubyte *);
#endif

#ifndef GL_VERSION_1_0
extern void glPopAttrib();
#endif

#ifndef GL_VERSION_1_0
extern void glPopMatrix();
#endif

#ifndef GL_VERSION_1_0
extern void glPopName();
#endif

#ifndef GL_VERSION_1_0
extern void glPushAttrib(GLbitfield);
#endif

#ifndef GL_VERSION_1_0
extern void glPushMatrix();
#endif

#ifndef GL_VERSION_1_0
extern void glPushName(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2d(GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2f(GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2i(GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2s(GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos2sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3d(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3f(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3i(GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3s(GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos3sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4i(GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4s(GLshort,GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glRasterPos4sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glReadBuffer(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
#endif

#ifndef GL_VERSION_1_0
extern void glRectd(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glRectdv(const GLdouble *,const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glRectf(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glRectfv(const GLfloat *,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glRecti(GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glRectiv(const GLint *,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glRects(GLshort,GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glRectsv(const GLshort *,const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern GLint glRenderMode(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glRotated(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glScaled(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glScalef(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
#endif

#ifndef GL_VERSION_1_0
extern void glSelectBuffer(GLsizei,GLuint *);
#endif

#ifndef GL_VERSION_1_0
extern void glShadeModel(GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glStencilFunc(GLenum,GLint,GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glStencilMask(GLuint);
#endif

#ifndef GL_VERSION_1_0
extern void glStencilOp(GLenum,GLenum,GLenum);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1d(GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1f(GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1i(GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1s(GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord1sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2d(GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2f(GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2i(GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2s(GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord2sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3d(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3f(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3i(GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3s(GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord3sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4i(GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4s(GLshort,GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glTexCoord4sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexEnvf(GLenum,GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexEnvi(GLenum,GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexEnviv(GLenum,GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGend(GLenum,GLenum,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGendv(GLenum,GLenum,const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGenf(GLenum,GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGenfv(GLenum,GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGeni(GLenum,GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexGeniv(GLenum,GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexImage1D(GLenum,GLint,GLint,GLsizei,GLint,GLenum,GLenum,const void *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexParameterf(GLenum,GLenum,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glTexParameteri(GLenum,GLenum,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glTranslated(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2d(GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2f(GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2i(GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2s(GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex2sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3d(GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3f(GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3i(GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3s(GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex3sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4d(GLdouble,GLdouble,GLdouble,GLdouble);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4dv(const GLdouble *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4fv(const GLfloat *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4i(GLint,GLint,GLint,GLint);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4iv(const GLint *);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4s(GLshort,GLshort,GLshort,GLshort);
#endif

#ifndef GL_VERSION_1_0
extern void glVertex4sv(const GLshort *);
#endif

#ifndef GL_VERSION_1_0
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
#endif

CGUARDEND

#endif
