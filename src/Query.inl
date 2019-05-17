namespace gl
{

/////////////////////////////////////////////////////////////////////////////////////
/////////////// Query objects
#ifdef GL_ALT_FUNDEF_GenQueries
#if defined(GL_ALT_FUNDEF_BeginConditionalRender)
inline void Query::BeginConditionalRender(GLenum mode)
{
	glBeginConditionalRender(object,mode);
	_impl::_checkError(GL_INVALID_VALUE,"Id is not the name of an existing query object.");
	_impl::_checkError(GL_INVALID_ENUM,"Query Mode is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot begin conditional rendering while conditional rendering is already active OR Id is the name of a query object with a target other than GL_SAMPLES_PASSED or GL_ANY_SAMPLES_PASSED or Id is the name of a query currently in progress.");
}
#endif
#if defined(GL_ALT_FUNDEF_EndConditionalRender)
inline void Query::EndConditionalRender()
{
	glEndConditionalRender();
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end conditional rendering if conditional rendering is inactive");
}
#endif
    
#if defined(GL_ALT_FUNDEF_BeginQuery)
inline void Query::Begin(GLenum target)
{
	glBeginQuery(target,object);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot interrupt a query object of the same target which is already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif
    
#if defined(GL_ALT_FUNDEF_EndQuery)
inline void Query::End(GLenum target)
{
	glEndQuery(target);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end a query objec which is not already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif

#if defined(GL_ALT_FUNDEF_BeginQueryIndexed)
inline void Query::BeginIndexed(GLenum target,GLuint index)
{
	glBeginQueryIndexed(target,index,object);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot interrupt a query object of the same target which is already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif
    
#if defined(GL_ALT_FUNDEF_EndQueryIndexed)
inline void Query::EndIndexed(GLenum target,GLuint index)
{
	glEndQueryIndexed(target,index);
	_impl::_checkError(GL_INVALID_ENUM,"Query failed: Target is not one of the accepted tokens.");
	_impl::_checkError(GL_INVALID_OPERATION,"Cannot end a query objec which is not already active OR"
											" id is 0. OR"
											" id is the name of an already active query object. OR "
											" id refers to an existing query object whose type does not does not match target. ");
}
#endif

    
#if defined(GL_ALT_FUNDEF_GetQueryObjectiv)
template<>
inline GLint Query::Get<GLint>(GLenum pname) const
{
	GLint p;
	glGetQueryObjectiv(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif

#if defined(GL_ALT_FUNDEF_GetQueryObjectuiv)
template<>
inline GLuint Query::Get<GLuint>(GLenum pname) const
{
	GLuint p;
	glGetQueryObjectuiv(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif
 
#if defined(GL_ALT_FUNDEF_GetQueryObjecti64v)
template<>
inline GLint64 Query::Get<GLint64>(GLenum pname) const
{
	GLint64 p;
	glGetQueryObjecti64v(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif
 
#if defined(GL_ALT_FUNDEF_GetQueryObjectui64v)
template<>
inline GLuint64 Query::Get<GLuint64>(GLenum pname) const
{
	GLuint64 p;
	glGetQueryObjectui64v(object,pname,&p);
	_impl::_checkError(GL_INVALID_ENUM,"pname is not an accepted value to get.");
	_impl::_checkError(GL_INVALID_OPERATION,"Id is not the name of an active query object");
	return p;
}
#endif

#endif
    
    



}
