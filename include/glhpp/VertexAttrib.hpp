#ifndef GLHPP_VERTEXATTRIB_HPP
#define GLHPP_VERTEXATTRIB_HPP

namespace gl
{
/*TODO: Arguably these shouldn't even exist because of AttribFormat
//Standard ones: double32, float, short
inline void VertexAttrib1(GLuint i,GLdouble v0) { glVertexAttrib1d(i,v0); }
inline void VertexAttrib2(GLuint i,GLdouble v0,GLdouble v1) { glVertexAttrib2d(i,v0,v1); }
inline void VertexAttrib3(GLuint i,GLdouble v0,GLdouble v1,GLdouble v2) { glVertexAttrib3d(i,v0,v1,v2); }
inline void VertexAttrib4(GLuint i,GLdouble v0,GLdouble v1,GLdouble v2,GLdouble v3) { glVertexAttrib4d(i,v0,v1,v2,v3); }
inline void VertexAttrib1(GLuint i,const GLdouble* v) { glVertexAttrib1dv(i,v); }
inline void VertexAttrib2(GLuint i,const GLdouble* v) { glVertexAttrib2dv(i,v); }
inline void VertexAttrib3(GLuint i,const GLdouble* v) { glVertexAttrib3dv(i,v); }
inline void VertexAttrib4(GLuint i,const GLdouble* v) { glVertexAttrib4dv(i,v); }

inline void VertexAttrib1(GLuint i,GLfloat v0) { glVertexAttrib1f(i,v0); }
inline void VertexAttrib2(GLuint i,GLfloat v0,GLfloat v1) { glVertexAttrib2f(i,v0,v1); }
inline void VertexAttrib3(GLuint i,GLfloat v0,GLfloat v1,GLfloat v2) { glVertexAttrib3f(i,v0,v1,v2); }
inline void VertexAttrib4(GLuint i,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3) { glVertexAttrib4f(i,v0,v1,v2,v3); }
inline void VertexAttrib1(GLuint i,const GLfloat* v) { glVertexAttrib1fv(i,v); }
inline void VertexAttrib2(GLuint i,const GLfloat* v) { glVertexAttrib2fv(i,v); }
inline void VertexAttrib3(GLuint i,const GLfloat* v) { glVertexAttrib3fv(i,v); }
inline void VertexAttrib4(GLuint i,const GLfloat* v) { glVertexAttrib4fv(i,v); }

inline void VertexAttrib1(GLuint i,GLshort v0) { glVertexAttrib1s(i,v0); }
inline void VertexAttrib2(GLuint i,GLshort v0,GLshort v1) { glVertexAttrib2s(i,v0,v1); }
inline void VertexAttrib3(GLuint i,GLshort v0,GLshort v1,GLshort v2) { glVertexAttrib3s(i,v0,v1,v2); }
inline void VertexAttrib4(GLuint i,GLshort v0,GLshort v1,GLshort v2,GLshort v3) { glVertexAttrib4s(i,v0,v1,v2,v3); }
inline void VertexAttrib1(GLuint i,const GLshort* v) { glVertexAttrib1sv(i,v); }
inline void VertexAttrib2(GLuint i,const GLshort* v) { glVertexAttrib2sv(i,v); }
inline void VertexAttrib3(GLuint i,const GLshort* v) { glVertexAttrib3sv(i,v); }
inline void VertexAttrib4(GLuint i,const GLshort* v) { glVertexAttrib4sv(i,v); }

//double64 (actually looks for a float64 uniform)

inline void VertexAttribL1(GLuint i,GLdouble v0) { glVertexAttribL1d(i,v0); }
inline void VertexAttribL2(GLuint i,GLdouble v0,GLdouble v1) { glVertexAttribL2d(i,v0,v1); }
inline void VertexAttribL3(GLuint i,GLdouble v0,GLdouble v1,GLdouble v2) { glVertexAttribL3d(i,v0,v1,v2); }
inline void VertexAttribL4(GLuint i,GLdouble v0,GLdouble v1,GLdouble v2,GLdouble v3) { glVertexAttribL4d(i,v0,v1,v2,v3); }
inline void VertexAttribL1(GLuint i,const GLdouble* v) { glVertexAttribL1dv(i,v); }
inline void VertexAttribL2(GLuint i,const GLdouble* v) { glVertexAttribL2dv(i,v); }
inline void VertexAttribL3(GLuint i,const GLdouble* v) { glVertexAttribL3dv(i,v); }
inline void VertexAttribL4(GLuint i,const GLdouble* v) { glVertexAttribL4dv(i,v); }

//Int32

inline void VertexAttribI1(GLuint i,GLint v0) { glVertexAttribI1i(i,v0); }
inline void VertexAttribI2(GLuint i,GLint v0,GLint v1) { glVertexAttribI2i(i,v0,v1); }
inline void VertexAttribI3(GLuint i,GLint v0,GLint v1,GLint v2) { glVertexAttribI3i(i,v0,v1,v2); }
inline void VertexAttribI4(GLuint i,GLint v0,GLint v1,GLint v2,GLint v3) { glVertexAttribI4i(i,v0,v1,v2,v3); }
inline void VertexAttribI1(GLuint i,const GLint* v) { glVertexAttribI1iv(i,v); }
inline void VertexAttribI2(GLuint i,const GLint* v) { glVertexAttribI2iv(i,v); }
inline void VertexAttribI3(GLuint i,const GLint* v) { glVertexAttribI3iv(i,v); }
inline void VertexAttribI4(GLuint i,const GLint* v) { glVertexAttribI4iv(i,v); }

inline void VertexAttribI1(GLuint i,GLuint v0) { glVertexAttribI1ui(i,v0); }
inline void VertexAttribI2(GLuint i,GLuint v0,GLuint v1) { glVertexAttribI2ui(i,v0,v1); }
inline void VertexAttribI3(GLuint i,GLuint v0,GLuint v1,GLuint v2) { glVertexAttribI3ui(i,v0,v1,v2); }
inline void VertexAttribI4(GLuint i,GLuint v0,GLuint v1,GLuint v2,GLuint v3) { glVertexAttribI4ui(i,v0,v1,v2,v3); }
inline void VertexAttribI1(GLuint i,const GLuint* v) { glVertexAttribI1uiv(i,v); }
inline void VertexAttribI2(GLuint i,const GLuint* v) { glVertexAttribI2uiv(i,v); }
inline void VertexAttribI3(GLuint i,const GLuint* v) { glVertexAttribI3uiv(i,v); }
inline void VertexAttribI4(GLuint i,const GLuint* v) { glVertexAttribI4uiv(i,v); }

inline void VertexAttribI4(GLuint i,const GLbyte* v) { glVertexAttribI4bv(i,v); }
inline void VertexAttribI4(GLuint i,const GLubyte* v) { glVertexAttribI4ubv(i,v); }
inline void VertexAttribI4(GLuint i,const GLshort* v) { glVertexAttribI4sv(i,v); }
inline void VertexAttribI4(GLuint i,const GLushort* v) { glVertexAttribI4usv(i,v); }

//Load int into float varyings

inline void VertexAttrib4(GLuint i,const GLbyte* v) { glVertexAttrib4bv(i,v); }
inline void VertexAttrib4(GLuint i,const GLubyte* v) { glVertexAttrib4ubv(i,v); }
inline void VertexAttrib4(GLuint i,const GLint* v) { glVertexAttrib4iv(i,v); }
inline void VertexAttrib4(GLuint i,const GLuint* v) { glVertexAttrib4uiv(i,v); }
inline void VertexAttrib4(GLuint i,const GLshort* v) { glVertexAttrib4sv(i,v); }
inline void VertexAttrib4(GLuint i,const GLushort* v) { glVertexAttrib4usv(i,v); }

inline void VertexAttribN4(GLuint i,const GLbyte* v) { glVertexAttribN4bv(i,v); }
inline void VertexAttribN4(GLuint i,const GLubyte* v) { glVertexAttribN4ubv(i,v); }
inline void VertexAttribN4(GLuint i,const GLint* v) { glVertexAttribN4iv(i,v); }
inline void VertexAttribN4(GLuint i,const GLuint* v) { glVertexAttribN4uiv(i,v); }
inline void VertexAttribN4(GLuint i,const GLshort* v) { glVertexAttribN4sv(i,v); }
inline void VertexAttribN4(GLuint i,const GLushort* v) { glVertexAttribN4usv(i,v); }

inline void VertexAttrib4N(GLuint i, GLubyte x, GLubyte y, GLubyte z, GLubyte w) { glVertexAttrib4Nb(i,x,y,z,w); }

//Packed Attribs.
inline void VertexAttribP1(GLuint i,GLenum t,GLboolean n,GLuint v) { glVertexAttribP1ui(i,t,n,v); }
inline void VertexAttribP1(GLuint i,GLenum t,GLboolean n,const GLuint* v) { glVertexAttribP1uiv(i,t,n,v); }
inline void VertexAttribP2(GLuint i,GLenum t,GLboolean n,GLuint v) { glVertexAttribP2ui(i,t,n,v); }
inline void VertexAttribP2(GLuint i,GLenum t,GLboolean n,const GLuint* v) { glVertexAttribP2uiv(i,t,n,v); }
inline void VertexAttribP3(GLuint i,GLenum t,GLboolean n,GLuint v) { glVertexAttribP3ui(i,t,n,v); }
inline void VertexAttribP3(GLuint i,GLenum t,GLboolean n,const GLuint* v) { glVertexAttribP3uiv(i,t,n,v); }
inline void VertexAttribP4(GLuint i,GLenum t,GLboolean n,GLuint v) { glVertexAttribP4ui(i,t,n,v); }
inline void VertexAttribP4(GLuint i,GLenum t,GLboolean n,const GLuint* v) { glVertexAttribP4uiv(i,t,n,v); }


//TODO:
/*
GLAPI void APIENTRY glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
GLAPI void APIENTRY glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void APIENTRY glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);

GLAPI void APIENTRY glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params);
GLAPI void APIENTRY glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
GLAPI void APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
GLAPI void APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
GLAPI void APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer);
GLAPI void APIENTRY glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params);
GLAPI void APIENTRY glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params);*/

}

#endif

