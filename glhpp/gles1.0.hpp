#ifndef GL_HPP_GL_VERSION_ES_CM_1_0_HPP
#define GL_HPP_GL_VERSION_ES_CM_1_0_HPP
#include "common.hpp"


#ifndef GL_HPP_API_NAME
#define GL_HPP_API_NAME GL_HPP_GLES_API
#endif
#ifndef GL_HPP_API_VERSION
#define GL_HPP_API_VERSION 100
#endif
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
#undef GL_ADD
static const GLenum GL_ADD=0x0104
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
#undef GL_STACK_OVERFLOW
static const GLenum GL_STACK_OVERFLOW=0x0503
#undef GL_STACK_UNDERFLOW
static const GLenum GL_STACK_UNDERFLOW=0x0504
#undef GL_OUT_OF_MEMORY
static const GLenum GL_OUT_OF_MEMORY=0x0505
#undef GL_EXP
static const GLenum GL_EXP=0x0800
#undef GL_EXP2
static const GLenum GL_EXP2=0x0801
#undef GL_CW
static const GLenum GL_CW=0x0900
#undef GL_CCW
static const GLenum GL_CCW=0x0901
#undef GL_CURRENT_COLOR
static const GLenum GL_CURRENT_COLOR=0x0B00
#undef GL_CURRENT_NORMAL
static const GLenum GL_CURRENT_NORMAL=0x0B02
#undef GL_CURRENT_TEXTURE_COORDS
static const GLenum GL_CURRENT_TEXTURE_COORDS=0x0B03
#undef GL_POINT_SMOOTH
static const GLenum GL_POINT_SMOOTH=0x0B10
#undef GL_POINT_SIZE
static const GLenum GL_POINT_SIZE=0x0B11
#undef GL_SMOOTH_POINT_SIZE_RANGE
static const GLenum GL_SMOOTH_POINT_SIZE_RANGE=0x0B12
#undef GL_LINE_SMOOTH
static const GLenum GL_LINE_SMOOTH=0x0B20
#undef GL_LINE_WIDTH
static const GLenum GL_LINE_WIDTH=0x0B21
#undef GL_SMOOTH_LINE_WIDTH_RANGE
static const GLenum GL_SMOOTH_LINE_WIDTH_RANGE=0x0B22
#undef GL_CULL_FACE
static const GLenum GL_CULL_FACE=0x0B44
#undef GL_CULL_FACE_MODE
static const GLenum GL_CULL_FACE_MODE=0x0B45
#undef GL_FRONT_FACE
static const GLenum GL_FRONT_FACE=0x0B46
#undef GL_LIGHTING
static const GLenum GL_LIGHTING=0x0B50
#undef GL_LIGHT_MODEL_TWO_SIDE
static const GLenum GL_LIGHT_MODEL_TWO_SIDE=0x0B52
#undef GL_LIGHT_MODEL_AMBIENT
static const GLenum GL_LIGHT_MODEL_AMBIENT=0x0B53
#undef GL_SHADE_MODEL
static const GLenum GL_SHADE_MODEL=0x0B54
#undef GL_COLOR_MATERIAL
static const GLenum GL_COLOR_MATERIAL=0x0B57
#undef GL_FOG
static const GLenum GL_FOG=0x0B60
#undef GL_FOG_DENSITY
static const GLenum GL_FOG_DENSITY=0x0B62
#undef GL_FOG_START
static const GLenum GL_FOG_START=0x0B63
#undef GL_FOG_END
static const GLenum GL_FOG_END=0x0B64
#undef GL_FOG_MODE
static const GLenum GL_FOG_MODE=0x0B65
#undef GL_FOG_COLOR
static const GLenum GL_FOG_COLOR=0x0B66
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
#undef GL_MATRIX_MODE
static const GLenum GL_MATRIX_MODE=0x0BA0
#undef GL_NORMALIZE
static const GLenum GL_NORMALIZE=0x0BA1
#undef GL_VIEWPORT
static const GLenum GL_VIEWPORT=0x0BA2
#undef GL_MODELVIEW_STACK_DEPTH
static const GLenum GL_MODELVIEW_STACK_DEPTH=0x0BA3
#undef GL_PROJECTION_STACK_DEPTH
static const GLenum GL_PROJECTION_STACK_DEPTH=0x0BA4
#undef GL_TEXTURE_STACK_DEPTH
static const GLenum GL_TEXTURE_STACK_DEPTH=0x0BA5
#undef GL_MODELVIEW_MATRIX
static const GLenum GL_MODELVIEW_MATRIX=0x0BA6
#undef GL_PROJECTION_MATRIX
static const GLenum GL_PROJECTION_MATRIX=0x0BA7
#undef GL_TEXTURE_MATRIX
static const GLenum GL_TEXTURE_MATRIX=0x0BA8
#undef GL_ALPHA_TEST
static const GLenum GL_ALPHA_TEST=0x0BC0
#undef GL_ALPHA_TEST_FUNC
static const GLenum GL_ALPHA_TEST_FUNC=0x0BC1
#undef GL_ALPHA_TEST_REF
static const GLenum GL_ALPHA_TEST_REF=0x0BC2
#undef GL_DITHER
static const GLenum GL_DITHER=0x0BD0
#undef GL_BLEND_DST
static const GLenum GL_BLEND_DST=0x0BE0
#undef GL_BLEND_SRC
static const GLenum GL_BLEND_SRC=0x0BE1
#undef GL_BLEND
static const GLenum GL_BLEND=0x0BE2
#undef GL_LOGIC_OP_MODE
static const GLenum GL_LOGIC_OP_MODE=0x0BF0
#undef GL_COLOR_LOGIC_OP
static const GLenum GL_COLOR_LOGIC_OP=0x0BF2
#undef GL_SCISSOR_BOX
static const GLenum GL_SCISSOR_BOX=0x0C10
#undef GL_SCISSOR_TEST
static const GLenum GL_SCISSOR_TEST=0x0C11
#undef GL_COLOR_CLEAR_VALUE
static const GLenum GL_COLOR_CLEAR_VALUE=0x0C22
#undef GL_COLOR_WRITEMASK
static const GLenum GL_COLOR_WRITEMASK=0x0C23
#undef GL_PERSPECTIVE_CORRECTION_HINT
static const GLenum GL_PERSPECTIVE_CORRECTION_HINT=0x0C50
#undef GL_POINT_SMOOTH_HINT
static const GLenum GL_POINT_SMOOTH_HINT=0x0C51
#undef GL_LINE_SMOOTH_HINT
static const GLenum GL_LINE_SMOOTH_HINT=0x0C52
#undef GL_FOG_HINT
static const GLenum GL_FOG_HINT=0x0C54
#undef GL_UNPACK_ALIGNMENT
static const GLenum GL_UNPACK_ALIGNMENT=0x0CF5
#undef GL_PACK_ALIGNMENT
static const GLenum GL_PACK_ALIGNMENT=0x0D05
#undef GL_ALPHA_SCALE
static const GLenum GL_ALPHA_SCALE=0x0D1C
#undef GL_MAX_LIGHTS
static const GLenum GL_MAX_LIGHTS=0x0D31
#undef GL_MAX_CLIP_PLANES
static const GLenum GL_MAX_CLIP_PLANES=0x0D32
#undef GL_MAX_TEXTURE_SIZE
static const GLenum GL_MAX_TEXTURE_SIZE=0x0D33
#undef GL_MAX_MODELVIEW_STACK_DEPTH
static const GLenum GL_MAX_MODELVIEW_STACK_DEPTH=0x0D36
#undef GL_MAX_PROJECTION_STACK_DEPTH
static const GLenum GL_MAX_PROJECTION_STACK_DEPTH=0x0D38
#undef GL_MAX_TEXTURE_STACK_DEPTH
static const GLenum GL_MAX_TEXTURE_STACK_DEPTH=0x0D39
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
#undef GL_AMBIENT
static const GLenum GL_AMBIENT=0x1200
#undef GL_DIFFUSE
static const GLenum GL_DIFFUSE=0x1201
#undef GL_SPECULAR
static const GLenum GL_SPECULAR=0x1202
#undef GL_POSITION
static const GLenum GL_POSITION=0x1203
#undef GL_SPOT_DIRECTION
static const GLenum GL_SPOT_DIRECTION=0x1204
#undef GL_SPOT_EXPONENT
static const GLenum GL_SPOT_EXPONENT=0x1205
#undef GL_SPOT_CUTOFF
static const GLenum GL_SPOT_CUTOFF=0x1206
#undef GL_CONSTANT_ATTENUATION
static const GLenum GL_CONSTANT_ATTENUATION=0x1207
#undef GL_LINEAR_ATTENUATION
static const GLenum GL_LINEAR_ATTENUATION=0x1208
#undef GL_QUADRATIC_ATTENUATION
static const GLenum GL_QUADRATIC_ATTENUATION=0x1209
#undef GL_BYTE
static const GLenum GL_BYTE=0x1400
#undef GL_UNSIGNED_BYTE
static const GLenum GL_UNSIGNED_BYTE=0x1401
#undef GL_SHORT
static const GLenum GL_SHORT=0x1402
#undef GL_UNSIGNED_SHORT
static const GLenum GL_UNSIGNED_SHORT=0x1403
#undef GL_FLOAT
static const GLenum GL_FLOAT=0x1406
#undef GL_FIXED
static const GLenum GL_FIXED=0x140C
#undef GL_CLEAR
static const GLenum GL_CLEAR=0x1500
#undef GL_AND
static const GLenum GL_AND=0x1501
#undef GL_AND_REVERSE
static const GLenum GL_AND_REVERSE=0x1502
#undef GL_COPY
static const GLenum GL_COPY=0x1503
#undef GL_AND_INVERTED
static const GLenum GL_AND_INVERTED=0x1504
#undef GL_NOOP
static const GLenum GL_NOOP=0x1505
#undef GL_XOR
static const GLenum GL_XOR=0x1506
#undef GL_OR
static const GLenum GL_OR=0x1507
#undef GL_NOR
static const GLenum GL_NOR=0x1508
#undef GL_EQUIV
static const GLenum GL_EQUIV=0x1509
#undef GL_INVERT
static const GLenum GL_INVERT=0x150A
#undef GL_OR_REVERSE
static const GLenum GL_OR_REVERSE=0x150B
#undef GL_COPY_INVERTED
static const GLenum GL_COPY_INVERTED=0x150C
#undef GL_OR_INVERTED
static const GLenum GL_OR_INVERTED=0x150D
#undef GL_NAND
static const GLenum GL_NAND=0x150E
#undef GL_SET
static const GLenum GL_SET=0x150F
#undef GL_EMISSION
static const GLenum GL_EMISSION=0x1600
#undef GL_SHININESS
static const GLenum GL_SHININESS=0x1601
#undef GL_AMBIENT_AND_DIFFUSE
static const GLenum GL_AMBIENT_AND_DIFFUSE=0x1602
#undef GL_MODELVIEW
static const GLenum GL_MODELVIEW=0x1700
#undef GL_PROJECTION
static const GLenum GL_PROJECTION=0x1701
#undef GL_TEXTURE
static const GLenum GL_TEXTURE=0x1702
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
#undef GL_FLAT
static const GLenum GL_FLAT=0x1D00
#undef GL_SMOOTH
static const GLenum GL_SMOOTH=0x1D01
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
#undef GL_MODULATE
static const GLenum GL_MODULATE=0x2100
#undef GL_DECAL
static const GLenum GL_DECAL=0x2101
#undef GL_TEXTURE_ENV_MODE
static const GLenum GL_TEXTURE_ENV_MODE=0x2200
#undef GL_TEXTURE_ENV_COLOR
static const GLenum GL_TEXTURE_ENV_COLOR=0x2201
#undef GL_TEXTURE_ENV
static const GLenum GL_TEXTURE_ENV=0x2300
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
#undef GL_CLIP_PLANE0
static const GLenum GL_CLIP_PLANE0=0x3000
#undef GL_CLIP_PLANE1
static const GLenum GL_CLIP_PLANE1=0x3001
#undef GL_CLIP_PLANE2
static const GLenum GL_CLIP_PLANE2=0x3002
#undef GL_CLIP_PLANE3
static const GLenum GL_CLIP_PLANE3=0x3003
#undef GL_CLIP_PLANE4
static const GLenum GL_CLIP_PLANE4=0x3004
#undef GL_CLIP_PLANE5
static const GLenum GL_CLIP_PLANE5=0x3005
#undef GL_LIGHT0
static const GLenum GL_LIGHT0=0x4000
#undef GL_LIGHT1
static const GLenum GL_LIGHT1=0x4001
#undef GL_LIGHT2
static const GLenum GL_LIGHT2=0x4002
#undef GL_LIGHT3
static const GLenum GL_LIGHT3=0x4003
#undef GL_LIGHT4
static const GLenum GL_LIGHT4=0x4004
#undef GL_LIGHT5
static const GLenum GL_LIGHT5=0x4005
#undef GL_LIGHT6
static const GLenum GL_LIGHT6=0x4006
#undef GL_LIGHT7
static const GLenum GL_LIGHT7=0x4007
#undef GL_UNSIGNED_SHORT_4_4_4_4
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4=0x8033
#undef GL_UNSIGNED_SHORT_5_5_5_1
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1=0x8034
#undef GL_POLYGON_OFFSET_FILL
static const GLenum GL_POLYGON_OFFSET_FILL=0x8037
#undef GL_POLYGON_OFFSET_FACTOR
static const GLenum GL_POLYGON_OFFSET_FACTOR=0x8038
#undef GL_RESCALE_NORMAL
static const GLenum GL_RESCALE_NORMAL=0x803A
#undef GL_TEXTURE_BINDING_2D
static const GLenum GL_TEXTURE_BINDING_2D=0x8069
#undef GL_VERTEX_ARRAY
static const GLenum GL_VERTEX_ARRAY=0x8074
#undef GL_NORMAL_ARRAY
static const GLenum GL_NORMAL_ARRAY=0x8075
#undef GL_COLOR_ARRAY
static const GLenum GL_COLOR_ARRAY=0x8076
#undef GL_TEXTURE_COORD_ARRAY
static const GLenum GL_TEXTURE_COORD_ARRAY=0x8078
#undef GL_VERTEX_ARRAY_SIZE
static const GLenum GL_VERTEX_ARRAY_SIZE=0x807A
#undef GL_VERTEX_ARRAY_TYPE
static const GLenum GL_VERTEX_ARRAY_TYPE=0x807B
#undef GL_VERTEX_ARRAY_STRIDE
static const GLenum GL_VERTEX_ARRAY_STRIDE=0x807C
#undef GL_NORMAL_ARRAY_TYPE
static const GLenum GL_NORMAL_ARRAY_TYPE=0x807E
#undef GL_NORMAL_ARRAY_STRIDE
static const GLenum GL_NORMAL_ARRAY_STRIDE=0x807F
#undef GL_COLOR_ARRAY_SIZE
static const GLenum GL_COLOR_ARRAY_SIZE=0x8081
#undef GL_COLOR_ARRAY_TYPE
static const GLenum GL_COLOR_ARRAY_TYPE=0x8082
#undef GL_COLOR_ARRAY_STRIDE
static const GLenum GL_COLOR_ARRAY_STRIDE=0x8083
#undef GL_TEXTURE_COORD_ARRAY_SIZE
static const GLenum GL_TEXTURE_COORD_ARRAY_SIZE=0x8088
#undef GL_TEXTURE_COORD_ARRAY_TYPE
static const GLenum GL_TEXTURE_COORD_ARRAY_TYPE=0x8089
#undef GL_TEXTURE_COORD_ARRAY_STRIDE
static const GLenum GL_TEXTURE_COORD_ARRAY_STRIDE=0x808A
#undef GL_VERTEX_ARRAY_POINTER
static const GLenum GL_VERTEX_ARRAY_POINTER=0x808E
#undef GL_NORMAL_ARRAY_POINTER
static const GLenum GL_NORMAL_ARRAY_POINTER=0x808F
#undef GL_COLOR_ARRAY_POINTER
static const GLenum GL_COLOR_ARRAY_POINTER=0x8090
#undef GL_TEXTURE_COORD_ARRAY_POINTER
static const GLenum GL_TEXTURE_COORD_ARRAY_POINTER=0x8092
#undef GL_MULTISAMPLE
static const GLenum GL_MULTISAMPLE=0x809D
#undef GL_SAMPLE_ALPHA_TO_COVERAGE
static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE=0x809E
#undef GL_SAMPLE_ALPHA_TO_ONE
static const GLenum GL_SAMPLE_ALPHA_TO_ONE=0x809F
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
#undef GL_POINT_SIZE_MIN
static const GLenum GL_POINT_SIZE_MIN=0x8126
#undef GL_POINT_SIZE_MAX
static const GLenum GL_POINT_SIZE_MAX=0x8127
#undef GL_POINT_FADE_THRESHOLD_SIZE
static const GLenum GL_POINT_FADE_THRESHOLD_SIZE=0x8128
#undef GL_POINT_DISTANCE_ATTENUATION
static const GLenum GL_POINT_DISTANCE_ATTENUATION=0x8129
#undef GL_CLAMP_TO_EDGE
static const GLenum GL_CLAMP_TO_EDGE=0x812F
#undef GL_GENERATE_MIPMAP
static const GLenum GL_GENERATE_MIPMAP=0x8191
#undef GL_GENERATE_MIPMAP_HINT
static const GLenum GL_GENERATE_MIPMAP_HINT=0x8192
#undef GL_UNSIGNED_SHORT_5_6_5
static const GLenum GL_UNSIGNED_SHORT_5_6_5=0x8363
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
#undef GL_CLIENT_ACTIVE_TEXTURE
static const GLenum GL_CLIENT_ACTIVE_TEXTURE=0x84E1
#undef GL_MAX_TEXTURE_UNITS
static const GLenum GL_MAX_TEXTURE_UNITS=0x84E2
#undef GL_SUBTRACT
static const GLenum GL_SUBTRACT=0x84E7
#undef GL_COMBINE
static const GLenum GL_COMBINE=0x8570
#undef GL_COMBINE_RGB
static const GLenum GL_COMBINE_RGB=0x8571
#undef GL_COMBINE_ALPHA
static const GLenum GL_COMBINE_ALPHA=0x8572
#undef GL_RGB_SCALE
static const GLenum GL_RGB_SCALE=0x8573
#undef GL_ADD_SIGNED
static const GLenum GL_ADD_SIGNED=0x8574
#undef GL_INTERPOLATE
static const GLenum GL_INTERPOLATE=0x8575
#undef GL_CONSTANT
static const GLenum GL_CONSTANT=0x8576
#undef GL_PRIMARY_COLOR
static const GLenum GL_PRIMARY_COLOR=0x8577
#undef GL_PREVIOUS
static const GLenum GL_PREVIOUS=0x8578
#undef GL_SRC0_RGB
static const GLenum GL_SRC0_RGB=0x8580
#undef GL_SRC1_RGB
static const GLenum GL_SRC1_RGB=0x8581
#undef GL_SRC2_RGB
static const GLenum GL_SRC2_RGB=0x8582
#undef GL_SRC0_ALPHA
static const GLenum GL_SRC0_ALPHA=0x8588
#undef GL_SRC1_ALPHA
static const GLenum GL_SRC1_ALPHA=0x8589
#undef GL_SRC2_ALPHA
static const GLenum GL_SRC2_ALPHA=0x858A
#undef GL_OPERAND0_RGB
static const GLenum GL_OPERAND0_RGB=0x8590
#undef GL_OPERAND1_RGB
static const GLenum GL_OPERAND1_RGB=0x8591
#undef GL_OPERAND2_RGB
static const GLenum GL_OPERAND2_RGB=0x8592
#undef GL_OPERAND0_ALPHA
static const GLenum GL_OPERAND0_ALPHA=0x8598
#undef GL_OPERAND1_ALPHA
static const GLenum GL_OPERAND1_ALPHA=0x8599
#undef GL_OPERAND2_ALPHA
static const GLenum GL_OPERAND2_ALPHA=0x859A
#undef GL_NUM_COMPRESSED_TEXTURE_FORMATS
static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS=0x86A2
#undef GL_COMPRESSED_TEXTURE_FORMATS
static const GLenum GL_COMPRESSED_TEXTURE_FORMATS=0x86A3
#undef GL_DOT3_RGB
static const GLenum GL_DOT3_RGB=0x86AE
#undef GL_DOT3_RGBA
static const GLenum GL_DOT3_RGBA=0x86AF
#undef GL_BUFFER_SIZE
static const GLenum GL_BUFFER_SIZE=0x8764
#undef GL_BUFFER_USAGE
static const GLenum GL_BUFFER_USAGE=0x8765
#undef GL_ARRAY_BUFFER
static const GLenum GL_ARRAY_BUFFER=0x8892
#undef GL_ELEMENT_ARRAY_BUFFER
static const GLenum GL_ELEMENT_ARRAY_BUFFER=0x8893
#undef GL_ARRAY_BUFFER_BINDING
static const GLenum GL_ARRAY_BUFFER_BINDING=0x8894
#undef GL_ELEMENT_ARRAY_BUFFER_BINDING
static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING=0x8895
#undef GL_VERTEX_ARRAY_BUFFER_BINDING
static const GLenum GL_VERTEX_ARRAY_BUFFER_BINDING=0x8896
#undef GL_NORMAL_ARRAY_BUFFER_BINDING
static const GLenum GL_NORMAL_ARRAY_BUFFER_BINDING=0x8897
#undef GL_COLOR_ARRAY_BUFFER_BINDING
static const GLenum GL_COLOR_ARRAY_BUFFER_BINDING=0x8898
#undef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
static const GLenum GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING=0x889A
#undef GL_STATIC_DRAW
static const GLenum GL_STATIC_DRAW=0x88E4
#undef GL_DYNAMIC_DRAW
static const GLenum GL_DYNAMIC_DRAW=0x88E8
#undef GL_VERSION_ES_CL_1_1
static const GLenum GL_VERSION_ES_CL_1_1=1
#undef GL_VERSION_ES_CL_1_0
static const GLenum GL_VERSION_ES_CL_1_0=1
#undef GL_ONE
static const GLenum GL_ONE=1
#undef GL_VERSION_ES_CM_1_1
static const GLenum GL_VERSION_ES_CM_1_1=1
#undef GL_TRUE
static const GLenum GL_TRUE=1
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
