#ifndef GL_PROC_GL_ES_VERSION_2_0_HPP
#define GL_PROC_GL_ES_VERSION_2_0_HPP
#include "common.hpp"


#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif //GL_NO_ERROR
#ifndef GL_ZERO
#define GL_ZERO 0
#endif //GL_ZERO
#ifndef GL_FALSE
#define GL_FALSE 0
#endif //GL_FALSE
#ifndef GL_NONE
#define GL_NONE 0
#endif //GL_NONE
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
#ifndef GL_ONE
#define GL_ONE 1
#endif //GL_ONE
#ifndef GL_TRUE
#define GL_TRUE 1
#endif //GL_TRUE
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
