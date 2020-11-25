
void Uniform1(GLint loc,GLint v0) { glProgramUniform1i (id,loc,v0); }
void Uniform1(GLint loc,GLsizei count, const GLint *value) { glProgramUniform1iv(id,loc,count,value); }
void Uniform2(GLint loc,GLint v0,GLint v1) { glProgramUniform2i (id,loc,v0,v1); }
void Uniform2(GLint loc,GLsizei count, const GLint *value) { glProgramUniform2iv(id,loc,count,value); }
void Uniform3(GLint loc,GLint v0,GLint v1,GLint v2) { glProgramUniform3i (id,loc,v0,v1,v2); }
void Uniform3(GLint loc,GLsizei count, const GLint *value) { glProgramUniform3iv(id,loc,count,value); }
void Uniform4(GLint loc,GLint v0,GLint v1,GLint v2,GLint v3) { glProgramUniform4i (id,loc,v0,v1,v2,v3); }
void Uniform4(GLint loc,GLsizei count, const GLint *value) { glProgramUniform4iv(id,loc,count,value); }

void Uniform1(GLint loc,GLfloat v0) { glProgramUniform1f (id,loc,v0); }
void Uniform1(GLint loc,GLsizei count, const GLfloat *value) { glProgramUniform1fv(id,loc,count,value); }
void Uniform2(GLint loc,GLfloat v0,GLfloat v1) { glProgramUniform2f (id,loc,v0,v1); }
void Uniform2(GLint loc,GLsizei count, const GLfloat *value) { glProgramUniform2fv(id,loc,count,value); }
void Uniform3(GLint loc,GLfloat v0,GLfloat v1,GLfloat v2) { glProgramUniform3f (id,loc,v0,v1,v2); }
void Uniform3(GLint loc,GLsizei count, const GLfloat *value) { glProgramUniform3fv(id,loc,count,value); }
void Uniform4(GLint loc,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3) { glProgramUniform4f (id,loc,v0,v1,v2,v3); }
void Uniform4(GLint loc,GLsizei count, const GLfloat *value) { glProgramUniform4fv(id,loc,count,value); }

void Uniform1(GLint loc,GLdouble v0) { glProgramUniform1d (id,loc,v0); }
void Uniform1(GLint loc,GLsizei count, const GLdouble *value) { glProgramUniform1dv(id,loc,count,value); }
void Uniform2(GLint loc,GLdouble v0,GLdouble v1) { glProgramUniform2d (id,loc,v0,v1); }
void Uniform2(GLint loc,GLsizei count, const GLdouble *value) { glProgramUniform2dv(id,loc,count,value); }
void Uniform3(GLint loc,GLdouble v0,GLdouble v1,GLdouble v2) { glProgramUniform3d (id,loc,v0,v1,v2); }
void Uniform3(GLint loc,GLsizei count, const GLdouble *value) { glProgramUniform3dv(id,loc,count,value); }
void Uniform4(GLint loc,GLdouble v0,GLdouble v1,GLdouble v2,GLdouble v3) { glProgramUniform4d (id,loc,v0,v1,v2,v3); }
void Uniform4(GLint loc,GLsizei count, const GLdouble *value) { glProgramUniform4dv(id,loc,count,value); }

void Uniform1(GLint loc,GLuint v0) { glProgramUniform1ui (id,loc,v0); }
void Uniform1(GLint loc,GLsizei count, const GLuint *value) { glProgramUniform1uiv(id,loc,count,value); }
void Uniform2(GLint loc,GLuint v0,GLuint v1) { glProgramUniform2ui (id,loc,v0,v1); }
void Uniform2(GLint loc,GLsizei count, const GLuint *value) { glProgramUniform2uiv(id,loc,count,value); }
void Uniform3(GLint loc,GLuint v0,GLuint v1,GLuint v2) { glProgramUniform3ui (id,loc,v0,v1,v2); }
void Uniform3(GLint loc,GLsizei count, const GLuint *value) { glProgramUniform3uiv(id,loc,count,value); }
void Uniform4(GLint loc,GLuint v0,GLuint v1,GLuint v2,GLuint v3) { glProgramUniform4ui (id,loc,v0,v1,v2,v3); }
void Uniform4(GLint loc,GLsizei count, const GLuint *value) { glProgramUniform4uiv(id,loc,count,value); }

void UniformMatrix2(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix2fv(id,loc,count,transpose,value); }
void UniformMatrix3(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix3fv(id,loc,count,transpose,value); }
void UniformMatrix4(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix4fv(id,loc,count,transpose,value); }
void UniformMatrix2x3(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix2x3fv(id,loc,count,transpose,value); }
void UniformMatrix3x2(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix3x2fv(id,loc,count,transpose,value); }
void UniformMatrix2x4(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix2x4fv(id,loc,count,transpose,value); }
void UniformMatrix4x2(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix4x2fv(id,loc,count,transpose,value); }
void UniformMatrix3x4(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix3x4fv(id,loc,count,transpose,value); }
void UniformMatrix4x3(GLint loc,GLsizei count, GLboolean transpose, const GLfloat* value) { glProgramUniformMatrix4x3fv(id,loc,count,transpose,value); }

void UniformMatrix2(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix2dv(id,loc,count,transpose,value); }
void UniformMatrix3(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix3dv(id,loc,count,transpose,value); }
void UniformMatrix4(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix4dv(id,loc,count,transpose,value); }
void UniformMatrix2x3(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix2x3dv(id,loc,count,transpose,value); }
void UniformMatrix2x4(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix2x4dv(id,loc,count,transpose,value); }
void UniformMatrix3x2(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix3x2dv(id,loc,count,transpose,value); }
void UniformMatrix3x4(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix3x4dv(id,loc,count,transpose,value); }
void UniformMatrix4x2(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix4x2dv(id,loc,count,transpose,value); }
void UniformMatrix4x3(GLint loc,GLsizei count, GLboolean transpose, const GLdouble* value) { glProgramUniformMatrix4x3dv(id,loc,count,transpose,value); }

void GetUniform(GLint loc,GLfloat* out) const { glGetUniformfv(id,loc,out);}
void GetnUniform(GLint loc,GLsizei bufSize,GLfloat* out) const { glGetnUniformfv(id,loc,bufSize,out); }
void GetUniform(GLint loc,GLdouble* out) const { glGetUniformdv(id,loc,out);}
void GetnUniform(GLint loc,GLsizei bufSize,GLdouble* out) const { glGetnUniformdv(id,loc,bufSize,out); }
void GetUniform(GLint loc,GLint* out) const { glGetUniformiv(id,loc,out);}
void GetnUniform(GLint loc,GLsizei bufSize,GLint* out) const { glGetnUniformiv(id,loc,bufSize,out); }
void GetUniform(GLint loc,GLuint* out) const { glGetUniformuiv(id,loc,out);}
void GetnUniform(GLint loc,GLsizei bufSize,GLuint* out) const { glGetnUniformuiv(id,loc,bufSize,out); }

#ifndef GLHPP_STRICT_API

template<class T> void Uniform1(const char* nm,const T& v0) { Uniform1(GetUniformLocation(nm),v0); }
template<class T> void Uniform1(const char* nm,GLsizei count, const T *value) { Uniform1(GetUniformLocation(nm),count,value); }
template<class T> void Uniform2(const char* nm,const T& v0,const T& v1) { Uniform2(GetUniformLocation(nm),v0,v1); }
template<class T> void Uniform2(const char* nm,GLsizei count, const T *value) { Uniform2(GetUniformLocation(nm),count,value); }
template<class T> void Uniform3(const char* nm,const T& v0,const T& v1,const T& v2) { Uniform3(GetUniformLocation(nm),v0,v1,v2); }
template<class T> void Uniform3(const char* nm,GLsizei count, const T *value) { Uniform3(GetUniformLocation(nm),count,value); }
template<class T> void Uniform4(const char* nm,const T& v0,const T& v1,const T& v2,const T& v3) { Uniform4(GetUniformLocation(nm),v0,v1,v2,v3); }
template<class T> void Uniform4(const char* nm,GLsizei count, const T *value) { Uniform4(GetUniformLocation(nm),count,value); }
template<class T> void UniformMatrix2(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix2(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix3(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix3(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix4(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix4(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix2x3(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix2x3(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix2x4(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix2x4(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix3x2(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix3x2(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix3x4(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix3x4(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix4x2(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix4x2(GetUniformLocation(nm),count,transpose,value); }
template<class T> void UniformMatrix4x3(const char* nm,GLsizei count, GLboolean transpose, const T* value) { UniformMatrix4x3(GetUniformLocation(nm),count,transpose,value); }

template<class LocType,class T> void Uniform(LocType loc,const T& v0) { Uniform1(loc,v0); }
template<class LocType,class T> void Uniform(LocType loc,const T& v0,const T& v1) { Uniform2(loc,v0,v1); }
template<class LocType,class T> void Uniform(LocType loc,const T& v0,const T& v1,const T& v2) { Uniform3(loc,v0,v1,v2); }
template<class LocType,class T> void Uniform(LocType loc,const T& v0,const T& v1,const T& v2,const T& v3) { Uniform4(loc,v0,v1,v2,v3); }

template<class LocType,class T,unsigned int N> struct UniformImpl;
template<class LocType,class T> struct UniformImpl<LocType,T,1> { static void uniform(Program& p,LocType loc,GLsizei count,const T* value){ p.Uniform1(loc,count,value); } };
template<class LocType,class T> struct UniformImpl<LocType,T,2> { static void uniform(Program& p,LocType loc,GLsizei count,const T* value){ p.Uniform2(loc,count,value); } };
template<class LocType,class T> struct UniformImpl<LocType,T,3> { static void uniform(Program& p,LocType loc,GLsizei count,const T* value){ p.Uniform3(loc,count,value); } };
template<class LocType,class T> struct UniformImpl<LocType,T,4> { static void uniform(Program& p,LocType loc,GLsizei count,const T* value){ p.Uniform4(loc,count,value); } };

template<class LocType,class T,unsigned int N>
void Uniform(LocType loc,GLsizei count,const T* value){ UniformImpl<LocType,T,N>::uniform(*this,loc,count,value); }
template<class LocType,class T,unsigned int N>
void Uniform(LocType loc,const T* value){ UniformImpl<LocType,T,N>::uniform(*this,loc,1,value); }

template<class LocType,class T,unsigned int N,unsigned int M> struct UniformMatrixImpl;
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,1,1> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform1(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,1,2> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform2(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,1,3> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform3(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,1,4> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform4(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,2,1> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform2(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,3,1> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform3(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,4,1> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean , const GLdouble* v){ p.Uniform4(l,c,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,2,2> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix2(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,2,3> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix2x3(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,2,4> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix2x4(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,3,2> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix3x2(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,3,3> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix3(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,3,4> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix3x4(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,4,2> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix4x2(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,4,3> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix4x3(l,c,t,v); } };
template<class LocType,class T> struct UniformMatrixImpl<LocType,T,4,4> { static void uniform_matrix(Program& p,GLint l,GLsizei c, GLboolean t, const GLdouble* v){ p.UniformMatrix4(l,c,t,v); } };

template<class LocType,class T,unsigned int N,unsigned int M>
void UniformMatrix(LocType loc,GLsizei count, GLboolean transpose, const T* value) { UniformMatrixImpl<LocType,T,N,M>::uniform_matrix(*this,loc,count,transpose,value); }

template<class LocType,class T,unsigned int N,unsigned int M>
void UniformMatrix(LocType loc,GLsizei count, const T* value) { UniformMatrix(loc,count,GL_FALSE,value); }

template<class LocType,class T,unsigned int N,unsigned int M>
void UniformMatrix(LocType loc,const T* value) { UniformMatrix(loc,1,GL_FALSE,value); }

template<class LocType,class T,unsigned int N>
std::array<T,N> GetUniform(LocType loc) { std::array<T,N> out; GetUniform(loc,&out[0]); return out; }

template<class LocType,class T,unsigned int N,unsigned int M>
std::array<std::array<T,M>,N> GetUniform(LocType loc) { 
	std::array<std::array<T,N>,M> out1; 
	std::array<std::array<T,M>,N> out2; 
	GetUniform(loc,&out1[0]); 
	for(unsigned j=0;j<M;j++) 
		for(unsigned i=0;i<N;i++)
		{
			out2[i][j]=out1[j][i];
		}
		return out2; 
}

template<class T,unsigned int N>
struct uniform_argv_t {
	const T* data;
};

template<class LocType,class T,unsigned int N>
inline void Uniform1(LocType loc,const uniform_argv_t<T,N>& arg)
{
	Uniform(loc,arg.data);
}

template<class T,unsigned int N,unsigned int M>
struct uniform_matrix_argv_t {
	const T* data;
	bool column_major;
};
template<class LocType,class Arg>
inline void Uniform1(LocType loc,const Arg& a)
{
	auto u=to_uniform(a);
	Uniform(loc,u);
}
template<class LocType,class T,unsigned int N,unsigned int M>
inline void UniformMatrix(LocType loc,const uniform_matrix_argv_t<T,N,M>& arg)
{
	UniformMatrix<M,N>(loc,1,arg.column_major ? GL_FALSE : GL_TRUE,arg.data);
}

template<class LocType,class Arg>
inline void UniformMatrix(LocType loc,const Arg& a)
{
	auto u=to_uniform_matrix(a);
	UniformMatrix(loc,u);
}

#endif // GLHPP_STRICT_API
