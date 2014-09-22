#ifndef GL_HPP_GL_ES_VERSION_2_0_HPP
#define GL_HPP_GL_ES_VERSION_2_0_HPP
#include "common.hpp"


#ifndef GL_HPP_API_NAME
#define GL_HPP_API_NAME GL_HPP_GLES_API
#endif
#ifndef GL_HPP_API_VERSION
#define GL_HPP_API_VERSION 200
#endif
#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif //GL_NO_ERROR
#ifndef GL_ZERO
#define GL_ZERO 0
#endif //GL_ZERO
#ifndef GL_NONE
#define GL_NONE 0
#endif //GL_NONE
#ifndef GL_FALSE
#define GL_FALSE 0
#endif //GL_FALSE
#ifndef GL_POINTS
#define GL_POINTS 0x0000
#endif //GL_POINTS
#ifndef GL_DEPTH_BUFFER_BIT
#define GL_DEPTH_BUFFER_BIT 0x00000100
#endif //GL_DEPTH_BUFFER_BIT
#ifndef GL_STENCIL_BUFFER_BIT
#define GL_STENCIL_BUFFER_BIT 0x00000400
#endif //GL_STENCIL_BUFFER_BIT
#ifndef GL_COLOR_BUFFER_BIT
#define GL_COLOR_BUFFER_BIT 0x00004000
#endif //GL_COLOR_BUFFER_BIT
#ifndef GL_LINES
#define GL_LINES 0x0001
#endif //GL_LINES
#ifndef GL_LINE_LOOP
#define GL_LINE_LOOP 0x0002
#endif //GL_LINE_LOOP
#ifndef GL_LINE_STRIP
#define GL_LINE_STRIP 0x0003
#endif //GL_LINE_STRIP
#ifndef GL_TRIANGLES
#define GL_TRIANGLES 0x0004
#endif //GL_TRIANGLES
#ifndef GL_TRIANGLE_STRIP
#define GL_TRIANGLE_STRIP 0x0005
#endif //GL_TRIANGLE_STRIP
#ifndef GL_TRIANGLE_FAN
#define GL_TRIANGLE_FAN 0x0006
#endif //GL_TRIANGLE_FAN
#ifndef GL_NEVER
#define GL_NEVER 0x0200
#endif //GL_NEVER
#ifndef GL_LESS
#define GL_LESS 0x0201
#endif //GL_LESS
#ifndef GL_EQUAL
#define GL_EQUAL 0x0202
#endif //GL_EQUAL
#ifndef GL_LEQUAL
#define GL_LEQUAL 0x0203
#endif //GL_LEQUAL
#ifndef GL_GREATER
#define GL_GREATER 0x0204
#endif //GL_GREATER
#ifndef GL_NOTEQUAL
#define GL_NOTEQUAL 0x0205
#endif //GL_NOTEQUAL
#ifndef GL_GEQUAL
#define GL_GEQUAL 0x0206
#endif //GL_GEQUAL
#ifndef GL_ALWAYS
#define GL_ALWAYS 0x0207
#endif //GL_ALWAYS
#ifndef GL_SRC_COLOR
#define GL_SRC_COLOR 0x0300
#endif //GL_SRC_COLOR
#ifndef GL_ONE_MINUS_SRC_COLOR
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#endif //GL_ONE_MINUS_SRC_COLOR
#ifndef GL_SRC_ALPHA
#define GL_SRC_ALPHA 0x0302
#endif //GL_SRC_ALPHA
#ifndef GL_ONE_MINUS_SRC_ALPHA
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#endif //GL_ONE_MINUS_SRC_ALPHA
#ifndef GL_DST_ALPHA
#define GL_DST_ALPHA 0x0304
#endif //GL_DST_ALPHA
#ifndef GL_ONE_MINUS_DST_ALPHA
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#endif //GL_ONE_MINUS_DST_ALPHA
#ifndef GL_DST_COLOR
#define GL_DST_COLOR 0x0306
#endif //GL_DST_COLOR
#ifndef GL_ONE_MINUS_DST_COLOR
#define GL_ONE_MINUS_DST_COLOR 0x0307
#endif //GL_ONE_MINUS_DST_COLOR
#ifndef GL_SRC_ALPHA_SATURATE
#define GL_SRC_ALPHA_SATURATE 0x0308
#endif //GL_SRC_ALPHA_SATURATE
#ifndef GL_FRONT
#define GL_FRONT 0x0404
#endif //GL_FRONT
#ifndef GL_BACK
#define GL_BACK 0x0405
#endif //GL_BACK
#ifndef GL_FRONT_AND_BACK
#define GL_FRONT_AND_BACK 0x0408
#endif //GL_FRONT_AND_BACK
#ifndef GL_INVALID_ENUM
#define GL_INVALID_ENUM 0x0500
#endif //GL_INVALID_ENUM
#ifndef GL_INVALID_VALUE
#define GL_INVALID_VALUE 0x0501
#endif //GL_INVALID_VALUE
#ifndef GL_INVALID_OPERATION
#define GL_INVALID_OPERATION 0x0502
#endif //GL_INVALID_OPERATION
#ifndef GL_OUT_OF_MEMORY
#define GL_OUT_OF_MEMORY 0x0505
#endif //GL_OUT_OF_MEMORY
#ifndef GL_INVALID_FRAMEBUFFER_OPERATION
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
#endif //GL_INVALID_FRAMEBUFFER_OPERATION
#ifndef GL_CW
#define GL_CW 0x0900
#endif //GL_CW
#ifndef GL_CCW
#define GL_CCW 0x0901
#endif //GL_CCW
#ifndef GL_LINE_WIDTH
#define GL_LINE_WIDTH 0x0B21
#endif //GL_LINE_WIDTH
#ifndef GL_CULL_FACE
#define GL_CULL_FACE 0x0B44
#endif //GL_CULL_FACE
#ifndef GL_CULL_FACE_MODE
#define GL_CULL_FACE_MODE 0x0B45
#endif //GL_CULL_FACE_MODE
#ifndef GL_FRONT_FACE
#define GL_FRONT_FACE 0x0B46
#endif //GL_FRONT_FACE
#ifndef GL_DEPTH_RANGE
#define GL_DEPTH_RANGE 0x0B70
#endif //GL_DEPTH_RANGE
#ifndef GL_DEPTH_TEST
#define GL_DEPTH_TEST 0x0B71
#endif //GL_DEPTH_TEST
#ifndef GL_DEPTH_WRITEMASK
#define GL_DEPTH_WRITEMASK 0x0B72
#endif //GL_DEPTH_WRITEMASK
#ifndef GL_DEPTH_CLEAR_VALUE
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#endif //GL_DEPTH_CLEAR_VALUE
#ifndef GL_DEPTH_FUNC
#define GL_DEPTH_FUNC 0x0B74
#endif //GL_DEPTH_FUNC
#ifndef GL_STENCIL_TEST
#define GL_STENCIL_TEST 0x0B90
#endif //GL_STENCIL_TEST
#ifndef GL_STENCIL_CLEAR_VALUE
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#endif //GL_STENCIL_CLEAR_VALUE
#ifndef GL_STENCIL_FUNC
#define GL_STENCIL_FUNC 0x0B92
#endif //GL_STENCIL_FUNC
#ifndef GL_STENCIL_VALUE_MASK
#define GL_STENCIL_VALUE_MASK 0x0B93
#endif //GL_STENCIL_VALUE_MASK
#ifndef GL_STENCIL_FAIL
#define GL_STENCIL_FAIL 0x0B94
#endif //GL_STENCIL_FAIL
#ifndef GL_STENCIL_PASS_DEPTH_FAIL
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#endif //GL_STENCIL_PASS_DEPTH_FAIL
#ifndef GL_STENCIL_PASS_DEPTH_PASS
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#endif //GL_STENCIL_PASS_DEPTH_PASS
#ifndef GL_STENCIL_REF
#define GL_STENCIL_REF 0x0B97
#endif //GL_STENCIL_REF
#ifndef GL_STENCIL_WRITEMASK
#define GL_STENCIL_WRITEMASK 0x0B98
#endif //GL_STENCIL_WRITEMASK
#ifndef GL_VIEWPORT
#define GL_VIEWPORT 0x0BA2
#endif //GL_VIEWPORT
#ifndef GL_DITHER
#define GL_DITHER 0x0BD0
#endif //GL_DITHER
#ifndef GL_BLEND
#define GL_BLEND 0x0BE2
#endif //GL_BLEND
#ifndef GL_SCISSOR_BOX
#define GL_SCISSOR_BOX 0x0C10
#endif //GL_SCISSOR_BOX
#ifndef GL_SCISSOR_TEST
#define GL_SCISSOR_TEST 0x0C11
#endif //GL_SCISSOR_TEST
#ifndef GL_COLOR_CLEAR_VALUE
#define GL_COLOR_CLEAR_VALUE 0x0C22
#endif //GL_COLOR_CLEAR_VALUE
#ifndef GL_COLOR_WRITEMASK
#define GL_COLOR_WRITEMASK 0x0C23
#endif //GL_COLOR_WRITEMASK
#ifndef GL_UNPACK_ALIGNMENT
#define GL_UNPACK_ALIGNMENT 0x0CF5
#endif //GL_UNPACK_ALIGNMENT
#ifndef GL_PACK_ALIGNMENT
#define GL_PACK_ALIGNMENT 0x0D05
#endif //GL_PACK_ALIGNMENT
#ifndef GL_MAX_TEXTURE_SIZE
#define GL_MAX_TEXTURE_SIZE 0x0D33
#endif //GL_MAX_TEXTURE_SIZE
#ifndef GL_MAX_VIEWPORT_DIMS
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#endif //GL_MAX_VIEWPORT_DIMS
#ifndef GL_SUBPIXEL_BITS
#define GL_SUBPIXEL_BITS 0x0D50
#endif //GL_SUBPIXEL_BITS
#ifndef GL_RED_BITS
#define GL_RED_BITS 0x0D52
#endif //GL_RED_BITS
#ifndef GL_GREEN_BITS
#define GL_GREEN_BITS 0x0D53
#endif //GL_GREEN_BITS
#ifndef GL_BLUE_BITS
#define GL_BLUE_BITS 0x0D54
#endif //GL_BLUE_BITS
#ifndef GL_ALPHA_BITS
#define GL_ALPHA_BITS 0x0D55
#endif //GL_ALPHA_BITS
#ifndef GL_DEPTH_BITS
#define GL_DEPTH_BITS 0x0D56
#endif //GL_DEPTH_BITS
#ifndef GL_STENCIL_BITS
#define GL_STENCIL_BITS 0x0D57
#endif //GL_STENCIL_BITS
#ifndef GL_TEXTURE_2D
#define GL_TEXTURE_2D 0x0DE1
#endif //GL_TEXTURE_2D
#ifndef GL_DONT_CARE
#define GL_DONT_CARE 0x1100
#endif //GL_DONT_CARE
#ifndef GL_FASTEST
#define GL_FASTEST 0x1101
#endif //GL_FASTEST
#ifndef GL_NICEST
#define GL_NICEST 0x1102
#endif //GL_NICEST
#ifndef GL_BYTE
#define GL_BYTE 0x1400
#endif //GL_BYTE
#ifndef GL_UNSIGNED_BYTE
#define GL_UNSIGNED_BYTE 0x1401
#endif //GL_UNSIGNED_BYTE
#ifndef GL_SHORT
#define GL_SHORT 0x1402
#endif //GL_SHORT
#ifndef GL_UNSIGNED_SHORT
#define GL_UNSIGNED_SHORT 0x1403
#endif //GL_UNSIGNED_SHORT
#ifndef GL_INT
#define GL_INT 0x1404
#endif //GL_INT
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif //GL_UNSIGNED_INT
#ifndef GL_FLOAT
#define GL_FLOAT 0x1406
#endif //GL_FLOAT
#ifndef GL_FIXED
#define GL_FIXED 0x140C
#endif //GL_FIXED
#ifndef GL_INVERT
#define GL_INVERT 0x150A
#endif //GL_INVERT
#ifndef GL_TEXTURE
#define GL_TEXTURE 0x1702
#endif //GL_TEXTURE
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT 0x1902
#endif //GL_DEPTH_COMPONENT
#ifndef GL_ALPHA
#define GL_ALPHA 0x1906
#endif //GL_ALPHA
#ifndef GL_RGB
#define GL_RGB 0x1907
#endif //GL_RGB
#ifndef GL_RGBA
#define GL_RGBA 0x1908
#endif //GL_RGBA
#ifndef GL_LUMINANCE
#define GL_LUMINANCE 0x1909
#endif //GL_LUMINANCE
#ifndef GL_LUMINANCE_ALPHA
#define GL_LUMINANCE_ALPHA 0x190A
#endif //GL_LUMINANCE_ALPHA
#ifndef GL_KEEP
#define GL_KEEP 0x1E00
#endif //GL_KEEP
#ifndef GL_REPLACE
#define GL_REPLACE 0x1E01
#endif //GL_REPLACE
#ifndef GL_INCR
#define GL_INCR 0x1E02
#endif //GL_INCR
#ifndef GL_DECR
#define GL_DECR 0x1E03
#endif //GL_DECR
#ifndef GL_VENDOR
#define GL_VENDOR 0x1F00
#endif //GL_VENDOR
#ifndef GL_RENDERER
#define GL_RENDERER 0x1F01
#endif //GL_RENDERER
#ifndef GL_VERSION
#define GL_VERSION 0x1F02
#endif //GL_VERSION
#ifndef GL_EXTENSIONS
#define GL_EXTENSIONS 0x1F03
#endif //GL_EXTENSIONS
#ifndef GL_NEAREST
#define GL_NEAREST 0x2600
#endif //GL_NEAREST
#ifndef GL_LINEAR
#define GL_LINEAR 0x2601
#endif //GL_LINEAR
#ifndef GL_NEAREST_MIPMAP_NEAREST
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#endif //GL_NEAREST_MIPMAP_NEAREST
#ifndef GL_LINEAR_MIPMAP_NEAREST
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#endif //GL_LINEAR_MIPMAP_NEAREST
#ifndef GL_NEAREST_MIPMAP_LINEAR
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#endif //GL_NEAREST_MIPMAP_LINEAR
#ifndef GL_LINEAR_MIPMAP_LINEAR
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#endif //GL_LINEAR_MIPMAP_LINEAR
#ifndef GL_TEXTURE_MAG_FILTER
#define GL_TEXTURE_MAG_FILTER 0x2800
#endif //GL_TEXTURE_MAG_FILTER
#ifndef GL_TEXTURE_MIN_FILTER
#define GL_TEXTURE_MIN_FILTER 0x2801
#endif //GL_TEXTURE_MIN_FILTER
#ifndef GL_TEXTURE_WRAP_S
#define GL_TEXTURE_WRAP_S 0x2802
#endif //GL_TEXTURE_WRAP_S
#ifndef GL_TEXTURE_WRAP_T
#define GL_TEXTURE_WRAP_T 0x2803
#endif //GL_TEXTURE_WRAP_T
#ifndef GL_REPEAT
#define GL_REPEAT 0x2901
#endif //GL_REPEAT
#ifndef GL_POLYGON_OFFSET_UNITS
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#endif //GL_POLYGON_OFFSET_UNITS
#ifndef GL_CONSTANT_COLOR
#define GL_CONSTANT_COLOR 0x8001
#endif //GL_CONSTANT_COLOR
#ifndef GL_ONE_MINUS_CONSTANT_COLOR
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#endif //GL_ONE_MINUS_CONSTANT_COLOR
#ifndef GL_CONSTANT_ALPHA
#define GL_CONSTANT_ALPHA 0x8003
#endif //GL_CONSTANT_ALPHA
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#endif //GL_ONE_MINUS_CONSTANT_ALPHA
#ifndef GL_BLEND_COLOR
#define GL_BLEND_COLOR 0x8005
#endif //GL_BLEND_COLOR
#ifndef GL_FUNC_ADD
#define GL_FUNC_ADD 0x8006
#endif //GL_FUNC_ADD
#ifndef GL_BLEND_EQUATION
#define GL_BLEND_EQUATION 0x8009
#endif //GL_BLEND_EQUATION
#ifndef GL_BLEND_EQUATION_RGB
#define GL_BLEND_EQUATION_RGB 0x8009
#endif //GL_BLEND_EQUATION_RGB
#ifndef GL_FUNC_SUBTRACT
#define GL_FUNC_SUBTRACT 0x800A
#endif //GL_FUNC_SUBTRACT
#ifndef GL_FUNC_REVERSE_SUBTRACT
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif //GL_FUNC_REVERSE_SUBTRACT
#ifndef GL_UNSIGNED_SHORT_4_4_4_4
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#endif //GL_UNSIGNED_SHORT_4_4_4_4
#ifndef GL_UNSIGNED_SHORT_5_5_5_1
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#endif //GL_UNSIGNED_SHORT_5_5_5_1
#ifndef GL_POLYGON_OFFSET_FILL
#define GL_POLYGON_OFFSET_FILL 0x8037
#endif //GL_POLYGON_OFFSET_FILL
#ifndef GL_POLYGON_OFFSET_FACTOR
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#endif //GL_POLYGON_OFFSET_FACTOR
#ifndef GL_RGBA4
#define GL_RGBA4 0x8056
#endif //GL_RGBA4
#ifndef GL_RGB5_A1
#define GL_RGB5_A1 0x8057
#endif //GL_RGB5_A1
#ifndef GL_TEXTURE_BINDING_2D
#define GL_TEXTURE_BINDING_2D 0x8069
#endif //GL_TEXTURE_BINDING_2D
#ifndef GL_SAMPLE_ALPHA_TO_COVERAGE
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#endif //GL_SAMPLE_ALPHA_TO_COVERAGE
#ifndef GL_SAMPLE_COVERAGE
#define GL_SAMPLE_COVERAGE 0x80A0
#endif //GL_SAMPLE_COVERAGE
#ifndef GL_SAMPLE_BUFFERS
#define GL_SAMPLE_BUFFERS 0x80A8
#endif //GL_SAMPLE_BUFFERS
#ifndef GL_SAMPLES
#define GL_SAMPLES 0x80A9
#endif //GL_SAMPLES
#ifndef GL_SAMPLE_COVERAGE_VALUE
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#endif //GL_SAMPLE_COVERAGE_VALUE
#ifndef GL_SAMPLE_COVERAGE_INVERT
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#endif //GL_SAMPLE_COVERAGE_INVERT
#ifndef GL_BLEND_DST_RGB
#define GL_BLEND_DST_RGB 0x80C8
#endif //GL_BLEND_DST_RGB
#ifndef GL_BLEND_SRC_RGB
#define GL_BLEND_SRC_RGB 0x80C9
#endif //GL_BLEND_SRC_RGB
#ifndef GL_BLEND_DST_ALPHA
#define GL_BLEND_DST_ALPHA 0x80CA
#endif //GL_BLEND_DST_ALPHA
#ifndef GL_BLEND_SRC_ALPHA
#define GL_BLEND_SRC_ALPHA 0x80CB
#endif //GL_BLEND_SRC_ALPHA
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif //GL_CLAMP_TO_EDGE
#ifndef GL_GENERATE_MIPMAP_HINT
#define GL_GENERATE_MIPMAP_HINT 0x8192
#endif //GL_GENERATE_MIPMAP_HINT
#ifndef GL_DEPTH_COMPONENT16
#define GL_DEPTH_COMPONENT16 0x81A5
#endif //GL_DEPTH_COMPONENT16
#ifndef GL_UNSIGNED_SHORT_5_6_5
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#endif //GL_UNSIGNED_SHORT_5_6_5
#ifndef GL_MIRRORED_REPEAT
#define GL_MIRRORED_REPEAT 0x8370
#endif //GL_MIRRORED_REPEAT
#ifndef GL_ALIASED_POINT_SIZE_RANGE
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#endif //GL_ALIASED_POINT_SIZE_RANGE
#ifndef GL_ALIASED_LINE_WIDTH_RANGE
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#endif //GL_ALIASED_LINE_WIDTH_RANGE
#ifndef GL_TEXTURE0
#define GL_TEXTURE0 0x84C0
#endif //GL_TEXTURE0
#ifndef GL_TEXTURE1
#define GL_TEXTURE1 0x84C1
#endif //GL_TEXTURE1
#ifndef GL_TEXTURE2
#define GL_TEXTURE2 0x84C2
#endif //GL_TEXTURE2
#ifndef GL_TEXTURE3
#define GL_TEXTURE3 0x84C3
#endif //GL_TEXTURE3
#ifndef GL_TEXTURE4
#define GL_TEXTURE4 0x84C4
#endif //GL_TEXTURE4
#ifndef GL_TEXTURE5
#define GL_TEXTURE5 0x84C5
#endif //GL_TEXTURE5
#ifndef GL_TEXTURE6
#define GL_TEXTURE6 0x84C6
#endif //GL_TEXTURE6
#ifndef GL_TEXTURE7
#define GL_TEXTURE7 0x84C7
#endif //GL_TEXTURE7
#ifndef GL_TEXTURE8
#define GL_TEXTURE8 0x84C8
#endif //GL_TEXTURE8
#ifndef GL_TEXTURE9
#define GL_TEXTURE9 0x84C9
#endif //GL_TEXTURE9
#ifndef GL_TEXTURE10
#define GL_TEXTURE10 0x84CA
#endif //GL_TEXTURE10
#ifndef GL_TEXTURE11
#define GL_TEXTURE11 0x84CB
#endif //GL_TEXTURE11
#ifndef GL_TEXTURE12
#define GL_TEXTURE12 0x84CC
#endif //GL_TEXTURE12
#ifndef GL_TEXTURE13
#define GL_TEXTURE13 0x84CD
#endif //GL_TEXTURE13
#ifndef GL_TEXTURE14
#define GL_TEXTURE14 0x84CE
#endif //GL_TEXTURE14
#ifndef GL_TEXTURE15
#define GL_TEXTURE15 0x84CF
#endif //GL_TEXTURE15
#ifndef GL_TEXTURE16
#define GL_TEXTURE16 0x84D0
#endif //GL_TEXTURE16
#ifndef GL_TEXTURE17
#define GL_TEXTURE17 0x84D1
#endif //GL_TEXTURE17
#ifndef GL_TEXTURE18
#define GL_TEXTURE18 0x84D2
#endif //GL_TEXTURE18
#ifndef GL_TEXTURE19
#define GL_TEXTURE19 0x84D3
#endif //GL_TEXTURE19
#ifndef GL_TEXTURE20
#define GL_TEXTURE20 0x84D4
#endif //GL_TEXTURE20
#ifndef GL_TEXTURE21
#define GL_TEXTURE21 0x84D5
#endif //GL_TEXTURE21
#ifndef GL_TEXTURE22
#define GL_TEXTURE22 0x84D6
#endif //GL_TEXTURE22
#ifndef GL_TEXTURE23
#define GL_TEXTURE23 0x84D7
#endif //GL_TEXTURE23
#ifndef GL_TEXTURE24
#define GL_TEXTURE24 0x84D8
#endif //GL_TEXTURE24
#ifndef GL_TEXTURE25
#define GL_TEXTURE25 0x84D9
#endif //GL_TEXTURE25
#ifndef GL_TEXTURE26
#define GL_TEXTURE26 0x84DA
#endif //GL_TEXTURE26
#ifndef GL_TEXTURE27
#define GL_TEXTURE27 0x84DB
#endif //GL_TEXTURE27
#ifndef GL_TEXTURE28
#define GL_TEXTURE28 0x84DC
#endif //GL_TEXTURE28
#ifndef GL_TEXTURE29
#define GL_TEXTURE29 0x84DD
#endif //GL_TEXTURE29
#ifndef GL_TEXTURE30
#define GL_TEXTURE30 0x84DE
#endif //GL_TEXTURE30
#ifndef GL_TEXTURE31
#define GL_TEXTURE31 0x84DF
#endif //GL_TEXTURE31
#ifndef GL_ACTIVE_TEXTURE
#define GL_ACTIVE_TEXTURE 0x84E0
#endif //GL_ACTIVE_TEXTURE
#ifndef GL_MAX_RENDERBUFFER_SIZE
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#endif //GL_MAX_RENDERBUFFER_SIZE
#ifndef GL_INCR_WRAP
#define GL_INCR_WRAP 0x8507
#endif //GL_INCR_WRAP
#ifndef GL_DECR_WRAP
#define GL_DECR_WRAP 0x8508
#endif //GL_DECR_WRAP
#ifndef GL_TEXTURE_CUBE_MAP
#define GL_TEXTURE_CUBE_MAP 0x8513
#endif //GL_TEXTURE_CUBE_MAP
#ifndef GL_TEXTURE_BINDING_CUBE_MAP
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#endif //GL_TEXTURE_BINDING_CUBE_MAP
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_X
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_X
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_Y
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#endif //GL_TEXTURE_CUBE_MAP_POSITIVE_Z
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#endif //GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#endif //GL_MAX_CUBE_MAP_TEXTURE_SIZE
#ifndef GL_VERTEX_ATTRIB_ARRAY_ENABLED
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#endif //GL_VERTEX_ATTRIB_ARRAY_ENABLED
#ifndef GL_VERTEX_ATTRIB_ARRAY_SIZE
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#endif //GL_VERTEX_ATTRIB_ARRAY_SIZE
#ifndef GL_VERTEX_ATTRIB_ARRAY_STRIDE
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#endif //GL_VERTEX_ATTRIB_ARRAY_STRIDE
#ifndef GL_VERTEX_ATTRIB_ARRAY_TYPE
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#endif //GL_VERTEX_ATTRIB_ARRAY_TYPE
#ifndef GL_CURRENT_VERTEX_ATTRIB
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#endif //GL_CURRENT_VERTEX_ATTRIB
#ifndef GL_VERTEX_ATTRIB_ARRAY_POINTER
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif //GL_VERTEX_ATTRIB_ARRAY_POINTER
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#endif //GL_NUM_COMPRESSED_TEXTURE_FORMATS
#ifndef GL_COMPRESSED_TEXTURE_FORMATS
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#endif //GL_COMPRESSED_TEXTURE_FORMATS
#ifndef GL_BUFFER_SIZE
#define GL_BUFFER_SIZE 0x8764
#endif //GL_BUFFER_SIZE
#ifndef GL_BUFFER_USAGE
#define GL_BUFFER_USAGE 0x8765
#endif //GL_BUFFER_USAGE
#ifndef GL_STENCIL_BACK_FUNC
#define GL_STENCIL_BACK_FUNC 0x8800
#endif //GL_STENCIL_BACK_FUNC
#ifndef GL_STENCIL_BACK_FAIL
#define GL_STENCIL_BACK_FAIL 0x8801
#endif //GL_STENCIL_BACK_FAIL
#ifndef GL_STENCIL_BACK_PASS_DEPTH_FAIL
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#endif //GL_STENCIL_BACK_PASS_DEPTH_FAIL
#ifndef GL_STENCIL_BACK_PASS_DEPTH_PASS
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#endif //GL_STENCIL_BACK_PASS_DEPTH_PASS
#ifndef GL_BLEND_EQUATION_ALPHA
#define GL_BLEND_EQUATION_ALPHA 0x883D
#endif //GL_BLEND_EQUATION_ALPHA
#ifndef GL_MAX_VERTEX_ATTRIBS
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#endif //GL_MAX_VERTEX_ATTRIBS
#ifndef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#endif //GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
#ifndef GL_MAX_TEXTURE_IMAGE_UNITS
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#endif //GL_MAX_TEXTURE_IMAGE_UNITS
#ifndef GL_ARRAY_BUFFER
#define GL_ARRAY_BUFFER 0x8892
#endif //GL_ARRAY_BUFFER
#ifndef GL_ELEMENT_ARRAY_BUFFER
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif //GL_ELEMENT_ARRAY_BUFFER
#ifndef GL_ARRAY_BUFFER_BINDING
#define GL_ARRAY_BUFFER_BINDING 0x8894
#endif //GL_ARRAY_BUFFER_BINDING
#ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#endif //GL_ELEMENT_ARRAY_BUFFER_BINDING
#ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#endif //GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
#ifndef GL_STREAM_DRAW
#define GL_STREAM_DRAW 0x88E0
#endif //GL_STREAM_DRAW
#ifndef GL_STATIC_DRAW
#define GL_STATIC_DRAW 0x88E4
#endif //GL_STATIC_DRAW
#ifndef GL_DYNAMIC_DRAW
#define GL_DYNAMIC_DRAW 0x88E8
#endif //GL_DYNAMIC_DRAW
#ifndef GL_FRAGMENT_SHADER
#define GL_FRAGMENT_SHADER 0x8B30
#endif //GL_FRAGMENT_SHADER
#ifndef GL_VERTEX_SHADER
#define GL_VERTEX_SHADER 0x8B31
#endif //GL_VERTEX_SHADER
#ifndef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#endif //GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
#ifndef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#endif //GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
#ifndef GL_SHADER_TYPE
#define GL_SHADER_TYPE 0x8B4F
#endif //GL_SHADER_TYPE
#ifndef GL_FLOAT_VEC2
#define GL_FLOAT_VEC2 0x8B50
#endif //GL_FLOAT_VEC2
#ifndef GL_FLOAT_VEC3
#define GL_FLOAT_VEC3 0x8B51
#endif //GL_FLOAT_VEC3
#ifndef GL_FLOAT_VEC4
#define GL_FLOAT_VEC4 0x8B52
#endif //GL_FLOAT_VEC4
#ifndef GL_INT_VEC2
#define GL_INT_VEC2 0x8B53
#endif //GL_INT_VEC2
#ifndef GL_INT_VEC3
#define GL_INT_VEC3 0x8B54
#endif //GL_INT_VEC3
#ifndef GL_INT_VEC4
#define GL_INT_VEC4 0x8B55
#endif //GL_INT_VEC4
#ifndef GL_BOOL
#define GL_BOOL 0x8B56
#endif //GL_BOOL
#ifndef GL_BOOL_VEC2
#define GL_BOOL_VEC2 0x8B57
#endif //GL_BOOL_VEC2
#ifndef GL_BOOL_VEC3
#define GL_BOOL_VEC3 0x8B58
#endif //GL_BOOL_VEC3
#ifndef GL_BOOL_VEC4
#define GL_BOOL_VEC4 0x8B59
#endif //GL_BOOL_VEC4
#ifndef GL_FLOAT_MAT2
#define GL_FLOAT_MAT2 0x8B5A
#endif //GL_FLOAT_MAT2
#ifndef GL_FLOAT_MAT3
#define GL_FLOAT_MAT3 0x8B5B
#endif //GL_FLOAT_MAT3
#ifndef GL_FLOAT_MAT4
#define GL_FLOAT_MAT4 0x8B5C
#endif //GL_FLOAT_MAT4
#ifndef GL_SAMPLER_2D
#define GL_SAMPLER_2D 0x8B5E
#endif //GL_SAMPLER_2D
#ifndef GL_SAMPLER_CUBE
#define GL_SAMPLER_CUBE 0x8B60
#endif //GL_SAMPLER_CUBE
#ifndef GL_DELETE_STATUS
#define GL_DELETE_STATUS 0x8B80
#endif //GL_DELETE_STATUS
#ifndef GL_COMPILE_STATUS
#define GL_COMPILE_STATUS 0x8B81
#endif //GL_COMPILE_STATUS
#ifndef GL_LINK_STATUS
#define GL_LINK_STATUS 0x8B82
#endif //GL_LINK_STATUS
#ifndef GL_VALIDATE_STATUS
#define GL_VALIDATE_STATUS 0x8B83
#endif //GL_VALIDATE_STATUS
#ifndef GL_INFO_LOG_LENGTH
#define GL_INFO_LOG_LENGTH 0x8B84
#endif //GL_INFO_LOG_LENGTH
#ifndef GL_ATTACHED_SHADERS
#define GL_ATTACHED_SHADERS 0x8B85
#endif //GL_ATTACHED_SHADERS
#ifndef GL_ACTIVE_UNIFORMS
#define GL_ACTIVE_UNIFORMS 0x8B86
#endif //GL_ACTIVE_UNIFORMS
#ifndef GL_ACTIVE_UNIFORM_MAX_LENGTH
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#endif //GL_ACTIVE_UNIFORM_MAX_LENGTH
#ifndef GL_SHADER_SOURCE_LENGTH
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif //GL_SHADER_SOURCE_LENGTH
#ifndef GL_ACTIVE_ATTRIBUTES
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#endif //GL_ACTIVE_ATTRIBUTES
#ifndef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#endif //GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
#ifndef GL_SHADING_LANGUAGE_VERSION
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif //GL_SHADING_LANGUAGE_VERSION
#ifndef GL_CURRENT_PROGRAM
#define GL_CURRENT_PROGRAM 0x8B8D
#endif //GL_CURRENT_PROGRAM
#ifndef GL_IMPLEMENTATION_COLOR_READ_TYPE
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#endif //GL_IMPLEMENTATION_COLOR_READ_TYPE
#ifndef GL_IMPLEMENTATION_COLOR_READ_FORMAT
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#endif //GL_IMPLEMENTATION_COLOR_READ_FORMAT
#ifndef GL_STENCIL_BACK_REF
#define GL_STENCIL_BACK_REF 0x8CA3
#endif //GL_STENCIL_BACK_REF
#ifndef GL_STENCIL_BACK_VALUE_MASK
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#endif //GL_STENCIL_BACK_VALUE_MASK
#ifndef GL_STENCIL_BACK_WRITEMASK
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#endif //GL_STENCIL_BACK_WRITEMASK
#ifndef GL_FRAMEBUFFER_BINDING
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#endif //GL_FRAMEBUFFER_BINDING
#ifndef GL_RENDERBUFFER_BINDING
#define GL_RENDERBUFFER_BINDING 0x8CA7
#endif //GL_RENDERBUFFER_BINDING
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#endif //GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#endif //GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#endif //GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
#ifndef GL_FRAMEBUFFER_COMPLETE
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#endif //GL_FRAMEBUFFER_COMPLETE
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#endif //GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#endif //GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS 0x8CD9
#endif //GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS
#ifndef GL_FRAMEBUFFER_UNSUPPORTED
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#endif //GL_FRAMEBUFFER_UNSUPPORTED
#ifndef GL_COLOR_ATTACHMENT0
#define GL_COLOR_ATTACHMENT0 0x8CE0
#endif //GL_COLOR_ATTACHMENT0
#ifndef GL_DEPTH_ATTACHMENT
#define GL_DEPTH_ATTACHMENT 0x8D00
#endif //GL_DEPTH_ATTACHMENT
#ifndef GL_STENCIL_ATTACHMENT
#define GL_STENCIL_ATTACHMENT 0x8D20
#endif //GL_STENCIL_ATTACHMENT
#ifndef GL_FRAMEBUFFER
#define GL_FRAMEBUFFER 0x8D40
#endif //GL_FRAMEBUFFER
#ifndef GL_RENDERBUFFER
#define GL_RENDERBUFFER 0x8D41
#endif //GL_RENDERBUFFER
#ifndef GL_RENDERBUFFER_WIDTH
#define GL_RENDERBUFFER_WIDTH 0x8D42
#endif //GL_RENDERBUFFER_WIDTH
#ifndef GL_RENDERBUFFER_HEIGHT
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#endif //GL_RENDERBUFFER_HEIGHT
#ifndef GL_RENDERBUFFER_INTERNAL_FORMAT
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#endif //GL_RENDERBUFFER_INTERNAL_FORMAT
#ifndef GL_STENCIL_INDEX8
#define GL_STENCIL_INDEX8 0x8D48
#endif //GL_STENCIL_INDEX8
#ifndef GL_RENDERBUFFER_RED_SIZE
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#endif //GL_RENDERBUFFER_RED_SIZE
#ifndef GL_RENDERBUFFER_GREEN_SIZE
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#endif //GL_RENDERBUFFER_GREEN_SIZE
#ifndef GL_RENDERBUFFER_BLUE_SIZE
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#endif //GL_RENDERBUFFER_BLUE_SIZE
#ifndef GL_RENDERBUFFER_ALPHA_SIZE
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#endif //GL_RENDERBUFFER_ALPHA_SIZE
#ifndef GL_RENDERBUFFER_DEPTH_SIZE
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#endif //GL_RENDERBUFFER_DEPTH_SIZE
#ifndef GL_RENDERBUFFER_STENCIL_SIZE
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#endif //GL_RENDERBUFFER_STENCIL_SIZE
#ifndef GL_RGB565
#define GL_RGB565 0x8D62
#endif //GL_RGB565
#ifndef GL_LOW_FLOAT
#define GL_LOW_FLOAT 0x8DF0
#endif //GL_LOW_FLOAT
#ifndef GL_MEDIUM_FLOAT
#define GL_MEDIUM_FLOAT 0x8DF1
#endif //GL_MEDIUM_FLOAT
#ifndef GL_HIGH_FLOAT
#define GL_HIGH_FLOAT 0x8DF2
#endif //GL_HIGH_FLOAT
#ifndef GL_LOW_INT
#define GL_LOW_INT 0x8DF3
#endif //GL_LOW_INT
#ifndef GL_MEDIUM_INT
#define GL_MEDIUM_INT 0x8DF4
#endif //GL_MEDIUM_INT
#ifndef GL_HIGH_INT
#define GL_HIGH_INT 0x8DF5
#endif //GL_HIGH_INT
#ifndef GL_SHADER_BINARY_FORMATS
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#endif //GL_SHADER_BINARY_FORMATS
#ifndef GL_NUM_SHADER_BINARY_FORMATS
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#endif //GL_NUM_SHADER_BINARY_FORMATS
#ifndef GL_SHADER_COMPILER
#define GL_SHADER_COMPILER 0x8DFA
#endif //GL_SHADER_COMPILER
#ifndef GL_MAX_VERTEX_UNIFORM_VECTORS
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#endif //GL_MAX_VERTEX_UNIFORM_VECTORS
#ifndef GL_MAX_VARYING_VECTORS
#define GL_MAX_VARYING_VECTORS 0x8DFC
#endif //GL_MAX_VARYING_VECTORS
#ifndef GL_MAX_FRAGMENT_UNIFORM_VECTORS
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#endif //GL_MAX_FRAGMENT_UNIFORM_VECTORS
#ifndef GL_TRUE
#define GL_TRUE 1
#endif //GL_TRUE
#ifndef GL_ONE
#define GL_ONE 1
#endif //GL_ONE
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

#ifndef	GL_HPP_FUNDEF_ActiveTexture
#define GL_HPP_FUNDEF_ActiveTexture
typedef void (*PFNGLACTIVETEXTUREPROC_HPP)(GLenum);
static inline void ActiveTexture(GLenum texture1)
{
	static PFNGLACTIVETEXTUREPROC_HPP fn=reinterpret_cast<PFNGLACTIVETEXTUREPROC_HPP>(_impl::_get_proc_address("glActiveTexture",2,0));
	 fn(texture1);
}
#endif

#ifndef	GL_HPP_FUNDEF_AttachShader
#define GL_HPP_FUNDEF_AttachShader
typedef void (*PFNGLATTACHSHADERPROC_HPP)(GLuint,GLuint);
static inline void AttachShader(GLuint program1,GLuint shader1)
{
	static PFNGLATTACHSHADERPROC_HPP fn=reinterpret_cast<PFNGLATTACHSHADERPROC_HPP>(_impl::_get_proc_address("glAttachShader",2,0));
	 fn(program1,shader1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BindAttribLocation
#define GL_HPP_FUNDEF_BindAttribLocation
typedef void (*PFNGLBINDATTRIBLOCATIONPROC_HPP)(GLuint,GLuint,const GLchar *);
static inline void BindAttribLocation(GLuint program1,GLuint index1,const GLchar * name1)
{
	static PFNGLBINDATTRIBLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC_HPP>(_impl::_get_proc_address("glBindAttribLocation",2,0));
	 fn(program1,index1,name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BindBuffer
#define GL_HPP_FUNDEF_BindBuffer
typedef void (*PFNGLBINDBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindBuffer(GLenum target1,GLuint buffer1)
{
	static PFNGLBINDBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDBUFFERPROC_HPP>(_impl::_get_proc_address("glBindBuffer",2,0));
	 fn(target1,buffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BindFramebuffer
#define GL_HPP_FUNDEF_BindFramebuffer
typedef void (*PFNGLBINDFRAMEBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindFramebuffer(GLenum target1,GLuint framebuffer1)
{
	static PFNGLBINDFRAMEBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC_HPP>(_impl::_get_proc_address("glBindFramebuffer",2,0));
	 fn(target1,framebuffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BindRenderbuffer
#define GL_HPP_FUNDEF_BindRenderbuffer
typedef void (*PFNGLBINDRENDERBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindRenderbuffer(GLenum target1,GLuint renderbuffer1)
{
	static PFNGLBINDRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glBindRenderbuffer",2,0));
	 fn(target1,renderbuffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BindTexture
#define GL_HPP_FUNDEF_BindTexture
typedef void (*PFNGLBINDTEXTUREPROC_HPP)(GLenum,GLuint);
static inline void BindTexture(GLenum target1,GLuint texture1)
{
	static PFNGLBINDTEXTUREPROC_HPP fn=reinterpret_cast<PFNGLBINDTEXTUREPROC_HPP>(_impl::_get_proc_address("glBindTexture",2,0));
	 fn(target1,texture1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendColor
#define GL_HPP_FUNDEF_BlendColor
typedef void (*PFNGLBLENDCOLORPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void BlendColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLBLENDCOLORPROC_HPP fn=reinterpret_cast<PFNGLBLENDCOLORPROC_HPP>(_impl::_get_proc_address("glBlendColor",2,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendEquation
#define GL_HPP_FUNDEF_BlendEquation
typedef void (*PFNGLBLENDEQUATIONPROC_HPP)(GLenum);
static inline void BlendEquation(GLenum mode1)
{
	static PFNGLBLENDEQUATIONPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONPROC_HPP>(_impl::_get_proc_address("glBlendEquation",2,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendEquationSeparate
#define GL_HPP_FUNDEF_BlendEquationSeparate
typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC_HPP)(GLenum,GLenum);
static inline void BlendEquationSeparate(GLenum modeRGB1,GLenum modeAlpha1)
{
	static PFNGLBLENDEQUATIONSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC_HPP>(_impl::_get_proc_address("glBlendEquationSeparate",2,0));
	 fn(modeRGB1,modeAlpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendFunc
#define GL_HPP_FUNDEF_BlendFunc
typedef void (*PFNGLBLENDFUNCPROC_HPP)(GLenum,GLenum);
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	static PFNGLBLENDFUNCPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCPROC_HPP>(_impl::_get_proc_address("glBlendFunc",2,0));
	 fn(sfactor1,dfactor1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BlendFuncSeparate
#define GL_HPP_FUNDEF_BlendFuncSeparate
typedef void (*PFNGLBLENDFUNCSEPARATEPROC_HPP)(GLenum,GLenum,GLenum,GLenum);
static inline void BlendFuncSeparate(GLenum sfactorRGB1,GLenum dfactorRGB1,GLenum sfactorAlpha1,GLenum dfactorAlpha1)
{
	static PFNGLBLENDFUNCSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC_HPP>(_impl::_get_proc_address("glBlendFuncSeparate",2,0));
	 fn(sfactorRGB1,dfactorRGB1,sfactorAlpha1,dfactorAlpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BufferData
#define GL_HPP_FUNDEF_BufferData
typedef void (*PFNGLBUFFERDATAPROC_HPP)(GLenum,GLsizeiptr,const void *,GLenum);
static inline void BufferData(GLenum target1,GLsizeiptr size1,const void * data1,GLenum usage1)
{
	static PFNGLBUFFERDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERDATAPROC_HPP>(_impl::_get_proc_address("glBufferData",2,0));
	 fn(target1,size1,data1,usage1);
}
#endif

#ifndef	GL_HPP_FUNDEF_BufferSubData
#define GL_HPP_FUNDEF_BufferSubData
typedef void (*PFNGLBUFFERSUBDATAPROC_HPP)(GLenum,GLintptr,GLsizeiptr,const void *);
static inline void BufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,const void * data1)
{
	static PFNGLBUFFERSUBDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERSUBDATAPROC_HPP>(_impl::_get_proc_address("glBufferSubData",2,0));
	 fn(target1,offset1,size1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CheckFramebufferStatus
#define GL_HPP_FUNDEF_CheckFramebufferStatus
typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP)(GLenum);
static inline GLenum CheckFramebufferStatus(GLenum target1)
{
	static PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP fn=reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP>(_impl::_get_proc_address("glCheckFramebufferStatus",2,0));
	return fn(target1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Clear
#define GL_HPP_FUNDEF_Clear
typedef void (*PFNGLCLEARPROC_HPP)(GLbitfield);
static inline void Clear(GLbitfield mask1)
{
	static PFNGLCLEARPROC_HPP fn=reinterpret_cast<PFNGLCLEARPROC_HPP>(_impl::_get_proc_address("glClear",2,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearColor
#define GL_HPP_FUNDEF_ClearColor
typedef void (*PFNGLCLEARCOLORPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLCLEARCOLORPROC_HPP fn=reinterpret_cast<PFNGLCLEARCOLORPROC_HPP>(_impl::_get_proc_address("glClearColor",2,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearDepthf
#define GL_HPP_FUNDEF_ClearDepthf
typedef void (*PFNGLCLEARDEPTHFPROC_HPP)(GLfloat);
static inline void ClearDepthf(GLfloat d1)
{
	static PFNGLCLEARDEPTHFPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHFPROC_HPP>(_impl::_get_proc_address("glClearDepthf",2,0));
	 fn(d1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ClearStencil
#define GL_HPP_FUNDEF_ClearStencil
typedef void (*PFNGLCLEARSTENCILPROC_HPP)(GLint);
static inline void ClearStencil(GLint s1)
{
	static PFNGLCLEARSTENCILPROC_HPP fn=reinterpret_cast<PFNGLCLEARSTENCILPROC_HPP>(_impl::_get_proc_address("glClearStencil",2,0));
	 fn(s1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ColorMask
#define GL_HPP_FUNDEF_ColorMask
typedef void (*PFNGLCOLORMASKPROC_HPP)(GLboolean,GLboolean,GLboolean,GLboolean);
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	static PFNGLCOLORMASKPROC_HPP fn=reinterpret_cast<PFNGLCOLORMASKPROC_HPP>(_impl::_get_proc_address("glColorMask",2,0));
	 fn(red1,green1,blue1,alpha1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CompileShader
#define GL_HPP_FUNDEF_CompileShader
typedef void (*PFNGLCOMPILESHADERPROC_HPP)(GLuint);
static inline void CompileShader(GLuint shader1)
{
	static PFNGLCOMPILESHADERPROC_HPP fn=reinterpret_cast<PFNGLCOMPILESHADERPROC_HPP>(_impl::_get_proc_address("glCompileShader",2,0));
	 fn(shader1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CompressedTexImage2D
#define GL_HPP_FUNDEF_CompressedTexImage2D
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage2D",2,0));
	 fn(target1,level1,internalformat1,width1,height1,border1,imageSize1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CompressedTexSubImage2D
#define GL_HPP_FUNDEF_CompressedTexSubImage2D
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage2D",2,0));
	 fn(target1,level1,xoffset1,yoffset1,width1,height1,format1,imageSize1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CopyTexImage2D
#define GL_HPP_FUNDEF_CopyTexImage2D
typedef void (*PFNGLCOPYTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
static inline void CopyTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLint border1)
{
	static PFNGLCOPYTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOPYTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCopyTexImage2D",2,0));
	 fn(target1,level1,internalformat1,x1,y1,width1,height1,border1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CopyTexSubImage2D
#define GL_HPP_FUNDEF_CopyTexSubImage2D
typedef void (*PFNGLCOPYTEXSUBIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
static inline void CopyTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLCOPYTEXSUBIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCopyTexSubImage2D",2,0));
	 fn(target1,level1,xoffset1,yoffset1,x1,y1,width1,height1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CreateProgram
#define GL_HPP_FUNDEF_CreateProgram
typedef GLuint (*PFNGLCREATEPROGRAMPROC_HPP)();
static inline GLuint CreateProgram()
{
	static PFNGLCREATEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLCREATEPROGRAMPROC_HPP>(_impl::_get_proc_address("glCreateProgram",2,0));
	return fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_CreateShader
#define GL_HPP_FUNDEF_CreateShader
typedef GLuint (*PFNGLCREATESHADERPROC_HPP)(GLenum);
static inline GLuint CreateShader(GLenum type1)
{
	static PFNGLCREATESHADERPROC_HPP fn=reinterpret_cast<PFNGLCREATESHADERPROC_HPP>(_impl::_get_proc_address("glCreateShader",2,0));
	return fn(type1);
}
#endif

#ifndef	GL_HPP_FUNDEF_CullFace
#define GL_HPP_FUNDEF_CullFace
typedef void (*PFNGLCULLFACEPROC_HPP)(GLenum);
static inline void CullFace(GLenum mode1)
{
	static PFNGLCULLFACEPROC_HPP fn=reinterpret_cast<PFNGLCULLFACEPROC_HPP>(_impl::_get_proc_address("glCullFace",2,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteBuffers
#define GL_HPP_FUNDEF_DeleteBuffers
typedef void (*PFNGLDELETEBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteBuffers(GLsizei n1,const GLuint * buffers1)
{
	static PFNGLDELETEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETEBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteBuffers",2,0));
	 fn(n1,buffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteFramebuffers
#define GL_HPP_FUNDEF_DeleteFramebuffers
typedef void (*PFNGLDELETEFRAMEBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteFramebuffers(GLsizei n1,const GLuint * framebuffers1)
{
	static PFNGLDELETEFRAMEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteFramebuffers",2,0));
	 fn(n1,framebuffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteProgram
#define GL_HPP_FUNDEF_DeleteProgram
typedef void (*PFNGLDELETEPROGRAMPROC_HPP)(GLuint);
static inline void DeleteProgram(GLuint program1)
{
	static PFNGLDELETEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLDELETEPROGRAMPROC_HPP>(_impl::_get_proc_address("glDeleteProgram",2,0));
	 fn(program1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteRenderbuffers
#define GL_HPP_FUNDEF_DeleteRenderbuffers
typedef void (*PFNGLDELETERENDERBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteRenderbuffers(GLsizei n1,const GLuint * renderbuffers1)
{
	static PFNGLDELETERENDERBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteRenderbuffers",2,0));
	 fn(n1,renderbuffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteShader
#define GL_HPP_FUNDEF_DeleteShader
typedef void (*PFNGLDELETESHADERPROC_HPP)(GLuint);
static inline void DeleteShader(GLuint shader1)
{
	static PFNGLDELETESHADERPROC_HPP fn=reinterpret_cast<PFNGLDELETESHADERPROC_HPP>(_impl::_get_proc_address("glDeleteShader",2,0));
	 fn(shader1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DeleteTextures
#define GL_HPP_FUNDEF_DeleteTextures
typedef void (*PFNGLDELETETEXTURESPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteTextures(GLsizei n1,const GLuint * textures1)
{
	static PFNGLDELETETEXTURESPROC_HPP fn=reinterpret_cast<PFNGLDELETETEXTURESPROC_HPP>(_impl::_get_proc_address("glDeleteTextures",2,0));
	 fn(n1,textures1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthFunc
#define GL_HPP_FUNDEF_DepthFunc
typedef void (*PFNGLDEPTHFUNCPROC_HPP)(GLenum);
static inline void DepthFunc(GLenum func1)
{
	static PFNGLDEPTHFUNCPROC_HPP fn=reinterpret_cast<PFNGLDEPTHFUNCPROC_HPP>(_impl::_get_proc_address("glDepthFunc",2,0));
	 fn(func1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthMask
#define GL_HPP_FUNDEF_DepthMask
typedef void (*PFNGLDEPTHMASKPROC_HPP)(GLboolean);
static inline void DepthMask(GLboolean flag1)
{
	static PFNGLDEPTHMASKPROC_HPP fn=reinterpret_cast<PFNGLDEPTHMASKPROC_HPP>(_impl::_get_proc_address("glDepthMask",2,0));
	 fn(flag1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DepthRangef
#define GL_HPP_FUNDEF_DepthRangef
typedef void (*PFNGLDEPTHRANGEFPROC_HPP)(GLfloat,GLfloat);
static inline void DepthRangef(GLfloat n1,GLfloat f1)
{
	static PFNGLDEPTHRANGEFPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEFPROC_HPP>(_impl::_get_proc_address("glDepthRangef",2,0));
	 fn(n1,f1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DetachShader
#define GL_HPP_FUNDEF_DetachShader
typedef void (*PFNGLDETACHSHADERPROC_HPP)(GLuint,GLuint);
static inline void DetachShader(GLuint program1,GLuint shader1)
{
	static PFNGLDETACHSHADERPROC_HPP fn=reinterpret_cast<PFNGLDETACHSHADERPROC_HPP>(_impl::_get_proc_address("glDetachShader",2,0));
	 fn(program1,shader1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Disable
#define GL_HPP_FUNDEF_Disable
typedef void (*PFNGLDISABLEPROC_HPP)(GLenum);
static inline void Disable(GLenum cap1)
{
	static PFNGLDISABLEPROC_HPP fn=reinterpret_cast<PFNGLDISABLEPROC_HPP>(_impl::_get_proc_address("glDisable",2,0));
	 fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DisableVertexAttribArray
#define GL_HPP_FUNDEF_DisableVertexAttribArray
typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP)(GLuint);
static inline void DisableVertexAttribArray(GLuint index1)
{
	static PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP fn=reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP>(_impl::_get_proc_address("glDisableVertexAttribArray",2,0));
	 fn(index1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DrawArrays
#define GL_HPP_FUNDEF_DrawArrays
typedef void (*PFNGLDRAWARRAYSPROC_HPP)(GLenum,GLint,GLsizei);
static inline void DrawArrays(GLenum mode1,GLint first1,GLsizei count1)
{
	static PFNGLDRAWARRAYSPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSPROC_HPP>(_impl::_get_proc_address("glDrawArrays",2,0));
	 fn(mode1,first1,count1);
}
#endif

#ifndef	GL_HPP_FUNDEF_DrawElements
#define GL_HPP_FUNDEF_DrawElements
typedef void (*PFNGLDRAWELEMENTSPROC_HPP)(GLenum,GLsizei,GLenum,const void *);
static inline void DrawElements(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1)
{
	static PFNGLDRAWELEMENTSPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSPROC_HPP>(_impl::_get_proc_address("glDrawElements",2,0));
	 fn(mode1,count1,type1,indices1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Enable
#define GL_HPP_FUNDEF_Enable
typedef void (*PFNGLENABLEPROC_HPP)(GLenum);
static inline void Enable(GLenum cap1)
{
	static PFNGLENABLEPROC_HPP fn=reinterpret_cast<PFNGLENABLEPROC_HPP>(_impl::_get_proc_address("glEnable",2,0));
	 fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_EnableVertexAttribArray
#define GL_HPP_FUNDEF_EnableVertexAttribArray
typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP)(GLuint);
static inline void EnableVertexAttribArray(GLuint index1)
{
	static PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP fn=reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP>(_impl::_get_proc_address("glEnableVertexAttribArray",2,0));
	 fn(index1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Finish
#define GL_HPP_FUNDEF_Finish
typedef void (*PFNGLFINISHPROC_HPP)();
static inline void Finish()
{
	static PFNGLFINISHPROC_HPP fn=reinterpret_cast<PFNGLFINISHPROC_HPP>(_impl::_get_proc_address("glFinish",2,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_Flush
#define GL_HPP_FUNDEF_Flush
typedef void (*PFNGLFLUSHPROC_HPP)();
static inline void Flush()
{
	static PFNGLFLUSHPROC_HPP fn=reinterpret_cast<PFNGLFLUSHPROC_HPP>(_impl::_get_proc_address("glFlush",2,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_FramebufferRenderbuffer
#define GL_HPP_FUNDEF_FramebufferRenderbuffer
typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP)(GLenum,GLenum,GLenum,GLuint);
static inline void FramebufferRenderbuffer(GLenum target1,GLenum attachment1,GLenum renderbuffertarget1,GLuint renderbuffer1)
{
	static PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glFramebufferRenderbuffer",2,0));
	 fn(target1,attachment1,renderbuffertarget1,renderbuffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_FramebufferTexture2D
#define GL_HPP_FUNDEF_FramebufferTexture2D
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint);
static inline void FramebufferTexture2D(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture2D",2,0));
	 fn(target1,attachment1,textarget1,texture1,level1);
}
#endif

#ifndef	GL_HPP_FUNDEF_FrontFace
#define GL_HPP_FUNDEF_FrontFace
typedef void (*PFNGLFRONTFACEPROC_HPP)(GLenum);
static inline void FrontFace(GLenum mode1)
{
	static PFNGLFRONTFACEPROC_HPP fn=reinterpret_cast<PFNGLFRONTFACEPROC_HPP>(_impl::_get_proc_address("glFrontFace",2,0));
	 fn(mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenBuffers
#define GL_HPP_FUNDEF_GenBuffers
typedef void (*PFNGLGENBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenBuffers(GLsizei n1,GLuint * buffers1)
{
	static PFNGLGENBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenBuffers",2,0));
	 fn(n1,buffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenFramebuffers
#define GL_HPP_FUNDEF_GenFramebuffers
typedef void (*PFNGLGENFRAMEBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenFramebuffers(GLsizei n1,GLuint * framebuffers1)
{
	static PFNGLGENFRAMEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenFramebuffers",2,0));
	 fn(n1,framebuffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenRenderbuffers
#define GL_HPP_FUNDEF_GenRenderbuffers
typedef void (*PFNGLGENRENDERBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenRenderbuffers(GLsizei n1,GLuint * renderbuffers1)
{
	static PFNGLGENRENDERBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENRENDERBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenRenderbuffers",2,0));
	 fn(n1,renderbuffers1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenTextures
#define GL_HPP_FUNDEF_GenTextures
typedef void (*PFNGLGENTEXTURESPROC_HPP)(GLsizei,GLuint *);
static inline void GenTextures(GLsizei n1,GLuint * textures1)
{
	static PFNGLGENTEXTURESPROC_HPP fn=reinterpret_cast<PFNGLGENTEXTURESPROC_HPP>(_impl::_get_proc_address("glGenTextures",2,0));
	 fn(n1,textures1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GenerateMipmap
#define GL_HPP_FUNDEF_GenerateMipmap
typedef void (*PFNGLGENERATEMIPMAPPROC_HPP)(GLenum);
static inline void GenerateMipmap(GLenum target1)
{
	static PFNGLGENERATEMIPMAPPROC_HPP fn=reinterpret_cast<PFNGLGENERATEMIPMAPPROC_HPP>(_impl::_get_proc_address("glGenerateMipmap",2,0));
	 fn(target1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetActiveAttrib
#define GL_HPP_FUNDEF_GetActiveAttrib
typedef void (*PFNGLGETACTIVEATTRIBPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
static inline void GetActiveAttrib(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	static PFNGLGETACTIVEATTRIBPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEATTRIBPROC_HPP>(_impl::_get_proc_address("glGetActiveAttrib",2,0));
	 fn(program1,index1,bufSize1,length1,size1,type1,name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetActiveUniform
#define GL_HPP_FUNDEF_GetActiveUniform
typedef void (*PFNGLGETACTIVEUNIFORMPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
static inline void GetActiveUniform(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	static PFNGLGETACTIVEUNIFORMPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC_HPP>(_impl::_get_proc_address("glGetActiveUniform",2,0));
	 fn(program1,index1,bufSize1,length1,size1,type1,name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetAttachedShaders
#define GL_HPP_FUNDEF_GetAttachedShaders
typedef void (*PFNGLGETATTACHEDSHADERSPROC_HPP)(GLuint,GLsizei,GLsizei *,GLuint *);
static inline void GetAttachedShaders(GLuint program1,GLsizei maxCount1,GLsizei * count1,GLuint * shaders1)
{
	static PFNGLGETATTACHEDSHADERSPROC_HPP fn=reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC_HPP>(_impl::_get_proc_address("glGetAttachedShaders",2,0));
	 fn(program1,maxCount1,count1,shaders1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetAttribLocation
#define GL_HPP_FUNDEF_GetAttribLocation
typedef GLint (*PFNGLGETATTRIBLOCATIONPROC_HPP)(GLuint,const GLchar *);
static inline GLint GetAttribLocation(GLuint program1,const GLchar * name1)
{
	static PFNGLGETATTRIBLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC_HPP>(_impl::_get_proc_address("glGetAttribLocation",2,0));
	return fn(program1,name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetBooleanv
#define GL_HPP_FUNDEF_GetBooleanv
typedef void (*PFNGLGETBOOLEANVPROC_HPP)(GLenum,GLboolean *);
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	static PFNGLGETBOOLEANVPROC_HPP fn=reinterpret_cast<PFNGLGETBOOLEANVPROC_HPP>(_impl::_get_proc_address("glGetBooleanv",2,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetBufferParameteriv
#define GL_HPP_FUNDEF_GetBufferParameteriv
typedef void (*PFNGLGETBUFFERPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetBufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETBUFFERPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetBufferParameteriv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetError
#define GL_HPP_FUNDEF_GetError
typedef GLenum (*PFNGLGETERRORPROC_HPP)();
static inline GLenum GetError()
{
	static PFNGLGETERRORPROC_HPP fn=reinterpret_cast<PFNGLGETERRORPROC_HPP>(_impl::_get_proc_address("glGetError",2,0));
	return fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_GetFloatv
#define GL_HPP_FUNDEF_GetFloatv
typedef void (*PFNGLGETFLOATVPROC_HPP)(GLenum,GLfloat *);
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	static PFNGLGETFLOATVPROC_HPP fn=reinterpret_cast<PFNGLGETFLOATVPROC_HPP>(_impl::_get_proc_address("glGetFloatv",2,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetFramebufferAttachmentParameteriv
#define GL_HPP_FUNDEF_GetFramebufferAttachmentParameteriv
typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP)(GLenum,GLenum,GLenum,GLint *);
static inline void GetFramebufferAttachmentParameteriv(GLenum target1,GLenum attachment1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetFramebufferAttachmentParameteriv",2,0));
	 fn(target1,attachment1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetIntegerv
#define GL_HPP_FUNDEF_GetIntegerv
typedef void (*PFNGLGETINTEGERVPROC_HPP)(GLenum,GLint *);
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	static PFNGLGETINTEGERVPROC_HPP fn=reinterpret_cast<PFNGLGETINTEGERVPROC_HPP>(_impl::_get_proc_address("glGetIntegerv",2,0));
	 fn(pname1,data1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetProgramInfoLog
#define GL_HPP_FUNDEF_GetProgramInfoLog
typedef void (*PFNGLGETPROGRAMINFOLOGPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetProgramInfoLog(GLuint program1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	static PFNGLGETPROGRAMINFOLOGPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC_HPP>(_impl::_get_proc_address("glGetProgramInfoLog",2,0));
	 fn(program1,bufSize1,length1,infoLog1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetProgramiv
#define GL_HPP_FUNDEF_GetProgramiv
typedef void (*PFNGLGETPROGRAMIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetProgramiv(GLuint program1,GLenum pname1,GLint * params1)
{
	static PFNGLGETPROGRAMIVPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMIVPROC_HPP>(_impl::_get_proc_address("glGetProgramiv",2,0));
	 fn(program1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetRenderbufferParameteriv
#define GL_HPP_FUNDEF_GetRenderbufferParameteriv
typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetRenderbufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetRenderbufferParameteriv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetShaderInfoLog
#define GL_HPP_FUNDEF_GetShaderInfoLog
typedef void (*PFNGLGETSHADERINFOLOGPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetShaderInfoLog(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	static PFNGLGETSHADERINFOLOGPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERINFOLOGPROC_HPP>(_impl::_get_proc_address("glGetShaderInfoLog",2,0));
	 fn(shader1,bufSize1,length1,infoLog1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetShaderPrecisionFormat
#define GL_HPP_FUNDEF_GetShaderPrecisionFormat
typedef void (*PFNGLGETSHADERPRECISIONFORMATPROC_HPP)(GLenum,GLenum,GLint *,GLint *);
static inline void GetShaderPrecisionFormat(GLenum shadertype1,GLenum precisiontype1,GLint * range1,GLint * precision1)
{
	static PFNGLGETSHADERPRECISIONFORMATPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC_HPP>(_impl::_get_proc_address("glGetShaderPrecisionFormat",2,0));
	 fn(shadertype1,precisiontype1,range1,precision1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetShaderSource
#define GL_HPP_FUNDEF_GetShaderSource
typedef void (*PFNGLGETSHADERSOURCEPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetShaderSource(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * source1)
{
	static PFNGLGETSHADERSOURCEPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERSOURCEPROC_HPP>(_impl::_get_proc_address("glGetShaderSource",2,0));
	 fn(shader1,bufSize1,length1,source1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetShaderiv
#define GL_HPP_FUNDEF_GetShaderiv
typedef void (*PFNGLGETSHADERIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetShaderiv(GLuint shader1,GLenum pname1,GLint * params1)
{
	static PFNGLGETSHADERIVPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERIVPROC_HPP>(_impl::_get_proc_address("glGetShaderiv",2,0));
	 fn(shader1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetString
#define GL_HPP_FUNDEF_GetString
typedef const GLubyte * (*PFNGLGETSTRINGPROC_HPP)(GLenum);
static inline const GLubyte * GetString(GLenum name1)
{
	static PFNGLGETSTRINGPROC_HPP fn=reinterpret_cast<PFNGLGETSTRINGPROC_HPP>(_impl::_get_proc_address("glGetString",2,0));
	return fn(name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexParameterfv
#define GL_HPP_FUNDEF_GetTexParameterfv
typedef void (*PFNGLGETTEXPARAMETERFVPROC_HPP)(GLenum,GLenum,GLfloat *);
static inline void GetTexParameterfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETTEXPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glGetTexParameterfv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetTexParameteriv
#define GL_HPP_FUNDEF_GetTexParameteriv
typedef void (*PFNGLGETTEXPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetTexParameteriv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetUniformLocation
#define GL_HPP_FUNDEF_GetUniformLocation
typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC_HPP)(GLuint,const GLchar *);
static inline GLint GetUniformLocation(GLuint program1,const GLchar * name1)
{
	static PFNGLGETUNIFORMLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC_HPP>(_impl::_get_proc_address("glGetUniformLocation",2,0));
	return fn(program1,name1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetUniformfv
#define GL_HPP_FUNDEF_GetUniformfv
typedef void (*PFNGLGETUNIFORMFVPROC_HPP)(GLuint,GLint,GLfloat *);
static inline void GetUniformfv(GLuint program1,GLint location1,GLfloat * params1)
{
	static PFNGLGETUNIFORMFVPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMFVPROC_HPP>(_impl::_get_proc_address("glGetUniformfv",2,0));
	 fn(program1,location1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetUniformiv
#define GL_HPP_FUNDEF_GetUniformiv
typedef void (*PFNGLGETUNIFORMIVPROC_HPP)(GLuint,GLint,GLint *);
static inline void GetUniformiv(GLuint program1,GLint location1,GLint * params1)
{
	static PFNGLGETUNIFORMIVPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMIVPROC_HPP>(_impl::_get_proc_address("glGetUniformiv",2,0));
	 fn(program1,location1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetVertexAttribPointerv
#define GL_HPP_FUNDEF_GetVertexAttribPointerv
typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP)(GLuint,GLenum,void **);
static inline void GetVertexAttribPointerv(GLuint index1,GLenum pname1,void ** pointer1)
{
	static PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribPointerv",2,0));
	 fn(index1,pname1,pointer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetVertexAttribfv
#define GL_HPP_FUNDEF_GetVertexAttribfv
typedef void (*PFNGLGETVERTEXATTRIBFVPROC_HPP)(GLuint,GLenum,GLfloat *);
static inline void GetVertexAttribfv(GLuint index1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETVERTEXATTRIBFVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribfv",2,0));
	 fn(index1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_GetVertexAttribiv
#define GL_HPP_FUNDEF_GetVertexAttribiv
typedef void (*PFNGLGETVERTEXATTRIBIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetVertexAttribiv(GLuint index1,GLenum pname1,GLint * params1)
{
	static PFNGLGETVERTEXATTRIBIVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribiv",2,0));
	 fn(index1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Hint
#define GL_HPP_FUNDEF_Hint
typedef void (*PFNGLHINTPROC_HPP)(GLenum,GLenum);
static inline void Hint(GLenum target1,GLenum mode1)
{
	static PFNGLHINTPROC_HPP fn=reinterpret_cast<PFNGLHINTPROC_HPP>(_impl::_get_proc_address("glHint",2,0));
	 fn(target1,mode1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsBuffer
#define GL_HPP_FUNDEF_IsBuffer
typedef GLboolean (*PFNGLISBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsBuffer(GLuint buffer1)
{
	static PFNGLISBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISBUFFERPROC_HPP>(_impl::_get_proc_address("glIsBuffer",2,0));
	return fn(buffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsEnabled
#define GL_HPP_FUNDEF_IsEnabled
typedef GLboolean (*PFNGLISENABLEDPROC_HPP)(GLenum);
static inline GLboolean IsEnabled(GLenum cap1)
{
	static PFNGLISENABLEDPROC_HPP fn=reinterpret_cast<PFNGLISENABLEDPROC_HPP>(_impl::_get_proc_address("glIsEnabled",2,0));
	return fn(cap1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsFramebuffer
#define GL_HPP_FUNDEF_IsFramebuffer
typedef GLboolean (*PFNGLISFRAMEBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsFramebuffer(GLuint framebuffer1)
{
	static PFNGLISFRAMEBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISFRAMEBUFFERPROC_HPP>(_impl::_get_proc_address("glIsFramebuffer",2,0));
	return fn(framebuffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsProgram
#define GL_HPP_FUNDEF_IsProgram
typedef GLboolean (*PFNGLISPROGRAMPROC_HPP)(GLuint);
static inline GLboolean IsProgram(GLuint program1)
{
	static PFNGLISPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLISPROGRAMPROC_HPP>(_impl::_get_proc_address("glIsProgram",2,0));
	return fn(program1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsRenderbuffer
#define GL_HPP_FUNDEF_IsRenderbuffer
typedef GLboolean (*PFNGLISRENDERBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsRenderbuffer(GLuint renderbuffer1)
{
	static PFNGLISRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glIsRenderbuffer",2,0));
	return fn(renderbuffer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsShader
#define GL_HPP_FUNDEF_IsShader
typedef GLboolean (*PFNGLISSHADERPROC_HPP)(GLuint);
static inline GLboolean IsShader(GLuint shader1)
{
	static PFNGLISSHADERPROC_HPP fn=reinterpret_cast<PFNGLISSHADERPROC_HPP>(_impl::_get_proc_address("glIsShader",2,0));
	return fn(shader1);
}
#endif

#ifndef	GL_HPP_FUNDEF_IsTexture
#define GL_HPP_FUNDEF_IsTexture
typedef GLboolean (*PFNGLISTEXTUREPROC_HPP)(GLuint);
static inline GLboolean IsTexture(GLuint texture1)
{
	static PFNGLISTEXTUREPROC_HPP fn=reinterpret_cast<PFNGLISTEXTUREPROC_HPP>(_impl::_get_proc_address("glIsTexture",2,0));
	return fn(texture1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LineWidth
#define GL_HPP_FUNDEF_LineWidth
typedef void (*PFNGLLINEWIDTHPROC_HPP)(GLfloat);
static inline void LineWidth(GLfloat width1)
{
	static PFNGLLINEWIDTHPROC_HPP fn=reinterpret_cast<PFNGLLINEWIDTHPROC_HPP>(_impl::_get_proc_address("glLineWidth",2,0));
	 fn(width1);
}
#endif

#ifndef	GL_HPP_FUNDEF_LinkProgram
#define GL_HPP_FUNDEF_LinkProgram
typedef void (*PFNGLLINKPROGRAMPROC_HPP)(GLuint);
static inline void LinkProgram(GLuint program1)
{
	static PFNGLLINKPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLLINKPROGRAMPROC_HPP>(_impl::_get_proc_address("glLinkProgram",2,0));
	 fn(program1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PixelStorei
#define GL_HPP_FUNDEF_PixelStorei
typedef void (*PFNGLPIXELSTOREIPROC_HPP)(GLenum,GLint);
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	static PFNGLPIXELSTOREIPROC_HPP fn=reinterpret_cast<PFNGLPIXELSTOREIPROC_HPP>(_impl::_get_proc_address("glPixelStorei",2,0));
	 fn(pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_PolygonOffset
#define GL_HPP_FUNDEF_PolygonOffset
typedef void (*PFNGLPOLYGONOFFSETPROC_HPP)(GLfloat,GLfloat);
static inline void PolygonOffset(GLfloat factor1,GLfloat units1)
{
	static PFNGLPOLYGONOFFSETPROC_HPP fn=reinterpret_cast<PFNGLPOLYGONOFFSETPROC_HPP>(_impl::_get_proc_address("glPolygonOffset",2,0));
	 fn(factor1,units1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ReadPixels
#define GL_HPP_FUNDEF_ReadPixels
typedef void (*PFNGLREADPIXELSPROC_HPP)(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	static PFNGLREADPIXELSPROC_HPP fn=reinterpret_cast<PFNGLREADPIXELSPROC_HPP>(_impl::_get_proc_address("glReadPixels",2,0));
	 fn(x1,y1,width1,height1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ReleaseShaderCompiler
#define GL_HPP_FUNDEF_ReleaseShaderCompiler
typedef void (*PFNGLRELEASESHADERCOMPILERPROC_HPP)();
static inline void ReleaseShaderCompiler()
{
	static PFNGLRELEASESHADERCOMPILERPROC_HPP fn=reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC_HPP>(_impl::_get_proc_address("glReleaseShaderCompiler",2,0));
	 fn();
}
#endif

#ifndef	GL_HPP_FUNDEF_RenderbufferStorage
#define GL_HPP_FUNDEF_RenderbufferStorage
typedef void (*PFNGLRENDERBUFFERSTORAGEPROC_HPP)(GLenum,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorage(GLenum target1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorage",2,0));
	 fn(target1,internalformat1,width1,height1);
}
#endif

#ifndef	GL_HPP_FUNDEF_SampleCoverage
#define GL_HPP_FUNDEF_SampleCoverage
typedef void (*PFNGLSAMPLECOVERAGEPROC_HPP)(GLfloat,GLboolean);
static inline void SampleCoverage(GLfloat value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEPROC_HPP>(_impl::_get_proc_address("glSampleCoverage",2,0));
	 fn(value1,invert1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Scissor
#define GL_HPP_FUNDEF_Scissor
typedef void (*PFNGLSCISSORPROC_HPP)(GLint,GLint,GLsizei,GLsizei);
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLSCISSORPROC_HPP fn=reinterpret_cast<PFNGLSCISSORPROC_HPP>(_impl::_get_proc_address("glScissor",2,0));
	 fn(x1,y1,width1,height1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ShaderBinary
#define GL_HPP_FUNDEF_ShaderBinary
typedef void (*PFNGLSHADERBINARYPROC_HPP)(GLsizei,const GLuint *,GLenum,const void *,GLsizei);
static inline void ShaderBinary(GLsizei count1,const GLuint * shaders1,GLenum binaryformat1,const void * binary1,GLsizei length1)
{
	static PFNGLSHADERBINARYPROC_HPP fn=reinterpret_cast<PFNGLSHADERBINARYPROC_HPP>(_impl::_get_proc_address("glShaderBinary",2,0));
	 fn(count1,shaders1,binaryformat1,binary1,length1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ShaderSource
#define GL_HPP_FUNDEF_ShaderSource
typedef void (*PFNGLSHADERSOURCEPROC_HPP)(GLuint,GLsizei,const GLchar *const*,const GLint *);
static inline void ShaderSource(GLuint shader1,GLsizei count1,const GLchar *const* string1,const GLint * length1)
{
	static PFNGLSHADERSOURCEPROC_HPP fn=reinterpret_cast<PFNGLSHADERSOURCEPROC_HPP>(_impl::_get_proc_address("glShaderSource",2,0));
	 fn(shader1,count1,string1,length1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilFunc
#define GL_HPP_FUNDEF_StencilFunc
typedef void (*PFNGLSTENCILFUNCPROC_HPP)(GLenum,GLint,GLuint);
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	static PFNGLSTENCILFUNCPROC_HPP fn=reinterpret_cast<PFNGLSTENCILFUNCPROC_HPP>(_impl::_get_proc_address("glStencilFunc",2,0));
	 fn(func1,ref1,mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilFuncSeparate
#define GL_HPP_FUNDEF_StencilFuncSeparate
typedef void (*PFNGLSTENCILFUNCSEPARATEPROC_HPP)(GLenum,GLenum,GLint,GLuint);
static inline void StencilFuncSeparate(GLenum face1,GLenum func1,GLint ref1,GLuint mask1)
{
	static PFNGLSTENCILFUNCSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilFuncSeparate",2,0));
	 fn(face1,func1,ref1,mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilMask
#define GL_HPP_FUNDEF_StencilMask
typedef void (*PFNGLSTENCILMASKPROC_HPP)(GLuint);
static inline void StencilMask(GLuint mask1)
{
	static PFNGLSTENCILMASKPROC_HPP fn=reinterpret_cast<PFNGLSTENCILMASKPROC_HPP>(_impl::_get_proc_address("glStencilMask",2,0));
	 fn(mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilMaskSeparate
#define GL_HPP_FUNDEF_StencilMaskSeparate
typedef void (*PFNGLSTENCILMASKSEPARATEPROC_HPP)(GLenum,GLuint);
static inline void StencilMaskSeparate(GLenum face1,GLuint mask1)
{
	static PFNGLSTENCILMASKSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilMaskSeparate",2,0));
	 fn(face1,mask1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilOp
#define GL_HPP_FUNDEF_StencilOp
typedef void (*PFNGLSTENCILOPPROC_HPP)(GLenum,GLenum,GLenum);
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	static PFNGLSTENCILOPPROC_HPP fn=reinterpret_cast<PFNGLSTENCILOPPROC_HPP>(_impl::_get_proc_address("glStencilOp",2,0));
	 fn(fail1,zfail1,zpass1);
}
#endif

#ifndef	GL_HPP_FUNDEF_StencilOpSeparate
#define GL_HPP_FUNDEF_StencilOpSeparate
typedef void (*PFNGLSTENCILOPSEPARATEPROC_HPP)(GLenum,GLenum,GLenum,GLenum);
static inline void StencilOpSeparate(GLenum face1,GLenum sfail1,GLenum dpfail1,GLenum dppass1)
{
	static PFNGLSTENCILOPSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilOpSeparate",2,0));
	 fn(face1,sfail1,dpfail1,dppass1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexImage2D
#define GL_HPP_FUNDEF_TexImage2D
typedef void (*PFNGLTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void TexImage2D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glTexImage2D",2,0));
	 fn(target1,level1,internalformat1,width1,height1,border1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameterf
#define GL_HPP_FUNDEF_TexParameterf
typedef void (*PFNGLTEXPARAMETERFPROC_HPP)(GLenum,GLenum,GLfloat);
static inline void TexParameterf(GLenum target1,GLenum pname1,GLfloat param1)
{
	static PFNGLTEXPARAMETERFPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERFPROC_HPP>(_impl::_get_proc_address("glTexParameterf",2,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameterfv
#define GL_HPP_FUNDEF_TexParameterfv
typedef void (*PFNGLTEXPARAMETERFVPROC_HPP)(GLenum,GLenum,const GLfloat *);
static inline void TexParameterfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	static PFNGLTEXPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glTexParameterfv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameteri
#define GL_HPP_FUNDEF_TexParameteri
typedef void (*PFNGLTEXPARAMETERIPROC_HPP)(GLenum,GLenum,GLint);
static inline void TexParameteri(GLenum target1,GLenum pname1,GLint param1)
{
	static PFNGLTEXPARAMETERIPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIPROC_HPP>(_impl::_get_proc_address("glTexParameteri",2,0));
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexParameteriv
#define GL_HPP_FUNDEF_TexParameteriv
typedef void (*PFNGLTEXPARAMETERIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexParameteriv(GLenum target1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glTexParameteriv",2,0));
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_HPP_FUNDEF_TexSubImage2D
#define GL_HPP_FUNDEF_TexSubImage2D
typedef void (*PFNGLTEXSUBIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
static inline void TexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXSUBIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLTEXSUBIMAGE2DPROC_HPP>(_impl::_get_proc_address("glTexSubImage2D",2,0));
	 fn(target1,level1,xoffset1,yoffset1,width1,height1,format1,type1,pixels1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform1f
#define GL_HPP_FUNDEF_Uniform1f
typedef void (*PFNGLUNIFORM1FPROC_HPP)(GLint,GLfloat);
static inline void Uniform1f(GLint location1,GLfloat v01)
{
	static PFNGLUNIFORM1FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1FPROC_HPP>(_impl::_get_proc_address("glUniform1f",2,0));
	 fn(location1,v01);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform1fv
#define GL_HPP_FUNDEF_Uniform1fv
typedef void (*PFNGLUNIFORM1FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform1fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM1FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1FVPROC_HPP>(_impl::_get_proc_address("glUniform1fv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform1i
#define GL_HPP_FUNDEF_Uniform1i
typedef void (*PFNGLUNIFORM1IPROC_HPP)(GLint,GLint);
static inline void Uniform1i(GLint location1,GLint v01)
{
	static PFNGLUNIFORM1IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1IPROC_HPP>(_impl::_get_proc_address("glUniform1i",2,0));
	 fn(location1,v01);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform1iv
#define GL_HPP_FUNDEF_Uniform1iv
typedef void (*PFNGLUNIFORM1IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform1iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM1IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1IVPROC_HPP>(_impl::_get_proc_address("glUniform1iv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform2f
#define GL_HPP_FUNDEF_Uniform2f
typedef void (*PFNGLUNIFORM2FPROC_HPP)(GLint,GLfloat,GLfloat);
static inline void Uniform2f(GLint location1,GLfloat v01,GLfloat v11)
{
	static PFNGLUNIFORM2FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2FPROC_HPP>(_impl::_get_proc_address("glUniform2f",2,0));
	 fn(location1,v01,v11);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform2fv
#define GL_HPP_FUNDEF_Uniform2fv
typedef void (*PFNGLUNIFORM2FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform2fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2FVPROC_HPP>(_impl::_get_proc_address("glUniform2fv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform2i
#define GL_HPP_FUNDEF_Uniform2i
typedef void (*PFNGLUNIFORM2IPROC_HPP)(GLint,GLint,GLint);
static inline void Uniform2i(GLint location1,GLint v01,GLint v11)
{
	static PFNGLUNIFORM2IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2IPROC_HPP>(_impl::_get_proc_address("glUniform2i",2,0));
	 fn(location1,v01,v11);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform2iv
#define GL_HPP_FUNDEF_Uniform2iv
typedef void (*PFNGLUNIFORM2IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform2iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM2IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2IVPROC_HPP>(_impl::_get_proc_address("glUniform2iv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform3f
#define GL_HPP_FUNDEF_Uniform3f
typedef void (*PFNGLUNIFORM3FPROC_HPP)(GLint,GLfloat,GLfloat,GLfloat);
static inline void Uniform3f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21)
{
	static PFNGLUNIFORM3FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3FPROC_HPP>(_impl::_get_proc_address("glUniform3f",2,0));
	 fn(location1,v01,v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform3fv
#define GL_HPP_FUNDEF_Uniform3fv
typedef void (*PFNGLUNIFORM3FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform3fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3FVPROC_HPP>(_impl::_get_proc_address("glUniform3fv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform3i
#define GL_HPP_FUNDEF_Uniform3i
typedef void (*PFNGLUNIFORM3IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void Uniform3i(GLint location1,GLint v01,GLint v11,GLint v21)
{
	static PFNGLUNIFORM3IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3IPROC_HPP>(_impl::_get_proc_address("glUniform3i",2,0));
	 fn(location1,v01,v11,v21);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform3iv
#define GL_HPP_FUNDEF_Uniform3iv
typedef void (*PFNGLUNIFORM3IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform3iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM3IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3IVPROC_HPP>(_impl::_get_proc_address("glUniform3iv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform4f
#define GL_HPP_FUNDEF_Uniform4f
typedef void (*PFNGLUNIFORM4FPROC_HPP)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Uniform4f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21,GLfloat v31)
{
	static PFNGLUNIFORM4FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4FPROC_HPP>(_impl::_get_proc_address("glUniform4f",2,0));
	 fn(location1,v01,v11,v21,v31);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform4fv
#define GL_HPP_FUNDEF_Uniform4fv
typedef void (*PFNGLUNIFORM4FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform4fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4FVPROC_HPP>(_impl::_get_proc_address("glUniform4fv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform4i
#define GL_HPP_FUNDEF_Uniform4i
typedef void (*PFNGLUNIFORM4IPROC_HPP)(GLint,GLint,GLint,GLint,GLint);
static inline void Uniform4i(GLint location1,GLint v01,GLint v11,GLint v21,GLint v31)
{
	static PFNGLUNIFORM4IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4IPROC_HPP>(_impl::_get_proc_address("glUniform4i",2,0));
	 fn(location1,v01,v11,v21,v31);
}
#endif

#ifndef	GL_HPP_FUNDEF_Uniform4iv
#define GL_HPP_FUNDEF_Uniform4iv
typedef void (*PFNGLUNIFORM4IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform4iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM4IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4IVPROC_HPP>(_impl::_get_proc_address("glUniform4iv",2,0));
	 fn(location1,count1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_UniformMatrix2fv
#define GL_HPP_FUNDEF_UniformMatrix2fv
typedef void (*PFNGLUNIFORMMATRIX2FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2fv",2,0));
	 fn(location1,count1,transpose1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_UniformMatrix3fv
#define GL_HPP_FUNDEF_UniformMatrix3fv
typedef void (*PFNGLUNIFORMMATRIX3FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3fv",2,0));
	 fn(location1,count1,transpose1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_UniformMatrix4fv
#define GL_HPP_FUNDEF_UniformMatrix4fv
typedef void (*PFNGLUNIFORMMATRIX4FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4fv",2,0));
	 fn(location1,count1,transpose1,value1);
}
#endif

#ifndef	GL_HPP_FUNDEF_UseProgram
#define GL_HPP_FUNDEF_UseProgram
typedef void (*PFNGLUSEPROGRAMPROC_HPP)(GLuint);
static inline void UseProgram(GLuint program1)
{
	static PFNGLUSEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLUSEPROGRAMPROC_HPP>(_impl::_get_proc_address("glUseProgram",2,0));
	 fn(program1);
}
#endif

#ifndef	GL_HPP_FUNDEF_ValidateProgram
#define GL_HPP_FUNDEF_ValidateProgram
typedef void (*PFNGLVALIDATEPROGRAMPROC_HPP)(GLuint);
static inline void ValidateProgram(GLuint program1)
{
	static PFNGLVALIDATEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLVALIDATEPROGRAMPROC_HPP>(_impl::_get_proc_address("glValidateProgram",2,0));
	 fn(program1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib1f
#define GL_HPP_FUNDEF_VertexAttrib1f
typedef void (*PFNGLVERTEXATTRIB1FPROC_HPP)(GLuint,GLfloat);
static inline void VertexAttrib1f(GLuint index1,GLfloat x1)
{
	static PFNGLVERTEXATTRIB1FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1f",2,0));
	 fn(index1,x1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib1fv
#define GL_HPP_FUNDEF_VertexAttrib1fv
typedef void (*PFNGLVERTEXATTRIB1FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib1fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB1FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1fv",2,0));
	 fn(index1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib2f
#define GL_HPP_FUNDEF_VertexAttrib2f
typedef void (*PFNGLVERTEXATTRIB2FPROC_HPP)(GLuint,GLfloat,GLfloat);
static inline void VertexAttrib2f(GLuint index1,GLfloat x1,GLfloat y1)
{
	static PFNGLVERTEXATTRIB2FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2f",2,0));
	 fn(index1,x1,y1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib2fv
#define GL_HPP_FUNDEF_VertexAttrib2fv
typedef void (*PFNGLVERTEXATTRIB2FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib2fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB2FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2fv",2,0));
	 fn(index1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib3f
#define GL_HPP_FUNDEF_VertexAttrib3f
typedef void (*PFNGLVERTEXATTRIB3FPROC_HPP)(GLuint,GLfloat,GLfloat,GLfloat);
static inline void VertexAttrib3f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLVERTEXATTRIB3FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3f",2,0));
	 fn(index1,x1,y1,z1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib3fv
#define GL_HPP_FUNDEF_VertexAttrib3fv
typedef void (*PFNGLVERTEXATTRIB3FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib3fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB3FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3fv",2,0));
	 fn(index1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib4f
#define GL_HPP_FUNDEF_VertexAttrib4f
typedef void (*PFNGLVERTEXATTRIB4FPROC_HPP)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void VertexAttrib4f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	static PFNGLVERTEXATTRIB4FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4f",2,0));
	 fn(index1,x1,y1,z1,w1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttrib4fv
#define GL_HPP_FUNDEF_VertexAttrib4fv
typedef void (*PFNGLVERTEXATTRIB4FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib4fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB4FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4fv",2,0));
	 fn(index1,v1);
}
#endif

#ifndef	GL_HPP_FUNDEF_VertexAttribPointer
#define GL_HPP_FUNDEF_VertexAttribPointer
typedef void (*PFNGLVERTEXATTRIBPOINTERPROC_HPP)(GLuint,GLint,GLenum,GLboolean,GLsizei,const void *);
static inline void VertexAttribPointer(GLuint index1,GLint size1,GLenum type1,GLboolean normalized1,GLsizei stride1,const void * pointer1)
{
	static PFNGLVERTEXATTRIBPOINTERPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC_HPP>(_impl::_get_proc_address("glVertexAttribPointer",2,0));
	 fn(index1,size1,type1,normalized1,stride1,pointer1);
}
#endif

#ifndef	GL_HPP_FUNDEF_Viewport
#define GL_HPP_FUNDEF_Viewport
typedef void (*PFNGLVIEWPORTPROC_HPP)(GLint,GLint,GLsizei,GLsizei);
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLVIEWPORTPROC_HPP fn=reinterpret_cast<PFNGLVIEWPORTPROC_HPP>(_impl::_get_proc_address("glViewport",2,0));
	 fn(x1,y1,width1,height1);
}
#endif
}
#endif
