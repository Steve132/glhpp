#ifndef GLHPP_COMPUTE_HPP
#define GLHPP_COMPUTE_HPP

namespace gl
{
#ifdef GLHPP_STRICT_API
	inline void DispatchCompute(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z)
	{
		glDispatchCompute(num_groups_x,num_groups_y,num_groups_z);
	}
#else
	inline void DispatchCompute(GLuint num_groups_x,GLuint num_groups_y=1,GLuint num_groups_z=1)
	{
		glDispatchCompute(num_groups_x,num_groups_y,num_groups_z);
	}
#endif
	inline void DispatchComputeIndirect(GLintptr indirect)
	{
		glDispatchComputeIndirect(indirect);
	}
}

#endif
