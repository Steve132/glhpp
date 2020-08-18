
//#define GLHPP_STRICT_API

#ifndef GLHPP_MACRO_DEBUG
#define __NL__
#endif

#define Comma1(Z) Z##1
#define Comma2(Z) Comma1(Z),Z##2
#define Comma3(Z) Comma2(Z),Z##3
#define Comma4(Z) Comma3(Z),Z##4

#define UniformsVTemplate(r,X,x) \
__NL__	void Uniform##r(GLuint l,Comma##r(X v)) { glProgramUniform##r##x(id,l,Comma##r(v)); } \

#define UniformsVPtrTemplate(r,X,x) \
__NL__	void Uniform##r(GLuint l,GLuint count,const X* v) { glProgramUniform##r##x##v(id,l,count,v); } \

#define UniformsMSquareTemplate(r,X,x) \
__NL__	void UniformMatrix##r(GLuint l,GLuint count,GLboolean transpose,const X* v) { glProgramUniformMatrix##r##x##v(id,l,count,transpose,v); } \

#define UniformsMNTemplate(r,c,X,xl) \
__NL__	void UniformMatrix##r##x##c(GLuint l,GLuint count,GLboolean transpose,const X* v) { glProgramUniformMatrix##r##x##c##xl##v(id,l,count,transpose,v); }\

#define UniformsGetTemplate(X,xl) \
__NL__	void GetUniform(GLint l,X* out) const { glGetUniform##xl##v(id,location,out);}\
__NL__	voit GetnUniform(GLint l,GLsizei bufSize,X* out) const { glGetUniform##xl##v(id,location,bufSize,out); }\


#ifndef GLHPP_STRICT_API

#define UniformsGetTemplate_EXT(X,xl) \
__NL__	void GetUniform(const char* nm,X* out) const { GetUniform(GetUniformLocation(nm),out);}\
__NL__	void GetnUniform(const char* nm,GLsizei bufSize,X* out) const { GetUniform(GetUniformLocation(nm),bufSize,out); }\
__NL__  template<unsigned int N> std::array<X,N> GetUniform(GLuint location) const { std::array<X,N> out;GetUniform(location,&out[0]);return out;}\
__NL__  template<unsigned int N> std::array<X,N> GetUniform(const char* nm) const { std::array<X,N> out;GetUniform(nm,&out[0]);return out;}\

#define UniformsVTemplate_EXT(r,X,x) \
__NL__	void Uniform(GLuint l,Comma##r(X v)) { Uniform##r(l,Comma##r(v)); } \
__NL__	void Uniform##r(const char* nm,Comma##r(X v)) { Uniform##r(GetUniformLocation(nm),Comma##r(v)); } \
__NL__	void Uniform(const char* nm,Comma##r(X v)) { Uniform##r(GetUniformLocation(nm),Comma##r(v)); } \

#define UniformsVPtrTemplate_EXT(r,X,x) \
__NL__	void Uniform##r(const char* nm,GLuint count,const X* v) { Uniform##r(GetUniformLocation(nm),count,v); } \
__NL__	void Uniform##r(const char* nm,const X* v) { Uniform##r(GetUniformLocation(nm),1,v); } \
__NL__	void Uniform##r(GLuint l,const X* v) { Uniform##r(l,1,v); } \

#define UniformsMSquareTemplate_EXT(r,X,xl) \
__NL__	void UniformMatrix##r##x##r(GLuint l,const X* v) { UniformMatrix##r(l,1,GL_FALSE,v); } \
__NL__	void UniformMatrix##r(GLuint l,const X* v) { UniformMatrix##r(l,1,GL_FALSE,v); } \
__NL__	void UniformMatrix##r##x##r(GLuint l,GLuint count,GLboolean transpose,const X* v) { UniformMatrix##r(l,count,transpose,v); } \
__NL__	void UniformMatrix##r(const char* nm,GLuint count,GLboolean transpose,const X* v) { UniformMatrix##r(GetUniformLocation(nm),count,transpose,v); } \
__NL__	void UniformMatrix##r##x##r(const char* nm,GLuint count,GLboolean transpose,const X* v) { UniformMatrix##r(GetUniformLocation(nm),count,transpose,v); } \
__NL__	void UniformMatrix##r(const char* nm,const X* v) { UniformMatrix##r(GetUniformLocation(nm),1,GL_FALSE,v); } \
__NL__	void UniformMatrix##r##x##r(const char* nm,const X* v) { UniformMatrix##r(GetUniformLocation(nm),1,GL_FALSE,v); } \

#define UniformsMNTemplate_EXT(r,c,X,xl) \
__NL__	void UniformMatrix##r##x##c(GLuint l,const X* v) { UniformMatrix##r##x##c(l,1,GL_FALSE,v); }\
__NL__	void UniformMatrix##r##x##c(const char* nm,GLuint count,GLboolean transpose,const X* v) { UniformMatrix##r##x##c(GetUniformLocation(nm),count,transpose,v); }\
__NL__	void UniformMatrix##r##x##c(const char* nm,const X* v) { UniformMatrix##r##x##c(GetUniformLocation(nm),1,GL_FALSE,v); }\

#else

#define UniformsVTemplate_EXT(r,X,x) 
#define UniformsVPtrTemplate_EXT(r,X,x) 
#define UniformsMSquareTemplate_EXT(r,X,x)
#define UniformsMNTemplate_EXT(r,c,X,xl)

#endif

#define UniformsVector1(X,x) \
	UniformsVTemplate(1,X,x) \
	UniformsVTemplate_EXT(1,X,x) \
	UniformsVPtrTemplate(1,X,x) \
	UniformsVPtrTemplate_EXT(1,X,x) \

#define UniformsVectorR(r,X,x) \
	UniformsVTemplate(r,X,x) \
	UniformsVTemplate_EXT(r,X,x) \
	UniformsVPtrTemplate(r,X,x) \
	UniformsVPtrTemplate_EXT(r,X,x) \
	
#define UniformsMatrixROO(r,o1,o2,X,x) \
	UniformsMSquareTemplate(r,X,x) \
	UniformsMSquareTemplate_EXT(r,X,x) \
	UniformsMNTemplate(r,o1,X,x) \
	UniformsMNTemplate_EXT(r,o1,X,x) \
	UniformsMNTemplate(r,o2,X,x) \
	UniformsMNTemplate_EXT(r,o2,X,x) \

#define UniformsVectorTemplates(X,x) \
	UniformsVector1(X,x) \
	UniformsVectorR(2,X,x) \
	UniformsVectorR(3,X,x) \
	UniformsVectorR(4,X,x) \

#define UniformsMatrixTemplates(X,x) \
	UniformsMatrixROO(2,3,4,X,x) \
	UniformsMatrixROO(3,2,4,X,x) \
	UniformsMatrixROO(4,2,3,X,x) \


