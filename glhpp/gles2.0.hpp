#ifndef GL_HPP_GL_ES_VERSION_2_0_HPP
#define GL_HPP_GL_ES_VERSION_2_0_HPP
#include "common.hpp"


#ifndef GL_HPP_API_NAME
#define GL_HPP_API_NAME GL_HPP_GLES_API
#endif
#ifndef GL_HPP_API_VERSION
#define GL_HPP_API_VERSION 200
#endif
#undef GL_NONE
static const GLenum GL_NONE=0
#undef GL_ZERO
static const GLenum GL_ZERO=0
#undef GL_FALSE
static const GLenum GL_FALSE=0
#undef GL_NO_ERROR
static const GLenum GL_NO_ERROR=0
#undef GL_POINTS
static const GLenum GL_POINTS=0x0000
#undef GL_DEPTH_BUFFER_BIT
static const GLenum GL_DEPTH_BUFFER_BIT=0x00000100
#undef GL_STENCIL_BUFFER_BIT
static const GLenum GL_STENCIL_BUFFER_BIT=0x00000400
#undef GL_COLOR_BUFFER_BIT
static const GLenum GL_COLOR_BUFFER_BIT=0x00004000
#undef GL_LINES
static const GLenum GL_LINES=0x0001
#undef GL_LINE_LOOP
static const GLenum GL_LINE_LOOP=0x0002
#undef GL_LINE_STRIP
static const GLenum GL_LINE_STRIP=0x0003
#undef GL_TRIANGLES
static const GLenum GL_TRIANGLES=0x0004
#undef GL_TRIANGLE_STRIP
static const GLenum GL_TRIANGLE_STRIP=0x0005
#undef GL_TRIANGLE_FAN
static const GLenum GL_TRIANGLE_FAN=0x0006
#undef GL_NEVER
static const GLenum GL_NEVER=0x0200
#undef GL_LESS
static const GLenum GL_LESS=0x0201
#undef GL_EQUAL
static const GLenum GL_EQUAL=0x0202
#undef GL_LEQUAL
static const GLenum GL_LEQUAL=0x0203
#undef GL_GREATER
static const GLenum GL_GREATER=0x0204
#undef GL_NOTEQUAL
static const GLenum GL_NOTEQUAL=0x0205
#undef GL_GEQUAL
static const GLenum GL_GEQUAL=0x0206
#undef GL_ALWAYS
static const GLenum GL_ALWAYS=0x0207
#undef GL_SRC_COLOR
static const GLenum GL_SRC_COLOR=0x0300
#undef GL_ONE_MINUS_SRC_COLOR
static const GLenum GL_ONE_MINUS_SRC_COLOR=0x0301
#undef GL_SRC_ALPHA
static const GLenum GL_SRC_ALPHA=0x0302
#undef GL_ONE_MINUS_SRC_ALPHA
static const GLenum GL_ONE_MINUS_SRC_ALPHA=0x0303
#undef GL_DST_ALPHA
static const GLenum GL_DST_ALPHA=0x0304
#undef GL_ONE_MINUS_DST_ALPHA
static const GLenum GL_ONE_MINUS_DST_ALPHA=0x0305
#undef GL_DST_COLOR
static const GLenum GL_DST_COLOR=0x0306
#undef GL_ONE_MINUS_DST_COLOR
static const GLenum GL_ONE_MINUS_DST_COLOR=0x0307
#undef GL_SRC_ALPHA_SATURATE
static const GLenum GL_SRC_ALPHA_SATURATE=0x0308
#undef GL_FRONT
static const GLenum GL_FRONT=0x0404
#undef GL_BACK
static const GLenum GL_BACK=0x0405
#undef GL_FRONT_AND_BACK
static const GLenum GL_FRONT_AND_BACK=0x0408
#undef GL_INVALID_ENUM
static const GLenum GL_INVALID_ENUM=0x0500
#undef GL_INVALID_VALUE
static const GLenum GL_INVALID_VALUE=0x0501
#undef GL_INVALID_OPERATION
static const GLenum GL_INVALID_OPERATION=0x0502
#undef GL_OUT_OF_MEMORY
static const GLenum GL_OUT_OF_MEMORY=0x0505
#undef GL_INVALID_FRAMEBUFFER_OPERATION
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION=0x0506
#undef GL_CW
static const GLenum GL_CW=0x0900
#undef GL_CCW
static const GLenum GL_CCW=0x0901
#undef GL_LINE_WIDTH
static const GLenum GL_LINE_WIDTH=0x0B21
#undef GL_CULL_FACE
static const GLenum GL_CULL_FACE=0x0B44
#undef GL_CULL_FACE_MODE
static const GLenum GL_CULL_FACE_MODE=0x0B45
#undef GL_FRONT_FACE
static const GLenum GL_FRONT_FACE=0x0B46
#undef GL_DEPTH_RANGE
static const GLenum GL_DEPTH_RANGE=0x0B70
#undef GL_DEPTH_TEST
static const GLenum GL_DEPTH_TEST=0x0B71
#undef GL_DEPTH_WRITEMASK
static const GLenum GL_DEPTH_WRITEMASK=0x0B72
#undef GL_DEPTH_CLEAR_VALUE
static const GLenum GL_DEPTH_CLEAR_VALUE=0x0B73
#undef GL_DEPTH_FUNC
static const GLenum GL_DEPTH_FUNC=0x0B74
#undef GL_STENCIL_TEST
static const GLenum GL_STENCIL_TEST=0x0B90
#undef GL_STENCIL_CLEAR_VALUE
static const GLenum GL_STENCIL_CLEAR_VALUE=0x0B91
#undef GL_STENCIL_FUNC
static const GLenum GL_STENCIL_FUNC=0x0B92
#undef GL_STENCIL_VALUE_MASK
static const GLenum GL_STENCIL_VALUE_MASK=0x0B93
#undef GL_STENCIL_FAIL
static const GLenum GL_STENCIL_FAIL=0x0B94
#undef GL_STENCIL_PASS_DEPTH_FAIL
static const GLenum GL_STENCIL_PASS_DEPTH_FAIL=0x0B95
#undef GL_STENCIL_PASS_DEPTH_PASS
static const GLenum GL_STENCIL_PASS_DEPTH_PASS=0x0B96
#undef GL_STENCIL_REF
static const GLenum GL_STENCIL_REF=0x0B97
#undef GL_STENCIL_WRITEMASK
static const GLenum GL_STENCIL_WRITEMASK=0x0B98
#undef GL_VIEWPORT
static const GLenum GL_VIEWPORT=0x0BA2
#undef GL_DITHER
static const GLenum GL_DITHER=0x0BD0
#undef GL_BLEND
static const GLenum GL_BLEND=0x0BE2
#undef GL_SCISSOR_BOX
static const GLenum GL_SCISSOR_BOX=0x0C10
#undef GL_SCISSOR_TEST
static const GLenum GL_SCISSOR_TEST=0x0C11
#undef GL_COLOR_CLEAR_VALUE
static const GLenum GL_COLOR_CLEAR_VALUE=0x0C22
#undef GL_COLOR_WRITEMASK
static const GLenum GL_COLOR_WRITEMASK=0x0C23
#undef GL_UNPACK_ALIGNMENT
static const GLenum GL_UNPACK_ALIGNMENT=0x0CF5
#undef GL_PACK_ALIGNMENT
static const GLenum GL_PACK_ALIGNMENT=0x0D05
#undef GL_MAX_TEXTURE_SIZE
static const GLenum GL_MAX_TEXTURE_SIZE=0x0D33
#undef GL_MAX_VIEWPORT_DIMS
static const GLenum GL_MAX_VIEWPORT_DIMS=0x0D3A
#undef GL_SUBPIXEL_BITS
static const GLenum GL_SUBPIXEL_BITS=0x0D50
#undef GL_RED_BITS
static const GLenum GL_RED_BITS=0x0D52
#undef GL_GREEN_BITS
static const GLenum GL_GREEN_BITS=0x0D53
#undef GL_BLUE_BITS
static const GLenum GL_BLUE_BITS=0x0D54
#undef GL_ALPHA_BITS
static const GLenum GL_ALPHA_BITS=0x0D55
#undef GL_DEPTH_BITS
static const GLenum GL_DEPTH_BITS=0x0D56
#undef GL_STENCIL_BITS
static const GLenum GL_STENCIL_BITS=0x0D57
#undef GL_TEXTURE_2D
static const GLenum GL_TEXTURE_2D=0x0DE1
#undef GL_DONT_CARE
static const GLenum GL_DONT_CARE=0x1100
#undef GL_FASTEST
static const GLenum GL_FASTEST=0x1101
#undef GL_NICEST
static const GLenum GL_NICEST=0x1102
#undef GL_BYTE
static const GLenum GL_BYTE=0x1400
#undef GL_UNSIGNED_BYTE
static const GLenum GL_UNSIGNED_BYTE=0x1401
#undef GL_SHORT
static const GLenum GL_SHORT=0x1402
#undef GL_UNSIGNED_SHORT
static const GLenum GL_UNSIGNED_SHORT=0x1403
#undef GL_INT
static const GLenum GL_INT=0x1404
#undef GL_UNSIGNED_INT
static const GLenum GL_UNSIGNED_INT=0x1405
#undef GL_FLOAT
static const GLenum GL_FLOAT=0x1406
#undef GL_FIXED
static const GLenum GL_FIXED=0x140C
#undef GL_INVERT
static const GLenum GL_INVERT=0x150A
#undef GL_TEXTURE
static const GLenum GL_TEXTURE=0x1702
#undef GL_DEPTH_COMPONENT
static const GLenum GL_DEPTH_COMPONENT=0x1902
#undef GL_ALPHA
static const GLenum GL_ALPHA=0x1906
#undef GL_RGB
static const GLenum GL_RGB=0x1907
#undef GL_RGBA
static const GLenum GL_RGBA=0x1908
#undef GL_LUMINANCE
static const GLenum GL_LUMINANCE=0x1909
#undef GL_LUMINANCE_ALPHA
static const GLenum GL_LUMINANCE_ALPHA=0x190A
#undef GL_KEEP
static const GLenum GL_KEEP=0x1E00
#undef GL_REPLACE
static const GLenum GL_REPLACE=0x1E01
#undef GL_INCR
static const GLenum GL_INCR=0x1E02
#undef GL_DECR
static const GLenum GL_DECR=0x1E03
#undef GL_VENDOR
static const GLenum GL_VENDOR=0x1F00
#undef GL_RENDERER
static const GLenum GL_RENDERER=0x1F01
#undef GL_VERSION
static const GLenum GL_VERSION=0x1F02
#undef GL_EXTENSIONS
static const GLenum GL_EXTENSIONS=0x1F03
#undef GL_NEAREST
static const GLenum GL_NEAREST=0x2600
#undef GL_LINEAR
static const GLenum GL_LINEAR=0x2601
#undef GL_NEAREST_MIPMAP_NEAREST
static const GLenum GL_NEAREST_MIPMAP_NEAREST=0x2700
#undef GL_LINEAR_MIPMAP_NEAREST
static const GLenum GL_LINEAR_MIPMAP_NEAREST=0x2701
#undef GL_NEAREST_MIPMAP_LINEAR
static const GLenum GL_NEAREST_MIPMAP_LINEAR=0x2702
#undef GL_LINEAR_MIPMAP_LINEAR
static const GLenum GL_LINEAR_MIPMAP_LINEAR=0x2703
#undef GL_TEXTURE_MAG_FILTER
static const GLenum GL_TEXTURE_MAG_FILTER=0x2800
#undef GL_TEXTURE_MIN_FILTER
static const GLenum GL_TEXTURE_MIN_FILTER=0x2801
#undef GL_TEXTURE_WRAP_S
static const GLenum GL_TEXTURE_WRAP_S=0x2802
#undef GL_TEXTURE_WRAP_T
static const GLenum GL_TEXTURE_WRAP_T=0x2803
#undef GL_REPEAT
static const GLenum GL_REPEAT=0x2901
#undef GL_POLYGON_OFFSET_UNITS
static const GLenum GL_POLYGON_OFFSET_UNITS=0x2A00
#undef GL_CONSTANT_COLOR
static const GLenum GL_CONSTANT_COLOR=0x8001
#undef GL_ONE_MINUS_CONSTANT_COLOR
static const GLenum GL_ONE_MINUS_CONSTANT_COLOR=0x8002
#undef GL_CONSTANT_ALPHA
static const GLenum GL_CONSTANT_ALPHA=0x8003
#undef GL_ONE_MINUS_CONSTANT_ALPHA
static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA=0x8004
#undef GL_BLEND_COLOR
static const GLenum GL_BLEND_COLOR=0x8005
#undef GL_FUNC_ADD
static const GLenum GL_FUNC_ADD=0x8006
#undef GL_BLEND_EQUATION_RGB
static const GLenum GL_BLEND_EQUATION_RGB=0x8009
#undef GL_BLEND_EQUATION
static const GLenum GL_BLEND_EQUATION=0x8009
#undef GL_FUNC_SUBTRACT
static const GLenum GL_FUNC_SUBTRACT=0x800A
#undef GL_FUNC_REVERSE_SUBTRACT
static const GLenum GL_FUNC_REVERSE_SUBTRACT=0x800B
#undef GL_UNSIGNED_SHORT_4_4_4_4
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4=0x8033
#undef GL_UNSIGNED_SHORT_5_5_5_1
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1=0x8034
#undef GL_POLYGON_OFFSET_FILL
static const GLenum GL_POLYGON_OFFSET_FILL=0x8037
#undef GL_POLYGON_OFFSET_FACTOR
static const GLenum GL_POLYGON_OFFSET_FACTOR=0x8038
#undef GL_RGBA4
static const GLenum GL_RGBA4=0x8056
#undef GL_RGB5_A1
static const GLenum GL_RGB5_A1=0x8057
#undef GL_TEXTURE_BINDING_2D
static const GLenum GL_TEXTURE_BINDING_2D=0x8069
#undef GL_SAMPLE_ALPHA_TO_COVERAGE
static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE=0x809E
#undef GL_SAMPLE_COVERAGE
static const GLenum GL_SAMPLE_COVERAGE=0x80A0
#undef GL_SAMPLE_BUFFERS
static const GLenum GL_SAMPLE_BUFFERS=0x80A8
#undef GL_SAMPLES
static const GLenum GL_SAMPLES=0x80A9
#undef GL_SAMPLE_COVERAGE_VALUE
static const GLenum GL_SAMPLE_COVERAGE_VALUE=0x80AA
#undef GL_SAMPLE_COVERAGE_INVERT
static const GLenum GL_SAMPLE_COVERAGE_INVERT=0x80AB
#undef GL_BLEND_DST_RGB
static const GLenum GL_BLEND_DST_RGB=0x80C8
#undef GL_BLEND_SRC_RGB
static const GLenum GL_BLEND_SRC_RGB=0x80C9
#undef GL_BLEND_DST_ALPHA
static const GLenum GL_BLEND_DST_ALPHA=0x80CA
#undef GL_BLEND_SRC_ALPHA
static const GLenum GL_BLEND_SRC_ALPHA=0x80CB
#undef GL_CLAMP_TO_EDGE
static const GLenum GL_CLAMP_TO_EDGE=0x812F
#undef GL_GENERATE_MIPMAP_HINT
static const GLenum GL_GENERATE_MIPMAP_HINT=0x8192
#undef GL_DEPTH_COMPONENT16
static const GLenum GL_DEPTH_COMPONENT16=0x81A5
#undef GL_UNSIGNED_SHORT_5_6_5
static const GLenum GL_UNSIGNED_SHORT_5_6_5=0x8363
#undef GL_MIRRORED_REPEAT
static const GLenum GL_MIRRORED_REPEAT=0x8370
#undef GL_ALIASED_POINT_SIZE_RANGE
static const GLenum GL_ALIASED_POINT_SIZE_RANGE=0x846D
#undef GL_ALIASED_LINE_WIDTH_RANGE
static const GLenum GL_ALIASED_LINE_WIDTH_RANGE=0x846E
#undef GL_TEXTURE0
static const GLenum GL_TEXTURE0=0x84C0
#undef GL_TEXTURE1
static const GLenum GL_TEXTURE1=0x84C1
#undef GL_TEXTURE2
static const GLenum GL_TEXTURE2=0x84C2
#undef GL_TEXTURE3
static const GLenum GL_TEXTURE3=0x84C3
#undef GL_TEXTURE4
static const GLenum GL_TEXTURE4=0x84C4
#undef GL_TEXTURE5
static const GLenum GL_TEXTURE5=0x84C5
#undef GL_TEXTURE6
static const GLenum GL_TEXTURE6=0x84C6
#undef GL_TEXTURE7
static const GLenum GL_TEXTURE7=0x84C7
#undef GL_TEXTURE8
static const GLenum GL_TEXTURE8=0x84C8
#undef GL_TEXTURE9
static const GLenum GL_TEXTURE9=0x84C9
#undef GL_TEXTURE10
static const GLenum GL_TEXTURE10=0x84CA
#undef GL_TEXTURE11
static const GLenum GL_TEXTURE11=0x84CB
#undef GL_TEXTURE12
static const GLenum GL_TEXTURE12=0x84CC
#undef GL_TEXTURE13
static const GLenum GL_TEXTURE13=0x84CD
#undef GL_TEXTURE14
static const GLenum GL_TEXTURE14=0x84CE
#undef GL_TEXTURE15
static const GLenum GL_TEXTURE15=0x84CF
#undef GL_TEXTURE16
static const GLenum GL_TEXTURE16=0x84D0
#undef GL_TEXTURE17
static const GLenum GL_TEXTURE17=0x84D1
#undef GL_TEXTURE18
static const GLenum GL_TEXTURE18=0x84D2
#undef GL_TEXTURE19
static const GLenum GL_TEXTURE19=0x84D3
#undef GL_TEXTURE20
static const GLenum GL_TEXTURE20=0x84D4
#undef GL_TEXTURE21
static const GLenum GL_TEXTURE21=0x84D5
#undef GL_TEXTURE22
static const GLenum GL_TEXTURE22=0x84D6
#undef GL_TEXTURE23
static const GLenum GL_TEXTURE23=0x84D7
#undef GL_TEXTURE24
static const GLenum GL_TEXTURE24=0x84D8
#undef GL_TEXTURE25
static const GLenum GL_TEXTURE25=0x84D9
#undef GL_TEXTURE26
static const GLenum GL_TEXTURE26=0x84DA
#undef GL_TEXTURE27
static const GLenum GL_TEXTURE27=0x84DB
#undef GL_TEXTURE28
static const GLenum GL_TEXTURE28=0x84DC
#undef GL_TEXTURE29
static const GLenum GL_TEXTURE29=0x84DD
#undef GL_TEXTURE30
static const GLenum GL_TEXTURE30=0x84DE
#undef GL_TEXTURE31
static const GLenum GL_TEXTURE31=0x84DF
#undef GL_ACTIVE_TEXTURE
static const GLenum GL_ACTIVE_TEXTURE=0x84E0
#undef GL_MAX_RENDERBUFFER_SIZE
static const GLenum GL_MAX_RENDERBUFFER_SIZE=0x84E8
#undef GL_INCR_WRAP
static const GLenum GL_INCR_WRAP=0x8507
#undef GL_DECR_WRAP
static const GLenum GL_DECR_WRAP=0x8508
#undef GL_TEXTURE_CUBE_MAP
static const GLenum GL_TEXTURE_CUBE_MAP=0x8513
#undef GL_TEXTURE_BINDING_CUBE_MAP
static const GLenum GL_TEXTURE_BINDING_CUBE_MAP=0x8514
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_X
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X=0x8515
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X=0x8516
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y=0x8517
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y=0x8518
#undef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z=0x8519
#undef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z=0x851A
#undef GL_MAX_CUBE_MAP_TEXTURE_SIZE
static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE=0x851C
#undef GL_VERTEX_ATTRIB_ARRAY_ENABLED
static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED=0x8622
#undef GL_VERTEX_ATTRIB_ARRAY_SIZE
static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE=0x8623
#undef GL_VERTEX_ATTRIB_ARRAY_STRIDE
static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE=0x8624
#undef GL_VERTEX_ATTRIB_ARRAY_TYPE
static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE=0x8625
#undef GL_CURRENT_VERTEX_ATTRIB
static const GLenum GL_CURRENT_VERTEX_ATTRIB=0x8626
#undef GL_VERTEX_ATTRIB_ARRAY_POINTER
static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER=0x8645
#undef GL_NUM_COMPRESSED_TEXTURE_FORMATS
static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS=0x86A2
#undef GL_COMPRESSED_TEXTURE_FORMATS
static const GLenum GL_COMPRESSED_TEXTURE_FORMATS=0x86A3
#undef GL_BUFFER_SIZE
static const GLenum GL_BUFFER_SIZE=0x8764
#undef GL_BUFFER_USAGE
static const GLenum GL_BUFFER_USAGE=0x8765
#undef GL_STENCIL_BACK_FUNC
static const GLenum GL_STENCIL_BACK_FUNC=0x8800
#undef GL_STENCIL_BACK_FAIL
static const GLenum GL_STENCIL_BACK_FAIL=0x8801
#undef GL_STENCIL_BACK_PASS_DEPTH_FAIL
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL=0x8802
#undef GL_STENCIL_BACK_PASS_DEPTH_PASS
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS=0x8803
#undef GL_BLEND_EQUATION_ALPHA
static const GLenum GL_BLEND_EQUATION_ALPHA=0x883D
#undef GL_MAX_VERTEX_ATTRIBS
static const GLenum GL_MAX_VERTEX_ATTRIBS=0x8869
#undef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED=0x886A
#undef GL_MAX_TEXTURE_IMAGE_UNITS
static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS=0x8872
#undef GL_ARRAY_BUFFER
static const GLenum GL_ARRAY_BUFFER=0x8892
#undef GL_ELEMENT_ARRAY_BUFFER
static const GLenum GL_ELEMENT_ARRAY_BUFFER=0x8893
#undef GL_ARRAY_BUFFER_BINDING
static const GLenum GL_ARRAY_BUFFER_BINDING=0x8894
#undef GL_ELEMENT_ARRAY_BUFFER_BINDING
static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING=0x8895
#undef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=0x889F
#undef GL_STREAM_DRAW
static const GLenum GL_STREAM_DRAW=0x88E0
#undef GL_STATIC_DRAW
static const GLenum GL_STATIC_DRAW=0x88E4
#undef GL_DYNAMIC_DRAW
static const GLenum GL_DYNAMIC_DRAW=0x88E8
#undef GL_FRAGMENT_SHADER
static const GLenum GL_FRAGMENT_SHADER=0x8B30
#undef GL_VERTEX_SHADER
static const GLenum GL_VERTEX_SHADER=0x8B31
#undef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS=0x8B4C
#undef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS=0x8B4D
#undef GL_SHADER_TYPE
static const GLenum GL_SHADER_TYPE=0x8B4F
#undef GL_FLOAT_VEC2
static const GLenum GL_FLOAT_VEC2=0x8B50
#undef GL_FLOAT_VEC3
static const GLenum GL_FLOAT_VEC3=0x8B51
#undef GL_FLOAT_VEC4
static const GLenum GL_FLOAT_VEC4=0x8B52
#undef GL_INT_VEC2
static const GLenum GL_INT_VEC2=0x8B53
#undef GL_INT_VEC3
static const GLenum GL_INT_VEC3=0x8B54
#undef GL_INT_VEC4
static const GLenum GL_INT_VEC4=0x8B55
#undef GL_BOOL
static const GLenum GL_BOOL=0x8B56
#undef GL_BOOL_VEC2
static const GLenum GL_BOOL_VEC2=0x8B57
#undef GL_BOOL_VEC3
static const GLenum GL_BOOL_VEC3=0x8B58
#undef GL_BOOL_VEC4
static const GLenum GL_BOOL_VEC4=0x8B59
#undef GL_FLOAT_MAT2
static const GLenum GL_FLOAT_MAT2=0x8B5A
#undef GL_FLOAT_MAT3
static const GLenum GL_FLOAT_MAT3=0x8B5B
#undef GL_FLOAT_MAT4
static const GLenum GL_FLOAT_MAT4=0x8B5C
#undef GL_SAMPLER_2D
static const GLenum GL_SAMPLER_2D=0x8B5E
#undef GL_SAMPLER_CUBE
static const GLenum GL_SAMPLER_CUBE=0x8B60
#undef GL_DELETE_STATUS
static const GLenum GL_DELETE_STATUS=0x8B80
#undef GL_COMPILE_STATUS
static const GLenum GL_COMPILE_STATUS=0x8B81
#undef GL_LINK_STATUS
static const GLenum GL_LINK_STATUS=0x8B82
#undef GL_VALIDATE_STATUS
static const GLenum GL_VALIDATE_STATUS=0x8B83
#undef GL_INFO_LOG_LENGTH
static const GLenum GL_INFO_LOG_LENGTH=0x8B84
#undef GL_ATTACHED_SHADERS
static const GLenum GL_ATTACHED_SHADERS=0x8B85
#undef GL_ACTIVE_UNIFORMS
static const GLenum GL_ACTIVE_UNIFORMS=0x8B86
#undef GL_ACTIVE_UNIFORM_MAX_LENGTH
static const GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH=0x8B87
#undef GL_SHADER_SOURCE_LENGTH
static const GLenum GL_SHADER_SOURCE_LENGTH=0x8B88
#undef GL_ACTIVE_ATTRIBUTES
static const GLenum GL_ACTIVE_ATTRIBUTES=0x8B89
#undef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
static const GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH=0x8B8A
#undef GL_SHADING_LANGUAGE_VERSION
static const GLenum GL_SHADING_LANGUAGE_VERSION=0x8B8C
#undef GL_CURRENT_PROGRAM
static const GLenum GL_CURRENT_PROGRAM=0x8B8D
#undef GL_IMPLEMENTATION_COLOR_READ_TYPE
static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE=0x8B9A
#undef GL_IMPLEMENTATION_COLOR_READ_FORMAT
static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT=0x8B9B
#undef GL_STENCIL_BACK_REF
static const GLenum GL_STENCIL_BACK_REF=0x8CA3
#undef GL_STENCIL_BACK_VALUE_MASK
static const GLenum GL_STENCIL_BACK_VALUE_MASK=0x8CA4
#undef GL_STENCIL_BACK_WRITEMASK
static const GLenum GL_STENCIL_BACK_WRITEMASK=0x8CA5
#undef GL_FRAMEBUFFER_BINDING
static const GLenum GL_FRAMEBUFFER_BINDING=0x8CA6
#undef GL_RENDERBUFFER_BINDING
static const GLenum GL_RENDERBUFFER_BINDING=0x8CA7
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=0x8CD0
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=0x8CD1
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=0x8CD2
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=0x8CD3
#undef GL_FRAMEBUFFER_COMPLETE
static const GLenum GL_FRAMEBUFFER_COMPLETE=0x8CD5
#undef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT=0x8CD6
#undef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=0x8CD7
#undef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS=0x8CD9
#undef GL_FRAMEBUFFER_UNSUPPORTED
static const GLenum GL_FRAMEBUFFER_UNSUPPORTED=0x8CDD
#undef GL_COLOR_ATTACHMENT0
static const GLenum GL_COLOR_ATTACHMENT0=0x8CE0
#undef GL_DEPTH_ATTACHMENT
static const GLenum GL_DEPTH_ATTACHMENT=0x8D00
#undef GL_STENCIL_ATTACHMENT
static const GLenum GL_STENCIL_ATTACHMENT=0x8D20
#undef GL_FRAMEBUFFER
static const GLenum GL_FRAMEBUFFER=0x8D40
#undef GL_RENDERBUFFER
static const GLenum GL_RENDERBUFFER=0x8D41
#undef GL_RENDERBUFFER_WIDTH
static const GLenum GL_RENDERBUFFER_WIDTH=0x8D42
#undef GL_RENDERBUFFER_HEIGHT
static const GLenum GL_RENDERBUFFER_HEIGHT=0x8D43
#undef GL_RENDERBUFFER_INTERNAL_FORMAT
static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT=0x8D44
#undef GL_STENCIL_INDEX8
static const GLenum GL_STENCIL_INDEX8=0x8D48
#undef GL_RENDERBUFFER_RED_SIZE
static const GLenum GL_RENDERBUFFER_RED_SIZE=0x8D50
#undef GL_RENDERBUFFER_GREEN_SIZE
static const GLenum GL_RENDERBUFFER_GREEN_SIZE=0x8D51
#undef GL_RENDERBUFFER_BLUE_SIZE
static const GLenum GL_RENDERBUFFER_BLUE_SIZE=0x8D52
#undef GL_RENDERBUFFER_ALPHA_SIZE
static const GLenum GL_RENDERBUFFER_ALPHA_SIZE=0x8D53
#undef GL_RENDERBUFFER_DEPTH_SIZE
static const GLenum GL_RENDERBUFFER_DEPTH_SIZE=0x8D54
#undef GL_RENDERBUFFER_STENCIL_SIZE
static const GLenum GL_RENDERBUFFER_STENCIL_SIZE=0x8D55
#undef GL_RGB565
static const GLenum GL_RGB565=0x8D62
#undef GL_LOW_FLOAT
static const GLenum GL_LOW_FLOAT=0x8DF0
#undef GL_MEDIUM_FLOAT
static const GLenum GL_MEDIUM_FLOAT=0x8DF1
#undef GL_HIGH_FLOAT
static const GLenum GL_HIGH_FLOAT=0x8DF2
#undef GL_LOW_INT
static const GLenum GL_LOW_INT=0x8DF3
#undef GL_MEDIUM_INT
static const GLenum GL_MEDIUM_INT=0x8DF4
#undef GL_HIGH_INT
static const GLenum GL_HIGH_INT=0x8DF5
#undef GL_SHADER_BINARY_FORMATS
static const GLenum GL_SHADER_BINARY_FORMATS=0x8DF8
#undef GL_NUM_SHADER_BINARY_FORMATS
static const GLenum GL_NUM_SHADER_BINARY_FORMATS=0x8DF9
#undef GL_SHADER_COMPILER
static const GLenum GL_SHADER_COMPILER=0x8DFA
#undef GL_MAX_VERTEX_UNIFORM_VECTORS
static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS=0x8DFB
#undef GL_MAX_VARYING_VECTORS
static const GLenum GL_MAX_VARYING_VECTORS=0x8DFC
#undef GL_MAX_FRAGMENT_UNIFORM_VECTORS
static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS=0x8DFD
#undef GL_ONE
static const GLenum GL_ONE=1
#undef GL_TRUE
static const GLenum GL_TRUE=1
extern "C" {
extern void glActiveTexture(GLenum);
extern void glAttachShader(GLuint,GLuint);
extern void glBindAttribLocation(GLuint,GLuint,const GLchar *);
extern void glBindBuffer(GLenum,GLuint);
extern void glBindFramebuffer(GLenum,GLuint);
extern void glBindRenderbuffer(GLenum,GLuint);
extern void glBindTexture(GLenum,GLuint);
extern void glBlendColor(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glBlendEquation(GLenum);
extern void glBlendEquationSeparate(GLenum,GLenum);
extern void glBlendFunc(GLenum,GLenum);
extern void glBlendFuncSeparate(GLenum,GLenum,GLenum,GLenum);
extern void glBufferData(GLenum,GLsizeiptr,const void *,GLenum);
extern void glBufferSubData(GLenum,GLintptr,GLsizeiptr,const void *);
extern GLenum glCheckFramebufferStatus(GLenum);
extern void glClear(GLbitfield);
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearDepthf(GLfloat);
extern void glClearStencil(GLint);
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
extern void glCompileShader(GLuint);
extern void glCompressedTexImage2D(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
extern void glCompressedTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
extern void glCopyTexImage2D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
extern void glCopyTexSubImage2D(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
extern GLuint glCreateProgram();
extern GLuint glCreateShader(GLenum);
extern void glCullFace(GLenum);
extern void glDeleteBuffers(GLsizei,const GLuint *);
extern void glDeleteFramebuffers(GLsizei,const GLuint *);
extern void glDeleteProgram(GLuint);
extern void glDeleteRenderbuffers(GLsizei,const GLuint *);
extern void glDeleteShader(GLuint);
extern void glDeleteTextures(GLsizei,const GLuint *);
extern void glDepthFunc(GLenum);
extern void glDepthMask(GLboolean);
extern void glDepthRangef(GLfloat,GLfloat);
extern void glDetachShader(GLuint,GLuint);
extern void glDisable(GLenum);
extern void glDisableVertexAttribArray(GLuint);
extern void glDrawArrays(GLenum,GLint,GLsizei);
extern void glDrawElements(GLenum,GLsizei,GLenum,const void *);
extern void glEnable(GLenum);
extern void glEnableVertexAttribArray(GLuint);
extern void glFinish();
extern void glFlush();
extern void glFramebufferRenderbuffer(GLenum,GLenum,GLenum,GLuint);
extern void glFramebufferTexture2D(GLenum,GLenum,GLenum,GLuint,GLint);
extern void glFrontFace(GLenum);
extern void glGenBuffers(GLsizei,GLuint *);
extern void glGenFramebuffers(GLsizei,GLuint *);
extern void glGenRenderbuffers(GLsizei,GLuint *);
extern void glGenTextures(GLsizei,GLuint *);
extern void glGenerateMipmap(GLenum);
extern void glGetActiveAttrib(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
extern void glGetActiveUniform(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
extern void glGetAttachedShaders(GLuint,GLsizei,GLsizei *,GLuint *);
extern GLint glGetAttribLocation(GLuint,const GLchar *);
extern void glGetBooleanv(GLenum,GLboolean *);
extern void glGetBufferParameteriv(GLenum,GLenum,GLint *);
extern GLenum glGetError();
extern void glGetFloatv(GLenum,GLfloat *);
extern void glGetFramebufferAttachmentParameteriv(GLenum,GLenum,GLenum,GLint *);
extern void glGetIntegerv(GLenum,GLint *);
extern void glGetProgramInfoLog(GLuint,GLsizei,GLsizei *,GLchar *);
extern void glGetProgramiv(GLuint,GLenum,GLint *);
extern void glGetRenderbufferParameteriv(GLenum,GLenum,GLint *);
extern void glGetShaderInfoLog(GLuint,GLsizei,GLsizei *,GLchar *);
extern void glGetShaderPrecisionFormat(GLenum,GLenum,GLint *,GLint *);
extern void glGetShaderSource(GLuint,GLsizei,GLsizei *,GLchar *);
extern void glGetShaderiv(GLuint,GLenum,GLint *);
extern const GLubyte * glGetString(GLenum);
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
extern GLint glGetUniformLocation(GLuint,const GLchar *);
extern void glGetUniformfv(GLuint,GLint,GLfloat *);
extern void glGetUniformiv(GLuint,GLint,GLint *);
extern void glGetVertexAttribPointerv(GLuint,GLenum,void **);
extern void glGetVertexAttribfv(GLuint,GLenum,GLfloat *);
extern void glGetVertexAttribiv(GLuint,GLenum,GLint *);
extern void glHint(GLenum,GLenum);
extern GLboolean glIsBuffer(GLuint);
extern GLboolean glIsEnabled(GLenum);
extern GLboolean glIsFramebuffer(GLuint);
extern GLboolean glIsProgram(GLuint);
extern GLboolean glIsRenderbuffer(GLuint);
extern GLboolean glIsShader(GLuint);
extern GLboolean glIsTexture(GLuint);
extern void glLineWidth(GLfloat);
extern void glLinkProgram(GLuint);
extern void glPixelStorei(GLenum,GLint);
extern void glPolygonOffset(GLfloat,GLfloat);
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
extern void glReleaseShaderCompiler();
extern void glRenderbufferStorage(GLenum,GLenum,GLsizei,GLsizei);
extern void glSampleCoverage(GLfloat,GLboolean);
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
extern void glShaderBinary(GLsizei,const GLuint *,GLenum,const void *,GLsizei);
extern void glShaderSource(GLuint,GLsizei,const GLchar *const*,const GLint *);
extern void glStencilFunc(GLenum,GLint,GLuint);
extern void glStencilFuncSeparate(GLenum,GLenum,GLint,GLuint);
extern void glStencilMask(GLuint);
extern void glStencilMaskSeparate(GLenum,GLuint);
extern void glStencilOp(GLenum,GLenum,GLenum);
extern void glStencilOpSeparate(GLenum,GLenum,GLenum,GLenum);
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexParameterf(GLenum,GLenum,GLfloat);
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
extern void glTexParameteri(GLenum,GLenum,GLint);
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
extern void glTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
extern void glUniform1f(GLint,GLfloat);
extern void glUniform1fv(GLint,GLsizei,const GLfloat *);
extern void glUniform1i(GLint,GLint);
extern void glUniform1iv(GLint,GLsizei,const GLint *);
extern void glUniform2f(GLint,GLfloat,GLfloat);
extern void glUniform2fv(GLint,GLsizei,const GLfloat *);
extern void glUniform2i(GLint,GLint,GLint);
extern void glUniform2iv(GLint,GLsizei,const GLint *);
extern void glUniform3f(GLint,GLfloat,GLfloat,GLfloat);
extern void glUniform3fv(GLint,GLsizei,const GLfloat *);
extern void glUniform3i(GLint,GLint,GLint,GLint);
extern void glUniform3iv(GLint,GLsizei,const GLint *);
extern void glUniform4f(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
extern void glUniform4fv(GLint,GLsizei,const GLfloat *);
extern void glUniform4i(GLint,GLint,GLint,GLint,GLint);
extern void glUniform4iv(GLint,GLsizei,const GLint *);
extern void glUniformMatrix2fv(GLint,GLsizei,GLboolean,const GLfloat *);
extern void glUniformMatrix3fv(GLint,GLsizei,GLboolean,const GLfloat *);
extern void glUniformMatrix4fv(GLint,GLsizei,GLboolean,const GLfloat *);
extern void glUseProgram(GLuint);
extern void glValidateProgram(GLuint);
extern void glVertexAttrib1f(GLuint,GLfloat);
extern void glVertexAttrib1fv(GLuint,const GLfloat *);
extern void glVertexAttrib2f(GLuint,GLfloat,GLfloat);
extern void glVertexAttrib2fv(GLuint,const GLfloat *);
extern void glVertexAttrib3f(GLuint,GLfloat,GLfloat,GLfloat);
extern void glVertexAttrib3fv(GLuint,const GLfloat *);
extern void glVertexAttrib4f(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
extern void glVertexAttrib4fv(GLuint,const GLfloat *);
extern void glVertexAttribPointer(GLuint,GLint,GLenum,GLboolean,GLsizei,const void *);
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
}
namespace gl{

static inline void ActiveTexture(GLenum texture1)
{
	 glActiveTexture(texture1);
}
static inline void AttachShader(GLuint program1,GLuint shader1)
{
	 glAttachShader(program1,shader1);
}
static inline void BindAttribLocation(GLuint program1,GLuint index1,const GLchar * name1)
{
	 glBindAttribLocation(program1,index1,name1);
}
static inline void BindBuffer(GLenum target1,GLuint buffer1)
{
	 glBindBuffer(target1,buffer1);
}
static inline void BindFramebuffer(GLenum target1,GLuint framebuffer1)
{
	 glBindFramebuffer(target1,framebuffer1);
}
static inline void BindRenderbuffer(GLenum target1,GLuint renderbuffer1)
{
	 glBindRenderbuffer(target1,renderbuffer1);
}
static inline void BindTexture(GLenum target1,GLuint texture1)
{
	 glBindTexture(target1,texture1);
}
static inline void BlendColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glBlendColor(red1,green1,blue1,alpha1);
}
static inline void BlendEquation(GLenum mode1)
{
	 glBlendEquation(mode1);
}
static inline void BlendEquationSeparate(GLenum modeRGB1,GLenum modeAlpha1)
{
	 glBlendEquationSeparate(modeRGB1,modeAlpha1);
}
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	 glBlendFunc(sfactor1,dfactor1);
}
static inline void BlendFuncSeparate(GLenum sfactorRGB1,GLenum dfactorRGB1,GLenum sfactorAlpha1,GLenum dfactorAlpha1)
{
	 glBlendFuncSeparate(sfactorRGB1,dfactorRGB1,sfactorAlpha1,dfactorAlpha1);
}
static inline void BufferData(GLenum target1,GLsizeiptr size1,const void * data1,GLenum usage1)
{
	 glBufferData(target1,size1,data1,usage1);
}
static inline void BufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,const void * data1)
{
	 glBufferSubData(target1,offset1,size1,data1);
}
static inline GLenum CheckFramebufferStatus(GLenum target1)
{
	return glCheckFramebufferStatus(target1);
}
static inline void Clear(GLbitfield mask1)
{
	 glClear(mask1);
}
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearColor(red1,green1,blue1,alpha1);
}
static inline void ClearDepthf(GLfloat d1)
{
	 glClearDepthf(d1);
}
static inline void ClearStencil(GLint s1)
{
	 glClearStencil(s1);
}
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	 glColorMask(red1,green1,blue1,alpha1);
}
static inline void CompileShader(GLuint shader1)
{
	 glCompileShader(shader1);
}
static inline void CompressedTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLsizei imageSize1,const void * data1)
{
	 glCompressedTexImage2D(target1,level1,internalformat1,width1,height1,border1,imageSize1,data1);
}
static inline void CompressedTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	 glCompressedTexSubImage2D(target1,level1,xoffset1,yoffset1,width1,height1,format1,imageSize1,data1);
}
static inline void CopyTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLint border1)
{
	 glCopyTexImage2D(target1,level1,internalformat1,x1,y1,width1,height1,border1);
}
static inline void CopyTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glCopyTexSubImage2D(target1,level1,xoffset1,yoffset1,x1,y1,width1,height1);
}
static inline GLuint CreateProgram()
{
	return glCreateProgram();
}
static inline GLuint CreateShader(GLenum type1)
{
	return glCreateShader(type1);
}
static inline void CullFace(GLenum mode1)
{
	 glCullFace(mode1);
}
static inline void DeleteBuffers(GLsizei n1,const GLuint * buffers1)
{
	 glDeleteBuffers(n1,buffers1);
}
static inline void DeleteFramebuffers(GLsizei n1,const GLuint * framebuffers1)
{
	 glDeleteFramebuffers(n1,framebuffers1);
}
static inline void DeleteProgram(GLuint program1)
{
	 glDeleteProgram(program1);
}
static inline void DeleteRenderbuffers(GLsizei n1,const GLuint * renderbuffers1)
{
	 glDeleteRenderbuffers(n1,renderbuffers1);
}
static inline void DeleteShader(GLuint shader1)
{
	 glDeleteShader(shader1);
}
static inline void DeleteTextures(GLsizei n1,const GLuint * textures1)
{
	 glDeleteTextures(n1,textures1);
}
static inline void DepthFunc(GLenum func1)
{
	 glDepthFunc(func1);
}
static inline void DepthMask(GLboolean flag1)
{
	 glDepthMask(flag1);
}
static inline void DepthRangef(GLfloat n1,GLfloat f1)
{
	 glDepthRangef(n1,f1);
}
static inline void DetachShader(GLuint program1,GLuint shader1)
{
	 glDetachShader(program1,shader1);
}
static inline void Disable(GLenum cap1)
{
	 glDisable(cap1);
}
static inline void DisableVertexAttribArray(GLuint index1)
{
	 glDisableVertexAttribArray(index1);
}
static inline void DrawArrays(GLenum mode1,GLint first1,GLsizei count1)
{
	 glDrawArrays(mode1,first1,count1);
}
static inline void DrawElements(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1)
{
	 glDrawElements(mode1,count1,type1,indices1);
}
static inline void Enable(GLenum cap1)
{
	 glEnable(cap1);
}
static inline void EnableVertexAttribArray(GLuint index1)
{
	 glEnableVertexAttribArray(index1);
}
static inline void Finish()
{
	 glFinish();
}
static inline void Flush()
{
	 glFlush();
}
static inline void FramebufferRenderbuffer(GLenum target1,GLenum attachment1,GLenum renderbuffertarget1,GLuint renderbuffer1)
{
	 glFramebufferRenderbuffer(target1,attachment1,renderbuffertarget1,renderbuffer1);
}
static inline void FramebufferTexture2D(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	 glFramebufferTexture2D(target1,attachment1,textarget1,texture1,level1);
}
static inline void FrontFace(GLenum mode1)
{
	 glFrontFace(mode1);
}
static inline void GenBuffers(GLsizei n1,GLuint * buffers1)
{
	 glGenBuffers(n1,buffers1);
}
static inline void GenFramebuffers(GLsizei n1,GLuint * framebuffers1)
{
	 glGenFramebuffers(n1,framebuffers1);
}
static inline void GenRenderbuffers(GLsizei n1,GLuint * renderbuffers1)
{
	 glGenRenderbuffers(n1,renderbuffers1);
}
static inline void GenTextures(GLsizei n1,GLuint * textures1)
{
	 glGenTextures(n1,textures1);
}
static inline void GenerateMipmap(GLenum target1)
{
	 glGenerateMipmap(target1);
}
static inline void GetActiveAttrib(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	 glGetActiveAttrib(program1,index1,bufSize1,length1,size1,type1,name1);
}
static inline void GetActiveUniform(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	 glGetActiveUniform(program1,index1,bufSize1,length1,size1,type1,name1);
}
static inline void GetAttachedShaders(GLuint program1,GLsizei maxCount1,GLsizei * count1,GLuint * shaders1)
{
	 glGetAttachedShaders(program1,maxCount1,count1,shaders1);
}
static inline GLint GetAttribLocation(GLuint program1,const GLchar * name1)
{
	return glGetAttribLocation(program1,name1);
}
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	 glGetBooleanv(pname1,data1);
}
static inline void GetBufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetBufferParameteriv(target1,pname1,params1);
}
static inline GLenum GetError()
{
	return glGetError();
}
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	 glGetFloatv(pname1,data1);
}
static inline void GetFramebufferAttachmentParameteriv(GLenum target1,GLenum attachment1,GLenum pname1,GLint * params1)
{
	 glGetFramebufferAttachmentParameteriv(target1,attachment1,pname1,params1);
}
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	 glGetIntegerv(pname1,data1);
}
static inline void GetProgramInfoLog(GLuint program1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	 glGetProgramInfoLog(program1,bufSize1,length1,infoLog1);
}
static inline void GetProgramiv(GLuint program1,GLenum pname1,GLint * params1)
{
	 glGetProgramiv(program1,pname1,params1);
}
static inline void GetRenderbufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetRenderbufferParameteriv(target1,pname1,params1);
}
static inline void GetShaderInfoLog(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	 glGetShaderInfoLog(shader1,bufSize1,length1,infoLog1);
}
static inline void GetShaderPrecisionFormat(GLenum shadertype1,GLenum precisiontype1,GLint * range1,GLint * precision1)
{
	 glGetShaderPrecisionFormat(shadertype1,precisiontype1,range1,precision1);
}
static inline void GetShaderSource(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * source1)
{
	 glGetShaderSource(shader1,bufSize1,length1,source1);
}
static inline void GetShaderiv(GLuint shader1,GLenum pname1,GLint * params1)
{
	 glGetShaderiv(shader1,pname1,params1);
}
static inline const GLubyte * GetString(GLenum name1)
{
	return glGetString(name1);
}
static inline void GetTexParameterfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexParameterfv(target1,pname1,params1);
}
static inline void GetTexParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexParameteriv(target1,pname1,params1);
}
static inline GLint GetUniformLocation(GLuint program1,const GLchar * name1)
{
	return glGetUniformLocation(program1,name1);
}
static inline void GetUniformfv(GLuint program1,GLint location1,GLfloat * params1)
{
	 glGetUniformfv(program1,location1,params1);
}
static inline void GetUniformiv(GLuint program1,GLint location1,GLint * params1)
{
	 glGetUniformiv(program1,location1,params1);
}
static inline void GetVertexAttribPointerv(GLuint index1,GLenum pname1,void ** pointer1)
{
	 glGetVertexAttribPointerv(index1,pname1,pointer1);
}
static inline void GetVertexAttribfv(GLuint index1,GLenum pname1,GLfloat * params1)
{
	 glGetVertexAttribfv(index1,pname1,params1);
}
static inline void GetVertexAttribiv(GLuint index1,GLenum pname1,GLint * params1)
{
	 glGetVertexAttribiv(index1,pname1,params1);
}
static inline void Hint(GLenum target1,GLenum mode1)
{
	 glHint(target1,mode1);
}
static inline GLboolean IsBuffer(GLuint buffer1)
{
	return glIsBuffer(buffer1);
}
static inline GLboolean IsEnabled(GLenum cap1)
{
	return glIsEnabled(cap1);
}
static inline GLboolean IsFramebuffer(GLuint framebuffer1)
{
	return glIsFramebuffer(framebuffer1);
}
static inline GLboolean IsProgram(GLuint program1)
{
	return glIsProgram(program1);
}
static inline GLboolean IsRenderbuffer(GLuint renderbuffer1)
{
	return glIsRenderbuffer(renderbuffer1);
}
static inline GLboolean IsShader(GLuint shader1)
{
	return glIsShader(shader1);
}
static inline GLboolean IsTexture(GLuint texture1)
{
	return glIsTexture(texture1);
}
static inline void LineWidth(GLfloat width1)
{
	 glLineWidth(width1);
}
static inline void LinkProgram(GLuint program1)
{
	 glLinkProgram(program1);
}
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	 glPixelStorei(pname1,param1);
}
static inline void PolygonOffset(GLfloat factor1,GLfloat units1)
{
	 glPolygonOffset(factor1,units1);
}
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	 glReadPixels(x1,y1,width1,height1,format1,type1,pixels1);
}
static inline void ReleaseShaderCompiler()
{
	 glReleaseShaderCompiler();
}
static inline void RenderbufferStorage(GLenum target1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	 glRenderbufferStorage(target1,internalformat1,width1,height1);
}
static inline void SampleCoverage(GLfloat value1,GLboolean invert1)
{
	 glSampleCoverage(value1,invert1);
}
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glScissor(x1,y1,width1,height1);
}
static inline void ShaderBinary(GLsizei count1,const GLuint * shaders1,GLenum binaryformat1,const void * binary1,GLsizei length1)
{
	 glShaderBinary(count1,shaders1,binaryformat1,binary1,length1);
}
static inline void ShaderSource(GLuint shader1,GLsizei count1,const GLchar *const* string1,const GLint * length1)
{
	 glShaderSource(shader1,count1,string1,length1);
}
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	 glStencilFunc(func1,ref1,mask1);
}
static inline void StencilFuncSeparate(GLenum face1,GLenum func1,GLint ref1,GLuint mask1)
{
	 glStencilFuncSeparate(face1,func1,ref1,mask1);
}
static inline void StencilMask(GLuint mask1)
{
	 glStencilMask(mask1);
}
static inline void StencilMaskSeparate(GLenum face1,GLuint mask1)
{
	 glStencilMaskSeparate(face1,mask1);
}
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	 glStencilOp(fail1,zfail1,zpass1);
}
static inline void StencilOpSeparate(GLenum face1,GLenum sfail1,GLenum dpfail1,GLenum dppass1)
{
	 glStencilOpSeparate(face1,sfail1,dpfail1,dppass1);
}
static inline void TexImage2D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexImage2D(target1,level1,internalformat1,width1,height1,border1,format1,type1,pixels1);
}
static inline void TexParameterf(GLenum target1,GLenum pname1,GLfloat param1)
{
	 glTexParameterf(target1,pname1,param1);
}
static inline void TexParameterfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	 glTexParameterfv(target1,pname1,params1);
}
static inline void TexParameteri(GLenum target1,GLenum pname1,GLint param1)
{
	 glTexParameteri(target1,pname1,param1);
}
static inline void TexParameteriv(GLenum target1,GLenum pname1,const GLint * params1)
{
	 glTexParameteriv(target1,pname1,params1);
}
static inline void TexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexSubImage2D(target1,level1,xoffset1,yoffset1,width1,height1,format1,type1,pixels1);
}
static inline void Uniform1f(GLint location1,GLfloat v01)
{
	 glUniform1f(location1,v01);
}
static inline void Uniform1fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	 glUniform1fv(location1,count1,value1);
}
static inline void Uniform1i(GLint location1,GLint v01)
{
	 glUniform1i(location1,v01);
}
static inline void Uniform1iv(GLint location1,GLsizei count1,const GLint * value1)
{
	 glUniform1iv(location1,count1,value1);
}
static inline void Uniform2f(GLint location1,GLfloat v01,GLfloat v11)
{
	 glUniform2f(location1,v01,v11);
}
static inline void Uniform2fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	 glUniform2fv(location1,count1,value1);
}
static inline void Uniform2i(GLint location1,GLint v01,GLint v11)
{
	 glUniform2i(location1,v01,v11);
}
static inline void Uniform2iv(GLint location1,GLsizei count1,const GLint * value1)
{
	 glUniform2iv(location1,count1,value1);
}
static inline void Uniform3f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21)
{
	 glUniform3f(location1,v01,v11,v21);
}
static inline void Uniform3fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	 glUniform3fv(location1,count1,value1);
}
static inline void Uniform3i(GLint location1,GLint v01,GLint v11,GLint v21)
{
	 glUniform3i(location1,v01,v11,v21);
}
static inline void Uniform3iv(GLint location1,GLsizei count1,const GLint * value1)
{
	 glUniform3iv(location1,count1,value1);
}
static inline void Uniform4f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21,GLfloat v31)
{
	 glUniform4f(location1,v01,v11,v21,v31);
}
static inline void Uniform4fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	 glUniform4fv(location1,count1,value1);
}
static inline void Uniform4i(GLint location1,GLint v01,GLint v11,GLint v21,GLint v31)
{
	 glUniform4i(location1,v01,v11,v21,v31);
}
static inline void Uniform4iv(GLint location1,GLsizei count1,const GLint * value1)
{
	 glUniform4iv(location1,count1,value1);
}
static inline void UniformMatrix2fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	 glUniformMatrix2fv(location1,count1,transpose1,value1);
}
static inline void UniformMatrix3fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	 glUniformMatrix3fv(location1,count1,transpose1,value1);
}
static inline void UniformMatrix4fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	 glUniformMatrix4fv(location1,count1,transpose1,value1);
}
static inline void UseProgram(GLuint program1)
{
	 glUseProgram(program1);
}
static inline void ValidateProgram(GLuint program1)
{
	 glValidateProgram(program1);
}
static inline void VertexAttrib1f(GLuint index1,GLfloat x1)
{
	 glVertexAttrib1f(index1,x1);
}
static inline void VertexAttrib1fv(GLuint index1,const GLfloat * v1)
{
	 glVertexAttrib1fv(index1,v1);
}
static inline void VertexAttrib2f(GLuint index1,GLfloat x1,GLfloat y1)
{
	 glVertexAttrib2f(index1,x1,y1);
}
static inline void VertexAttrib2fv(GLuint index1,const GLfloat * v1)
{
	 glVertexAttrib2fv(index1,v1);
}
static inline void VertexAttrib3f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glVertexAttrib3f(index1,x1,y1,z1);
}
static inline void VertexAttrib3fv(GLuint index1,const GLfloat * v1)
{
	 glVertexAttrib3fv(index1,v1);
}
static inline void VertexAttrib4f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	 glVertexAttrib4f(index1,x1,y1,z1,w1);
}
static inline void VertexAttrib4fv(GLuint index1,const GLfloat * v1)
{
	 glVertexAttrib4fv(index1,v1);
}
static inline void VertexAttribPointer(GLuint index1,GLint size1,GLenum type1,GLboolean normalized1,GLsizei stride1,const void * pointer1)
{
	 glVertexAttribPointer(index1,size1,type1,normalized1,stride1,pointer1);
}
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glViewport(x1,y1,width1,height1);
}}
#endif
