#ifndef GL_ALT_GL_VERSION_ES_CM_1_0_ALT
#define GL_ALT_GL_VERSION_ES_CM_1_0_ALT
#include "common.h"


#ifndef GL_ALT_API_NAME
#define GL_ALT_API_NAME GL_ALT_GLES_API
#endif
#ifndef GL_ALT_API_VERSION
#define GL_ALT_API_VERSION 100
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
CGUARDBEGIN

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_AlphaFunc
#define GL_ALT_FUNDEF_AlphaFunc
extern void glAlphaFunc(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_BindTexture
#define GL_ALT_FUNDEF_BindTexture
extern void glBindTexture(GLenum,GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_BlendFunc
#define GL_ALT_FUNDEF_BlendFunc
extern void glBlendFunc(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Clear
#define GL_ALT_FUNDEF_Clear
extern void glClear(GLbitfield);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearColor
#define GL_ALT_FUNDEF_ClearColor
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ClearStencil
#define GL_ALT_FUNDEF_ClearStencil
extern void glClearStencil(GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4f
#define GL_ALT_FUNDEF_Color4f
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Color4ub
#define GL_ALT_FUNDEF_Color4ub
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ColorMask
#define GL_ALT_FUNDEF_ColorMask
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_ColorPointer
#define GL_ALT_FUNDEF_ColorPointer
extern void glColorPointer(GLint,GLenum,GLsizei,const void *);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_CopyTexImage2D
#define GL_ALT_FUNDEF_CopyTexImage2D
extern void glCopyTexImage2D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_CopyTexSubImage2D
#define GL_ALT_FUNDEF_CopyTexSubImage2D
extern void glCopyTexSubImage2D(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_CullFace
#define GL_ALT_FUNDEF_CullFace
extern void glCullFace(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_DeleteTextures
#define GL_ALT_FUNDEF_DeleteTextures
extern void glDeleteTextures(GLsizei,const GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DepthFunc
#define GL_ALT_FUNDEF_DepthFunc
extern void glDepthFunc(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_DepthMask
#define GL_ALT_FUNDEF_DepthMask
extern void glDepthMask(GLboolean);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Disable
#define GL_ALT_FUNDEF_Disable
extern void glDisable(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_DisableClientState
#define GL_ALT_FUNDEF_DisableClientState
extern void glDisableClientState(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_DrawArrays
#define GL_ALT_FUNDEF_DrawArrays
extern void glDrawArrays(GLenum,GLint,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_DrawElements
#define GL_ALT_FUNDEF_DrawElements
extern void glDrawElements(GLenum,GLsizei,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Enable
#define GL_ALT_FUNDEF_Enable
extern void glEnable(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_EnableClientState
#define GL_ALT_FUNDEF_EnableClientState
extern void glEnableClientState(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Finish
#define GL_ALT_FUNDEF_Finish
extern void glFinish();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Flush
#define GL_ALT_FUNDEF_Flush
extern void glFlush();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogf
#define GL_ALT_FUNDEF_Fogf
extern void glFogf(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Fogfv
#define GL_ALT_FUNDEF_Fogfv
extern void glFogfv(GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_FrontFace
#define GL_ALT_FUNDEF_FrontFace
extern void glFrontFace(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_GenTextures
#define GL_ALT_FUNDEF_GenTextures
extern void glGenTextures(GLsizei,GLuint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetBooleanv
#define GL_ALT_FUNDEF_GetBooleanv
extern void glGetBooleanv(GLenum,GLboolean *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetError
#define GL_ALT_FUNDEF_GetError
extern GLenum glGetError();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetFloatv
#define GL_ALT_FUNDEF_GetFloatv
extern void glGetFloatv(GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetIntegerv
#define GL_ALT_FUNDEF_GetIntegerv
extern void glGetIntegerv(GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetLightfv
#define GL_ALT_FUNDEF_GetLightfv
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetMaterialfv
#define GL_ALT_FUNDEF_GetMaterialfv
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_GetPointerv
#define GL_ALT_FUNDEF_GetPointerv
extern void glGetPointerv(GLenum,void **);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetString
#define GL_ALT_FUNDEF_GetString
extern const GLubyte * glGetString(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexEnvfv
#define GL_ALT_FUNDEF_GetTexEnvfv
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexEnviv
#define GL_ALT_FUNDEF_GetTexEnviv
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexParameterfv
#define GL_ALT_FUNDEF_GetTexParameterfv
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_GetTexParameteriv
#define GL_ALT_FUNDEF_GetTexParameteriv
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Hint
#define GL_ALT_FUNDEF_Hint
extern void glHint(GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_IsEnabled
#define GL_ALT_FUNDEF_IsEnabled
extern GLboolean glIsEnabled(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_IsTexture
#define GL_ALT_FUNDEF_IsTexture
extern GLboolean glIsTexture(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModelf
#define GL_ALT_FUNDEF_LightModelf
extern void glLightModelf(GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LightModelfv
#define GL_ALT_FUNDEF_LightModelfv
extern void glLightModelfv(GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lightf
#define GL_ALT_FUNDEF_Lightf
extern void glLightf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Lightfv
#define GL_ALT_FUNDEF_Lightfv
extern void glLightfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LineWidth
#define GL_ALT_FUNDEF_LineWidth
extern void glLineWidth(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadIdentity
#define GL_ALT_FUNDEF_LoadIdentity
extern void glLoadIdentity();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LoadMatrixf
#define GL_ALT_FUNDEF_LoadMatrixf
extern void glLoadMatrixf(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_LogicOp
#define GL_ALT_FUNDEF_LogicOp
extern void glLogicOp(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materialf
#define GL_ALT_FUNDEF_Materialf
extern void glMaterialf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Materialfv
#define GL_ALT_FUNDEF_Materialfv
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MatrixMode
#define GL_ALT_FUNDEF_MatrixMode
extern void glMatrixMode(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_MultMatrixf
#define GL_ALT_FUNDEF_MultMatrixf
extern void glMultMatrixf(const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Normal3f
#define GL_ALT_FUNDEF_Normal3f
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_NormalPointer
#define GL_ALT_FUNDEF_NormalPointer
extern void glNormalPointer(GLenum,GLsizei,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PixelStorei
#define GL_ALT_FUNDEF_PixelStorei
extern void glPixelStorei(GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PointSize
#define GL_ALT_FUNDEF_PointSize
extern void glPointSize(GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_PolygonOffset
#define GL_ALT_FUNDEF_PolygonOffset
extern void glPolygonOffset(GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PopMatrix
#define GL_ALT_FUNDEF_PopMatrix
extern void glPopMatrix();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_PushMatrix
#define GL_ALT_FUNDEF_PushMatrix
extern void glPushMatrix();
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ReadPixels
#define GL_ALT_FUNDEF_ReadPixels
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Rotatef
#define GL_ALT_FUNDEF_Rotatef
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Scalef
#define GL_ALT_FUNDEF_Scalef
extern void glScalef(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Scissor
#define GL_ALT_FUNDEF_Scissor
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_ShadeModel
#define GL_ALT_FUNDEF_ShadeModel
extern void glShadeModel(GLenum);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilFunc
#define GL_ALT_FUNDEF_StencilFunc
extern void glStencilFunc(GLenum,GLint,GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilMask
#define GL_ALT_FUNDEF_StencilMask
extern void glStencilMask(GLuint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_StencilOp
#define GL_ALT_FUNDEF_StencilOp
extern void glStencilOp(GLenum,GLenum,GLenum);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_TexCoordPointer
#define GL_ALT_FUNDEF_TexCoordPointer
extern void glTexCoordPointer(GLint,GLenum,GLsizei,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvf
#define GL_ALT_FUNDEF_TexEnvf
extern void glTexEnvf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvfv
#define GL_ALT_FUNDEF_TexEnvfv
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnvi
#define GL_ALT_FUNDEF_TexEnvi
extern void glTexEnvi(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexEnviv
#define GL_ALT_FUNDEF_TexEnviv
extern void glTexEnviv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexImage2D
#define GL_ALT_FUNDEF_TexImage2D
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameterf
#define GL_ALT_FUNDEF_TexParameterf
extern void glTexParameterf(GLenum,GLenum,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameterfv
#define GL_ALT_FUNDEF_TexParameterfv
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameteri
#define GL_ALT_FUNDEF_TexParameteri
extern void glTexParameteri(GLenum,GLenum,GLint);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_TexParameteriv
#define GL_ALT_FUNDEF_TexParameteriv
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_TexSubImage2D
#define GL_ALT_FUNDEF_TexSubImage2D
extern void glTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Translatef
#define GL_ALT_FUNDEF_Translatef
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
#endif
#endif

#ifndef GL_VERSION_1_1

#ifndef	GL_ALT_FUNDEF_VertexPointer
#define GL_ALT_FUNDEF_VertexPointer
extern void glVertexPointer(GLint,GLenum,GLsizei,const void *);
#endif
#endif

#ifndef GL_VERSION_1_0

#ifndef	GL_ALT_FUNDEF_Viewport
#define GL_ALT_FUNDEF_Viewport
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
#endif
#endif

#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_ActiveTexture
#define GL_ALT_FUNDEF_ActiveTexture
typedef void (*PFNGLACTIVETEXTUREPROC_ALT)(GLenum);
static inline void glActiveTexture(GLenum texture1)
{
#ifdef __cplusplus
	static PFNGLACTIVETEXTUREPROC_ALT fn=(PFNGLACTIVETEXTUREPROC_ALT)glaltGetProcAddressExtension("glActiveTexture",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLACTIVETEXTUREPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLACTIVETEXTUREPROC_ALT)glaltGetProcAddressExtension("glActiveTexture",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(texture1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_AlphaFuncx
#define GL_ALT_FUNDEF_AlphaFuncx
typedef void (*PFNGLALPHAFUNCXPROC_ALT)(GLenum,GLfixed);
static inline void glAlphaFuncx(GLenum func1,GLfixed ref1)
{
#ifdef __cplusplus
	static PFNGLALPHAFUNCXPROC_ALT fn=(PFNGLALPHAFUNCXPROC_ALT)glaltGetProcAddressExtension("glAlphaFuncx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLALPHAFUNCXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLALPHAFUNCXPROC_ALT)glaltGetProcAddressExtension("glAlphaFuncx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(func1,ref1);
}
#endif
#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_BindBuffer
#define GL_ALT_FUNDEF_BindBuffer
typedef void (*PFNGLBINDBUFFERPROC_ALT)(GLenum,GLuint);
static inline void glBindBuffer(GLenum target1,GLuint buffer1)
{
#ifdef __cplusplus
	static PFNGLBINDBUFFERPROC_ALT fn=(PFNGLBINDBUFFERPROC_ALT)glaltGetProcAddressExtension("glBindBuffer",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLBINDBUFFERPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBINDBUFFERPROC_ALT)glaltGetProcAddressExtension("glBindBuffer",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,buffer1);
}
#endif
#endif

#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_BufferData
#define GL_ALT_FUNDEF_BufferData
typedef void (*PFNGLBUFFERDATAPROC_ALT)(GLenum,GLsizeiptr,const void *,GLenum);
static inline void glBufferData(GLenum target1,GLsizeiptr size1,const void * data1,GLenum usage1)
{
#ifdef __cplusplus
	static PFNGLBUFFERDATAPROC_ALT fn=(PFNGLBUFFERDATAPROC_ALT)glaltGetProcAddressExtension("glBufferData",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLBUFFERDATAPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBUFFERDATAPROC_ALT)glaltGetProcAddressExtension("glBufferData",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,size1,data1,usage1);
}
#endif
#endif

#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_BufferSubData
#define GL_ALT_FUNDEF_BufferSubData
typedef void (*PFNGLBUFFERSUBDATAPROC_ALT)(GLenum,GLintptr,GLsizeiptr,const void *);
static inline void glBufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,const void * data1)
{
#ifdef __cplusplus
	static PFNGLBUFFERSUBDATAPROC_ALT fn=(PFNGLBUFFERSUBDATAPROC_ALT)glaltGetProcAddressExtension("glBufferSubData",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLBUFFERSUBDATAPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLBUFFERSUBDATAPROC_ALT)glaltGetProcAddressExtension("glBufferSubData",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,offset1,size1,data1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_ClearColorx
#define GL_ALT_FUNDEF_ClearColorx
typedef void (*PFNGLCLEARCOLORXPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glClearColorx(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
#ifdef __cplusplus
	static PFNGLCLEARCOLORXPROC_ALT fn=(PFNGLCLEARCOLORXPROC_ALT)glaltGetProcAddressExtension("glClearColorx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLEARCOLORXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLEARCOLORXPROC_ALT)glaltGetProcAddressExtension("glClearColorx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(red1,green1,blue1,alpha1);
}
#endif
#ifndef GL_VERSION_4_1
#ifndef	GL_ALT_FUNDEF_ClearDepthf
#define GL_ALT_FUNDEF_ClearDepthf
typedef void (*PFNGLCLEARDEPTHFPROC_ALT)(GLfloat);
static inline void glClearDepthf(GLfloat d1)
{
#ifdef __cplusplus
	static PFNGLCLEARDEPTHFPROC_ALT fn=(PFNGLCLEARDEPTHFPROC_ALT)glaltGetProcAddressExtension("glClearDepthf",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLEARDEPTHFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLEARDEPTHFPROC_ALT)glaltGetProcAddressExtension("glClearDepthf",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(d1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_ClearDepthx
#define GL_ALT_FUNDEF_ClearDepthx
typedef void (*PFNGLCLEARDEPTHXPROC_ALT)(GLfixed);
static inline void glClearDepthx(GLfixed depth1)
{
#ifdef __cplusplus
	static PFNGLCLEARDEPTHXPROC_ALT fn=(PFNGLCLEARDEPTHXPROC_ALT)glaltGetProcAddressExtension("glClearDepthx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLEARDEPTHXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLEARDEPTHXPROC_ALT)glaltGetProcAddressExtension("glClearDepthx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(depth1);
}
#endif
#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_ClientActiveTexture
#define GL_ALT_FUNDEF_ClientActiveTexture
typedef void (*PFNGLCLIENTACTIVETEXTUREPROC_ALT)(GLenum);
static inline void glClientActiveTexture(GLenum texture1)
{
#ifdef __cplusplus
	static PFNGLCLIENTACTIVETEXTUREPROC_ALT fn=(PFNGLCLIENTACTIVETEXTUREPROC_ALT)glaltGetProcAddressExtension("glClientActiveTexture",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLIENTACTIVETEXTUREPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLIENTACTIVETEXTUREPROC_ALT)glaltGetProcAddressExtension("glClientActiveTexture",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(texture1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_ClipPlanef
#define GL_ALT_FUNDEF_ClipPlanef
typedef void (*PFNGLCLIPPLANEFPROC_ALT)(GLenum,const GLfloat *);
static inline void glClipPlanef(GLenum p1,const GLfloat * eqn1)
{
#ifdef __cplusplus
	static PFNGLCLIPPLANEFPROC_ALT fn=(PFNGLCLIPPLANEFPROC_ALT)glaltGetProcAddressExtension("glClipPlanef",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLIPPLANEFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLIPPLANEFPROC_ALT)glaltGetProcAddressExtension("glClipPlanef",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(p1,eqn1);
}
#endif

#ifndef	GL_ALT_FUNDEF_ClipPlanex
#define GL_ALT_FUNDEF_ClipPlanex
typedef void (*PFNGLCLIPPLANEXPROC_ALT)(GLenum,const GLfixed *);
static inline void glClipPlanex(GLenum plane1,const GLfixed * equation1)
{
#ifdef __cplusplus
	static PFNGLCLIPPLANEXPROC_ALT fn=(PFNGLCLIPPLANEXPROC_ALT)glaltGetProcAddressExtension("glClipPlanex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCLIPPLANEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCLIPPLANEXPROC_ALT)glaltGetProcAddressExtension("glClipPlanex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Color4x
#define GL_ALT_FUNDEF_Color4x
typedef void (*PFNGLCOLOR4XPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glColor4x(GLfixed red1,GLfixed green1,GLfixed blue1,GLfixed alpha1)
{
#ifdef __cplusplus
	static PFNGLCOLOR4XPROC_ALT fn=(PFNGLCOLOR4XPROC_ALT)glaltGetProcAddressExtension("glColor4x",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCOLOR4XPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOLOR4XPROC_ALT)glaltGetProcAddressExtension("glColor4x",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(red1,green1,blue1,alpha1);
}
#endif
#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_CompressedTexImage2D
#define GL_ALT_FUNDEF_CompressedTexImage2D
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC_ALT)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void glCompressedTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLsizei imageSize1,const void * data1)
{
#ifdef __cplusplus
	static PFNGLCOMPRESSEDTEXIMAGE2DPROC_ALT fn=(PFNGLCOMPRESSEDTEXIMAGE2DPROC_ALT)glaltGetProcAddressExtension("glCompressedTexImage2D",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCOMPRESSEDTEXIMAGE2DPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOMPRESSEDTEXIMAGE2DPROC_ALT)glaltGetProcAddressExtension("glCompressedTexImage2D",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,level1,internalformat1,width1,height1,border1,imageSize1,data1);
}
#endif
#endif

#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_CompressedTexSubImage2D
#define GL_ALT_FUNDEF_CompressedTexSubImage2D
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_ALT)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void glCompressedTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLsizei imageSize1,const void * data1)
{
#ifdef __cplusplus
	static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_ALT fn=(PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_ALT)glaltGetProcAddressExtension("glCompressedTexSubImage2D",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_ALT)glaltGetProcAddressExtension("glCompressedTexSubImage2D",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,level1,xoffset1,yoffset1,width1,height1,format1,imageSize1,data1);
}
#endif
#endif

#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_DeleteBuffers
#define GL_ALT_FUNDEF_DeleteBuffers
typedef void (*PFNGLDELETEBUFFERSPROC_ALT)(GLsizei,const GLuint *);
static inline void glDeleteBuffers(GLsizei n1,const GLuint * buffers1)
{
#ifdef __cplusplus
	static PFNGLDELETEBUFFERSPROC_ALT fn=(PFNGLDELETEBUFFERSPROC_ALT)glaltGetProcAddressExtension("glDeleteBuffers",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLDELETEBUFFERSPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDELETEBUFFERSPROC_ALT)glaltGetProcAddressExtension("glDeleteBuffers",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(n1,buffers1);
}
#endif
#endif

#ifndef GL_VERSION_4_1
#ifndef	GL_ALT_FUNDEF_DepthRangef
#define GL_ALT_FUNDEF_DepthRangef
typedef void (*PFNGLDEPTHRANGEFPROC_ALT)(GLfloat,GLfloat);
static inline void glDepthRangef(GLfloat n1,GLfloat f1)
{
#ifdef __cplusplus
	static PFNGLDEPTHRANGEFPROC_ALT fn=(PFNGLDEPTHRANGEFPROC_ALT)glaltGetProcAddressExtension("glDepthRangef",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLDEPTHRANGEFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEPTHRANGEFPROC_ALT)glaltGetProcAddressExtension("glDepthRangef",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(n1,f1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_DepthRangex
#define GL_ALT_FUNDEF_DepthRangex
typedef void (*PFNGLDEPTHRANGEXPROC_ALT)(GLfixed,GLfixed);
static inline void glDepthRangex(GLfixed n1,GLfixed f1)
{
#ifdef __cplusplus
	static PFNGLDEPTHRANGEXPROC_ALT fn=(PFNGLDEPTHRANGEXPROC_ALT)glaltGetProcAddressExtension("glDepthRangex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLDEPTHRANGEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLDEPTHRANGEXPROC_ALT)glaltGetProcAddressExtension("glDepthRangex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Fogx
#define GL_ALT_FUNDEF_Fogx
typedef void (*PFNGLFOGXPROC_ALT)(GLenum,GLfixed);
static inline void glFogx(GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLFOGXPROC_ALT fn=(PFNGLFOGXPROC_ALT)glaltGetProcAddressExtension("glFogx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLFOGXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFOGXPROC_ALT)glaltGetProcAddressExtension("glFogx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Fogxv
#define GL_ALT_FUNDEF_Fogxv
typedef void (*PFNGLFOGXVPROC_ALT)(GLenum,const GLfixed *);
static inline void glFogxv(GLenum pname1,const GLfixed * param1)
{
#ifdef __cplusplus
	static PFNGLFOGXVPROC_ALT fn=(PFNGLFOGXVPROC_ALT)glaltGetProcAddressExtension("glFogxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLFOGXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFOGXVPROC_ALT)glaltGetProcAddressExtension("glFogxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Frustumf
#define GL_ALT_FUNDEF_Frustumf
typedef void (*PFNGLFRUSTUMFPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glFrustumf(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
#ifdef __cplusplus
	static PFNGLFRUSTUMFPROC_ALT fn=(PFNGLFRUSTUMFPROC_ALT)glaltGetProcAddressExtension("glFrustumf",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLFRUSTUMFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRUSTUMFPROC_ALT)glaltGetProcAddressExtension("glFrustumf",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Frustumx
#define GL_ALT_FUNDEF_Frustumx
typedef void (*PFNGLFRUSTUMXPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glFrustumx(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
#ifdef __cplusplus
	static PFNGLFRUSTUMXPROC_ALT fn=(PFNGLFRUSTUMXPROC_ALT)glaltGetProcAddressExtension("glFrustumx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLFRUSTUMXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLFRUSTUMXPROC_ALT)glaltGetProcAddressExtension("glFrustumx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif
#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_GenBuffers
#define GL_ALT_FUNDEF_GenBuffers
typedef void (*PFNGLGENBUFFERSPROC_ALT)(GLsizei,GLuint *);
static inline void glGenBuffers(GLsizei n1,GLuint * buffers1)
{
#ifdef __cplusplus
	static PFNGLGENBUFFERSPROC_ALT fn=(PFNGLGENBUFFERSPROC_ALT)glaltGetProcAddressExtension("glGenBuffers",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGENBUFFERSPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGENBUFFERSPROC_ALT)glaltGetProcAddressExtension("glGenBuffers",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(n1,buffers1);
}
#endif
#endif

#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_GetBufferParameteriv
#define GL_ALT_FUNDEF_GetBufferParameteriv
typedef void (*PFNGLGETBUFFERPARAMETERIVPROC_ALT)(GLenum,GLenum,GLint *);
static inline void glGetBufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
#ifdef __cplusplus
	static PFNGLGETBUFFERPARAMETERIVPROC_ALT fn=(PFNGLGETBUFFERPARAMETERIVPROC_ALT)glaltGetProcAddressExtension("glGetBufferParameteriv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETBUFFERPARAMETERIVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETBUFFERPARAMETERIVPROC_ALT)glaltGetProcAddressExtension("glGetBufferParameteriv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,params1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_GetClipPlanef
#define GL_ALT_FUNDEF_GetClipPlanef
typedef void (*PFNGLGETCLIPPLANEFPROC_ALT)(GLenum,GLfloat *);
static inline void glGetClipPlanef(GLenum plane1,GLfloat * equation1)
{
#ifdef __cplusplus
	static PFNGLGETCLIPPLANEFPROC_ALT fn=(PFNGLGETCLIPPLANEFPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanef",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETCLIPPLANEFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETCLIPPLANEFPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanef",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetClipPlanex
#define GL_ALT_FUNDEF_GetClipPlanex
typedef void (*PFNGLGETCLIPPLANEXPROC_ALT)(GLenum,GLfixed *);
static inline void glGetClipPlanex(GLenum plane1,GLfixed * equation1)
{
#ifdef __cplusplus
	static PFNGLGETCLIPPLANEXPROC_ALT fn=(PFNGLGETCLIPPLANEXPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETCLIPPLANEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETCLIPPLANEXPROC_ALT)glaltGetProcAddressExtension("glGetClipPlanex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(plane1,equation1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetFixedv
#define GL_ALT_FUNDEF_GetFixedv
typedef void (*PFNGLGETFIXEDVPROC_ALT)(GLenum,GLfixed *);
static inline void glGetFixedv(GLenum pname1,GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLGETFIXEDVPROC_ALT fn=(PFNGLGETFIXEDVPROC_ALT)glaltGetProcAddressExtension("glGetFixedv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETFIXEDVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETFIXEDVPROC_ALT)glaltGetProcAddressExtension("glGetFixedv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetLightxv
#define GL_ALT_FUNDEF_GetLightxv
typedef void (*PFNGLGETLIGHTXVPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetLightxv(GLenum light1,GLenum pname1,GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLGETLIGHTXVPROC_ALT fn=(PFNGLGETLIGHTXVPROC_ALT)glaltGetProcAddressExtension("glGetLightxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETLIGHTXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETLIGHTXVPROC_ALT)glaltGetProcAddressExtension("glGetLightxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetMaterialxv
#define GL_ALT_FUNDEF_GetMaterialxv
typedef void (*PFNGLGETMATERIALXVPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetMaterialxv(GLenum face1,GLenum pname1,GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLGETMATERIALXVPROC_ALT fn=(PFNGLGETMATERIALXVPROC_ALT)glaltGetProcAddressExtension("glGetMaterialxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETMATERIALXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETMATERIALXVPROC_ALT)glaltGetProcAddressExtension("glGetMaterialxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(face1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexEnvxv
#define GL_ALT_FUNDEF_GetTexEnvxv
typedef void (*PFNGLGETTEXENVXVPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexEnvxv(GLenum target1,GLenum pname1,GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLGETTEXENVXVPROC_ALT fn=(PFNGLGETTEXENVXVPROC_ALT)glaltGetProcAddressExtension("glGetTexEnvxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETTEXENVXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETTEXENVXVPROC_ALT)glaltGetProcAddressExtension("glGetTexEnvxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_GetTexParameterxv
#define GL_ALT_FUNDEF_GetTexParameterxv
typedef void (*PFNGLGETTEXPARAMETERXVPROC_ALT)(GLenum,GLenum,GLfixed *);
static inline void glGetTexParameterxv(GLenum target1,GLenum pname1,GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLGETTEXPARAMETERXVPROC_ALT fn=(PFNGLGETTEXPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLGETTEXPARAMETERXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLGETTEXPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glGetTexParameterxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,params1);
}
#endif
#ifndef GL_VERSION_1_5
#ifndef	GL_ALT_FUNDEF_IsBuffer
#define GL_ALT_FUNDEF_IsBuffer
typedef GLboolean (*PFNGLISBUFFERPROC_ALT)(GLuint);
static inline GLboolean glIsBuffer(GLuint buffer1)
{
#ifdef __cplusplus
	static PFNGLISBUFFERPROC_ALT fn=(PFNGLISBUFFERPROC_ALT)glaltGetProcAddressExtension("glIsBuffer",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLISBUFFERPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLISBUFFERPROC_ALT)glaltGetProcAddressExtension("glIsBuffer",GL_VERSION_ES_CM_1_0); }
#endif
	return fn(buffer1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_LightModelx
#define GL_ALT_FUNDEF_LightModelx
typedef void (*PFNGLLIGHTMODELXPROC_ALT)(GLenum,GLfixed);
static inline void glLightModelx(GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLLIGHTMODELXPROC_ALT fn=(PFNGLLIGHTMODELXPROC_ALT)glaltGetProcAddressExtension("glLightModelx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLIGHTMODELXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLIGHTMODELXPROC_ALT)glaltGetProcAddressExtension("glLightModelx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LightModelxv
#define GL_ALT_FUNDEF_LightModelxv
typedef void (*PFNGLLIGHTMODELXVPROC_ALT)(GLenum,const GLfixed *);
static inline void glLightModelxv(GLenum pname1,const GLfixed * param1)
{
#ifdef __cplusplus
	static PFNGLLIGHTMODELXVPROC_ALT fn=(PFNGLLIGHTMODELXVPROC_ALT)glaltGetProcAddressExtension("glLightModelxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLIGHTMODELXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLIGHTMODELXVPROC_ALT)glaltGetProcAddressExtension("glLightModelxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Lightx
#define GL_ALT_FUNDEF_Lightx
typedef void (*PFNGLLIGHTXPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glLightx(GLenum light1,GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLLIGHTXPROC_ALT fn=(PFNGLLIGHTXPROC_ALT)glaltGetProcAddressExtension("glLightx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLIGHTXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLIGHTXPROC_ALT)glaltGetProcAddressExtension("glLightx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(light1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Lightxv
#define GL_ALT_FUNDEF_Lightxv
typedef void (*PFNGLLIGHTXVPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glLightxv(GLenum light1,GLenum pname1,const GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLLIGHTXVPROC_ALT fn=(PFNGLLIGHTXVPROC_ALT)glaltGetProcAddressExtension("glLightxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLIGHTXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLIGHTXVPROC_ALT)glaltGetProcAddressExtension("glLightxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(light1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LineWidthx
#define GL_ALT_FUNDEF_LineWidthx
typedef void (*PFNGLLINEWIDTHXPROC_ALT)(GLfixed);
static inline void glLineWidthx(GLfixed width1)
{
#ifdef __cplusplus
	static PFNGLLINEWIDTHXPROC_ALT fn=(PFNGLLINEWIDTHXPROC_ALT)glaltGetProcAddressExtension("glLineWidthx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLINEWIDTHXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLINEWIDTHXPROC_ALT)glaltGetProcAddressExtension("glLineWidthx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(width1);
}
#endif

#ifndef	GL_ALT_FUNDEF_LoadMatrixx
#define GL_ALT_FUNDEF_LoadMatrixx
typedef void (*PFNGLLOADMATRIXXPROC_ALT)(const GLfixed *);
static inline void glLoadMatrixx(const GLfixed * m1)
{
#ifdef __cplusplus
	static PFNGLLOADMATRIXXPROC_ALT fn=(PFNGLLOADMATRIXXPROC_ALT)glaltGetProcAddressExtension("glLoadMatrixx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLLOADMATRIXXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLLOADMATRIXXPROC_ALT)glaltGetProcAddressExtension("glLoadMatrixx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(m1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Materialx
#define GL_ALT_FUNDEF_Materialx
typedef void (*PFNGLMATERIALXPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glMaterialx(GLenum face1,GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLMATERIALXPROC_ALT fn=(PFNGLMATERIALXPROC_ALT)glaltGetProcAddressExtension("glMaterialx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLMATERIALXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMATERIALXPROC_ALT)glaltGetProcAddressExtension("glMaterialx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Materialxv
#define GL_ALT_FUNDEF_Materialxv
typedef void (*PFNGLMATERIALXVPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glMaterialxv(GLenum face1,GLenum pname1,const GLfixed * param1)
{
#ifdef __cplusplus
	static PFNGLMATERIALXVPROC_ALT fn=(PFNGLMATERIALXVPROC_ALT)glaltGetProcAddressExtension("glMaterialxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLMATERIALXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMATERIALXVPROC_ALT)glaltGetProcAddressExtension("glMaterialxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(face1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_MultMatrixx
#define GL_ALT_FUNDEF_MultMatrixx
typedef void (*PFNGLMULTMATRIXXPROC_ALT)(const GLfixed *);
static inline void glMultMatrixx(const GLfixed * m1)
{
#ifdef __cplusplus
	static PFNGLMULTMATRIXXPROC_ALT fn=(PFNGLMULTMATRIXXPROC_ALT)glaltGetProcAddressExtension("glMultMatrixx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLMULTMATRIXXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMULTMATRIXXPROC_ALT)glaltGetProcAddressExtension("glMultMatrixx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(m1);
}
#endif
#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_MultiTexCoord4f
#define GL_ALT_FUNDEF_MultiTexCoord4f
typedef void (*PFNGLMULTITEXCOORD4FPROC_ALT)(GLenum,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glMultiTexCoord4f(GLenum target1,GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
#ifdef __cplusplus
	static PFNGLMULTITEXCOORD4FPROC_ALT fn=(PFNGLMULTITEXCOORD4FPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4f",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLMULTITEXCOORD4FPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMULTITEXCOORD4FPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4f",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,s1,t1,r1,q1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_MultiTexCoord4x
#define GL_ALT_FUNDEF_MultiTexCoord4x
typedef void (*PFNGLMULTITEXCOORD4XPROC_ALT)(GLenum,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glMultiTexCoord4x(GLenum texture1,GLfixed s1,GLfixed t1,GLfixed r1,GLfixed q1)
{
#ifdef __cplusplus
	static PFNGLMULTITEXCOORD4XPROC_ALT fn=(PFNGLMULTITEXCOORD4XPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4x",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLMULTITEXCOORD4XPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLMULTITEXCOORD4XPROC_ALT)glaltGetProcAddressExtension("glMultiTexCoord4x",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(texture1,s1,t1,r1,q1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Normal3x
#define GL_ALT_FUNDEF_Normal3x
typedef void (*PFNGLNORMAL3XPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glNormal3x(GLfixed nx1,GLfixed ny1,GLfixed nz1)
{
#ifdef __cplusplus
	static PFNGLNORMAL3XPROC_ALT fn=(PFNGLNORMAL3XPROC_ALT)glaltGetProcAddressExtension("glNormal3x",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLNORMAL3XPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLNORMAL3XPROC_ALT)glaltGetProcAddressExtension("glNormal3x",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(nx1,ny1,nz1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Orthof
#define GL_ALT_FUNDEF_Orthof
typedef void (*PFNGLORTHOFPROC_ALT)(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void glOrthof(GLfloat l1,GLfloat r1,GLfloat b1,GLfloat t1,GLfloat n1,GLfloat f1)
{
#ifdef __cplusplus
	static PFNGLORTHOFPROC_ALT fn=(PFNGLORTHOFPROC_ALT)glaltGetProcAddressExtension("glOrthof",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLORTHOFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLORTHOFPROC_ALT)glaltGetProcAddressExtension("glOrthof",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Orthox
#define GL_ALT_FUNDEF_Orthox
typedef void (*PFNGLORTHOXPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glOrthox(GLfixed l1,GLfixed r1,GLfixed b1,GLfixed t1,GLfixed n1,GLfixed f1)
{
#ifdef __cplusplus
	static PFNGLORTHOXPROC_ALT fn=(PFNGLORTHOXPROC_ALT)glaltGetProcAddressExtension("glOrthox",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLORTHOXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLORTHOXPROC_ALT)glaltGetProcAddressExtension("glOrthox",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(l1,r1,b1,t1,n1,f1);
}
#endif
#ifndef GL_VERSION_1_4
#ifndef	GL_ALT_FUNDEF_PointParameterf
#define GL_ALT_FUNDEF_PointParameterf
typedef void (*PFNGLPOINTPARAMETERFPROC_ALT)(GLenum,GLfloat);
static inline void glPointParameterf(GLenum pname1,GLfloat param1)
{
#ifdef __cplusplus
	static PFNGLPOINTPARAMETERFPROC_ALT fn=(PFNGLPOINTPARAMETERFPROC_ALT)glaltGetProcAddressExtension("glPointParameterf",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOINTPARAMETERFPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOINTPARAMETERFPROC_ALT)glaltGetProcAddressExtension("glPointParameterf",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif
#endif

#ifndef GL_VERSION_1_4
#ifndef	GL_ALT_FUNDEF_PointParameterfv
#define GL_ALT_FUNDEF_PointParameterfv
typedef void (*PFNGLPOINTPARAMETERFVPROC_ALT)(GLenum,const GLfloat *);
static inline void glPointParameterfv(GLenum pname1,const GLfloat * params1)
{
#ifdef __cplusplus
	static PFNGLPOINTPARAMETERFVPROC_ALT fn=(PFNGLPOINTPARAMETERFVPROC_ALT)glaltGetProcAddressExtension("glPointParameterfv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOINTPARAMETERFVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOINTPARAMETERFVPROC_ALT)glaltGetProcAddressExtension("glPointParameterfv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,params1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_PointParameterx
#define GL_ALT_FUNDEF_PointParameterx
typedef void (*PFNGLPOINTPARAMETERXPROC_ALT)(GLenum,GLfixed);
static inline void glPointParameterx(GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLPOINTPARAMETERXPROC_ALT fn=(PFNGLPOINTPARAMETERXPROC_ALT)glaltGetProcAddressExtension("glPointParameterx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOINTPARAMETERXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOINTPARAMETERXPROC_ALT)glaltGetProcAddressExtension("glPointParameterx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PointParameterxv
#define GL_ALT_FUNDEF_PointParameterxv
typedef void (*PFNGLPOINTPARAMETERXVPROC_ALT)(GLenum,const GLfixed *);
static inline void glPointParameterxv(GLenum pname1,const GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLPOINTPARAMETERXVPROC_ALT fn=(PFNGLPOINTPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glPointParameterxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOINTPARAMETERXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOINTPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glPointParameterxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PointSizex
#define GL_ALT_FUNDEF_PointSizex
typedef void (*PFNGLPOINTSIZEXPROC_ALT)(GLfixed);
static inline void glPointSizex(GLfixed size1)
{
#ifdef __cplusplus
	static PFNGLPOINTSIZEXPROC_ALT fn=(PFNGLPOINTSIZEXPROC_ALT)glaltGetProcAddressExtension("glPointSizex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOINTSIZEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOINTSIZEXPROC_ALT)glaltGetProcAddressExtension("glPointSizex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(size1);
}
#endif

#ifndef	GL_ALT_FUNDEF_PolygonOffsetx
#define GL_ALT_FUNDEF_PolygonOffsetx
typedef void (*PFNGLPOLYGONOFFSETXPROC_ALT)(GLfixed,GLfixed);
static inline void glPolygonOffsetx(GLfixed factor1,GLfixed units1)
{
#ifdef __cplusplus
	static PFNGLPOLYGONOFFSETXPROC_ALT fn=(PFNGLPOLYGONOFFSETXPROC_ALT)glaltGetProcAddressExtension("glPolygonOffsetx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLPOLYGONOFFSETXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLPOLYGONOFFSETXPROC_ALT)glaltGetProcAddressExtension("glPolygonOffsetx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(factor1,units1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Rotatex
#define GL_ALT_FUNDEF_Rotatex
typedef void (*PFNGLROTATEXPROC_ALT)(GLfixed,GLfixed,GLfixed,GLfixed);
static inline void glRotatex(GLfixed angle1,GLfixed x1,GLfixed y1,GLfixed z1)
{
#ifdef __cplusplus
	static PFNGLROTATEXPROC_ALT fn=(PFNGLROTATEXPROC_ALT)glaltGetProcAddressExtension("glRotatex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLROTATEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLROTATEXPROC_ALT)glaltGetProcAddressExtension("glRotatex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(angle1,x1,y1,z1);
}
#endif
#ifndef GL_VERSION_1_3
#ifndef	GL_ALT_FUNDEF_SampleCoverage
#define GL_ALT_FUNDEF_SampleCoverage
typedef void (*PFNGLSAMPLECOVERAGEPROC_ALT)(GLfloat,GLboolean);
static inline void glSampleCoverage(GLfloat value1,GLboolean invert1)
{
#ifdef __cplusplus
	static PFNGLSAMPLECOVERAGEPROC_ALT fn=(PFNGLSAMPLECOVERAGEPROC_ALT)glaltGetProcAddressExtension("glSampleCoverage",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLSAMPLECOVERAGEPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSAMPLECOVERAGEPROC_ALT)glaltGetProcAddressExtension("glSampleCoverage",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(value1,invert1);
}
#endif
#endif


#ifndef	GL_ALT_FUNDEF_SampleCoveragex
#define GL_ALT_FUNDEF_SampleCoveragex
typedef void (*PFNGLSAMPLECOVERAGEXPROC_ALT)(GLclampx,GLboolean);
static inline void glSampleCoveragex(GLclampx value1,GLboolean invert1)
{
#ifdef __cplusplus
	static PFNGLSAMPLECOVERAGEXPROC_ALT fn=(PFNGLSAMPLECOVERAGEXPROC_ALT)glaltGetProcAddressExtension("glSampleCoveragex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLSAMPLECOVERAGEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSAMPLECOVERAGEXPROC_ALT)glaltGetProcAddressExtension("glSampleCoveragex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(value1,invert1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Scalex
#define GL_ALT_FUNDEF_Scalex
typedef void (*PFNGLSCALEXPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glScalex(GLfixed x1,GLfixed y1,GLfixed z1)
{
#ifdef __cplusplus
	static PFNGLSCALEXPROC_ALT fn=(PFNGLSCALEXPROC_ALT)glaltGetProcAddressExtension("glScalex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLSCALEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLSCALEXPROC_ALT)glaltGetProcAddressExtension("glScalex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(x1,y1,z1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexEnvx
#define GL_ALT_FUNDEF_TexEnvx
typedef void (*PFNGLTEXENVXPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexEnvx(GLenum target1,GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLTEXENVXPROC_ALT fn=(PFNGLTEXENVXPROC_ALT)glaltGetProcAddressExtension("glTexEnvx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLTEXENVXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXENVXPROC_ALT)glaltGetProcAddressExtension("glTexEnvx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexEnvxv
#define GL_ALT_FUNDEF_TexEnvxv
typedef void (*PFNGLTEXENVXVPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexEnvxv(GLenum target1,GLenum pname1,const GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLTEXENVXVPROC_ALT fn=(PFNGLTEXENVXVPROC_ALT)glaltGetProcAddressExtension("glTexEnvxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLTEXENVXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXENVXVPROC_ALT)glaltGetProcAddressExtension("glTexEnvxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexParameterx
#define GL_ALT_FUNDEF_TexParameterx
typedef void (*PFNGLTEXPARAMETERXPROC_ALT)(GLenum,GLenum,GLfixed);
static inline void glTexParameterx(GLenum target1,GLenum pname1,GLfixed param1)
{
#ifdef __cplusplus
	static PFNGLTEXPARAMETERXPROC_ALT fn=(PFNGLTEXPARAMETERXPROC_ALT)glaltGetProcAddressExtension("glTexParameterx",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLTEXPARAMETERXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXPARAMETERXPROC_ALT)glaltGetProcAddressExtension("glTexParameterx",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,param1);
}
#endif

#ifndef	GL_ALT_FUNDEF_TexParameterxv
#define GL_ALT_FUNDEF_TexParameterxv
typedef void (*PFNGLTEXPARAMETERXVPROC_ALT)(GLenum,GLenum,const GLfixed *);
static inline void glTexParameterxv(GLenum target1,GLenum pname1,const GLfixed * params1)
{
#ifdef __cplusplus
	static PFNGLTEXPARAMETERXVPROC_ALT fn=(PFNGLTEXPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glTexParameterxv",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLTEXPARAMETERXVPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTEXPARAMETERXVPROC_ALT)glaltGetProcAddressExtension("glTexParameterxv",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(target1,pname1,params1);
}
#endif

#ifndef	GL_ALT_FUNDEF_Translatex
#define GL_ALT_FUNDEF_Translatex
typedef void (*PFNGLTRANSLATEXPROC_ALT)(GLfixed,GLfixed,GLfixed);
static inline void glTranslatex(GLfixed x1,GLfixed y1,GLfixed z1)
{
#ifdef __cplusplus
	static PFNGLTRANSLATEXPROC_ALT fn=(PFNGLTRANSLATEXPROC_ALT)glaltGetProcAddressExtension("glTranslatex",GL_VERSION_ES_CM_1_0);
#else
	static PFNGLTRANSLATEXPROC_ALT fn=NULL;
	if(!fn) { fn=(PFNGLTRANSLATEXPROC_ALT)glaltGetProcAddressExtension("glTranslatex",GL_VERSION_ES_CM_1_0); }
#endif
	 fn(x1,y1,z1);
}
#endif
CGUARDEND

#endif
