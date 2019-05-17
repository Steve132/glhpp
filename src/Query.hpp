#ifndef GLHPP_QUERY_HPP
#define GLHPP_QUERY_HPP




#ifdef GL_ALT_FUNDEF_GenQueries
class Query: public _impl::GLObject<Query>
{
public:
    
    Query(Query&& query) : _impl::GLObject<Query>(std::move(query)){}

    #if defined(GL_ALT_FUNDEF_BeginConditionalRender)
	void BeginConditionalRender(GLenum mode);
    #endif
    
    #if defined(GL_ALT_FUNDEF_EndConditionalRender)
    void EndConditionalRender();
    #endif

    #if defined(GL_ALT_FUNDEF_BeginQuery)
	void Begin(GLenum target);
    #endif
	
    #if defined(GL_ALT_FUNDEF_EndQuery)
    void End(GLenum target);
    #endif
	
    #if defined(GL_ALT_FUNDEF_BeginQueryIndexed)
	void BeginIndexed(GLenum target,GLuint index);
    #endif
    
    #if defined(GL_ALT_FUNDEF_EndQueryIndexed)
    void EndIndexed(GLenum target,GLuint index);
    #endif
    
	template<class T>
	T Get(GLenum) const;

	Query():
		_impl::GLObject<Query>("GLQuery",glGenQueries,glDeleteQueries)
	{}
	
    #ifdef GL_TIMESTAMP
	void Counter()
	{
		glQueryCounter(object,GL_TIMESTAMP);
		_impl::_checkError(GL_INVALID_OPERATION,"Query object is already in use within a glBeginQuery / glEndQuery block.");
		_impl::_checkError(GL_INVALID_VALUE,"Query object is not the name of a query object returned from a previous call to glGenQueries.");
	}
    #endif
	
protected:
	explicit Query(GLuint o):
		_impl::GLObject<Query>(o,glDeleteQueries)
	{}
};
#endif


#endif
