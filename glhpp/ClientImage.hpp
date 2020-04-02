#ifndef GLHPP_CLIENTIMAGE_HPP
#define GLHPP_CLIENTIMAGE_HPP

#include "Formats.hpp"
#include <array>

namespace glhpp
{
	
#ifndef GLHPP_STRICT_API

namespace impl
{
struct ClientImageBase
{
protected:
	std::array<size_t,3> m_shape;
	std::vector<uint8_t> m_data;
	unsigned int m_dims;
	size_t m_size;
public:
	ClientImageBase(const std::array<size_t,3>& tshape={0,0,0}):
		m_shape(tshape)
	{
		for(m_dims=0;m_dims<3;m_dims++)
		{}
		for(unsigned int d=m_dims;d<3;d++)
		{
			m_shape[d]=1;
		}
	}
	unsigned int dims() const { return m_dims; }
	const std::array<size_t,3>& shape() const { return m_shape; }
	size_t size() const { return m_size; }
	const uint8_t* data() const { return m_data.data();}
	uint8_t* data() { return m_data.data(); }
};
}

struct ClientImage: public impl::ClientImageBase
{
protected:
	std::array<size_t,3> m_strides;
	size_t m_elementsize;
	GLenum m_format;
	GLenum m_type;
public:
	ClientImage(GLenum tformat,GLenum ttype,const std::array<size_t,3>& tshape={0,0,0}):
		impl::ClientImageBase(tshape),
		m_elementsize(gl::impl::ElementSize(tformat,ttype)),
		m_format(tformat),
		m_type(ttype)
	{
		m_size=m_shape[0]*m_shape[1]*m_shape[2]*m_elementsize;
		m_strides[0]=m_elementsize;
		m_strides[1]=m_strides[0]*m_shape[1];
		m_strides[2]=m_strides[1]*m_shape[2];
		m_data.resize(m_size*m_elementsize);
	}
	
	size_t byte_offset(size_t x,size_t y=0,size_t z=0) const { return x*m_strides[0]+y*m_strides[1]+z*m_strides[2]; }
	
	using impl::ClientImageBase::data;
	const uint8_t* data(size_t x,size_t y=0,size_t z=0) const { return impl::ClientImageBase::data()+byte_offset(x,y,z);}
	uint8_t* data(size_t x,size_t y=0,size_t z=0) { return impl::ClientImageBase::data()+byte_offset(x,y,z); }
	
	size_t elementsize() const { return m_elementsize; }
	GLenum format() const {return m_format; }
	GLenum type() const { return m_type; }
};

struct ClientCompressedImage: public impl::ClientImageBase
{
protected:
	GLenum m_internalformat;
public:
	ClientCompressedImage(GLenum tinternalformat,size_t sz,const std::array<size_t,3>& tshape={0,0,0}):
		impl::ClientImageBase(tshape),
		m_internalformat(tinternalformat)
	{
		m_size=sz;
		m_data.resize(m_size);
	}
	GLenum internalformat() const { return m_internalformat; }
};
#endif
}


#endif
