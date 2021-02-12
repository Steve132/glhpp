#ifndef GLHPP_PROGRAM_HPP
#define GLHPP_PROGRAM_HPP

#include "Object.hpp"
#include "Shader.hpp"
#include <vector>
#include <algorithm>

namespace gl
{
	class Program: public impl::DefaultableObject<Program,GL_PROGRAM>
	{
	protected:
		Program(impl::NullInitializerFlagType) {}
		Program(GLuint initer)
		{
			id=initer;
			deleter_func=deleteProgram;
		}
		
		static void deleteProgram(GLsizei,const GLuint* id){ glDeleteProgram(*id); }
		friend class Shader;
	public:
		Program():Program(glCreateProgram())
		{}
		virtual GLboolean Is() const override{ return glIsProgram(id); }
		
		void AttachShader(const Shader& shader)
		{
			glAttachShader(id,shader.name());
		}
		void DetachShader(const Shader& shader)
		{
			glDetachShader(id,shader.name());
		}
		void Link()
		{
			glLinkProgram(id);
		}
		void Use() const
		{
			glUseProgram(id);
		}
		void Parameter(GLenum pname,GLint value)
		{
			glProgramParameteri(id,pname,value);
		}
		void Validate() const
		{
			glValidateProgram(id);
		}
		void BindAttribLocation(GLuint index, const GLchar* name) const
		{
			glBindAttribLocation(id, index, name);
		}
		void GetActiveAttrib(GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) const
		{
			glGetActiveAttrib(id, index, bufSize, length, size, type, name);
		}
		GLint GetAttribLocation(const char* name) const
		{
			return glGetAttribLocation(id, name);
		}
		void Get(GLenum pname,GLint *params) const
		{
			glGetProgramiv(id,pname,params);
		}
		void GetInfoLog(GLsizei bufSize, GLsizei *length, GLchar *infoLog) const
		{
			glGetProgramInfoLog(id,bufSize,length,infoLog);
		}
#ifndef GLHPP_STRICT_API
		std::string GetInfoLog() const
		{
			GLsizei bufsize=this->Get(GL_INFO_LOG_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetInfoLog(bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
		GLint Get(GLenum pname) const
		{
			GLint out;this->Get(pname,&out);return out;
		}
		struct activeAttribResult
		{
			GLint size;
			GLenum type;
			std::string name;
		};
		activeAttribResult GetActiveAttrib(GLuint index) const
		{
			GLsizei bufsize=this->Get(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
			std::string out(bufsize+1,'\0');
			activeAttribResult res;
			GLsizei lenout;
			res.name = out;
			GetActiveAttrib(index, bufsize, &lenout, &res.size, &res.type, const_cast<char*>(res.name.data()));
			res.name.resize(lenout);
			return res;
		}
		GLint GetAttribLocation(const std::string& name) const
		{
			return GetAttribLocation(name.c_str());
		}
#endif
		
		void GetInterface(GLenum programInterface,GLenum pname,GLint* params) const
		{
			glGetProgramInterfaceiv(id,programInterface,pname,params);
		}
		GLuint GetResourceIndex(GLenum programInterface,const char* name) const
		{
			return glGetProgramResourceIndex(id,programInterface,name);
		}
		void GetResourceName(GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar* name) const
		{
			glGetProgramResourceName(id,programInterface,index,bufSize,length,name);
		}
		void GetResource(GLenum programInterface,GLuint index,GLsizei propCount,const GLenum* props,GLsizei bufSize,GLsizei* length,GLint* params) const
		{
			glGetProgramResourceiv(id,programInterface,index,propCount,props,bufSize,length,params);
		}
#ifndef GLHPP_STRICT_API
		GLint GetInterface(GLenum programInterface,GLenum pname) const
		{
			GLint out;GetInterface(programInterface,pname,&out);return out;
		}
		GLuint GetResourceIndex(GLenum programInterface,const std::string& name) const
		{
			return GetResourceIndex(programInterface,name.c_str());
		}
		std::string GetResourceName(GLenum programInterface,GLuint index) const
		{
			GLsizei bufsize=GetInterface(programInterface,GL_MAX_NAME_LENGTH);
			std::string out(bufsize+1,'\0');
			GLsizei lenout;
			GetResourceName(programInterface,index,bufsize,&lenout,const_cast<char*>(out.data()));
			out.resize(lenout);
			return out;
		}
		GLint GetResource(GLenum programInterface,GLuint index,GLenum prop) const
		{
			if(prop==GL_ACTIVE_VARIABLES) throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetResource to query a multi-valued program resource.  Try GetResource_Multi");
		
			GLint out;
			GLsizei lenout;
			GetResource(programInterface,index,1,&prop,1,&lenout,&out);
			return out;
		}
		std::vector<GLint> GetResource_Multi(GLenum programInterface,GLuint index,GLenum prop) const
		{
			if(prop!=GL_ACTIVE_VARIABLES) return {GetResource(programInterface,index,prop)};
			
			GLsizei numOut=GetResource(programInterface,index,GL_NUM_ACTIVE_VARIABLES);
			std::vector<GLint> outvec(numOut);
			GetResource(programInterface,index,1,&prop,numOut,nullptr,outvec.data());
			return outvec;
		}
		std::vector<GLint> GetResource(GLenum programInterface,GLuint index,const GLenum* pbegin,const GLenum* pend) const
		{
			const GLenum* presult=std::find(pbegin,pend,GL_ACTIVE_VARIABLES);
			if(presult != pend) throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetResource to query a multi-valued program resource. Try GetResource_Multi");
			std::vector<GLint> out(pend-pbegin);
			GetResource(programInterface,index, (GLsizei)out.size(),pbegin, (GLsizei)out.size(),nullptr,out.data());
			return out;
		}
#endif
		GLint GetResourceLocation(GLenum programInterface,const GLchar* name) const
		{
			return glGetProgramResourceLocation(id,programInterface,name);
		}
		GLuint GetResourceLocationIndex(GLenum programInterface,const char *nm) const
		{
			return glGetProgramResourceLocationIndex(id,programInterface,nm);
		}
		void GetBinary(GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,GLvoid *binary) const
		{
			glGetProgramBinary(id,bufSize,length,binaryFormat,binary);
		}
		void Binary(GLenum binaryFormat,const GLvoid* binary,GLsizei length)
		{
			glProgramBinary(id,binaryFormat,binary,length);
		}
		
#ifndef GLHPP_STRICT_API
		struct binaryProgram
		{
			GLenum binaryFormat;
			std::vector<GLubyte> binary;
		};
		binaryProgram GetBinary() const
		{
			GLsizei binlength=this->Get(GL_PROGRAM_BINARY_LENGTH);
			binaryProgram bp;
			bp.binary.resize(binlength);
			GLsizei lenout;
			GetBinary((GLsizei)bp.binary.size(),&lenout,&bp.binaryFormat,bp.binary.data());
			return bp;
		}
		void Binary(const binaryProgram& bp)
		{
			Binary(bp.binaryFormat,bp.binary.data(), (GLsizei)bp.binary.size());
		}
#endif
		GLint GetUniformLocation(const char* nm) const
		{
			return glGetUniformLocation(id,nm);
		}
		void GetActiveUniformName(GLuint index,GLsizei bufSize,GLsizei* length,char *uniformName) const
		{
			glGetActiveUniformName(id,index,bufSize,length,uniformName);
		}
		void GetUniformIndices(GLsizei uniformCount,const GLchar * const * uniformNames,GLuint *uniformIndices) const
		{
			glGetUniformIndices(id,uniformCount,uniformNames,uniformIndices);
		}
		void GetActiveUniform(GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name) const
		{
			glGetActiveUniform(id,index,bufSize,length,size,type,name);
		}
		void GetActiveUniforms(GLsizei uniformCount,const GLuint* uniformIndices,GLenum pname,GLint* params) const
		{
			glGetActiveUniformsiv(id,uniformCount,uniformIndices,pname,params);
		}
		
#ifndef GLHPP_STRICT_API
		std::string GetActiveUniformName(GLuint index) const
		{
			GLsizei len;
			GetActiveUniformName(index,0,&len,nullptr);
			std::string out(len+1,'\0');
			GetActiveUniformName(index, (GLsizei)out.size(),&len,const_cast<char*>(out.data()));
			return out;
		}
		std::vector<GLuint> GetUniformIndices(const std::string* uniformNameB,const std::string* uniformNameE) const
		{
			size_t n=(uniformNameE-uniformNameB);
			std::vector<const GLchar*> namesPtrs(n);
			std::vector<GLuint> out(n);
			for(size_t i=0;i < n;i++) namesPtrs[i]=uniformNameB[i].c_str();
			GetUniformIndices((GLsizei)n,namesPtrs.data(),out.data());
			return out;
		}
		struct uniformInfo
		{
			GLsizei length;
			GLint size;
			GLenum type;
			std::string name;
		};
		uniformInfo GetActiveUniform(GLuint index) const
		{
			uniformInfo info;
			GetActiveUniform(index,0,&info.length,&info.size,&info.type,nullptr);
			info.name.resize(info.length+1,'\0');
			GetActiveUniform(index, (GLsizei)info.name.size(),&info.length,&info.size,&info.type,const_cast<char*>(info.name.data()));
			return info;
		}
		std::vector<GLint> GetActiveUniforms(const GLuint* indicesB,const GLuint* indicesE,GLenum pname) const
		{
			size_t N=indicesE-indicesB;
			std::vector<GLint> out(N);
			GetActiveUniforms((GLsizei)N,indicesB,pname,out.data());
			return out;
		}
#endif
		GLuint GetUniformBlockIndex(const char* uniformBlockName) const
		{
			return glGetUniformBlockIndex(id,uniformBlockName);
		}
		void GetActiveUniformBlockName(GLuint uniformBlockIndex,GLsizei bufSize, GLsizei* length,char* uniformBlockName) const
		{
			glGetActiveUniformBlockName(id,uniformBlockIndex,bufSize,length,uniformBlockName);
		}
		void GetActiveUniformBlock(GLuint uniformBlockIndex,GLenum pname,GLint* params) const
		{
			glGetActiveUniformBlockiv(id,uniformBlockIndex,pname,params);
		}
		void GetActiveAtomicCounterBuffer(GLuint bufferIndex,GLenum pname,GLint* params) const
		{
			glGetActiveAtomicCounterBufferiv(id,bufferIndex,pname,params);
		}
#ifndef GLHPP_STRICT_API
		std::string GetActiveUniformBlockName(GLuint uniformBlockIndex) const
		{
			std::string out;
			GLsizei len;
			GetActiveUniformBlockName(uniformBlockIndex,0,&len,nullptr);
			out.resize(len+1,'\0');
			GetActiveUniformBlockName(uniformBlockIndex, (GLsizei)out.size(),&len,const_cast<char*>(out.data()));
			return out;
		}
		GLint GetActiveUniformBlock(GLuint uniformBlockIndex,GLenum pname) const
		{
			if(pname==GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES) 
				throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetActiveUniformBlock to query GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES. See GetActiveUniformBlock_Multi");
			GLint out;
			GetActiveUniformBlock(uniformBlockIndex,pname,&out);
			return out;
		}
		std::vector<GLint> GetActiveUniformBlock_Multi(GLuint uniformBlockIndex,GLenum pname) const
		{
			if(pname!=GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES) return {GetActiveUniformBlock(uniformBlockIndex,pname)};
			GLint len=GetActiveUniformBlock(uniformBlockIndex,GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS);
			std::vector<GLint> out(len);
			GetActiveUniformBlock(uniformBlockIndex,pname,out.data());
			return out;
		}
		GLint GetActiveAtomicCounterBuffer(GLuint bufferIndex,GLenum pname) const
		{
			if(pname==GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES) 
				throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetActiveAtomicCounterBuffer to query GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES. See GetActiveAtomicCounterBuffer_Multi");
			GLint out;
			GetActiveAtomicCounterBuffer(bufferIndex,pname,&out);
			return out;
		}
		std::vector<GLint> GetActiveAtomicCounterBuffer_Multi(GLuint bufferIndex,GLenum pname) const
		{
			if(pname!=GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES) return {GetActiveAtomicCounterBuffer(bufferIndex,pname)};
			GLint len=GetActiveAtomicCounterBuffer(bufferIndex,GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS);
			std::vector<GLint> out(len);
			GetActiveAtomicCounterBuffer(bufferIndex,pname,out.data());
			return out;
		}
#endif
			
		//Todo: object oriented bindings for the above.  Like program.ActiveAtomicCounterBuffer(0).Get(pname);
		
#include "Uniforms.hpp"
		
		void UniformBlockBinding(GLuint uniformBlockIndex,GLuint uniformBlockBinding)
		{
			glUniformBlockBinding(id,uniformBlockIndex,uniformBlockBinding);
		}
		void ShaderStorageBlockBinding(GLuint storageBlockIndex,GLuint storageBlockBinding)
		{
			glShaderStorageBlockBinding(id,storageBlockIndex,storageBlockBinding);
		}
			
		GLint GetSubroutineUniformLocation(GLenum shaderType,const char* nm) const
		{
			return glGetSubroutineUniformLocation(id,shaderType,nm);
		}
		GLuint GetSubroutineIndex(GLenum shaderType,const char* nm) const
		{
			return glGetSubroutineIndex(id,shaderType,nm);
		}
		void GetActiveSubroutineName(GLenum shaderType,GLuint index,GLsizei bufSize,GLsizei* length,char* nm) const
		{
			glGetActiveSubroutineName(id,shaderType,index,bufSize,length,nm);
		}
		void GetActiveSubroutineUniformName(GLenum shaderType,GLuint index,GLsizei bufSize,GLsizei *length, char* nm) const
		{
			glGetActiveSubroutineUniformName(id,shaderType,index,bufSize,length,nm);
		}
		void GetActiveSubroutineUniform(GLenum shaderType,GLuint index,GLenum pname,int* values) const
		{
			glGetActiveSubroutineUniformiv(id,shaderType,index,pname,values);
		}
		static void UniformSubroutines(GLenum shaderType,GLsizei count,const GLuint* indices)
		{
			glUniformSubroutinesuiv(shaderType,count,indices);
		}
		static void GetUniformSubroutine(GLenum shaderType,int location,GLuint* params)
		{
			glGetUniformSubroutineuiv(shaderType,location,params);
		}
		#ifndef GLHPP_STRICT_API
		std::string GetActiveSubroutineName(GLenum shaderType,GLuint index) const
		{
			GLsizei len;
			GetActiveSubroutineName(shaderType,index,0,&len,nullptr);
			std::string out(len+1,'\0');
			GetActiveSubroutineName(shaderType,index,len,&len,const_cast<char*>(out.data()));
			return out;
		}
		std::string GetActiveSubroutineUniformName(GLenum shaderType,GLuint index) const
		{
			GLsizei len;
			GetActiveSubroutineUniformName(shaderType,index,0,&len,nullptr);
			std::string out(len+1,'\0');
			GetActiveSubroutineUniformName(shaderType,index,len,&len,const_cast<char*>(out.data()));
			return out;
		}
		GLint GetActiveSubroutineUniform(GLenum shaderType,GLuint index,GLenum pname) const
		{
			if(pname==GL_COMPATIBLE_SUBROUTINES) 
				throw Exception(GLHPP_CUSTOM_EXCEPTION,"Cannot use this GLHPP version of GetActiveSubroutineUniform to query GL_COMPATIBLE_SUBROUTINES. See GetActiveSubroutineUniform_Multi");
			GLint out;
			GetActiveSubroutineUniform(shaderType,index,pname,&out);
			return out;
		}
		std::vector<GLint> GetActiveSubroutineUniform_Multi(GLenum shaderType,GLuint index,GLenum pname) const
		{
			if(pname!=GL_COMPATIBLE_SUBROUTINES) return {GetActiveSubroutineUniform(shaderType,index,pname)};
			GLint len=GetActiveSubroutineUniform(shaderType,index,GL_NUM_COMPATIBLE_SUBROUTINES);
			std::vector<GLint> out(len);
			GetActiveSubroutineUniform(shaderType,index,pname,out.data());
			return out;
		}
		//TODO uniform subroutine helpers
		#endif
		
		
		void GetAttachedShaders(GLsizei maxCount,GLsizei *count,GLuint *shaders) const
		{
			glGetAttachedShaders(id,maxCount,count,shaders);
		}
		void GetStage(GLenum shaderType,GLenum pname,GLint* values) const
		{
			glGetProgramStageiv(id,shaderType,pname,values);
		}
#ifndef GLHPP_STRICT_API
		std::vector<GLuint> GetAttachedShaders() const
		{
			GLsizei len=this->Get(GL_ATTACHED_SHADERS);
			std::vector<GLuint> out(len);
			GetAttachedShaders(len,NULL,out.data());
			return out;
		}
		GLint GetStage(GLenum shaderType,GLenum pname) const
		{
			GLint out;GetStage(shaderType,pname,&out);return out;
		}
#endif
		void TransformFeedbackVaryings(GLsizei count, const GLchar* const* varyings, GLenum bufferMode)
		{
			glTransformFeedbackVaryings(id, count, varyings, bufferMode);
		}
#ifndef GLHPP_STRICT_API
		void TransformFeedbackVaryings(const std::vector<std::string>& varyings, GLenum bufferMode)
		{
			GLsizei count = static_cast<GLsizei>(varyings.size());
			std::vector<const char*> varyingsVec(varyings.size());
			for(std::size_t i = 0; i < varyings.size(); i++)
			{
				varyingsVec[i] = varyings[i].c_str();
			}
			TransformFeedbackVaryings(count, varyingsVec.data(), bufferMode);
		}
#endif
		void BindFragDataLocationIndexed(GLuint colorNumber,GLuint index, const char *name)
		{
			glBindFragDataLocationIndexed(id,colorNumber,index,name);
		}
		void BindFragDataLocation(GLuint colorNumber, const char *name)
		{
			glBindFragDataLocation(id,colorNumber,name);
		}
		GLint GetFragDataLocation(const char *name) const
		{
			return glGetFragDataLocation(id,name);
		}
		GLint GetFragDataIndex(const char *name) const
		{
			return glGetFragDataIndex(id,name);
		}
	};
	
	inline Program Shader::CreateProgram(GLenum type,GLsizei count, const char * const * strings)
	{
		GLuint out=glCreateShaderProgramv(type,count,strings);
		return Program(out);
	}
	#ifndef GLHPP_STRICT_API
	inline Program Shader::CreateProgram(GLenum type,const std::string& text)
	{
		const char* strs=text.c_str();
		return CreateProgram(type,1,&strs);
	}
	#endif
}

#endif
