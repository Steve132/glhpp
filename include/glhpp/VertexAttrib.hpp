#ifndef GLHPP_VERTEXATTRIB_HPP
#define GLHPP_VERTEXATTRIB_HPP

#include "Object.hpp"

#define VA1(X,t,t2) void VertexAttri##X(GLuint index,t2 v0){ glVertexAttri##X##1##t(index,v0); }

#define VA2(X,t,t2) void VertexAttri##X(GLuint index,t2 v0,t2 v1){ glVertexAttri##X##2##t(index,v0,v1); }

#define VA3(X,t,t2) void VertexAttri##X(GLuint index,t2 v0,t2 v1,t2 v2){ glVertexAttri##X##3##t(index,v0,v1,v2); }

#define VA4(X,t,t2) void VertexAttri##X(GLuint index,t2 v0,t2 v1,t2 v2,t2 v3){ glVertexAttri##X##4##t(index,v0,v1,v2,v3); }

#define VANV(N,X,t,t2) void VertexAttri##X##N(GLuint index,const t2* v){ glVertexAttri##X##N##t##v(index,v); }

#ifndef GLHPP_STRICT_API

#define VANVT(N,X,t,t2) void VertexAttri##X(GLuint index,const std::array<t2,N>& v){ VertexAttri##X##N(index,&v[0]); }

#else 

#define VANVT(N,X,t,t2)

#endif


#define VA(X,t,t2) \
	VA1(X,t,t2) \
	VA2(X,t,t2) \
	VA3(X,t,t2) \
	VA4(X,t,t2) \
	VANV(1,X,t,t2) \
	VANV(2,X,t,t2) \
	VANV(3,X,t,t2) \
	VANV(4,X,t,t2) \
	VANVT(1,X,t,t2) \
	VANVT(2,X,t,t2) \
	VANVT(3,X,t,t2) \
	VANVT(4,X,t,t2) \
	
#define VA_4(X,t,t2) \
	VA4(X,t,t2) \
	VANV(4,X,t,t2) \
	VANVT(4,X,t,t2) \
	
#ifndef GLHPP_STRICT_API
	
#define VAVT_N(n,X,t,t2) void VertexAttri##X(GLuint index,const std::array<t2,n>& v){ glVertexAttri##X##n##t(index,&v[0]); }
	
#else 
	
#define VAVT_N(n,X,t,t2)
	
#endif
	

namespace gl
{
	VA(b,s,GLshort);
	VA(b,f,GLfloat);
	VA(b,d,GLdouble);
	
	VA_4(b,b,GLbyte);
	VA_4(b,i,GLint);
	VA_4(b,ub,GLubyte);
	VA_4(b,us,GLushort);
	VA_4(b,ui,GLuint);
	
	VA(bI,i,GLint);
	VA(bI,ui,GLuint);
	VA_4(bI,b,GLbyte);
	VA_4(bI,ub,GLubyte);
	VA_4(bI,s,GLshort);
	VA_4(bI,us,GLushort);
	
	VA(L,d,GLdouble);
	
	VertexAttrib4N(GLuint index,GLubyte v0,GLubyte v1,GLubyte v2,GLubyte v3) { glVertexAttrib4Nub(index,v0,v1,v2,v3); }
	VertexAttribN(GLuint index,GLubyte v0,GLubyte v1=0,GLubyte v2=0,GLubyte v3=0) { VertexAttrib4N(index,v0,v1,v2,v3); }
	
};


//TODO: VertexAttribBinding GetVertexAttrib{d GetVertexAttribPointerv(uint

#endif
