#ifndef GL_ALT_GL_ES_VERSION_2_0_ALT
#define GL_ALT_GL_ES_VERSION_2_0_ALT
#include "common.h"


#ifndef GL_ALT_API_NAME
#define GL_ALT_API_NAME GL_ALT_GLES_API
#endif
#ifndef GL_ALT_API_VERSION
#define GL_ALT_API_VERSION 200
#endif
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
CGUARDBEGIN



#ifndef	GL_ALT_FUNDEF_ActiveTexture
#define GL_ALT_FUNDEF_ActiveTexture
extern void glActiveTexture(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_AttachShader
#define GL_ALT_FUNDEF_AttachShader
extern void glAttachShader(GLuint,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_BindAttribLocation
#define GL_ALT_FUNDEF_BindAttribLocation
extern void glBindAttribLocation(GLuint,GLuint,const GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_BindBuffer
#define GL_ALT_FUNDEF_BindBuffer
extern void glBindBuffer(GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_BindFramebuffer
#define GL_ALT_FUNDEF_BindFramebuffer
extern void glBindFramebuffer(GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_BindRenderbuffer
#define GL_ALT_FUNDEF_BindRenderbuffer
extern void glBindRenderbuffer(GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_BindTexture
#define GL_ALT_FUNDEF_BindTexture
extern void glBindTexture(GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_BlendColor
#define GL_ALT_FUNDEF_BlendColor
extern void glBlendColor(GLfloat,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_BlendEquation
#define GL_ALT_FUNDEF_BlendEquation
extern void glBlendEquation(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_BlendEquationSeparate
#define GL_ALT_FUNDEF_BlendEquationSeparate
extern void glBlendEquationSeparate(GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_BlendFunc
#define GL_ALT_FUNDEF_BlendFunc
extern void glBlendFunc(GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_BlendFuncSeparate
#define GL_ALT_FUNDEF_BlendFuncSeparate
extern void glBlendFuncSeparate(GLenum,GLenum,GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_BufferData
#define GL_ALT_FUNDEF_BufferData
extern void glBufferData(GLenum,GLsizeiptr,const void *,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_BufferSubData
#define GL_ALT_FUNDEF_BufferSubData
extern void glBufferSubData(GLenum,GLintptr,GLsizeiptr,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_CheckFramebufferStatus
#define GL_ALT_FUNDEF_CheckFramebufferStatus
extern GLenum glCheckFramebufferStatus(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_Clear
#define GL_ALT_FUNDEF_Clear
extern void glClear(GLbitfield);
#endif


#ifndef	GL_ALT_FUNDEF_ClearColor
#define GL_ALT_FUNDEF_ClearColor
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_ClearDepthf
#define GL_ALT_FUNDEF_ClearDepthf
extern void glClearDepthf(GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_ClearStencil
#define GL_ALT_FUNDEF_ClearStencil
extern void glClearStencil(GLint);
#endif


#ifndef	GL_ALT_FUNDEF_ColorMask
#define GL_ALT_FUNDEF_ColorMask
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
#endif


#ifndef	GL_ALT_FUNDEF_CompileShader
#define GL_ALT_FUNDEF_CompileShader
extern void glCompileShader(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_CompressedTexImage2D
#define GL_ALT_FUNDEF_CompressedTexImage2D
extern void glCompressedTexImage2D(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_CompressedTexSubImage2D
#define GL_ALT_FUNDEF_CompressedTexSubImage2D
extern void glCompressedTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_CopyTexImage2D
#define GL_ALT_FUNDEF_CopyTexImage2D
extern void glCopyTexImage2D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_CopyTexSubImage2D
#define GL_ALT_FUNDEF_CopyTexSubImage2D
extern void glCopyTexSubImage2D(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
#endif


#ifndef	GL_ALT_FUNDEF_CreateProgram
#define GL_ALT_FUNDEF_CreateProgram
extern GLuint glCreateProgram();
#endif


#ifndef	GL_ALT_FUNDEF_CreateShader
#define GL_ALT_FUNDEF_CreateShader
extern GLuint glCreateShader(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_CullFace
#define GL_ALT_FUNDEF_CullFace
extern void glCullFace(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteBuffers
#define GL_ALT_FUNDEF_DeleteBuffers
extern void glDeleteBuffers(GLsizei,const GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteFramebuffers
#define GL_ALT_FUNDEF_DeleteFramebuffers
extern void glDeleteFramebuffers(GLsizei,const GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteProgram
#define GL_ALT_FUNDEF_DeleteProgram
extern void glDeleteProgram(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteRenderbuffers
#define GL_ALT_FUNDEF_DeleteRenderbuffers
extern void glDeleteRenderbuffers(GLsizei,const GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteShader
#define GL_ALT_FUNDEF_DeleteShader
extern void glDeleteShader(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_DeleteTextures
#define GL_ALT_FUNDEF_DeleteTextures
extern void glDeleteTextures(GLsizei,const GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_DepthFunc
#define GL_ALT_FUNDEF_DepthFunc
extern void glDepthFunc(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_DepthMask
#define GL_ALT_FUNDEF_DepthMask
extern void glDepthMask(GLboolean);
#endif


#ifndef	GL_ALT_FUNDEF_DepthRangef
#define GL_ALT_FUNDEF_DepthRangef
extern void glDepthRangef(GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_DetachShader
#define GL_ALT_FUNDEF_DetachShader
extern void glDetachShader(GLuint,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_Disable
#define GL_ALT_FUNDEF_Disable
extern void glDisable(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_DisableVertexAttribArray
#define GL_ALT_FUNDEF_DisableVertexAttribArray
extern void glDisableVertexAttribArray(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_DrawArrays
#define GL_ALT_FUNDEF_DrawArrays
extern void glDrawArrays(GLenum,GLint,GLsizei);
#endif


#ifndef	GL_ALT_FUNDEF_DrawElements
#define GL_ALT_FUNDEF_DrawElements
extern void glDrawElements(GLenum,GLsizei,GLenum,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_Enable
#define GL_ALT_FUNDEF_Enable
extern void glEnable(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_EnableVertexAttribArray
#define GL_ALT_FUNDEF_EnableVertexAttribArray
extern void glEnableVertexAttribArray(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_Finish
#define GL_ALT_FUNDEF_Finish
extern void glFinish();
#endif


#ifndef	GL_ALT_FUNDEF_Flush
#define GL_ALT_FUNDEF_Flush
extern void glFlush();
#endif


#ifndef	GL_ALT_FUNDEF_FramebufferRenderbuffer
#define GL_ALT_FUNDEF_FramebufferRenderbuffer
extern void glFramebufferRenderbuffer(GLenum,GLenum,GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_FramebufferTexture2D
#define GL_ALT_FUNDEF_FramebufferTexture2D
extern void glFramebufferTexture2D(GLenum,GLenum,GLenum,GLuint,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_FrontFace
#define GL_ALT_FUNDEF_FrontFace
extern void glFrontFace(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_GenBuffers
#define GL_ALT_FUNDEF_GenBuffers
extern void glGenBuffers(GLsizei,GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_GenFramebuffers
#define GL_ALT_FUNDEF_GenFramebuffers
extern void glGenFramebuffers(GLsizei,GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_GenRenderbuffers
#define GL_ALT_FUNDEF_GenRenderbuffers
extern void glGenRenderbuffers(GLsizei,GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_GenTextures
#define GL_ALT_FUNDEF_GenTextures
extern void glGenTextures(GLsizei,GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_GenerateMipmap
#define GL_ALT_FUNDEF_GenerateMipmap
extern void glGenerateMipmap(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_GetActiveAttrib
#define GL_ALT_FUNDEF_GetActiveAttrib
extern void glGetActiveAttrib(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetActiveUniform
#define GL_ALT_FUNDEF_GetActiveUniform
extern void glGetActiveUniform(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetAttachedShaders
#define GL_ALT_FUNDEF_GetAttachedShaders
extern void glGetAttachedShaders(GLuint,GLsizei,GLsizei *,GLuint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetAttribLocation
#define GL_ALT_FUNDEF_GetAttribLocation
extern GLint glGetAttribLocation(GLuint,const GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetBooleanv
#define GL_ALT_FUNDEF_GetBooleanv
extern void glGetBooleanv(GLenum,GLboolean *);
#endif


#ifndef	GL_ALT_FUNDEF_GetBufferParameteriv
#define GL_ALT_FUNDEF_GetBufferParameteriv
extern void glGetBufferParameteriv(GLenum,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetError
#define GL_ALT_FUNDEF_GetError
extern GLenum glGetError();
#endif


#ifndef	GL_ALT_FUNDEF_GetFloatv
#define GL_ALT_FUNDEF_GetFloatv
extern void glGetFloatv(GLenum,GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_GetFramebufferAttachmentParameteriv
#define GL_ALT_FUNDEF_GetFramebufferAttachmentParameteriv
extern void glGetFramebufferAttachmentParameteriv(GLenum,GLenum,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetIntegerv
#define GL_ALT_FUNDEF_GetIntegerv
extern void glGetIntegerv(GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetProgramInfoLog
#define GL_ALT_FUNDEF_GetProgramInfoLog
extern void glGetProgramInfoLog(GLuint,GLsizei,GLsizei *,GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetProgramiv
#define GL_ALT_FUNDEF_GetProgramiv
extern void glGetProgramiv(GLuint,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetRenderbufferParameteriv
#define GL_ALT_FUNDEF_GetRenderbufferParameteriv
extern void glGetRenderbufferParameteriv(GLenum,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetShaderInfoLog
#define GL_ALT_FUNDEF_GetShaderInfoLog
extern void glGetShaderInfoLog(GLuint,GLsizei,GLsizei *,GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetShaderPrecisionFormat
#define GL_ALT_FUNDEF_GetShaderPrecisionFormat
extern void glGetShaderPrecisionFormat(GLenum,GLenum,GLint *,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetShaderSource
#define GL_ALT_FUNDEF_GetShaderSource
extern void glGetShaderSource(GLuint,GLsizei,GLsizei *,GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetShaderiv
#define GL_ALT_FUNDEF_GetShaderiv
extern void glGetShaderiv(GLuint,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetString
#define GL_ALT_FUNDEF_GetString
extern const GLubyte * glGetString(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_GetTexParameterfv
#define GL_ALT_FUNDEF_GetTexParameterfv
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_GetTexParameteriv
#define GL_ALT_FUNDEF_GetTexParameteriv
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetUniformLocation
#define GL_ALT_FUNDEF_GetUniformLocation
extern GLint glGetUniformLocation(GLuint,const GLchar *);
#endif


#ifndef	GL_ALT_FUNDEF_GetUniformfv
#define GL_ALT_FUNDEF_GetUniformfv
extern void glGetUniformfv(GLuint,GLint,GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_GetUniformiv
#define GL_ALT_FUNDEF_GetUniformiv
extern void glGetUniformiv(GLuint,GLint,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_GetVertexAttribPointerv
#define GL_ALT_FUNDEF_GetVertexAttribPointerv
extern void glGetVertexAttribPointerv(GLuint,GLenum,void **);
#endif


#ifndef	GL_ALT_FUNDEF_GetVertexAttribfv
#define GL_ALT_FUNDEF_GetVertexAttribfv
extern void glGetVertexAttribfv(GLuint,GLenum,GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_GetVertexAttribiv
#define GL_ALT_FUNDEF_GetVertexAttribiv
extern void glGetVertexAttribiv(GLuint,GLenum,GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_Hint
#define GL_ALT_FUNDEF_Hint
extern void glHint(GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_IsBuffer
#define GL_ALT_FUNDEF_IsBuffer
extern GLboolean glIsBuffer(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_IsEnabled
#define GL_ALT_FUNDEF_IsEnabled
extern GLboolean glIsEnabled(GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_IsFramebuffer
#define GL_ALT_FUNDEF_IsFramebuffer
extern GLboolean glIsFramebuffer(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_IsProgram
#define GL_ALT_FUNDEF_IsProgram
extern GLboolean glIsProgram(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_IsRenderbuffer
#define GL_ALT_FUNDEF_IsRenderbuffer
extern GLboolean glIsRenderbuffer(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_IsShader
#define GL_ALT_FUNDEF_IsShader
extern GLboolean glIsShader(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_IsTexture
#define GL_ALT_FUNDEF_IsTexture
extern GLboolean glIsTexture(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_LineWidth
#define GL_ALT_FUNDEF_LineWidth
extern void glLineWidth(GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_LinkProgram
#define GL_ALT_FUNDEF_LinkProgram
extern void glLinkProgram(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_PixelStorei
#define GL_ALT_FUNDEF_PixelStorei
extern void glPixelStorei(GLenum,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_PolygonOffset
#define GL_ALT_FUNDEF_PolygonOffset
extern void glPolygonOffset(GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_ReadPixels
#define GL_ALT_FUNDEF_ReadPixels
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
#endif


#ifndef	GL_ALT_FUNDEF_ReleaseShaderCompiler
#define GL_ALT_FUNDEF_ReleaseShaderCompiler
extern void glReleaseShaderCompiler();
#endif


#ifndef	GL_ALT_FUNDEF_RenderbufferStorage
#define GL_ALT_FUNDEF_RenderbufferStorage
extern void glRenderbufferStorage(GLenum,GLenum,GLsizei,GLsizei);
#endif


#ifndef	GL_ALT_FUNDEF_SampleCoverage
#define GL_ALT_FUNDEF_SampleCoverage
extern void glSampleCoverage(GLfloat,GLboolean);
#endif


#ifndef	GL_ALT_FUNDEF_Scissor
#define GL_ALT_FUNDEF_Scissor
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
#endif


#ifndef	GL_ALT_FUNDEF_ShaderBinary
#define GL_ALT_FUNDEF_ShaderBinary
extern void glShaderBinary(GLsizei,const GLuint *,GLenum,const void *,GLsizei);
#endif


#ifndef	GL_ALT_FUNDEF_ShaderSource
#define GL_ALT_FUNDEF_ShaderSource
extern void glShaderSource(GLuint,GLsizei,const GLchar *const*,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_StencilFunc
#define GL_ALT_FUNDEF_StencilFunc
extern void glStencilFunc(GLenum,GLint,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_StencilFuncSeparate
#define GL_ALT_FUNDEF_StencilFuncSeparate
extern void glStencilFuncSeparate(GLenum,GLenum,GLint,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_StencilMask
#define GL_ALT_FUNDEF_StencilMask
extern void glStencilMask(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_StencilMaskSeparate
#define GL_ALT_FUNDEF_StencilMaskSeparate
extern void glStencilMaskSeparate(GLenum,GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_StencilOp
#define GL_ALT_FUNDEF_StencilOp
extern void glStencilOp(GLenum,GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_StencilOpSeparate
#define GL_ALT_FUNDEF_StencilOpSeparate
extern void glStencilOpSeparate(GLenum,GLenum,GLenum,GLenum);
#endif


#ifndef	GL_ALT_FUNDEF_TexImage2D
#define GL_ALT_FUNDEF_TexImage2D
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_TexParameterf
#define GL_ALT_FUNDEF_TexParameterf
extern void glTexParameterf(GLenum,GLenum,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_TexParameterfv
#define GL_ALT_FUNDEF_TexParameterfv
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_TexParameteri
#define GL_ALT_FUNDEF_TexParameteri
extern void glTexParameteri(GLenum,GLenum,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_TexParameteriv
#define GL_ALT_FUNDEF_TexParameteriv
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_TexSubImage2D
#define GL_ALT_FUNDEF_TexSubImage2D
extern void glTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform1f
#define GL_ALT_FUNDEF_Uniform1f
extern void glUniform1f(GLint,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform1fv
#define GL_ALT_FUNDEF_Uniform1fv
extern void glUniform1fv(GLint,GLsizei,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform1i
#define GL_ALT_FUNDEF_Uniform1i
extern void glUniform1i(GLint,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform1iv
#define GL_ALT_FUNDEF_Uniform1iv
extern void glUniform1iv(GLint,GLsizei,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform2f
#define GL_ALT_FUNDEF_Uniform2f
extern void glUniform2f(GLint,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform2fv
#define GL_ALT_FUNDEF_Uniform2fv
extern void glUniform2fv(GLint,GLsizei,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform2i
#define GL_ALT_FUNDEF_Uniform2i
extern void glUniform2i(GLint,GLint,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform2iv
#define GL_ALT_FUNDEF_Uniform2iv
extern void glUniform2iv(GLint,GLsizei,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform3f
#define GL_ALT_FUNDEF_Uniform3f
extern void glUniform3f(GLint,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform3fv
#define GL_ALT_FUNDEF_Uniform3fv
extern void glUniform3fv(GLint,GLsizei,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform3i
#define GL_ALT_FUNDEF_Uniform3i
extern void glUniform3i(GLint,GLint,GLint,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform3iv
#define GL_ALT_FUNDEF_Uniform3iv
extern void glUniform3iv(GLint,GLsizei,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform4f
#define GL_ALT_FUNDEF_Uniform4f
extern void glUniform4f(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform4fv
#define GL_ALT_FUNDEF_Uniform4fv
extern void glUniform4fv(GLint,GLsizei,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform4i
#define GL_ALT_FUNDEF_Uniform4i
extern void glUniform4i(GLint,GLint,GLint,GLint,GLint);
#endif


#ifndef	GL_ALT_FUNDEF_Uniform4iv
#define GL_ALT_FUNDEF_Uniform4iv
extern void glUniform4iv(GLint,GLsizei,const GLint *);
#endif


#ifndef	GL_ALT_FUNDEF_UniformMatrix2fv
#define GL_ALT_FUNDEF_UniformMatrix2fv
extern void glUniformMatrix2fv(GLint,GLsizei,GLboolean,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_UniformMatrix3fv
#define GL_ALT_FUNDEF_UniformMatrix3fv
extern void glUniformMatrix3fv(GLint,GLsizei,GLboolean,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_UniformMatrix4fv
#define GL_ALT_FUNDEF_UniformMatrix4fv
extern void glUniformMatrix4fv(GLint,GLsizei,GLboolean,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_UseProgram
#define GL_ALT_FUNDEF_UseProgram
extern void glUseProgram(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_ValidateProgram
#define GL_ALT_FUNDEF_ValidateProgram
extern void glValidateProgram(GLuint);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib1f
#define GL_ALT_FUNDEF_VertexAttrib1f
extern void glVertexAttrib1f(GLuint,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib1fv
#define GL_ALT_FUNDEF_VertexAttrib1fv
extern void glVertexAttrib1fv(GLuint,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib2f
#define GL_ALT_FUNDEF_VertexAttrib2f
extern void glVertexAttrib2f(GLuint,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib2fv
#define GL_ALT_FUNDEF_VertexAttrib2fv
extern void glVertexAttrib2fv(GLuint,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib3f
#define GL_ALT_FUNDEF_VertexAttrib3f
extern void glVertexAttrib3f(GLuint,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib3fv
#define GL_ALT_FUNDEF_VertexAttrib3fv
extern void glVertexAttrib3fv(GLuint,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib4f
#define GL_ALT_FUNDEF_VertexAttrib4f
extern void glVertexAttrib4f(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttrib4fv
#define GL_ALT_FUNDEF_VertexAttrib4fv
extern void glVertexAttrib4fv(GLuint,const GLfloat *);
#endif


#ifndef	GL_ALT_FUNDEF_VertexAttribPointer
#define GL_ALT_FUNDEF_VertexAttribPointer
extern void glVertexAttribPointer(GLuint,GLint,GLenum,GLboolean,GLsizei,const void *);
#endif


#ifndef	GL_ALT_FUNDEF_Viewport
#define GL_ALT_FUNDEF_Viewport
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
#endif
CGUARDEND

#endif
