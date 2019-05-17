namespace gl
{
/////////////////////////////////////////////////////////////////////////////////////
////Implementation-Defined stuff
namespace _impl
{
inline void _handleError(GLenum errcode,const std::string& what)
{
	throw Exception(errcode,what);
}
    
#ifdef GL_HPP_ERROR_CHECKING
/*static */inline void _checkError(GLenum errcode,const std::string& what)
{
	static const unsigned int NUM_ERRORS=6;
	static const GLenum errenums[NUM_ERRORS]={GL_INVALID_ENUM,GL_INVALID_VALUE,GL_INVALID_OPERATION,GL_INVALID_FRAMEBUFFER_OPERATION,GL_OUT_OF_MEMORY,GL_HPP_CUSTOM};
	static const std::string errstring[NUM_ERRORS]={"GL_INVALID_ENUM","GL_INVALID_VALUE","GL_INVALID_OPERATION","GL_INVALID_FRAMEBUFFER_OPERATION","GL_OUT_OF_MEMORY","GL_HPP_CUSTOM"};

	static GLuint errcount[NUM_ERRORS]={0,0,0,0,0,0};
	for(GLenum lerror=glGetError();lerror!=GL_NO_ERROR;lerror=glGetError())
	{
		const GLenum* ptrenum=std::find(errenums,errenums+NUM_ERRORS,lerror);
		if(ptrenum!=(errenums+NUM_ERRORS))
		{
			errcount[ptrenum-errenums]++;
		}
	}

	for(long i=0;i<NUM_ERRORS;i++)
	{
		if(errenums[i]==errcode && errcount[i]>0)
		{
			_handleError(errenums[i],(errstring[i]+':')+what);
			errcount[i]--;
		}
	}
}
#else
inline void _checkError(GLenum,const std::string&)
{}
#endif

}


///////////////////////////////////////////////////////
///Error Handling
inline Exception::Exception(GLenum cde,const std::string& wh):
		std::runtime_error(wh),
		code(cde)
{}

}
