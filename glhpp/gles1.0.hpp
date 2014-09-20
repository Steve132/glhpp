#ifndef GL_PROC_GL_VERSION_ES_CM_1_0_HPP
#define GL_PROC_GL_VERSION_ES_CM_1_0_HPP
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
#ifndef GL_ADD
#define GL_ADD 0x0104
#endif //GL_ADD
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
#ifndef GL_STACK_OVERFLOW
#define GL_STACK_OVERFLOW 0x0503
#endif //GL_STACK_OVERFLOW
#ifndef GL_STACK_UNDERFLOW
#define GL_STACK_UNDERFLOW 0x0504
#endif //GL_STACK_UNDERFLOW
#ifndef GL_OUT_OF_MEMORY
#define GL_OUT_OF_MEMORY 0x0505
#endif //GL_OUT_OF_MEMORY
#ifndef GL_EXP
#define GL_EXP 0x0800
#endif //GL_EXP
#ifndef GL_EXP2
#define GL_EXP2 0x0801
#endif //GL_EXP2
#ifndef GL_CW
#define GL_CW 0x0900
#endif //GL_CW
#ifndef GL_CCW
#define GL_CCW 0x0901
#endif //GL_CCW
#ifndef GL_CURRENT_COLOR
#define GL_CURRENT_COLOR 0x0B00
#endif //GL_CURRENT_COLOR
#ifndef GL_CURRENT_NORMAL
#define GL_CURRENT_NORMAL 0x0B02
#endif //GL_CURRENT_NORMAL
#ifndef GL_CURRENT_TEXTURE_COORDS
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#endif //GL_CURRENT_TEXTURE_COORDS
#ifndef GL_POINT_SMOOTH
#define GL_POINT_SMOOTH 0x0B10
#endif //GL_POINT_SMOOTH
#ifndef GL_POINT_SIZE
#define GL_POINT_SIZE 0x0B11
#endif //GL_POINT_SIZE
#ifndef GL_SMOOTH_POINT_SIZE_RANGE
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#endif //GL_SMOOTH_POINT_SIZE_RANGE
#ifndef GL_LINE_SMOOTH
#define GL_LINE_SMOOTH 0x0B20
#endif //GL_LINE_SMOOTH
#ifndef GL_LINE_WIDTH
#define GL_LINE_WIDTH 0x0B21
#endif //GL_LINE_WIDTH
#ifndef GL_SMOOTH_LINE_WIDTH_RANGE
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#endif //GL_SMOOTH_LINE_WIDTH_RANGE
#ifndef GL_CULL_FACE
#define GL_CULL_FACE 0x0B44
#endif //GL_CULL_FACE
#ifndef GL_CULL_FACE_MODE
#define GL_CULL_FACE_MODE 0x0B45
#endif //GL_CULL_FACE_MODE
#ifndef GL_FRONT_FACE
#define GL_FRONT_FACE 0x0B46
#endif //GL_FRONT_FACE
#ifndef GL_LIGHTING
#define GL_LIGHTING 0x0B50
#endif //GL_LIGHTING
#ifndef GL_LIGHT_MODEL_TWO_SIDE
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#endif //GL_LIGHT_MODEL_TWO_SIDE
#ifndef GL_LIGHT_MODEL_AMBIENT
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#endif //GL_LIGHT_MODEL_AMBIENT
#ifndef GL_SHADE_MODEL
#define GL_SHADE_MODEL 0x0B54
#endif //GL_SHADE_MODEL
#ifndef GL_COLOR_MATERIAL
#define GL_COLOR_MATERIAL 0x0B57
#endif //GL_COLOR_MATERIAL
#ifndef GL_FOG
#define GL_FOG 0x0B60
#endif //GL_FOG
#ifndef GL_FOG_DENSITY
#define GL_FOG_DENSITY 0x0B62
#endif //GL_FOG_DENSITY
#ifndef GL_FOG_START
#define GL_FOG_START 0x0B63
#endif //GL_FOG_START
#ifndef GL_FOG_END
#define GL_FOG_END 0x0B64
#endif //GL_FOG_END
#ifndef GL_FOG_MODE
#define GL_FOG_MODE 0x0B65
#endif //GL_FOG_MODE
#ifndef GL_FOG_COLOR
#define GL_FOG_COLOR 0x0B66
#endif //GL_FOG_COLOR
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
#ifndef GL_MATRIX_MODE
#define GL_MATRIX_MODE 0x0BA0
#endif //GL_MATRIX_MODE
#ifndef GL_NORMALIZE
#define GL_NORMALIZE 0x0BA1
#endif //GL_NORMALIZE
#ifndef GL_VIEWPORT
#define GL_VIEWPORT 0x0BA2
#endif //GL_VIEWPORT
#ifndef GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#endif //GL_MODELVIEW_STACK_DEPTH
#ifndef GL_PROJECTION_STACK_DEPTH
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#endif //GL_PROJECTION_STACK_DEPTH
#ifndef GL_TEXTURE_STACK_DEPTH
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#endif //GL_TEXTURE_STACK_DEPTH
#ifndef GL_MODELVIEW_MATRIX
#define GL_MODELVIEW_MATRIX 0x0BA6
#endif //GL_MODELVIEW_MATRIX
#ifndef GL_PROJECTION_MATRIX
#define GL_PROJECTION_MATRIX 0x0BA7
#endif //GL_PROJECTION_MATRIX
#ifndef GL_TEXTURE_MATRIX
#define GL_TEXTURE_MATRIX 0x0BA8
#endif //GL_TEXTURE_MATRIX
#ifndef GL_ALPHA_TEST
#define GL_ALPHA_TEST 0x0BC0
#endif //GL_ALPHA_TEST
#ifndef GL_ALPHA_TEST_FUNC
#define GL_ALPHA_TEST_FUNC 0x0BC1
#endif //GL_ALPHA_TEST_FUNC
#ifndef GL_ALPHA_TEST_REF
#define GL_ALPHA_TEST_REF 0x0BC2
#endif //GL_ALPHA_TEST_REF
#ifndef GL_DITHER
#define GL_DITHER 0x0BD0
#endif //GL_DITHER
#ifndef GL_BLEND_DST
#define GL_BLEND_DST 0x0BE0
#endif //GL_BLEND_DST
#ifndef GL_BLEND_SRC
#define GL_BLEND_SRC 0x0BE1
#endif //GL_BLEND_SRC
#ifndef GL_BLEND
#define GL_BLEND 0x0BE2
#endif //GL_BLEND
#ifndef GL_LOGIC_OP_MODE
#define GL_LOGIC_OP_MODE 0x0BF0
#endif //GL_LOGIC_OP_MODE
#ifndef GL_COLOR_LOGIC_OP
#define GL_COLOR_LOGIC_OP 0x0BF2
#endif //GL_COLOR_LOGIC_OP
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
#ifndef GL_PERSPECTIVE_CORRECTION_HINT
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#endif //GL_PERSPECTIVE_CORRECTION_HINT
#ifndef GL_POINT_SMOOTH_HINT
#define GL_POINT_SMOOTH_HINT 0x0C51
#endif //GL_POINT_SMOOTH_HINT
#ifndef GL_LINE_SMOOTH_HINT
#define GL_LINE_SMOOTH_HINT 0x0C52
#endif //GL_LINE_SMOOTH_HINT
#ifndef GL_FOG_HINT
#define GL_FOG_HINT 0x0C54
#endif //GL_FOG_HINT
#ifndef GL_UNPACK_ALIGNMENT
#define GL_UNPACK_ALIGNMENT 0x0CF5
#endif //GL_UNPACK_ALIGNMENT
#ifndef GL_PACK_ALIGNMENT
#define GL_PACK_ALIGNMENT 0x0D05
#endif //GL_PACK_ALIGNMENT
#ifndef GL_ALPHA_SCALE
#define GL_ALPHA_SCALE 0x0D1C
#endif //GL_ALPHA_SCALE
#ifndef GL_MAX_LIGHTS
#define GL_MAX_LIGHTS 0x0D31
#endif //GL_MAX_LIGHTS
#ifndef GL_MAX_CLIP_PLANES
#define GL_MAX_CLIP_PLANES 0x0D32
#endif //GL_MAX_CLIP_PLANES
#ifndef GL_MAX_TEXTURE_SIZE
#define GL_MAX_TEXTURE_SIZE 0x0D33
#endif //GL_MAX_TEXTURE_SIZE
#ifndef GL_MAX_MODELVIEW_STACK_DEPTH
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#endif //GL_MAX_MODELVIEW_STACK_DEPTH
#ifndef GL_MAX_PROJECTION_STACK_DEPTH
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#endif //GL_MAX_PROJECTION_STACK_DEPTH
#ifndef GL_MAX_TEXTURE_STACK_DEPTH
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#endif //GL_MAX_TEXTURE_STACK_DEPTH
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
#ifndef GL_AMBIENT
#define GL_AMBIENT 0x1200
#endif //GL_AMBIENT
#ifndef GL_DIFFUSE
#define GL_DIFFUSE 0x1201
#endif //GL_DIFFUSE
#ifndef GL_SPECULAR
#define GL_SPECULAR 0x1202
#endif //GL_SPECULAR
#ifndef GL_POSITION
#define GL_POSITION 0x1203
#endif //GL_POSITION
#ifndef GL_SPOT_DIRECTION
#define GL_SPOT_DIRECTION 0x1204
#endif //GL_SPOT_DIRECTION
#ifndef GL_SPOT_EXPONENT
#define GL_SPOT_EXPONENT 0x1205
#endif //GL_SPOT_EXPONENT
#ifndef GL_SPOT_CUTOFF
#define GL_SPOT_CUTOFF 0x1206
#endif //GL_SPOT_CUTOFF
#ifndef GL_CONSTANT_ATTENUATION
#define GL_CONSTANT_ATTENUATION 0x1207
#endif //GL_CONSTANT_ATTENUATION
#ifndef GL_LINEAR_ATTENUATION
#define GL_LINEAR_ATTENUATION 0x1208
#endif //GL_LINEAR_ATTENUATION
#ifndef GL_QUADRATIC_ATTENUATION
#define GL_QUADRATIC_ATTENUATION 0x1209
#endif //GL_QUADRATIC_ATTENUATION
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
#ifndef GL_FLOAT
#define GL_FLOAT 0x1406
#endif //GL_FLOAT
#ifndef GL_FIXED
#define GL_FIXED 0x140C
#endif //GL_FIXED
#ifndef GL_CLEAR
#define GL_CLEAR 0x1500
#endif //GL_CLEAR
#ifndef GL_AND
#define GL_AND 0x1501
#endif //GL_AND
#ifndef GL_AND_REVERSE
#define GL_AND_REVERSE 0x1502
#endif //GL_AND_REVERSE
#ifndef GL_COPY
#define GL_COPY 0x1503
#endif //GL_COPY
#ifndef GL_AND_INVERTED
#define GL_AND_INVERTED 0x1504
#endif //GL_AND_INVERTED
#ifndef GL_NOOP
#define GL_NOOP 0x1505
#endif //GL_NOOP
#ifndef GL_XOR
#define GL_XOR 0x1506
#endif //GL_XOR
#ifndef GL_OR
#define GL_OR 0x1507
#endif //GL_OR
#ifndef GL_NOR
#define GL_NOR 0x1508
#endif //GL_NOR
#ifndef GL_EQUIV
#define GL_EQUIV 0x1509
#endif //GL_EQUIV
#ifndef GL_INVERT
#define GL_INVERT 0x150A
#endif //GL_INVERT
#ifndef GL_OR_REVERSE
#define GL_OR_REVERSE 0x150B
#endif //GL_OR_REVERSE
#ifndef GL_COPY_INVERTED
#define GL_COPY_INVERTED 0x150C
#endif //GL_COPY_INVERTED
#ifndef GL_OR_INVERTED
#define GL_OR_INVERTED 0x150D
#endif //GL_OR_INVERTED
#ifndef GL_NAND
#define GL_NAND 0x150E
#endif //GL_NAND
#ifndef GL_SET
#define GL_SET 0x150F
#endif //GL_SET
#ifndef GL_EMISSION
#define GL_EMISSION 0x1600
#endif //GL_EMISSION
#ifndef GL_SHININESS
#define GL_SHININESS 0x1601
#endif //GL_SHININESS
#ifndef GL_AMBIENT_AND_DIFFUSE
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#endif //GL_AMBIENT_AND_DIFFUSE
#ifndef GL_MODELVIEW
#define GL_MODELVIEW 0x1700
#endif //GL_MODELVIEW
#ifndef GL_PROJECTION
#define GL_PROJECTION 0x1701
#endif //GL_PROJECTION
#ifndef GL_TEXTURE
#define GL_TEXTURE 0x1702
#endif //GL_TEXTURE
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
#ifndef GL_FLAT
#define GL_FLAT 0x1D00
#endif //GL_FLAT
#ifndef GL_SMOOTH
#define GL_SMOOTH 0x1D01
#endif //GL_SMOOTH
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
#ifndef GL_MODULATE
#define GL_MODULATE 0x2100
#endif //GL_MODULATE
#ifndef GL_DECAL
#define GL_DECAL 0x2101
#endif //GL_DECAL
#ifndef GL_TEXTURE_ENV_MODE
#define GL_TEXTURE_ENV_MODE 0x2200
#endif //GL_TEXTURE_ENV_MODE
#ifndef GL_TEXTURE_ENV_COLOR
#define GL_TEXTURE_ENV_COLOR 0x2201
#endif //GL_TEXTURE_ENV_COLOR
#ifndef GL_TEXTURE_ENV
#define GL_TEXTURE_ENV 0x2300
#endif //GL_TEXTURE_ENV
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
#ifndef GL_CLIP_PLANE0
#define GL_CLIP_PLANE0 0x3000
#endif //GL_CLIP_PLANE0
#ifndef GL_CLIP_PLANE1
#define GL_CLIP_PLANE1 0x3001
#endif //GL_CLIP_PLANE1
#ifndef GL_CLIP_PLANE2
#define GL_CLIP_PLANE2 0x3002
#endif //GL_CLIP_PLANE2
#ifndef GL_CLIP_PLANE3
#define GL_CLIP_PLANE3 0x3003
#endif //GL_CLIP_PLANE3
#ifndef GL_CLIP_PLANE4
#define GL_CLIP_PLANE4 0x3004
#endif //GL_CLIP_PLANE4
#ifndef GL_CLIP_PLANE5
#define GL_CLIP_PLANE5 0x3005
#endif //GL_CLIP_PLANE5
#ifndef GL_LIGHT0
#define GL_LIGHT0 0x4000
#endif //GL_LIGHT0
#ifndef GL_LIGHT1
#define GL_LIGHT1 0x4001
#endif //GL_LIGHT1
#ifndef GL_LIGHT2
#define GL_LIGHT2 0x4002
#endif //GL_LIGHT2
#ifndef GL_LIGHT3
#define GL_LIGHT3 0x4003
#endif //GL_LIGHT3
#ifndef GL_LIGHT4
#define GL_LIGHT4 0x4004
#endif //GL_LIGHT4
#ifndef GL_LIGHT5
#define GL_LIGHT5 0x4005
#endif //GL_LIGHT5
#ifndef GL_LIGHT6
#define GL_LIGHT6 0x4006
#endif //GL_LIGHT6
#ifndef GL_LIGHT7
#define GL_LIGHT7 0x4007
#endif //GL_LIGHT7
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
#ifndef GL_RESCALE_NORMAL
#define GL_RESCALE_NORMAL 0x803A
#endif //GL_RESCALE_NORMAL
#ifndef GL_TEXTURE_BINDING_2D
#define GL_TEXTURE_BINDING_2D 0x8069
#endif //GL_TEXTURE_BINDING_2D
#ifndef GL_VERTEX_ARRAY
#define GL_VERTEX_ARRAY 0x8074
#endif //GL_VERTEX_ARRAY
#ifndef GL_NORMAL_ARRAY
#define GL_NORMAL_ARRAY 0x8075
#endif //GL_NORMAL_ARRAY
#ifndef GL_COLOR_ARRAY
#define GL_COLOR_ARRAY 0x8076
#endif //GL_COLOR_ARRAY
#ifndef GL_TEXTURE_COORD_ARRAY
#define GL_TEXTURE_COORD_ARRAY 0x8078
#endif //GL_TEXTURE_COORD_ARRAY
#ifndef GL_VERTEX_ARRAY_SIZE
#define GL_VERTEX_ARRAY_SIZE 0x807A
#endif //GL_VERTEX_ARRAY_SIZE
#ifndef GL_VERTEX_ARRAY_TYPE
#define GL_VERTEX_ARRAY_TYPE 0x807B
#endif //GL_VERTEX_ARRAY_TYPE
#ifndef GL_VERTEX_ARRAY_STRIDE
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#endif //GL_VERTEX_ARRAY_STRIDE
#ifndef GL_NORMAL_ARRAY_TYPE
#define GL_NORMAL_ARRAY_TYPE 0x807E
#endif //GL_NORMAL_ARRAY_TYPE
#ifndef GL_NORMAL_ARRAY_STRIDE
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#endif //GL_NORMAL_ARRAY_STRIDE
#ifndef GL_COLOR_ARRAY_SIZE
#define GL_COLOR_ARRAY_SIZE 0x8081
#endif //GL_COLOR_ARRAY_SIZE
#ifndef GL_COLOR_ARRAY_TYPE
#define GL_COLOR_ARRAY_TYPE 0x8082
#endif //GL_COLOR_ARRAY_TYPE
#ifndef GL_COLOR_ARRAY_STRIDE
#define GL_COLOR_ARRAY_STRIDE 0x8083
#endif //GL_COLOR_ARRAY_STRIDE
#ifndef GL_TEXTURE_COORD_ARRAY_SIZE
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#endif //GL_TEXTURE_COORD_ARRAY_SIZE
#ifndef GL_TEXTURE_COORD_ARRAY_TYPE
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#endif //GL_TEXTURE_COORD_ARRAY_TYPE
#ifndef GL_TEXTURE_COORD_ARRAY_STRIDE
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#endif //GL_TEXTURE_COORD_ARRAY_STRIDE
#ifndef GL_VERTEX_ARRAY_POINTER
#define GL_VERTEX_ARRAY_POINTER 0x808E
#endif //GL_VERTEX_ARRAY_POINTER
#ifndef GL_NORMAL_ARRAY_POINTER
#define GL_NORMAL_ARRAY_POINTER 0x808F
#endif //GL_NORMAL_ARRAY_POINTER
#ifndef GL_COLOR_ARRAY_POINTER
#define GL_COLOR_ARRAY_POINTER 0x8090
#endif //GL_COLOR_ARRAY_POINTER
#ifndef GL_TEXTURE_COORD_ARRAY_POINTER
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#endif //GL_TEXTURE_COORD_ARRAY_POINTER
#ifndef GL_MULTISAMPLE
#define GL_MULTISAMPLE 0x809D
#endif //GL_MULTISAMPLE
#ifndef GL_SAMPLE_ALPHA_TO_COVERAGE
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#endif //GL_SAMPLE_ALPHA_TO_COVERAGE
#ifndef GL_SAMPLE_ALPHA_TO_ONE
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#endif //GL_SAMPLE_ALPHA_TO_ONE
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
#ifndef GL_POINT_SIZE_MIN
#define GL_POINT_SIZE_MIN 0x8126
#endif //GL_POINT_SIZE_MIN
#ifndef GL_POINT_SIZE_MAX
#define GL_POINT_SIZE_MAX 0x8127
#endif //GL_POINT_SIZE_MAX
#ifndef GL_POINT_FADE_THRESHOLD_SIZE
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#endif //GL_POINT_FADE_THRESHOLD_SIZE
#ifndef GL_POINT_DISTANCE_ATTENUATION
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#endif //GL_POINT_DISTANCE_ATTENUATION
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif //GL_CLAMP_TO_EDGE
#ifndef GL_GENERATE_MIPMAP
#define GL_GENERATE_MIPMAP 0x8191
#endif //GL_GENERATE_MIPMAP
#ifndef GL_GENERATE_MIPMAP_HINT
#define GL_GENERATE_MIPMAP_HINT 0x8192
#endif //GL_GENERATE_MIPMAP_HINT
#ifndef GL_UNSIGNED_SHORT_5_6_5
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#endif //GL_UNSIGNED_SHORT_5_6_5
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
#ifndef GL_CLIENT_ACTIVE_TEXTURE
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#endif //GL_CLIENT_ACTIVE_TEXTURE
#ifndef GL_MAX_TEXTURE_UNITS
#define GL_MAX_TEXTURE_UNITS 0x84E2
#endif //GL_MAX_TEXTURE_UNITS
#ifndef GL_SUBTRACT
#define GL_SUBTRACT 0x84E7
#endif //GL_SUBTRACT
#ifndef GL_COMBINE
#define GL_COMBINE 0x8570
#endif //GL_COMBINE
#ifndef GL_COMBINE_RGB
#define GL_COMBINE_RGB 0x8571
#endif //GL_COMBINE_RGB
#ifndef GL_COMBINE_ALPHA
#define GL_COMBINE_ALPHA 0x8572
#endif //GL_COMBINE_ALPHA
#ifndef GL_RGB_SCALE
#define GL_RGB_SCALE 0x8573
#endif //GL_RGB_SCALE
#ifndef GL_ADD_SIGNED
#define GL_ADD_SIGNED 0x8574
#endif //GL_ADD_SIGNED
#ifndef GL_INTERPOLATE
#define GL_INTERPOLATE 0x8575
#endif //GL_INTERPOLATE
#ifndef GL_CONSTANT
#define GL_CONSTANT 0x8576
#endif //GL_CONSTANT
#ifndef GL_PRIMARY_COLOR
#define GL_PRIMARY_COLOR 0x8577
#endif //GL_PRIMARY_COLOR
#ifndef GL_PREVIOUS
#define GL_PREVIOUS 0x8578
#endif //GL_PREVIOUS
#ifndef GL_SRC0_RGB
#define GL_SRC0_RGB 0x8580
#endif //GL_SRC0_RGB
#ifndef GL_SRC1_RGB
#define GL_SRC1_RGB 0x8581
#endif //GL_SRC1_RGB
#ifndef GL_SRC2_RGB
#define GL_SRC2_RGB 0x8582
#endif //GL_SRC2_RGB
#ifndef GL_SRC0_ALPHA
#define GL_SRC0_ALPHA 0x8588
#endif //GL_SRC0_ALPHA
#ifndef GL_SRC1_ALPHA
#define GL_SRC1_ALPHA 0x8589
#endif //GL_SRC1_ALPHA
#ifndef GL_SRC2_ALPHA
#define GL_SRC2_ALPHA 0x858A
#endif //GL_SRC2_ALPHA
#ifndef GL_OPERAND0_RGB
#define GL_OPERAND0_RGB 0x8590
#endif //GL_OPERAND0_RGB
#ifndef GL_OPERAND1_RGB
#define GL_OPERAND1_RGB 0x8591
#endif //GL_OPERAND1_RGB
#ifndef GL_OPERAND2_RGB
#define GL_OPERAND2_RGB 0x8592
#endif //GL_OPERAND2_RGB
#ifndef GL_OPERAND0_ALPHA
#define GL_OPERAND0_ALPHA 0x8598
#endif //GL_OPERAND0_ALPHA
#ifndef GL_OPERAND1_ALPHA
#define GL_OPERAND1_ALPHA 0x8599
#endif //GL_OPERAND1_ALPHA
#ifndef GL_OPERAND2_ALPHA
#define GL_OPERAND2_ALPHA 0x859A
#endif //GL_OPERAND2_ALPHA
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#endif //GL_NUM_COMPRESSED_TEXTURE_FORMATS
#ifndef GL_COMPRESSED_TEXTURE_FORMATS
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#endif //GL_COMPRESSED_TEXTURE_FORMATS
#ifndef GL_DOT3_RGB
#define GL_DOT3_RGB 0x86AE
#endif //GL_DOT3_RGB
#ifndef GL_DOT3_RGBA
#define GL_DOT3_RGBA 0x86AF
#endif //GL_DOT3_RGBA
#ifndef GL_BUFFER_SIZE
#define GL_BUFFER_SIZE 0x8764
#endif //GL_BUFFER_SIZE
#ifndef GL_BUFFER_USAGE
#define GL_BUFFER_USAGE 0x8765
#endif //GL_BUFFER_USAGE
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
#ifndef GL_VERTEX_ARRAY_BUFFER_BINDING
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#endif //GL_VERTEX_ARRAY_BUFFER_BINDING
#ifndef GL_NORMAL_ARRAY_BUFFER_BINDING
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#endif //GL_NORMAL_ARRAY_BUFFER_BINDING
#ifndef GL_COLOR_ARRAY_BUFFER_BINDING
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#endif //GL_COLOR_ARRAY_BUFFER_BINDING
#ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#endif //GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
#ifndef GL_STATIC_DRAW
#define GL_STATIC_DRAW 0x88E4
#endif //GL_STATIC_DRAW
#ifndef GL_DYNAMIC_DRAW
#define GL_DYNAMIC_DRAW 0x88E8
#endif //GL_DYNAMIC_DRAW
#ifndef GL_ONE
#define GL_ONE 1
#endif //GL_ONE
#ifndef GL_VERSION_ES_CL_1_0
#define GL_VERSION_ES_CL_1_0 1
#endif //GL_VERSION_ES_CL_1_0
#ifndef GL_VERSION_ES_CL_1_1
#define GL_VERSION_ES_CL_1_1 1
#endif //GL_VERSION_ES_CL_1_1
#ifndef GL_VERSION_ES_CM_1_1
#define GL_VERSION_ES_CM_1_1 1
#endif //GL_VERSION_ES_CM_1_1
#ifndef GL_TRUE
#define GL_TRUE 1
#endif //GL_TRUE
extern "C" {
extern void glAlphaFunc(GLenum,GLfloat);
extern void glBindTexture(GLenum,GLuint);
extern void glBlendFunc(GLenum,GLenum);
extern void glClear(GLbitfield);
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearStencil(GLint);
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
extern void glColorPointer(GLint,GLenum,GLsizei,const void *);
extern void glCopyTexImage2D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
extern void glCopyTexSubImage2D(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
extern void glCullFace(GLenum);
extern void glDeleteTextures(GLsizei,const GLuint *);
extern void glDepthFunc(GLenum);
extern void glDepthMask(GLboolean);
extern void glDisable(GLenum);
extern void glDisableClientState(GLenum);
extern void glDrawArrays(GLenum,GLint,GLsizei);
extern void glDrawElements(GLenum,GLsizei,GLenum,const void *);
extern void glEnable(GLenum);
extern void glEnableClientState(GLenum);
extern void glFinish();
extern void glFlush();
extern void glFogf(GLenum,GLfloat);
extern void glFogfv(GLenum,const GLfloat *);
extern void glFrontFace(GLenum);
extern void glGenTextures(GLsizei,GLuint *);
extern void glGetBooleanv(GLenum,GLboolean *);
extern GLenum glGetError();
extern void glGetFloatv(GLenum,GLfloat *);
extern void glGetIntegerv(GLenum,GLint *);
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
extern void glGetPointerv(GLenum,void **);
extern const GLubyte * glGetString(GLenum);
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
extern void glHint(GLenum,GLenum);
extern GLboolean glIsEnabled(GLenum);
extern GLboolean glIsTexture(GLuint);
extern void glLightModelf(GLenum,GLfloat);
extern void glLightModelfv(GLenum,const GLfloat *);
extern void glLightf(GLenum,GLenum,GLfloat);
extern void glLightfv(GLenum,GLenum,const GLfloat *);
extern void glLineWidth(GLfloat);
extern void glLoadIdentity();
extern void glLoadMatrixf(const GLfloat *);
extern void glLogicOp(GLenum);
extern void glMaterialf(GLenum,GLenum,GLfloat);
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
extern void glMatrixMode(GLenum);
extern void glMultMatrixf(const GLfloat *);
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
extern void glNormalPointer(GLenum,GLsizei,const void *);
extern void glPixelStorei(GLenum,GLint);
extern void glPointSize(GLfloat);
extern void glPolygonOffset(GLfloat,GLfloat);
extern void glPopMatrix();
extern void glPushMatrix();
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glScalef(GLfloat,GLfloat,GLfloat);
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
extern void glShadeModel(GLenum);
extern void glStencilFunc(GLenum,GLint,GLuint);
extern void glStencilMask(GLuint);
extern void glStencilOp(GLenum,GLenum,GLenum);
extern void glTexCoordPointer(GLint,GLenum,GLsizei,const void *);
extern void glTexEnvf(GLenum,GLenum,GLfloat);
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
extern void glTexEnvi(GLenum,GLenum,GLint);
extern void glTexEnviv(GLenum,GLenum,const GLint *);
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexParameterf(GLenum,GLenum,GLfloat);
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
extern void glTexParameteri(GLenum,GLenum,GLint);
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
extern void glTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
extern void glVertexPointer(GLint,GLenum,GLsizei,const void *);
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
}
namespace gl{

typedef void (*PFNGLACTIVETEXTUREPROC_HPP)(GLenum);
static inline void ActiveTexture(GLenum texture1)
{
	static PFNGLACTIVETEXTUREPROC_HPP fn=reinterpret_cast<PFNGLACTIVETEXTUREPROC_HPP>(_impl::_get_proc_address("glActiveTexture",GL_VERSION_ES_CM_1_0));
	 fn(texture1);
}
static inline void AlphaFunc(GLenum func1,GLfloat ref1)
{
	 glAlphaFunc(func1,ref1);
}
typedef void (*PFNGLALPHAFUNCXPROC_HPP)(GLenum,GLfixed);
static inline void AlphaFuncx(GLenum func1,GLfixed ref1)
{
	static PFNGLALPHAFUNCXPROC_HPP fn=reinterpret_cast<PFNGLALPHAFUNCXPROC_HPP>(_impl::_get_proc_address("glAlphaFuncx",GL_VERSION_ES_CM_1_0));
	 fn(func1,ref1);
}
typedef void (*PFNGLBINDBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindBuffer(GLenum target1,GLuint buffer1)
{
	static PFNGLBINDBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDBUFFERPROC_HPP>(_impl::_get_proc_address("glBindBuffer",GL_VERSION_ES_CM_1_0));
	 fn(target1,buffer1);
}
static inline void BindTexture(GLenum target1,GLuint texture1)
{
	 glBindTexture(target1,texture1);
}
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	 glBlendFunc(sfactor1,dfactor1);
}
typedef void (*PFNGLBUFFERDATAPROC_HPP)(GLenum,GLsizeiptr,const void *,GLenum);
static inline void BufferData(GLenum target1,GLsizeiptr size1,const void * data1,GLenum usage1)
{
	static PFNGLBUFFERDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERDATAPROC_HPP>(_impl::_get_proc_address("glBufferData",GL_VERSION_ES_CM_1_0));
	 fn(target1,size1,data1,usage1);
}
typedef void (*PFNGLBUFFERSUBDATAPROC_HPP)(GLenum,GLintptr,GLsizeiptr,const void *);
static inline void BufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,const void * data1)
{
	static PFNGLBUFFERSUBDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERSUBDATAPROC_HPP>(_impl::_get_proc_address("glBufferSubData",GL_VERSION_ES_CM_1_0));
	 fn(target1,offset1,size1,data1);
}
static inline void Clear(GLbitfield mask1)
{
	 glClear(mask1);
}
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearColor(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARCOLORXPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void ClearColorx(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCLEARCOLORXPROC_HPP fn=reinterpret_cast<PFNGLCLEARCOLORXPROC_HPP>(_impl::_get_proc_address("glClearColorx",GL_VERSION_ES_CM_1_0));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARDEPTHFPROC_HPP)(GLfloat);
static inline void ClearDepthf(GLfloat d1)
{
	static PFNGLCLEARDEPTHFPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHFPROC_HPP>(_impl::_get_proc_address("glClearDepthf",GL_VERSION_ES_CM_1_0));
	 fn(d1);
}
typedef void (*PFNGLCLEARDEPTHXPROC_HPP)(GLfixed);
static inline void ClearDepthx(GLfixed depth1)
{
	static PFNGLCLEARDEPTHXPROC_HPP fn=reinterpret_cast<PFNGLCLEARDEPTHXPROC_HPP>(_impl::_get_proc_address("glClearDepthx",GL_VERSION_ES_CM_1_0));
	 fn(depth1);
}
static inline void ClearStencil(GLint s1)
{
	 glClearStencil(s1);
}
typedef void (*PFNGLCLIENTACTIVETEXTUREPROC_HPP)(GLenum);
static inline void ClientActiveTexture(GLenum texture1)
{
	static PFNGLCLIENTACTIVETEXTUREPROC_HPP fn=reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC_HPP>(_impl::_get_proc_address("glClientActiveTexture",GL_VERSION_ES_CM_1_0));
	 fn(texture1);
}
typedef void (*PFNGLCLIPPLANEFPROC_HPP)(GLenum,const GLfloat *);
static inline void ClipPlanef(GLenum p1,const GLfloat * eqn1)
{
	static PFNGLCLIPPLANEFPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEFPROC_HPP>(_impl::_get_proc_address("glClipPlanef",GL_VERSION_ES_CM_1_0));
	 fn(p1,eqn1);
}
typedef void (*PFNGLCLIPPLANEXPROC_HPP)(GLenum,const GLfixed *);
static inline void ClipPlanex(GLenum plane1,const GLfixed * equation1)
{
	static PFNGLCLIPPLANEXPROC_HPP fn=reinterpret_cast<PFNGLCLIPPLANEXPROC_HPP>(_impl::_get_proc_address("glClipPlanex",GL_VERSION_ES_CM_1_0));
	 fn(plane1,equation1);
}
static inline void Color4f(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glColor4f(red1,green1,blue1,alpha1);
}
static inline void Color4ub(GLubyte red1,GLubyte green1,GLubyte blue1,GLubyte alpha1)
{
	 glColor4ub(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCOLOR4XPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void Color4x(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
	static PFNGLCOLOR4XPROC_HPP fn=reinterpret_cast<PFNGLCOLOR4XPROC_HPP>(_impl::_get_proc_address("glColor4x",GL_VERSION_ES_CM_1_0));
	 fn(red1,green1,blue1,alpha1);
}
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	 glColorMask(red1,green1,blue1,alpha1);
}
static inline void ColorPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glColorPointer(size1,type1,stride1,pointer1);
}
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage2D",GL_VERSION_ES_CM_1_0));
	 fn(target1,level1,internalformat1,width1,height1,border1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage2D",GL_VERSION_ES_CM_1_0));
	 fn(target1,level1,xoffset1,yoffset1,width1,height1,format1,imageSize1,data1);
}
static inline void CopyTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLint border1)
{
	 glCopyTexImage2D(target1,level1,internalformat1,x1,y1,width1,height1,border1);
}
static inline void CopyTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glCopyTexSubImage2D(target1,level1,xoffset1,yoffset1,x1,y1,width1,height1);
}
static inline void CullFace(GLenum mode1)
{
	 glCullFace(mode1);
}
typedef void (*PFNGLDELETEBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteBuffers(GLsizei n1,const GLuint * buffers1)
{
	static PFNGLDELETEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETEBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteBuffers",GL_VERSION_ES_CM_1_0));
	 fn(n1,buffers1);
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
typedef void (*PFNGLDEPTHRANGEFPROC_HPP)(GLfloat,GLfloat);
static inline void DepthRangef(GLfloat n1,GLfloat f1)
{
	static PFNGLDEPTHRANGEFPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEFPROC_HPP>(_impl::_get_proc_address("glDepthRangef",GL_VERSION_ES_CM_1_0));
	 fn(n1,f1);
}
typedef void (*PFNGLDEPTHRANGEXPROC_HPP)(GLfixed,GLfixed);
static inline void DepthRangex(GLfixed n1,GLfixed f1)
{
	static PFNGLDEPTHRANGEXPROC_HPP fn=reinterpret_cast<PFNGLDEPTHRANGEXPROC_HPP>(_impl::_get_proc_address("glDepthRangex",GL_VERSION_ES_CM_1_0));
	 fn(n1,f1);
}
static inline void Disable(GLenum cap1)
{
	 glDisable(cap1);
}
static inline void DisableClientState(GLenum array1)
{
	 glDisableClientState(array1);
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
static inline void EnableClientState(GLenum array1)
{
	 glEnableClientState(array1);
}
static inline void Finish()
{
	 glFinish();
}
static inline void Flush()
{
	 glFlush();
}
static inline void Fogf(GLenum pname1,GLfloat param1)
{
	 glFogf(pname1,param1);
}
static inline void Fogfv(GLenum pname1,const GLfloat * params1)
{
	 glFogfv(pname1,params1);
}
typedef void (*PFNGLFOGXPROC_HPP)(GLenum,GLfixed);
static inline void Fogx(GLenum pname1,GLfixed param1)
{
	static PFNGLFOGXPROC_HPP fn=reinterpret_cast<PFNGLFOGXPROC_HPP>(_impl::_get_proc_address("glFogx",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
typedef void (*PFNGLFOGXVPROC_HPP)(GLenum,const GLfixed *);
static inline void Fogxv(GLenum pname1,const GLfixed * param1)
{
	static PFNGLFOGXVPROC_HPP fn=reinterpret_cast<PFNGLFOGXVPROC_HPP>(_impl::_get_proc_address("glFogxv",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
static inline void FrontFace(GLenum mode1)
{
	 glFrontFace(mode1);
}
typedef void (*PFNGLFRUSTUMFPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Frustumf(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLFRUSTUMFPROC_HPP fn=reinterpret_cast<PFNGLFRUSTUMFPROC_HPP>(_impl::_get_proc_address("glFrustumf",GL_VERSION_ES_CM_1_0));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLFRUSTUMXPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void Frustumx(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLFRUSTUMXPROC_HPP fn=reinterpret_cast<PFNGLFRUSTUMXPROC_HPP>(_impl::_get_proc_address("glFrustumx",GL_VERSION_ES_CM_1_0));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLGENBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenBuffers(GLsizei n1,GLuint * buffers1)
{
	static PFNGLGENBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenBuffers",GL_VERSION_ES_CM_1_0));
	 fn(n1,buffers1);
}
static inline void GenTextures(GLsizei n1,GLuint * textures1)
{
	 glGenTextures(n1,textures1);
}
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	 glGetBooleanv(pname1,data1);
}
typedef void (*PFNGLGETBUFFERPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetBufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETBUFFERPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetBufferParameteriv",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETCLIPPLANEFPROC_HPP)(GLenum,GLfloat *);
static inline void GetClipPlanef(GLenum plane1,GLfloat * equation1)
{
	static PFNGLGETCLIPPLANEFPROC_HPP fn=reinterpret_cast<PFNGLGETCLIPPLANEFPROC_HPP>(_impl::_get_proc_address("glGetClipPlanef",GL_VERSION_ES_CM_1_0));
	 fn(plane1,equation1);
}
typedef void (*PFNGLGETCLIPPLANEXPROC_HPP)(GLenum,GLfixed *);
static inline void GetClipPlanex(GLenum plane1,GLfixed * equation1)
{
	static PFNGLGETCLIPPLANEXPROC_HPP fn=reinterpret_cast<PFNGLGETCLIPPLANEXPROC_HPP>(_impl::_get_proc_address("glGetClipPlanex",GL_VERSION_ES_CM_1_0));
	 fn(plane1,equation1);
}
static inline GLenum GetError()
{
	return glGetError();
}
typedef void (*PFNGLGETFIXEDVPROC_HPP)(GLenum,GLfixed *);
static inline void GetFixedv(GLenum pname1,GLfixed * params1)
{
	static PFNGLGETFIXEDVPROC_HPP fn=reinterpret_cast<PFNGLGETFIXEDVPROC_HPP>(_impl::_get_proc_address("glGetFixedv",GL_VERSION_ES_CM_1_0));
	 fn(pname1,params1);
}
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	 glGetFloatv(pname1,data1);
}
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	 glGetIntegerv(pname1,data1);
}
static inline void GetLightfv(GLenum light1,GLenum pname1,GLfloat * params1)
{
	 glGetLightfv(light1,pname1,params1);
}
typedef void (*PFNGLGETLIGHTXVPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetLightxv(GLenum light1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETLIGHTXVPROC_HPP fn=reinterpret_cast<PFNGLGETLIGHTXVPROC_HPP>(_impl::_get_proc_address("glGetLightxv",GL_VERSION_ES_CM_1_0));
	 fn(light1,pname1,params1);
}
static inline void GetMaterialfv(GLenum face1,GLenum pname1,GLfloat * params1)
{
	 glGetMaterialfv(face1,pname1,params1);
}
typedef void (*PFNGLGETMATERIALXVPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetMaterialxv(GLenum face1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETMATERIALXVPROC_HPP fn=reinterpret_cast<PFNGLGETMATERIALXVPROC_HPP>(_impl::_get_proc_address("glGetMaterialxv",GL_VERSION_ES_CM_1_0));
	 fn(face1,pname1,params1);
}
static inline void GetPointerv(GLenum pname1,void ** params1)
{
	 glGetPointerv(pname1,params1);
}
static inline const GLubyte * GetString(GLenum name1)
{
	return glGetString(name1);
}
static inline void GetTexEnvfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexEnvfv(target1,pname1,params1);
}
static inline void GetTexEnviv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexEnviv(target1,pname1,params1);
}
typedef void (*PFNGLGETTEXENVXVPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexEnvxv(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXENVXVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXENVXVPROC_HPP>(_impl::_get_proc_address("glGetTexEnvxv",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,params1);
}
static inline void GetTexParameterfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexParameterfv(target1,pname1,params1);
}
static inline void GetTexParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexParameteriv(target1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERXVPROC_HPP)(GLenum,GLenum,GLfixed *);
static inline void GetTexParameterxv(GLenum target1,GLenum pname1,GLfixed * params1)
{
	static PFNGLGETTEXPARAMETERXVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERXVPROC_HPP>(_impl::_get_proc_address("glGetTexParameterxv",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,params1);
}
static inline void Hint(GLenum target1,GLenum mode1)
{
	 glHint(target1,mode1);
}
typedef GLboolean (*PFNGLISBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsBuffer(GLuint buffer1)
{
	static PFNGLISBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISBUFFERPROC_HPP>(_impl::_get_proc_address("glIsBuffer",GL_VERSION_ES_CM_1_0));
	return fn(buffer1);
}
static inline GLboolean IsEnabled(GLenum cap1)
{
	return glIsEnabled(cap1);
}
static inline GLboolean IsTexture(GLuint texture1)
{
	return glIsTexture(texture1);
}
static inline void LightModelf(GLenum pname1,GLfloat param1)
{
	 glLightModelf(pname1,param1);
}
static inline void LightModelfv(GLenum pname1,const GLfloat * params1)
{
	 glLightModelfv(pname1,params1);
}
typedef void (*PFNGLLIGHTMODELXPROC_HPP)(GLenum,GLfixed);
static inline void LightModelx(GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTMODELXPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELXPROC_HPP>(_impl::_get_proc_address("glLightModelx",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
typedef void (*PFNGLLIGHTMODELXVPROC_HPP)(GLenum,const GLfixed *);
static inline void LightModelxv(GLenum pname1,const GLfixed * param1)
{
	static PFNGLLIGHTMODELXVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTMODELXVPROC_HPP>(_impl::_get_proc_address("glLightModelxv",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
static inline void Lightf(GLenum light1,GLenum pname1,GLfloat param1)
{
	 glLightf(light1,pname1,param1);
}
static inline void Lightfv(GLenum light1,GLenum pname1,const GLfloat * params1)
{
	 glLightfv(light1,pname1,params1);
}
typedef void (*PFNGLLIGHTXPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void Lightx(GLenum light1,GLenum pname1,GLfixed param1)
{
	static PFNGLLIGHTXPROC_HPP fn=reinterpret_cast<PFNGLLIGHTXPROC_HPP>(_impl::_get_proc_address("glLightx",GL_VERSION_ES_CM_1_0));
	 fn(light1,pname1,param1);
}
typedef void (*PFNGLLIGHTXVPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void Lightxv(GLenum light1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLLIGHTXVPROC_HPP fn=reinterpret_cast<PFNGLLIGHTXVPROC_HPP>(_impl::_get_proc_address("glLightxv",GL_VERSION_ES_CM_1_0));
	 fn(light1,pname1,params1);
}
static inline void LineWidth(GLfloat width1)
{
	 glLineWidth(width1);
}
typedef void (*PFNGLLINEWIDTHXPROC_HPP)(GLfixed);
static inline void LineWidthx(GLfixed width1)
{
	static PFNGLLINEWIDTHXPROC_HPP fn=reinterpret_cast<PFNGLLINEWIDTHXPROC_HPP>(_impl::_get_proc_address("glLineWidthx",GL_VERSION_ES_CM_1_0));
	 fn(width1);
}
static inline void LoadIdentity()
{
	 glLoadIdentity();
}
static inline void LoadMatrixf(const GLfloat * m1)
{
	 glLoadMatrixf(m1);
}
typedef void (*PFNGLLOADMATRIXXPROC_HPP)(const GLfixed *);
static inline void LoadMatrixx(const GLfixed * m1)
{
	static PFNGLLOADMATRIXXPROC_HPP fn=reinterpret_cast<PFNGLLOADMATRIXXPROC_HPP>(_impl::_get_proc_address("glLoadMatrixx",GL_VERSION_ES_CM_1_0));
	 fn(m1);
}
static inline void LogicOp(GLenum opcode1)
{
	 glLogicOp(opcode1);
}
static inline void Materialf(GLenum face1,GLenum pname1,GLfloat param1)
{
	 glMaterialf(face1,pname1,param1);
}
static inline void Materialfv(GLenum face1,GLenum pname1,const GLfloat * params1)
{
	 glMaterialfv(face1,pname1,params1);
}
typedef void (*PFNGLMATERIALXPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void Materialx(GLenum face1,GLenum pname1,GLfixed param1)
{
	static PFNGLMATERIALXPROC_HPP fn=reinterpret_cast<PFNGLMATERIALXPROC_HPP>(_impl::_get_proc_address("glMaterialx",GL_VERSION_ES_CM_1_0));
	 fn(face1,pname1,param1);
}
typedef void (*PFNGLMATERIALXVPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void Materialxv(GLenum face1,GLenum pname1,const GLfixed * param1)
{
	static PFNGLMATERIALXVPROC_HPP fn=reinterpret_cast<PFNGLMATERIALXVPROC_HPP>(_impl::_get_proc_address("glMaterialxv",GL_VERSION_ES_CM_1_0));
	 fn(face1,pname1,param1);
}
static inline void MatrixMode(GLenum mode1)
{
	 glMatrixMode(mode1);
}
static inline void MultMatrixf(const GLfloat * m1)
{
	 glMultMatrixf(m1);
}
typedef void (*PFNGLMULTMATRIXXPROC_HPP)(const GLfixed *);
static inline void MultMatrixx(const GLfixed * m1)
{
	static PFNGLMULTMATRIXXPROC_HPP fn=reinterpret_cast<PFNGLMULTMATRIXXPROC_HPP>(_impl::_get_proc_address("glMultMatrixx",GL_VERSION_ES_CM_1_0));
	 fn(m1);
}
typedef void (*PFNGLMULTITEXCOORD4FPROC_HPP)(GLenum,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void MultiTexCoord4f(GLenum target1,GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
	static PFNGLMULTITEXCOORD4FPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4FPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4f",GL_VERSION_ES_CM_1_0));
	 fn(target1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4XPROC_HPP)(GLenum,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void MultiTexCoord4x(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
	static PFNGLMULTITEXCOORD4XPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4XPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4x",GL_VERSION_ES_CM_1_0));
	 fn(texture1,s1,t1,r1,q1);
}
static inline void Normal3f(GLfloat nx1,GLfloat ny1,GLfloat nz1)
{
	 glNormal3f(nx1,ny1,nz1);
}
typedef void (*PFNGLNORMAL3XPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Normal3x(GLfixed nx1,GLfixed ny1,GLfixed nz1)
{
	static PFNGLNORMAL3XPROC_HPP fn=reinterpret_cast<PFNGLNORMAL3XPROC_HPP>(_impl::_get_proc_address("glNormal3x",GL_VERSION_ES_CM_1_0));
	 fn(nx1,ny1,nz1);
}
static inline void NormalPointer(GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glNormalPointer(type1,stride1,pointer1);
}
typedef void (*PFNGLORTHOFPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Orthof(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
	static PFNGLORTHOFPROC_HPP fn=reinterpret_cast<PFNGLORTHOFPROC_HPP>(_impl::_get_proc_address("glOrthof",GL_VERSION_ES_CM_1_0));
	 fn(l1,r1,b1,t1,n1,f1);
}
typedef void (*PFNGLORTHOXPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void Orthox(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
	static PFNGLORTHOXPROC_HPP fn=reinterpret_cast<PFNGLORTHOXPROC_HPP>(_impl::_get_proc_address("glOrthox",GL_VERSION_ES_CM_1_0));
	 fn(l1,r1,b1,t1,n1,f1);
}
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	 glPixelStorei(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERFPROC_HPP)(GLenum,GLfloat);
static inline void PointParameterf(GLenum pname1,GLfloat param1)
{
	static PFNGLPOINTPARAMETERFPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERFPROC_HPP>(_impl::_get_proc_address("glPointParameterf",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERFVPROC_HPP)(GLenum,const GLfloat *);
static inline void PointParameterfv(GLenum pname1,const GLfloat * params1)
{
	static PFNGLPOINTPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glPointParameterfv",GL_VERSION_ES_CM_1_0));
	 fn(pname1,params1);
}
typedef void (*PFNGLPOINTPARAMETERXPROC_HPP)(GLenum,GLfixed);
static inline void PointParameterx(GLenum pname1,GLfixed param1)
{
	static PFNGLPOINTPARAMETERXPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERXPROC_HPP>(_impl::_get_proc_address("glPointParameterx",GL_VERSION_ES_CM_1_0));
	 fn(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERXVPROC_HPP)(GLenum,const GLfixed *);
static inline void PointParameterxv(GLenum pname1,const GLfixed * params1)
{
	static PFNGLPOINTPARAMETERXVPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERXVPROC_HPP>(_impl::_get_proc_address("glPointParameterxv",GL_VERSION_ES_CM_1_0));
	 fn(pname1,params1);
}
static inline void PointSize(GLfloat size1)
{
	 glPointSize(size1);
}
typedef void (*PFNGLPOINTSIZEXPROC_HPP)(GLfixed);
static inline void PointSizex(GLfixed size1)
{
	static PFNGLPOINTSIZEXPROC_HPP fn=reinterpret_cast<PFNGLPOINTSIZEXPROC_HPP>(_impl::_get_proc_address("glPointSizex",GL_VERSION_ES_CM_1_0));
	 fn(size1);
}
static inline void PolygonOffset(GLfloat factor1,GLfloat units1)
{
	 glPolygonOffset(factor1,units1);
}
typedef void (*PFNGLPOLYGONOFFSETXPROC_HPP)(GLfixed,GLfixed);
static inline void PolygonOffsetx(GLfixed factor1,GLfixed units1)
{
	static PFNGLPOLYGONOFFSETXPROC_HPP fn=reinterpret_cast<PFNGLPOLYGONOFFSETXPROC_HPP>(_impl::_get_proc_address("glPolygonOffsetx",GL_VERSION_ES_CM_1_0));
	 fn(factor1,units1);
}
static inline void PopMatrix()
{
	 glPopMatrix();
}
static inline void PushMatrix()
{
	 glPushMatrix();
}
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	 glReadPixels(x1,y1,width1,height1,format1,type1,pixels1);
}
static inline void Rotatef(GLfloat angle1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glRotatef(angle1,x1,y1,z1);
}
typedef void (*PFNGLROTATEXPROC_HPP)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void Rotatex(GLfixed angle1,GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLROTATEXPROC_HPP fn=reinterpret_cast<PFNGLROTATEXPROC_HPP>(_impl::_get_proc_address("glRotatex",GL_VERSION_ES_CM_1_0));
	 fn(angle1,x1,y1,z1);
}
typedef void (*PFNGLSAMPLECOVERAGEPROC_HPP)(GLfloat,GLboolean);
static inline void SampleCoverage(GLfloat value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEPROC_HPP>(_impl::_get_proc_address("glSampleCoverage",GL_VERSION_ES_CM_1_0));
	 fn(value1,invert1);
}
typedef void (*PFNGLSAMPLECOVERAGEXPROC_HPP)(GLclampx,GLboolean);
static inline void SampleCoveragex(GLclampx value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEXPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEXPROC_HPP>(_impl::_get_proc_address("glSampleCoveragex",GL_VERSION_ES_CM_1_0));
	 fn(value1,invert1);
}
static inline void Scalef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glScalef(x1,y1,z1);
}
typedef void (*PFNGLSCALEXPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Scalex(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLSCALEXPROC_HPP fn=reinterpret_cast<PFNGLSCALEXPROC_HPP>(_impl::_get_proc_address("glScalex",GL_VERSION_ES_CM_1_0));
	 fn(x1,y1,z1);
}
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glScissor(x1,y1,width1,height1);
}
static inline void ShadeModel(GLenum mode1)
{
	 glShadeModel(mode1);
}
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	 glStencilFunc(func1,ref1,mask1);
}
static inline void StencilMask(GLuint mask1)
{
	 glStencilMask(mask1);
}
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	 glStencilOp(fail1,zfail1,zpass1);
}
static inline void TexCoordPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glTexCoordPointer(size1,type1,stride1,pointer1);
}
static inline void TexEnvf(GLenum target1,GLenum pname1,GLfloat param1)
{
	 glTexEnvf(target1,pname1,param1);
}
static inline void TexEnvfv(GLenum target1,GLenum pname1,const GLfloat * params1)
{
	 glTexEnvfv(target1,pname1,params1);
}
static inline void TexEnvi(GLenum target1,GLenum pname1,GLint param1)
{
	 glTexEnvi(target1,pname1,param1);
}
static inline void TexEnviv(GLenum target1,GLenum pname1,const GLint * params1)
{
	 glTexEnviv(target1,pname1,params1);
}
typedef void (*PFNGLTEXENVXPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexEnvx(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXENVXPROC_HPP fn=reinterpret_cast<PFNGLTEXENVXPROC_HPP>(_impl::_get_proc_address("glTexEnvx",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,param1);
}
typedef void (*PFNGLTEXENVXVPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexEnvxv(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXENVXVPROC_HPP fn=reinterpret_cast<PFNGLTEXENVXVPROC_HPP>(_impl::_get_proc_address("glTexEnvxv",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,params1);
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
typedef void (*PFNGLTEXPARAMETERXPROC_HPP)(GLenum,GLenum,GLfixed);
static inline void TexParameterx(GLenum target1,GLenum pname1,GLfixed param1)
{
	static PFNGLTEXPARAMETERXPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERXPROC_HPP>(_impl::_get_proc_address("glTexParameterx",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,param1);
}
typedef void (*PFNGLTEXPARAMETERXVPROC_HPP)(GLenum,GLenum,const GLfixed *);
static inline void TexParameterxv(GLenum target1,GLenum pname1,const GLfixed * params1)
{
	static PFNGLTEXPARAMETERXVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERXVPROC_HPP>(_impl::_get_proc_address("glTexParameterxv",GL_VERSION_ES_CM_1_0));
	 fn(target1,pname1,params1);
}
static inline void TexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexSubImage2D(target1,level1,xoffset1,yoffset1,width1,height1,format1,type1,pixels1);
}
static inline void Translatef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glTranslatef(x1,y1,z1);
}
typedef void (*PFNGLTRANSLATEXPROC_HPP)(GLfixed,GLfixed,GLfixed);
static inline void Translatex(GLfixed x1,GLfixed y1,GLfixed z1)
{
	static PFNGLTRANSLATEXPROC_HPP fn=reinterpret_cast<PFNGLTRANSLATEXPROC_HPP>(_impl::_get_proc_address("glTranslatex",GL_VERSION_ES_CM_1_0));
	 fn(x1,y1,z1);
}
static inline void VertexPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glVertexPointer(size1,type1,stride1,pointer1);
}
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glViewport(x1,y1,width1,height1);
}}
#endif
