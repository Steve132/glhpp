#ifndef GL_HPP_GL_VERSION_3_1_HPP
#define GL_HPP_GL_VERSION_3_1_HPP
#include "common.hpp"


#ifndef GL_HPP_API_NAME
#define GL_HPP_API_NAME GL_HPP_GL_API
#endif
#ifndef GL_HPP_API_VERSION
#define GL_HPP_API_VERSION 310
#endif
#undef GL_ZERO
static const GLenum GL_ZERO=0
#undef GL_FALSE
static const GLenum GL_FALSE=0
#undef GL_NO_ERROR
static const GLenum GL_NO_ERROR=0
#undef GL_NONE
static const GLenum GL_NONE=0
#undef GL_POINTS
static const GLenum GL_POINTS=0x0000
#undef GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT
static const GLenum GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT=0x00000001
#undef GL_CURRENT_BIT
static const GLenum GL_CURRENT_BIT=0x00000001
#undef GL_CLIENT_PIXEL_STORE_BIT
static const GLenum GL_CLIENT_PIXEL_STORE_BIT=0x00000001
#undef GL_POINT_BIT
static const GLenum GL_POINT_BIT=0x00000002
#undef GL_CLIENT_VERTEX_ARRAY_BIT
static const GLenum GL_CLIENT_VERTEX_ARRAY_BIT=0x00000002
#undef GL_LINE_BIT
static const GLenum GL_LINE_BIT=0x00000004
#undef GL_POLYGON_BIT
static const GLenum GL_POLYGON_BIT=0x00000008
#undef GL_POLYGON_STIPPLE_BIT
static const GLenum GL_POLYGON_STIPPLE_BIT=0x00000010
#undef GL_PIXEL_MODE_BIT
static const GLenum GL_PIXEL_MODE_BIT=0x00000020
#undef GL_LIGHTING_BIT
static const GLenum GL_LIGHTING_BIT=0x00000040
#undef GL_FOG_BIT
static const GLenum GL_FOG_BIT=0x00000080
#undef GL_DEPTH_BUFFER_BIT
static const GLenum GL_DEPTH_BUFFER_BIT=0x00000100
#undef GL_ACCUM_BUFFER_BIT
static const GLenum GL_ACCUM_BUFFER_BIT=0x00000200
#undef GL_STENCIL_BUFFER_BIT
static const GLenum GL_STENCIL_BUFFER_BIT=0x00000400
#undef GL_VIEWPORT_BIT
static const GLenum GL_VIEWPORT_BIT=0x00000800
#undef GL_TRANSFORM_BIT
static const GLenum GL_TRANSFORM_BIT=0x00001000
#undef GL_ENABLE_BIT
static const GLenum GL_ENABLE_BIT=0x00002000
#undef GL_COLOR_BUFFER_BIT
static const GLenum GL_COLOR_BUFFER_BIT=0x00004000
#undef GL_HINT_BIT
static const GLenum GL_HINT_BIT=0x00008000
#undef GL_LINES
static const GLenum GL_LINES=0x0001
#undef GL_MAP_READ_BIT
static const GLenum GL_MAP_READ_BIT=0x0001
#undef GL_EVAL_BIT
static const GLenum GL_EVAL_BIT=0x00010000
#undef GL_LINE_LOOP
static const GLenum GL_LINE_LOOP=0x0002
#undef GL_MAP_WRITE_BIT
static const GLenum GL_MAP_WRITE_BIT=0x0002
#undef GL_LIST_BIT
static const GLenum GL_LIST_BIT=0x00020000
#undef GL_LINE_STRIP
static const GLenum GL_LINE_STRIP=0x0003
#undef GL_MAP_INVALIDATE_RANGE_BIT
static const GLenum GL_MAP_INVALIDATE_RANGE_BIT=0x0004
#undef GL_TRIANGLES
static const GLenum GL_TRIANGLES=0x0004
#undef GL_TEXTURE_BIT
static const GLenum GL_TEXTURE_BIT=0x00040000
#undef GL_TRIANGLE_STRIP
static const GLenum GL_TRIANGLE_STRIP=0x0005
#undef GL_TRIANGLE_FAN
static const GLenum GL_TRIANGLE_FAN=0x0006
#undef GL_QUADS
static const GLenum GL_QUADS=0x0007
#undef GL_MAP_INVALIDATE_BUFFER_BIT
static const GLenum GL_MAP_INVALIDATE_BUFFER_BIT=0x0008
#undef GL_QUAD_STRIP
static const GLenum GL_QUAD_STRIP=0x0008
#undef GL_SCISSOR_BIT
static const GLenum GL_SCISSOR_BIT=0x00080000
#undef GL_POLYGON
static const GLenum GL_POLYGON=0x0009
#undef GL_MAP_FLUSH_EXPLICIT_BIT
static const GLenum GL_MAP_FLUSH_EXPLICIT_BIT=0x0010
#undef GL_MAP_UNSYNCHRONIZED_BIT
static const GLenum GL_MAP_UNSYNCHRONIZED_BIT=0x0020
#undef GL_ACCUM
static const GLenum GL_ACCUM=0x0100
#undef GL_LOAD
static const GLenum GL_LOAD=0x0101
#undef GL_RETURN
static const GLenum GL_RETURN=0x0102
#undef GL_MULT
static const GLenum GL_MULT=0x0103
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
#undef GL_FRONT_LEFT
static const GLenum GL_FRONT_LEFT=0x0400
#undef GL_FRONT_RIGHT
static const GLenum GL_FRONT_RIGHT=0x0401
#undef GL_BACK_LEFT
static const GLenum GL_BACK_LEFT=0x0402
#undef GL_BACK_RIGHT
static const GLenum GL_BACK_RIGHT=0x0403
#undef GL_FRONT
static const GLenum GL_FRONT=0x0404
#undef GL_BACK
static const GLenum GL_BACK=0x0405
#undef GL_LEFT
static const GLenum GL_LEFT=0x0406
#undef GL_RIGHT
static const GLenum GL_RIGHT=0x0407
#undef GL_FRONT_AND_BACK
static const GLenum GL_FRONT_AND_BACK=0x0408
#undef GL_AUX0
static const GLenum GL_AUX0=0x0409
#undef GL_AUX1
static const GLenum GL_AUX1=0x040A
#undef GL_AUX2
static const GLenum GL_AUX2=0x040B
#undef GL_AUX3
static const GLenum GL_AUX3=0x040C
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
#undef GL_INVALID_FRAMEBUFFER_OPERATION
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION=0x0506
#undef GL_2D
static const GLenum GL_2D=0x0600
#undef GL_3D
static const GLenum GL_3D=0x0601
#undef GL_3D_COLOR
static const GLenum GL_3D_COLOR=0x0602
#undef GL_3D_COLOR_TEXTURE
static const GLenum GL_3D_COLOR_TEXTURE=0x0603
#undef GL_4D_COLOR_TEXTURE
static const GLenum GL_4D_COLOR_TEXTURE=0x0604
#undef GL_PASS_THROUGH_TOKEN
static const GLenum GL_PASS_THROUGH_TOKEN=0x0700
#undef GL_POINT_TOKEN
static const GLenum GL_POINT_TOKEN=0x0701
#undef GL_LINE_TOKEN
static const GLenum GL_LINE_TOKEN=0x0702
#undef GL_POLYGON_TOKEN
static const GLenum GL_POLYGON_TOKEN=0x0703
#undef GL_BITMAP_TOKEN
static const GLenum GL_BITMAP_TOKEN=0x0704
#undef GL_DRAW_PIXEL_TOKEN
static const GLenum GL_DRAW_PIXEL_TOKEN=0x0705
#undef GL_COPY_PIXEL_TOKEN
static const GLenum GL_COPY_PIXEL_TOKEN=0x0706
#undef GL_LINE_RESET_TOKEN
static const GLenum GL_LINE_RESET_TOKEN=0x0707
#undef GL_EXP
static const GLenum GL_EXP=0x0800
#undef GL_EXP2
static const GLenum GL_EXP2=0x0801
#undef GL_CW
static const GLenum GL_CW=0x0900
#undef GL_CCW
static const GLenum GL_CCW=0x0901
#undef GL_COEFF
static const GLenum GL_COEFF=0x0A00
#undef GL_ORDER
static const GLenum GL_ORDER=0x0A01
#undef GL_DOMAIN
static const GLenum GL_DOMAIN=0x0A02
#undef GL_CURRENT_COLOR
static const GLenum GL_CURRENT_COLOR=0x0B00
#undef GL_CURRENT_INDEX
static const GLenum GL_CURRENT_INDEX=0x0B01
#undef GL_CURRENT_NORMAL
static const GLenum GL_CURRENT_NORMAL=0x0B02
#undef GL_CURRENT_TEXTURE_COORDS
static const GLenum GL_CURRENT_TEXTURE_COORDS=0x0B03
#undef GL_CURRENT_RASTER_COLOR
static const GLenum GL_CURRENT_RASTER_COLOR=0x0B04
#undef GL_CURRENT_RASTER_INDEX
static const GLenum GL_CURRENT_RASTER_INDEX=0x0B05
#undef GL_CURRENT_RASTER_TEXTURE_COORDS
static const GLenum GL_CURRENT_RASTER_TEXTURE_COORDS=0x0B06
#undef GL_CURRENT_RASTER_POSITION
static const GLenum GL_CURRENT_RASTER_POSITION=0x0B07
#undef GL_CURRENT_RASTER_POSITION_VALID
static const GLenum GL_CURRENT_RASTER_POSITION_VALID=0x0B08
#undef GL_CURRENT_RASTER_DISTANCE
static const GLenum GL_CURRENT_RASTER_DISTANCE=0x0B09
#undef GL_POINT_SMOOTH
static const GLenum GL_POINT_SMOOTH=0x0B10
#undef GL_POINT_SIZE
static const GLenum GL_POINT_SIZE=0x0B11
#undef GL_POINT_SIZE_RANGE
static const GLenum GL_POINT_SIZE_RANGE=0x0B12
#undef GL_SMOOTH_POINT_SIZE_RANGE
static const GLenum GL_SMOOTH_POINT_SIZE_RANGE=0x0B12
#undef GL_SMOOTH_POINT_SIZE_GRANULARITY
static const GLenum GL_SMOOTH_POINT_SIZE_GRANULARITY=0x0B13
#undef GL_POINT_SIZE_GRANULARITY
static const GLenum GL_POINT_SIZE_GRANULARITY=0x0B13
#undef GL_LINE_SMOOTH
static const GLenum GL_LINE_SMOOTH=0x0B20
#undef GL_LINE_WIDTH
static const GLenum GL_LINE_WIDTH=0x0B21
#undef GL_SMOOTH_LINE_WIDTH_RANGE
static const GLenum GL_SMOOTH_LINE_WIDTH_RANGE=0x0B22
#undef GL_LINE_WIDTH_RANGE
static const GLenum GL_LINE_WIDTH_RANGE=0x0B22
#undef GL_SMOOTH_LINE_WIDTH_GRANULARITY
static const GLenum GL_SMOOTH_LINE_WIDTH_GRANULARITY=0x0B23
#undef GL_LINE_WIDTH_GRANULARITY
static const GLenum GL_LINE_WIDTH_GRANULARITY=0x0B23
#undef GL_LINE_STIPPLE
static const GLenum GL_LINE_STIPPLE=0x0B24
#undef GL_LINE_STIPPLE_PATTERN
static const GLenum GL_LINE_STIPPLE_PATTERN=0x0B25
#undef GL_LINE_STIPPLE_REPEAT
static const GLenum GL_LINE_STIPPLE_REPEAT=0x0B26
#undef GL_LIST_MODE
static const GLenum GL_LIST_MODE=0x0B30
#undef GL_MAX_LIST_NESTING
static const GLenum GL_MAX_LIST_NESTING=0x0B31
#undef GL_LIST_BASE
static const GLenum GL_LIST_BASE=0x0B32
#undef GL_LIST_INDEX
static const GLenum GL_LIST_INDEX=0x0B33
#undef GL_POLYGON_MODE
static const GLenum GL_POLYGON_MODE=0x0B40
#undef GL_POLYGON_SMOOTH
static const GLenum GL_POLYGON_SMOOTH=0x0B41
#undef GL_POLYGON_STIPPLE
static const GLenum GL_POLYGON_STIPPLE=0x0B42
#undef GL_EDGE_FLAG
static const GLenum GL_EDGE_FLAG=0x0B43
#undef GL_CULL_FACE
static const GLenum GL_CULL_FACE=0x0B44
#undef GL_CULL_FACE_MODE
static const GLenum GL_CULL_FACE_MODE=0x0B45
#undef GL_FRONT_FACE
static const GLenum GL_FRONT_FACE=0x0B46
#undef GL_LIGHTING
static const GLenum GL_LIGHTING=0x0B50
#undef GL_LIGHT_MODEL_LOCAL_VIEWER
static const GLenum GL_LIGHT_MODEL_LOCAL_VIEWER=0x0B51
#undef GL_LIGHT_MODEL_TWO_SIDE
static const GLenum GL_LIGHT_MODEL_TWO_SIDE=0x0B52
#undef GL_LIGHT_MODEL_AMBIENT
static const GLenum GL_LIGHT_MODEL_AMBIENT=0x0B53
#undef GL_SHADE_MODEL
static const GLenum GL_SHADE_MODEL=0x0B54
#undef GL_COLOR_MATERIAL_FACE
static const GLenum GL_COLOR_MATERIAL_FACE=0x0B55
#undef GL_COLOR_MATERIAL_PARAMETER
static const GLenum GL_COLOR_MATERIAL_PARAMETER=0x0B56
#undef GL_COLOR_MATERIAL
static const GLenum GL_COLOR_MATERIAL=0x0B57
#undef GL_FOG
static const GLenum GL_FOG=0x0B60
#undef GL_FOG_INDEX
static const GLenum GL_FOG_INDEX=0x0B61
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
#undef GL_ACCUM_CLEAR_VALUE
static const GLenum GL_ACCUM_CLEAR_VALUE=0x0B80
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
#undef GL_ATTRIB_STACK_DEPTH
static const GLenum GL_ATTRIB_STACK_DEPTH=0x0BB0
#undef GL_CLIENT_ATTRIB_STACK_DEPTH
static const GLenum GL_CLIENT_ATTRIB_STACK_DEPTH=0x0BB1
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
#undef GL_INDEX_LOGIC_OP
static const GLenum GL_INDEX_LOGIC_OP=0x0BF1
#undef GL_LOGIC_OP
static const GLenum GL_LOGIC_OP=0x0BF1
#undef GL_COLOR_LOGIC_OP
static const GLenum GL_COLOR_LOGIC_OP=0x0BF2
#undef GL_AUX_BUFFERS
static const GLenum GL_AUX_BUFFERS=0x0C00
#undef GL_DRAW_BUFFER
static const GLenum GL_DRAW_BUFFER=0x0C01
#undef GL_READ_BUFFER
static const GLenum GL_READ_BUFFER=0x0C02
#undef GL_SCISSOR_BOX
static const GLenum GL_SCISSOR_BOX=0x0C10
#undef GL_SCISSOR_TEST
static const GLenum GL_SCISSOR_TEST=0x0C11
#undef GL_INDEX_CLEAR_VALUE
static const GLenum GL_INDEX_CLEAR_VALUE=0x0C20
#undef GL_INDEX_WRITEMASK
static const GLenum GL_INDEX_WRITEMASK=0x0C21
#undef GL_COLOR_CLEAR_VALUE
static const GLenum GL_COLOR_CLEAR_VALUE=0x0C22
#undef GL_COLOR_WRITEMASK
static const GLenum GL_COLOR_WRITEMASK=0x0C23
#undef GL_INDEX_MODE
static const GLenum GL_INDEX_MODE=0x0C30
#undef GL_RGBA_MODE
static const GLenum GL_RGBA_MODE=0x0C31
#undef GL_DOUBLEBUFFER
static const GLenum GL_DOUBLEBUFFER=0x0C32
#undef GL_STEREO
static const GLenum GL_STEREO=0x0C33
#undef GL_RENDER_MODE
static const GLenum GL_RENDER_MODE=0x0C40
#undef GL_PERSPECTIVE_CORRECTION_HINT
static const GLenum GL_PERSPECTIVE_CORRECTION_HINT=0x0C50
#undef GL_POINT_SMOOTH_HINT
static const GLenum GL_POINT_SMOOTH_HINT=0x0C51
#undef GL_LINE_SMOOTH_HINT
static const GLenum GL_LINE_SMOOTH_HINT=0x0C52
#undef GL_POLYGON_SMOOTH_HINT
static const GLenum GL_POLYGON_SMOOTH_HINT=0x0C53
#undef GL_FOG_HINT
static const GLenum GL_FOG_HINT=0x0C54
#undef GL_TEXTURE_GEN_S
static const GLenum GL_TEXTURE_GEN_S=0x0C60
#undef GL_TEXTURE_GEN_T
static const GLenum GL_TEXTURE_GEN_T=0x0C61
#undef GL_TEXTURE_GEN_R
static const GLenum GL_TEXTURE_GEN_R=0x0C62
#undef GL_TEXTURE_GEN_Q
static const GLenum GL_TEXTURE_GEN_Q=0x0C63
#undef GL_PIXEL_MAP_I_TO_I
static const GLenum GL_PIXEL_MAP_I_TO_I=0x0C70
#undef GL_PIXEL_MAP_S_TO_S
static const GLenum GL_PIXEL_MAP_S_TO_S=0x0C71
#undef GL_PIXEL_MAP_I_TO_R
static const GLenum GL_PIXEL_MAP_I_TO_R=0x0C72
#undef GL_PIXEL_MAP_I_TO_G
static const GLenum GL_PIXEL_MAP_I_TO_G=0x0C73
#undef GL_PIXEL_MAP_I_TO_B
static const GLenum GL_PIXEL_MAP_I_TO_B=0x0C74
#undef GL_PIXEL_MAP_I_TO_A
static const GLenum GL_PIXEL_MAP_I_TO_A=0x0C75
#undef GL_PIXEL_MAP_R_TO_R
static const GLenum GL_PIXEL_MAP_R_TO_R=0x0C76
#undef GL_PIXEL_MAP_G_TO_G
static const GLenum GL_PIXEL_MAP_G_TO_G=0x0C77
#undef GL_PIXEL_MAP_B_TO_B
static const GLenum GL_PIXEL_MAP_B_TO_B=0x0C78
#undef GL_PIXEL_MAP_A_TO_A
static const GLenum GL_PIXEL_MAP_A_TO_A=0x0C79
#undef GL_PIXEL_MAP_I_TO_I_SIZE
static const GLenum GL_PIXEL_MAP_I_TO_I_SIZE=0x0CB0
#undef GL_PIXEL_MAP_S_TO_S_SIZE
static const GLenum GL_PIXEL_MAP_S_TO_S_SIZE=0x0CB1
#undef GL_PIXEL_MAP_I_TO_R_SIZE
static const GLenum GL_PIXEL_MAP_I_TO_R_SIZE=0x0CB2
#undef GL_PIXEL_MAP_I_TO_G_SIZE
static const GLenum GL_PIXEL_MAP_I_TO_G_SIZE=0x0CB3
#undef GL_PIXEL_MAP_I_TO_B_SIZE
static const GLenum GL_PIXEL_MAP_I_TO_B_SIZE=0x0CB4
#undef GL_PIXEL_MAP_I_TO_A_SIZE
static const GLenum GL_PIXEL_MAP_I_TO_A_SIZE=0x0CB5
#undef GL_PIXEL_MAP_R_TO_R_SIZE
static const GLenum GL_PIXEL_MAP_R_TO_R_SIZE=0x0CB6
#undef GL_PIXEL_MAP_G_TO_G_SIZE
static const GLenum GL_PIXEL_MAP_G_TO_G_SIZE=0x0CB7
#undef GL_PIXEL_MAP_B_TO_B_SIZE
static const GLenum GL_PIXEL_MAP_B_TO_B_SIZE=0x0CB8
#undef GL_PIXEL_MAP_A_TO_A_SIZE
static const GLenum GL_PIXEL_MAP_A_TO_A_SIZE=0x0CB9
#undef GL_UNPACK_SWAP_BYTES
static const GLenum GL_UNPACK_SWAP_BYTES=0x0CF0
#undef GL_UNPACK_LSB_FIRST
static const GLenum GL_UNPACK_LSB_FIRST=0x0CF1
#undef GL_UNPACK_ROW_LENGTH
static const GLenum GL_UNPACK_ROW_LENGTH=0x0CF2
#undef GL_UNPACK_SKIP_ROWS
static const GLenum GL_UNPACK_SKIP_ROWS=0x0CF3
#undef GL_UNPACK_SKIP_PIXELS
static const GLenum GL_UNPACK_SKIP_PIXELS=0x0CF4
#undef GL_UNPACK_ALIGNMENT
static const GLenum GL_UNPACK_ALIGNMENT=0x0CF5
#undef GL_PACK_SWAP_BYTES
static const GLenum GL_PACK_SWAP_BYTES=0x0D00
#undef GL_PACK_LSB_FIRST
static const GLenum GL_PACK_LSB_FIRST=0x0D01
#undef GL_PACK_ROW_LENGTH
static const GLenum GL_PACK_ROW_LENGTH=0x0D02
#undef GL_PACK_SKIP_ROWS
static const GLenum GL_PACK_SKIP_ROWS=0x0D03
#undef GL_PACK_SKIP_PIXELS
static const GLenum GL_PACK_SKIP_PIXELS=0x0D04
#undef GL_PACK_ALIGNMENT
static const GLenum GL_PACK_ALIGNMENT=0x0D05
#undef GL_MAP_COLOR
static const GLenum GL_MAP_COLOR=0x0D10
#undef GL_MAP_STENCIL
static const GLenum GL_MAP_STENCIL=0x0D11
#undef GL_INDEX_SHIFT
static const GLenum GL_INDEX_SHIFT=0x0D12
#undef GL_INDEX_OFFSET
static const GLenum GL_INDEX_OFFSET=0x0D13
#undef GL_RED_SCALE
static const GLenum GL_RED_SCALE=0x0D14
#undef GL_RED_BIAS
static const GLenum GL_RED_BIAS=0x0D15
#undef GL_ZOOM_X
static const GLenum GL_ZOOM_X=0x0D16
#undef GL_ZOOM_Y
static const GLenum GL_ZOOM_Y=0x0D17
#undef GL_GREEN_SCALE
static const GLenum GL_GREEN_SCALE=0x0D18
#undef GL_GREEN_BIAS
static const GLenum GL_GREEN_BIAS=0x0D19
#undef GL_BLUE_SCALE
static const GLenum GL_BLUE_SCALE=0x0D1A
#undef GL_BLUE_BIAS
static const GLenum GL_BLUE_BIAS=0x0D1B
#undef GL_ALPHA_SCALE
static const GLenum GL_ALPHA_SCALE=0x0D1C
#undef GL_ALPHA_BIAS
static const GLenum GL_ALPHA_BIAS=0x0D1D
#undef GL_DEPTH_SCALE
static const GLenum GL_DEPTH_SCALE=0x0D1E
#undef GL_DEPTH_BIAS
static const GLenum GL_DEPTH_BIAS=0x0D1F
#undef GL_MAX_EVAL_ORDER
static const GLenum GL_MAX_EVAL_ORDER=0x0D30
#undef GL_MAX_LIGHTS
static const GLenum GL_MAX_LIGHTS=0x0D31
#undef GL_MAX_CLIP_DISTANCES
static const GLenum GL_MAX_CLIP_DISTANCES=0x0D32
#undef GL_MAX_CLIP_PLANES
static const GLenum GL_MAX_CLIP_PLANES=0x0D32
#undef GL_MAX_TEXTURE_SIZE
static const GLenum GL_MAX_TEXTURE_SIZE=0x0D33
#undef GL_MAX_PIXEL_MAP_TABLE
static const GLenum GL_MAX_PIXEL_MAP_TABLE=0x0D34
#undef GL_MAX_ATTRIB_STACK_DEPTH
static const GLenum GL_MAX_ATTRIB_STACK_DEPTH=0x0D35
#undef GL_MAX_MODELVIEW_STACK_DEPTH
static const GLenum GL_MAX_MODELVIEW_STACK_DEPTH=0x0D36
#undef GL_MAX_NAME_STACK_DEPTH
static const GLenum GL_MAX_NAME_STACK_DEPTH=0x0D37
#undef GL_MAX_PROJECTION_STACK_DEPTH
static const GLenum GL_MAX_PROJECTION_STACK_DEPTH=0x0D38
#undef GL_MAX_TEXTURE_STACK_DEPTH
static const GLenum GL_MAX_TEXTURE_STACK_DEPTH=0x0D39
#undef GL_MAX_VIEWPORT_DIMS
static const GLenum GL_MAX_VIEWPORT_DIMS=0x0D3A
#undef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
static const GLenum GL_MAX_CLIENT_ATTRIB_STACK_DEPTH=0x0D3B
#undef GL_SUBPIXEL_BITS
static const GLenum GL_SUBPIXEL_BITS=0x0D50
#undef GL_INDEX_BITS
static const GLenum GL_INDEX_BITS=0x0D51
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
#undef GL_ACCUM_RED_BITS
static const GLenum GL_ACCUM_RED_BITS=0x0D58
#undef GL_ACCUM_GREEN_BITS
static const GLenum GL_ACCUM_GREEN_BITS=0x0D59
#undef GL_ACCUM_BLUE_BITS
static const GLenum GL_ACCUM_BLUE_BITS=0x0D5A
#undef GL_ACCUM_ALPHA_BITS
static const GLenum GL_ACCUM_ALPHA_BITS=0x0D5B
#undef GL_NAME_STACK_DEPTH
static const GLenum GL_NAME_STACK_DEPTH=0x0D70
#undef GL_AUTO_NORMAL
static const GLenum GL_AUTO_NORMAL=0x0D80
#undef GL_MAP1_COLOR_4
static const GLenum GL_MAP1_COLOR_4=0x0D90
#undef GL_MAP1_INDEX
static const GLenum GL_MAP1_INDEX=0x0D91
#undef GL_MAP1_NORMAL
static const GLenum GL_MAP1_NORMAL=0x0D92
#undef GL_MAP1_TEXTURE_COORD_1
static const GLenum GL_MAP1_TEXTURE_COORD_1=0x0D93
#undef GL_MAP1_TEXTURE_COORD_2
static const GLenum GL_MAP1_TEXTURE_COORD_2=0x0D94
#undef GL_MAP1_TEXTURE_COORD_3
static const GLenum GL_MAP1_TEXTURE_COORD_3=0x0D95
#undef GL_MAP1_TEXTURE_COORD_4
static const GLenum GL_MAP1_TEXTURE_COORD_4=0x0D96
#undef GL_MAP1_VERTEX_3
static const GLenum GL_MAP1_VERTEX_3=0x0D97
#undef GL_MAP1_VERTEX_4
static const GLenum GL_MAP1_VERTEX_4=0x0D98
#undef GL_MAP2_COLOR_4
static const GLenum GL_MAP2_COLOR_4=0x0DB0
#undef GL_MAP2_INDEX
static const GLenum GL_MAP2_INDEX=0x0DB1
#undef GL_MAP2_NORMAL
static const GLenum GL_MAP2_NORMAL=0x0DB2
#undef GL_MAP2_TEXTURE_COORD_1
static const GLenum GL_MAP2_TEXTURE_COORD_1=0x0DB3
#undef GL_MAP2_TEXTURE_COORD_2
static const GLenum GL_MAP2_TEXTURE_COORD_2=0x0DB4
#undef GL_MAP2_TEXTURE_COORD_3
static const GLenum GL_MAP2_TEXTURE_COORD_3=0x0DB5
#undef GL_MAP2_TEXTURE_COORD_4
static const GLenum GL_MAP2_TEXTURE_COORD_4=0x0DB6
#undef GL_MAP2_VERTEX_3
static const GLenum GL_MAP2_VERTEX_3=0x0DB7
#undef GL_MAP2_VERTEX_4
static const GLenum GL_MAP2_VERTEX_4=0x0DB8
#undef GL_MAP1_GRID_DOMAIN
static const GLenum GL_MAP1_GRID_DOMAIN=0x0DD0
#undef GL_MAP1_GRID_SEGMENTS
static const GLenum GL_MAP1_GRID_SEGMENTS=0x0DD1
#undef GL_MAP2_GRID_DOMAIN
static const GLenum GL_MAP2_GRID_DOMAIN=0x0DD2
#undef GL_MAP2_GRID_SEGMENTS
static const GLenum GL_MAP2_GRID_SEGMENTS=0x0DD3
#undef GL_TEXTURE_1D
static const GLenum GL_TEXTURE_1D=0x0DE0
#undef GL_TEXTURE_2D
static const GLenum GL_TEXTURE_2D=0x0DE1
#undef GL_FEEDBACK_BUFFER_POINTER
static const GLenum GL_FEEDBACK_BUFFER_POINTER=0x0DF0
#undef GL_FEEDBACK_BUFFER_SIZE
static const GLenum GL_FEEDBACK_BUFFER_SIZE=0x0DF1
#undef GL_FEEDBACK_BUFFER_TYPE
static const GLenum GL_FEEDBACK_BUFFER_TYPE=0x0DF2
#undef GL_SELECTION_BUFFER_POINTER
static const GLenum GL_SELECTION_BUFFER_POINTER=0x0DF3
#undef GL_SELECTION_BUFFER_SIZE
static const GLenum GL_SELECTION_BUFFER_SIZE=0x0DF4
#undef GL_TEXTURE_WIDTH
static const GLenum GL_TEXTURE_WIDTH=0x1000
#undef GL_TEXTURE_HEIGHT
static const GLenum GL_TEXTURE_HEIGHT=0x1001
#undef GL_TEXTURE_COMPONENTS
static const GLenum GL_TEXTURE_COMPONENTS=0x1003
#undef GL_TEXTURE_INTERNAL_FORMAT
static const GLenum GL_TEXTURE_INTERNAL_FORMAT=0x1003
#undef GL_TEXTURE_BORDER_COLOR
static const GLenum GL_TEXTURE_BORDER_COLOR=0x1004
#undef GL_TEXTURE_BORDER
static const GLenum GL_TEXTURE_BORDER=0x1005
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
#undef GL_COMPILE
static const GLenum GL_COMPILE=0x1300
#undef GL_COMPILE_AND_EXECUTE
static const GLenum GL_COMPILE_AND_EXECUTE=0x1301
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
#undef GL_2_BYTES
static const GLenum GL_2_BYTES=0x1407
#undef GL_3_BYTES
static const GLenum GL_3_BYTES=0x1408
#undef GL_4_BYTES
static const GLenum GL_4_BYTES=0x1409
#undef GL_DOUBLE
static const GLenum GL_DOUBLE=0x140A
#undef GL_HALF_FLOAT
static const GLenum GL_HALF_FLOAT=0x140B
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
#undef GL_COLOR_INDEXES
static const GLenum GL_COLOR_INDEXES=0x1603
#undef GL_MODELVIEW
static const GLenum GL_MODELVIEW=0x1700
#undef GL_PROJECTION
static const GLenum GL_PROJECTION=0x1701
#undef GL_TEXTURE
static const GLenum GL_TEXTURE=0x1702
#undef GL_COLOR
static const GLenum GL_COLOR=0x1800
#undef GL_DEPTH
static const GLenum GL_DEPTH=0x1801
#undef GL_STENCIL
static const GLenum GL_STENCIL=0x1802
#undef GL_COLOR_INDEX
static const GLenum GL_COLOR_INDEX=0x1900
#undef GL_STENCIL_INDEX
static const GLenum GL_STENCIL_INDEX=0x1901
#undef GL_DEPTH_COMPONENT
static const GLenum GL_DEPTH_COMPONENT=0x1902
#undef GL_RED
static const GLenum GL_RED=0x1903
#undef GL_GREEN
static const GLenum GL_GREEN=0x1904
#undef GL_BLUE
static const GLenum GL_BLUE=0x1905
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
#undef GL_BITMAP
static const GLenum GL_BITMAP=0x1A00
#undef GL_POINT
static const GLenum GL_POINT=0x1B00
#undef GL_LINE
static const GLenum GL_LINE=0x1B01
#undef GL_FILL
static const GLenum GL_FILL=0x1B02
#undef GL_RENDER
static const GLenum GL_RENDER=0x1C00
#undef GL_FEEDBACK
static const GLenum GL_FEEDBACK=0x1C01
#undef GL_SELECT
static const GLenum GL_SELECT=0x1C02
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
#undef GL_S
static const GLenum GL_S=0x2000
#undef GL_MULTISAMPLE_BIT
static const GLenum GL_MULTISAMPLE_BIT=0x20000000
#undef GL_T
static const GLenum GL_T=0x2001
#undef GL_R
static const GLenum GL_R=0x2002
#undef GL_Q
static const GLenum GL_Q=0x2003
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
#undef GL_EYE_LINEAR
static const GLenum GL_EYE_LINEAR=0x2400
#undef GL_OBJECT_LINEAR
static const GLenum GL_OBJECT_LINEAR=0x2401
#undef GL_SPHERE_MAP
static const GLenum GL_SPHERE_MAP=0x2402
#undef GL_TEXTURE_GEN_MODE
static const GLenum GL_TEXTURE_GEN_MODE=0x2500
#undef GL_OBJECT_PLANE
static const GLenum GL_OBJECT_PLANE=0x2501
#undef GL_EYE_PLANE
static const GLenum GL_EYE_PLANE=0x2502
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
#undef GL_CLAMP
static const GLenum GL_CLAMP=0x2900
#undef GL_REPEAT
static const GLenum GL_REPEAT=0x2901
#undef GL_POLYGON_OFFSET_UNITS
static const GLenum GL_POLYGON_OFFSET_UNITS=0x2A00
#undef GL_POLYGON_OFFSET_POINT
static const GLenum GL_POLYGON_OFFSET_POINT=0x2A01
#undef GL_POLYGON_OFFSET_LINE
static const GLenum GL_POLYGON_OFFSET_LINE=0x2A02
#undef GL_R3_G3_B2
static const GLenum GL_R3_G3_B2=0x2A10
#undef GL_V2F
static const GLenum GL_V2F=0x2A20
#undef GL_V3F
static const GLenum GL_V3F=0x2A21
#undef GL_C4UB_V2F
static const GLenum GL_C4UB_V2F=0x2A22
#undef GL_C4UB_V3F
static const GLenum GL_C4UB_V3F=0x2A23
#undef GL_C3F_V3F
static const GLenum GL_C3F_V3F=0x2A24
#undef GL_N3F_V3F
static const GLenum GL_N3F_V3F=0x2A25
#undef GL_C4F_N3F_V3F
static const GLenum GL_C4F_N3F_V3F=0x2A26
#undef GL_T2F_V3F
static const GLenum GL_T2F_V3F=0x2A27
#undef GL_T4F_V4F
static const GLenum GL_T4F_V4F=0x2A28
#undef GL_T2F_C4UB_V3F
static const GLenum GL_T2F_C4UB_V3F=0x2A29
#undef GL_T2F_C3F_V3F
static const GLenum GL_T2F_C3F_V3F=0x2A2A
#undef GL_T2F_N3F_V3F
static const GLenum GL_T2F_N3F_V3F=0x2A2B
#undef GL_T2F_C4F_N3F_V3F
static const GLenum GL_T2F_C4F_N3F_V3F=0x2A2C
#undef GL_T4F_C4F_N3F_V4F
static const GLenum GL_T4F_C4F_N3F_V4F=0x2A2D
#undef GL_CLIP_DISTANCE0
static const GLenum GL_CLIP_DISTANCE0=0x3000
#undef GL_CLIP_PLANE0
static const GLenum GL_CLIP_PLANE0=0x3000
#undef GL_CLIP_PLANE1
static const GLenum GL_CLIP_PLANE1=0x3001
#undef GL_CLIP_DISTANCE1
static const GLenum GL_CLIP_DISTANCE1=0x3001
#undef GL_CLIP_DISTANCE2
static const GLenum GL_CLIP_DISTANCE2=0x3002
#undef GL_CLIP_PLANE2
static const GLenum GL_CLIP_PLANE2=0x3002
#undef GL_CLIP_DISTANCE3
static const GLenum GL_CLIP_DISTANCE3=0x3003
#undef GL_CLIP_PLANE3
static const GLenum GL_CLIP_PLANE3=0x3003
#undef GL_CLIP_DISTANCE4
static const GLenum GL_CLIP_DISTANCE4=0x3004
#undef GL_CLIP_PLANE4
static const GLenum GL_CLIP_PLANE4=0x3004
#undef GL_CLIP_DISTANCE5
static const GLenum GL_CLIP_DISTANCE5=0x3005
#undef GL_CLIP_PLANE5
static const GLenum GL_CLIP_PLANE5=0x3005
#undef GL_CLIP_DISTANCE6
static const GLenum GL_CLIP_DISTANCE6=0x3006
#undef GL_CLIP_DISTANCE7
static const GLenum GL_CLIP_DISTANCE7=0x3007
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
#undef GL_CONSTANT_COLOR
static const GLenum GL_CONSTANT_COLOR=0x8001
#undef GL_ONE_MINUS_CONSTANT_COLOR
static const GLenum GL_ONE_MINUS_CONSTANT_COLOR=0x8002
#undef GL_CONSTANT_ALPHA
static const GLenum GL_CONSTANT_ALPHA=0x8003
#undef GL_ONE_MINUS_CONSTANT_ALPHA
static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA=0x8004
#undef GL_FUNC_ADD
static const GLenum GL_FUNC_ADD=0x8006
#undef GL_MIN
static const GLenum GL_MIN=0x8007
#undef GL_MAX
static const GLenum GL_MAX=0x8008
#undef GL_BLEND_EQUATION_RGB
static const GLenum GL_BLEND_EQUATION_RGB=0x8009
#undef GL_FUNC_SUBTRACT
static const GLenum GL_FUNC_SUBTRACT=0x800A
#undef GL_FUNC_REVERSE_SUBTRACT
static const GLenum GL_FUNC_REVERSE_SUBTRACT=0x800B
#undef GL_UNSIGNED_BYTE_3_3_2
static const GLenum GL_UNSIGNED_BYTE_3_3_2=0x8032
#undef GL_UNSIGNED_SHORT_4_4_4_4
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4=0x8033
#undef GL_UNSIGNED_SHORT_5_5_5_1
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1=0x8034
#undef GL_UNSIGNED_INT_8_8_8_8
static const GLenum GL_UNSIGNED_INT_8_8_8_8=0x8035
#undef GL_UNSIGNED_INT_10_10_10_2
static const GLenum GL_UNSIGNED_INT_10_10_10_2=0x8036
#undef GL_POLYGON_OFFSET_FILL
static const GLenum GL_POLYGON_OFFSET_FILL=0x8037
#undef GL_POLYGON_OFFSET_FACTOR
static const GLenum GL_POLYGON_OFFSET_FACTOR=0x8038
#undef GL_RESCALE_NORMAL
static const GLenum GL_RESCALE_NORMAL=0x803A
#undef GL_ALPHA4
static const GLenum GL_ALPHA4=0x803B
#undef GL_ALPHA8
static const GLenum GL_ALPHA8=0x803C
#undef GL_ALPHA12
static const GLenum GL_ALPHA12=0x803D
#undef GL_ALPHA16
static const GLenum GL_ALPHA16=0x803E
#undef GL_LUMINANCE4
static const GLenum GL_LUMINANCE4=0x803F
#undef GL_LUMINANCE8
static const GLenum GL_LUMINANCE8=0x8040
#undef GL_LUMINANCE12
static const GLenum GL_LUMINANCE12=0x8041
#undef GL_LUMINANCE16
static const GLenum GL_LUMINANCE16=0x8042
#undef GL_LUMINANCE4_ALPHA4
static const GLenum GL_LUMINANCE4_ALPHA4=0x8043
#undef GL_LUMINANCE6_ALPHA2
static const GLenum GL_LUMINANCE6_ALPHA2=0x8044
#undef GL_LUMINANCE8_ALPHA8
static const GLenum GL_LUMINANCE8_ALPHA8=0x8045
#undef GL_LUMINANCE12_ALPHA4
static const GLenum GL_LUMINANCE12_ALPHA4=0x8046
#undef GL_LUMINANCE12_ALPHA12
static const GLenum GL_LUMINANCE12_ALPHA12=0x8047
#undef GL_LUMINANCE16_ALPHA16
static const GLenum GL_LUMINANCE16_ALPHA16=0x8048
#undef GL_INTENSITY
static const GLenum GL_INTENSITY=0x8049
#undef GL_INTENSITY4
static const GLenum GL_INTENSITY4=0x804A
#undef GL_INTENSITY8
static const GLenum GL_INTENSITY8=0x804B
#undef GL_INTENSITY12
static const GLenum GL_INTENSITY12=0x804C
#undef GL_INTENSITY16
static const GLenum GL_INTENSITY16=0x804D
#undef GL_RGB4
static const GLenum GL_RGB4=0x804F
#undef GL_RGB5
static const GLenum GL_RGB5=0x8050
#undef GL_RGB8
static const GLenum GL_RGB8=0x8051
#undef GL_RGB10
static const GLenum GL_RGB10=0x8052
#undef GL_RGB12
static const GLenum GL_RGB12=0x8053
#undef GL_RGB16
static const GLenum GL_RGB16=0x8054
#undef GL_RGBA2
static const GLenum GL_RGBA2=0x8055
#undef GL_RGBA4
static const GLenum GL_RGBA4=0x8056
#undef GL_RGB5_A1
static const GLenum GL_RGB5_A1=0x8057
#undef GL_RGBA8
static const GLenum GL_RGBA8=0x8058
#undef GL_RGB10_A2
static const GLenum GL_RGB10_A2=0x8059
#undef GL_RGBA12
static const GLenum GL_RGBA12=0x805A
#undef GL_RGBA16
static const GLenum GL_RGBA16=0x805B
#undef GL_TEXTURE_RED_SIZE
static const GLenum GL_TEXTURE_RED_SIZE=0x805C
#undef GL_TEXTURE_GREEN_SIZE
static const GLenum GL_TEXTURE_GREEN_SIZE=0x805D
#undef GL_TEXTURE_BLUE_SIZE
static const GLenum GL_TEXTURE_BLUE_SIZE=0x805E
#undef GL_TEXTURE_ALPHA_SIZE
static const GLenum GL_TEXTURE_ALPHA_SIZE=0x805F
#undef GL_TEXTURE_LUMINANCE_SIZE
static const GLenum GL_TEXTURE_LUMINANCE_SIZE=0x8060
#undef GL_TEXTURE_INTENSITY_SIZE
static const GLenum GL_TEXTURE_INTENSITY_SIZE=0x8061
#undef GL_PROXY_TEXTURE_1D
static const GLenum GL_PROXY_TEXTURE_1D=0x8063
#undef GL_PROXY_TEXTURE_2D
static const GLenum GL_PROXY_TEXTURE_2D=0x8064
#undef GL_TEXTURE_PRIORITY
static const GLenum GL_TEXTURE_PRIORITY=0x8066
#undef GL_TEXTURE_RESIDENT
static const GLenum GL_TEXTURE_RESIDENT=0x8067
#undef GL_TEXTURE_BINDING_1D
static const GLenum GL_TEXTURE_BINDING_1D=0x8068
#undef GL_TEXTURE_BINDING_2D
static const GLenum GL_TEXTURE_BINDING_2D=0x8069
#undef GL_TEXTURE_BINDING_3D
static const GLenum GL_TEXTURE_BINDING_3D=0x806A
#undef GL_PACK_SKIP_IMAGES
static const GLenum GL_PACK_SKIP_IMAGES=0x806B
#undef GL_PACK_IMAGE_HEIGHT
static const GLenum GL_PACK_IMAGE_HEIGHT=0x806C
#undef GL_UNPACK_SKIP_IMAGES
static const GLenum GL_UNPACK_SKIP_IMAGES=0x806D
#undef GL_UNPACK_IMAGE_HEIGHT
static const GLenum GL_UNPACK_IMAGE_HEIGHT=0x806E
#undef GL_TEXTURE_3D
static const GLenum GL_TEXTURE_3D=0x806F
#undef GL_PROXY_TEXTURE_3D
static const GLenum GL_PROXY_TEXTURE_3D=0x8070
#undef GL_TEXTURE_DEPTH
static const GLenum GL_TEXTURE_DEPTH=0x8071
#undef GL_TEXTURE_WRAP_R
static const GLenum GL_TEXTURE_WRAP_R=0x8072
#undef GL_MAX_3D_TEXTURE_SIZE
static const GLenum GL_MAX_3D_TEXTURE_SIZE=0x8073
#undef GL_VERTEX_ARRAY
static const GLenum GL_VERTEX_ARRAY=0x8074
#undef GL_NORMAL_ARRAY
static const GLenum GL_NORMAL_ARRAY=0x8075
#undef GL_COLOR_ARRAY
static const GLenum GL_COLOR_ARRAY=0x8076
#undef GL_INDEX_ARRAY
static const GLenum GL_INDEX_ARRAY=0x8077
#undef GL_TEXTURE_COORD_ARRAY
static const GLenum GL_TEXTURE_COORD_ARRAY=0x8078
#undef GL_EDGE_FLAG_ARRAY
static const GLenum GL_EDGE_FLAG_ARRAY=0x8079
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
#undef GL_INDEX_ARRAY_TYPE
static const GLenum GL_INDEX_ARRAY_TYPE=0x8085
#undef GL_INDEX_ARRAY_STRIDE
static const GLenum GL_INDEX_ARRAY_STRIDE=0x8086
#undef GL_TEXTURE_COORD_ARRAY_SIZE
static const GLenum GL_TEXTURE_COORD_ARRAY_SIZE=0x8088
#undef GL_TEXTURE_COORD_ARRAY_TYPE
static const GLenum GL_TEXTURE_COORD_ARRAY_TYPE=0x8089
#undef GL_TEXTURE_COORD_ARRAY_STRIDE
static const GLenum GL_TEXTURE_COORD_ARRAY_STRIDE=0x808A
#undef GL_EDGE_FLAG_ARRAY_STRIDE
static const GLenum GL_EDGE_FLAG_ARRAY_STRIDE=0x808C
#undef GL_VERTEX_ARRAY_POINTER
static const GLenum GL_VERTEX_ARRAY_POINTER=0x808E
#undef GL_NORMAL_ARRAY_POINTER
static const GLenum GL_NORMAL_ARRAY_POINTER=0x808F
#undef GL_COLOR_ARRAY_POINTER
static const GLenum GL_COLOR_ARRAY_POINTER=0x8090
#undef GL_INDEX_ARRAY_POINTER
static const GLenum GL_INDEX_ARRAY_POINTER=0x8091
#undef GL_TEXTURE_COORD_ARRAY_POINTER
static const GLenum GL_TEXTURE_COORD_ARRAY_POINTER=0x8092
#undef GL_EDGE_FLAG_ARRAY_POINTER
static const GLenum GL_EDGE_FLAG_ARRAY_POINTER=0x8093
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
#undef GL_BLEND_DST_RGB
static const GLenum GL_BLEND_DST_RGB=0x80C8
#undef GL_BLEND_SRC_RGB
static const GLenum GL_BLEND_SRC_RGB=0x80C9
#undef GL_BLEND_DST_ALPHA
static const GLenum GL_BLEND_DST_ALPHA=0x80CA
#undef GL_BLEND_SRC_ALPHA
static const GLenum GL_BLEND_SRC_ALPHA=0x80CB
#undef GL_BGR
static const GLenum GL_BGR=0x80E0
#undef GL_BGRA
static const GLenum GL_BGRA=0x80E1
#undef GL_MAX_ELEMENTS_VERTICES
static const GLenum GL_MAX_ELEMENTS_VERTICES=0x80E8
#undef GL_MAX_ELEMENTS_INDICES
static const GLenum GL_MAX_ELEMENTS_INDICES=0x80E9
#undef GL_POINT_SIZE_MIN
static const GLenum GL_POINT_SIZE_MIN=0x8126
#undef GL_POINT_SIZE_MAX
static const GLenum GL_POINT_SIZE_MAX=0x8127
#undef GL_POINT_FADE_THRESHOLD_SIZE
static const GLenum GL_POINT_FADE_THRESHOLD_SIZE=0x8128
#undef GL_POINT_DISTANCE_ATTENUATION
static const GLenum GL_POINT_DISTANCE_ATTENUATION=0x8129
#undef GL_CLAMP_TO_BORDER
static const GLenum GL_CLAMP_TO_BORDER=0x812D
#undef GL_CLAMP_TO_EDGE
static const GLenum GL_CLAMP_TO_EDGE=0x812F
#undef GL_TEXTURE_MIN_LOD
static const GLenum GL_TEXTURE_MIN_LOD=0x813A
#undef GL_TEXTURE_MAX_LOD
static const GLenum GL_TEXTURE_MAX_LOD=0x813B
#undef GL_TEXTURE_BASE_LEVEL
static const GLenum GL_TEXTURE_BASE_LEVEL=0x813C
#undef GL_TEXTURE_MAX_LEVEL
static const GLenum GL_TEXTURE_MAX_LEVEL=0x813D
#undef GL_GENERATE_MIPMAP
static const GLenum GL_GENERATE_MIPMAP=0x8191
#undef GL_GENERATE_MIPMAP_HINT
static const GLenum GL_GENERATE_MIPMAP_HINT=0x8192
#undef GL_DEPTH_COMPONENT16
static const GLenum GL_DEPTH_COMPONENT16=0x81A5
#undef GL_DEPTH_COMPONENT24
static const GLenum GL_DEPTH_COMPONENT24=0x81A6
#undef GL_DEPTH_COMPONENT32
static const GLenum GL_DEPTH_COMPONENT32=0x81A7
#undef GL_LIGHT_MODEL_COLOR_CONTROL
static const GLenum GL_LIGHT_MODEL_COLOR_CONTROL=0x81F8
#undef GL_SINGLE_COLOR
static const GLenum GL_SINGLE_COLOR=0x81F9
#undef GL_SEPARATE_SPECULAR_COLOR
static const GLenum GL_SEPARATE_SPECULAR_COLOR=0x81FA
#undef GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING=0x8210
#undef GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE=0x8211
#undef GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE=0x8212
#undef GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE=0x8213
#undef GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE=0x8214
#undef GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE=0x8215
#undef GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE=0x8216
#undef GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE=0x8217
#undef GL_FRAMEBUFFER_DEFAULT
static const GLenum GL_FRAMEBUFFER_DEFAULT=0x8218
#undef GL_FRAMEBUFFER_UNDEFINED
static const GLenum GL_FRAMEBUFFER_UNDEFINED=0x8219
#undef GL_DEPTH_STENCIL_ATTACHMENT
static const GLenum GL_DEPTH_STENCIL_ATTACHMENT=0x821A
#undef GL_MAJOR_VERSION
static const GLenum GL_MAJOR_VERSION=0x821B
#undef GL_MINOR_VERSION
static const GLenum GL_MINOR_VERSION=0x821C
#undef GL_NUM_EXTENSIONS
static const GLenum GL_NUM_EXTENSIONS=0x821D
#undef GL_CONTEXT_FLAGS
static const GLenum GL_CONTEXT_FLAGS=0x821E
#undef GL_COMPRESSED_RED
static const GLenum GL_COMPRESSED_RED=0x8225
#undef GL_COMPRESSED_RG
static const GLenum GL_COMPRESSED_RG=0x8226
#undef GL_RG
static const GLenum GL_RG=0x8227
#undef GL_RG_INTEGER
static const GLenum GL_RG_INTEGER=0x8228
#undef GL_R8
static const GLenum GL_R8=0x8229
#undef GL_R16
static const GLenum GL_R16=0x822A
#undef GL_RG8
static const GLenum GL_RG8=0x822B
#undef GL_RG16
static const GLenum GL_RG16=0x822C
#undef GL_R16F
static const GLenum GL_R16F=0x822D
#undef GL_R32F
static const GLenum GL_R32F=0x822E
#undef GL_RG16F
static const GLenum GL_RG16F=0x822F
#undef GL_RG32F
static const GLenum GL_RG32F=0x8230
#undef GL_R8I
static const GLenum GL_R8I=0x8231
#undef GL_R8UI
static const GLenum GL_R8UI=0x8232
#undef GL_R16I
static const GLenum GL_R16I=0x8233
#undef GL_R16UI
static const GLenum GL_R16UI=0x8234
#undef GL_R32I
static const GLenum GL_R32I=0x8235
#undef GL_R32UI
static const GLenum GL_R32UI=0x8236
#undef GL_RG8I
static const GLenum GL_RG8I=0x8237
#undef GL_RG8UI
static const GLenum GL_RG8UI=0x8238
#undef GL_RG16I
static const GLenum GL_RG16I=0x8239
#undef GL_RG16UI
static const GLenum GL_RG16UI=0x823A
#undef GL_RG32I
static const GLenum GL_RG32I=0x823B
#undef GL_RG32UI
static const GLenum GL_RG32UI=0x823C
#undef GL_UNSIGNED_BYTE_2_3_3_REV
static const GLenum GL_UNSIGNED_BYTE_2_3_3_REV=0x8362
#undef GL_UNSIGNED_SHORT_5_6_5
static const GLenum GL_UNSIGNED_SHORT_5_6_5=0x8363
#undef GL_UNSIGNED_SHORT_5_6_5_REV
static const GLenum GL_UNSIGNED_SHORT_5_6_5_REV=0x8364
#undef GL_UNSIGNED_SHORT_4_4_4_4_REV
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV=0x8365
#undef GL_UNSIGNED_SHORT_1_5_5_5_REV
static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV=0x8366
#undef GL_UNSIGNED_INT_8_8_8_8_REV
static const GLenum GL_UNSIGNED_INT_8_8_8_8_REV=0x8367
#undef GL_UNSIGNED_INT_2_10_10_10_REV
static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV=0x8368
#undef GL_MIRRORED_REPEAT
static const GLenum GL_MIRRORED_REPEAT=0x8370
#undef GL_FOG_COORD_SRC
static const GLenum GL_FOG_COORD_SRC=0x8450
#undef GL_FOG_COORDINATE_SOURCE
static const GLenum GL_FOG_COORDINATE_SOURCE=0x8450
#undef GL_FOG_COORDINATE
static const GLenum GL_FOG_COORDINATE=0x8451
#undef GL_FOG_COORD
static const GLenum GL_FOG_COORD=0x8451
#undef GL_FRAGMENT_DEPTH
static const GLenum GL_FRAGMENT_DEPTH=0x8452
#undef GL_CURRENT_FOG_COORDINATE
static const GLenum GL_CURRENT_FOG_COORDINATE=0x8453
#undef GL_CURRENT_FOG_COORD
static const GLenum GL_CURRENT_FOG_COORD=0x8453
#undef GL_FOG_COORD_ARRAY_TYPE
static const GLenum GL_FOG_COORD_ARRAY_TYPE=0x8454
#undef GL_FOG_COORDINATE_ARRAY_TYPE
static const GLenum GL_FOG_COORDINATE_ARRAY_TYPE=0x8454
#undef GL_FOG_COORD_ARRAY_STRIDE
static const GLenum GL_FOG_COORD_ARRAY_STRIDE=0x8455
#undef GL_FOG_COORDINATE_ARRAY_STRIDE
static const GLenum GL_FOG_COORDINATE_ARRAY_STRIDE=0x8455
#undef GL_FOG_COORD_ARRAY_POINTER
static const GLenum GL_FOG_COORD_ARRAY_POINTER=0x8456
#undef GL_FOG_COORDINATE_ARRAY_POINTER
static const GLenum GL_FOG_COORDINATE_ARRAY_POINTER=0x8456
#undef GL_FOG_COORDINATE_ARRAY
static const GLenum GL_FOG_COORDINATE_ARRAY=0x8457
#undef GL_FOG_COORD_ARRAY
static const GLenum GL_FOG_COORD_ARRAY=0x8457
#undef GL_COLOR_SUM
static const GLenum GL_COLOR_SUM=0x8458
#undef GL_CURRENT_SECONDARY_COLOR
static const GLenum GL_CURRENT_SECONDARY_COLOR=0x8459
#undef GL_SECONDARY_COLOR_ARRAY_SIZE
static const GLenum GL_SECONDARY_COLOR_ARRAY_SIZE=0x845A
#undef GL_SECONDARY_COLOR_ARRAY_TYPE
static const GLenum GL_SECONDARY_COLOR_ARRAY_TYPE=0x845B
#undef GL_SECONDARY_COLOR_ARRAY_STRIDE
static const GLenum GL_SECONDARY_COLOR_ARRAY_STRIDE=0x845C
#undef GL_SECONDARY_COLOR_ARRAY_POINTER
static const GLenum GL_SECONDARY_COLOR_ARRAY_POINTER=0x845D
#undef GL_SECONDARY_COLOR_ARRAY
static const GLenum GL_SECONDARY_COLOR_ARRAY=0x845E
#undef GL_CURRENT_RASTER_SECONDARY_COLOR
static const GLenum GL_CURRENT_RASTER_SECONDARY_COLOR=0x845F
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
#undef GL_TRANSPOSE_MODELVIEW_MATRIX
static const GLenum GL_TRANSPOSE_MODELVIEW_MATRIX=0x84E3
#undef GL_TRANSPOSE_PROJECTION_MATRIX
static const GLenum GL_TRANSPOSE_PROJECTION_MATRIX=0x84E4
#undef GL_TRANSPOSE_TEXTURE_MATRIX
static const GLenum GL_TRANSPOSE_TEXTURE_MATRIX=0x84E5
#undef GL_TRANSPOSE_COLOR_MATRIX
static const GLenum GL_TRANSPOSE_COLOR_MATRIX=0x84E6
#undef GL_SUBTRACT
static const GLenum GL_SUBTRACT=0x84E7
#undef GL_MAX_RENDERBUFFER_SIZE
static const GLenum GL_MAX_RENDERBUFFER_SIZE=0x84E8
#undef GL_COMPRESSED_ALPHA
static const GLenum GL_COMPRESSED_ALPHA=0x84E9
#undef GL_COMPRESSED_LUMINANCE
static const GLenum GL_COMPRESSED_LUMINANCE=0x84EA
#undef GL_COMPRESSED_LUMINANCE_ALPHA
static const GLenum GL_COMPRESSED_LUMINANCE_ALPHA=0x84EB
#undef GL_COMPRESSED_INTENSITY
static const GLenum GL_COMPRESSED_INTENSITY=0x84EC
#undef GL_COMPRESSED_RGB
static const GLenum GL_COMPRESSED_RGB=0x84ED
#undef GL_COMPRESSED_RGBA
static const GLenum GL_COMPRESSED_RGBA=0x84EE
#undef GL_TEXTURE_COMPRESSION_HINT
static const GLenum GL_TEXTURE_COMPRESSION_HINT=0x84EF
#undef GL_TEXTURE_RECTANGLE
static const GLenum GL_TEXTURE_RECTANGLE=0x84F5
#undef GL_TEXTURE_BINDING_RECTANGLE
static const GLenum GL_TEXTURE_BINDING_RECTANGLE=0x84F6
#undef GL_PROXY_TEXTURE_RECTANGLE
static const GLenum GL_PROXY_TEXTURE_RECTANGLE=0x84F7
#undef GL_MAX_RECTANGLE_TEXTURE_SIZE
static const GLenum GL_MAX_RECTANGLE_TEXTURE_SIZE=0x84F8
#undef GL_DEPTH_STENCIL
static const GLenum GL_DEPTH_STENCIL=0x84F9
#undef GL_UNSIGNED_INT_24_8
static const GLenum GL_UNSIGNED_INT_24_8=0x84FA
#undef GL_MAX_TEXTURE_LOD_BIAS
static const GLenum GL_MAX_TEXTURE_LOD_BIAS=0x84FD
#undef GL_TEXTURE_FILTER_CONTROL
static const GLenum GL_TEXTURE_FILTER_CONTROL=0x8500
#undef GL_TEXTURE_LOD_BIAS
static const GLenum GL_TEXTURE_LOD_BIAS=0x8501
#undef GL_INCR_WRAP
static const GLenum GL_INCR_WRAP=0x8507
#undef GL_DECR_WRAP
static const GLenum GL_DECR_WRAP=0x8508
#undef GL_NORMAL_MAP
static const GLenum GL_NORMAL_MAP=0x8511
#undef GL_REFLECTION_MAP
static const GLenum GL_REFLECTION_MAP=0x8512
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
#undef GL_PROXY_TEXTURE_CUBE_MAP
static const GLenum GL_PROXY_TEXTURE_CUBE_MAP=0x851B
#undef GL_MAX_CUBE_MAP_TEXTURE_SIZE
static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE=0x851C
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
#undef GL_SOURCE0_RGB
static const GLenum GL_SOURCE0_RGB=0x8580
#undef GL_SRC0_RGB
static const GLenum GL_SRC0_RGB=0x8580
#undef GL_SOURCE1_RGB
static const GLenum GL_SOURCE1_RGB=0x8581
#undef GL_SRC1_RGB
static const GLenum GL_SRC1_RGB=0x8581
#undef GL_SRC2_RGB
static const GLenum GL_SRC2_RGB=0x8582
#undef GL_SOURCE2_RGB
static const GLenum GL_SOURCE2_RGB=0x8582
#undef GL_SRC0_ALPHA
static const GLenum GL_SRC0_ALPHA=0x8588
#undef GL_SOURCE0_ALPHA
static const GLenum GL_SOURCE0_ALPHA=0x8588
#undef GL_SRC1_ALPHA
static const GLenum GL_SRC1_ALPHA=0x8589
#undef GL_SOURCE1_ALPHA
static const GLenum GL_SOURCE1_ALPHA=0x8589
#undef GL_SRC2_ALPHA
static const GLenum GL_SRC2_ALPHA=0x858A
#undef GL_SOURCE2_ALPHA
static const GLenum GL_SOURCE2_ALPHA=0x858A
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
#undef GL_VERTEX_ARRAY_BINDING
static const GLenum GL_VERTEX_ARRAY_BINDING=0x85B5
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
#undef GL_VERTEX_PROGRAM_POINT_SIZE
static const GLenum GL_VERTEX_PROGRAM_POINT_SIZE=0x8642
#undef GL_VERTEX_PROGRAM_TWO_SIDE
static const GLenum GL_VERTEX_PROGRAM_TWO_SIDE=0x8643
#undef GL_VERTEX_ATTRIB_ARRAY_POINTER
static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER=0x8645
#undef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
static const GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE=0x86A0
#undef GL_TEXTURE_COMPRESSED
static const GLenum GL_TEXTURE_COMPRESSED=0x86A1
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
#undef GL_STENCIL_BACK_FUNC
static const GLenum GL_STENCIL_BACK_FUNC=0x8800
#undef GL_STENCIL_BACK_FAIL
static const GLenum GL_STENCIL_BACK_FAIL=0x8801
#undef GL_STENCIL_BACK_PASS_DEPTH_FAIL
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL=0x8802
#undef GL_STENCIL_BACK_PASS_DEPTH_PASS
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS=0x8803
#undef GL_RGBA32F
static const GLenum GL_RGBA32F=0x8814
#undef GL_RGB32F
static const GLenum GL_RGB32F=0x8815
#undef GL_RGBA16F
static const GLenum GL_RGBA16F=0x881A
#undef GL_RGB16F
static const GLenum GL_RGB16F=0x881B
#undef GL_MAX_DRAW_BUFFERS
static const GLenum GL_MAX_DRAW_BUFFERS=0x8824
#undef GL_DRAW_BUFFER0
static const GLenum GL_DRAW_BUFFER0=0x8825
#undef GL_DRAW_BUFFER1
static const GLenum GL_DRAW_BUFFER1=0x8826
#undef GL_DRAW_BUFFER2
static const GLenum GL_DRAW_BUFFER2=0x8827
#undef GL_DRAW_BUFFER3
static const GLenum GL_DRAW_BUFFER3=0x8828
#undef GL_DRAW_BUFFER4
static const GLenum GL_DRAW_BUFFER4=0x8829
#undef GL_DRAW_BUFFER5
static const GLenum GL_DRAW_BUFFER5=0x882A
#undef GL_DRAW_BUFFER6
static const GLenum GL_DRAW_BUFFER6=0x882B
#undef GL_DRAW_BUFFER7
static const GLenum GL_DRAW_BUFFER7=0x882C
#undef GL_DRAW_BUFFER8
static const GLenum GL_DRAW_BUFFER8=0x882D
#undef GL_DRAW_BUFFER9
static const GLenum GL_DRAW_BUFFER9=0x882E
#undef GL_DRAW_BUFFER10
static const GLenum GL_DRAW_BUFFER10=0x882F
#undef GL_DRAW_BUFFER11
static const GLenum GL_DRAW_BUFFER11=0x8830
#undef GL_DRAW_BUFFER12
static const GLenum GL_DRAW_BUFFER12=0x8831
#undef GL_DRAW_BUFFER13
static const GLenum GL_DRAW_BUFFER13=0x8832
#undef GL_DRAW_BUFFER14
static const GLenum GL_DRAW_BUFFER14=0x8833
#undef GL_DRAW_BUFFER15
static const GLenum GL_DRAW_BUFFER15=0x8834
#undef GL_BLEND_EQUATION_ALPHA
static const GLenum GL_BLEND_EQUATION_ALPHA=0x883D
#undef GL_TEXTURE_DEPTH_SIZE
static const GLenum GL_TEXTURE_DEPTH_SIZE=0x884A
#undef GL_DEPTH_TEXTURE_MODE
static const GLenum GL_DEPTH_TEXTURE_MODE=0x884B
#undef GL_TEXTURE_COMPARE_MODE
static const GLenum GL_TEXTURE_COMPARE_MODE=0x884C
#undef GL_TEXTURE_COMPARE_FUNC
static const GLenum GL_TEXTURE_COMPARE_FUNC=0x884D
#undef GL_COMPARE_REF_TO_TEXTURE
static const GLenum GL_COMPARE_REF_TO_TEXTURE=0x884E
#undef GL_COMPARE_R_TO_TEXTURE
static const GLenum GL_COMPARE_R_TO_TEXTURE=0x884E
#undef GL_POINT_SPRITE
static const GLenum GL_POINT_SPRITE=0x8861
#undef GL_COORD_REPLACE
static const GLenum GL_COORD_REPLACE=0x8862
#undef GL_QUERY_COUNTER_BITS
static const GLenum GL_QUERY_COUNTER_BITS=0x8864
#undef GL_CURRENT_QUERY
static const GLenum GL_CURRENT_QUERY=0x8865
#undef GL_QUERY_RESULT
static const GLenum GL_QUERY_RESULT=0x8866
#undef GL_QUERY_RESULT_AVAILABLE
static const GLenum GL_QUERY_RESULT_AVAILABLE=0x8867
#undef GL_MAX_VERTEX_ATTRIBS
static const GLenum GL_MAX_VERTEX_ATTRIBS=0x8869
#undef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED=0x886A
#undef GL_MAX_TEXTURE_COORDS
static const GLenum GL_MAX_TEXTURE_COORDS=0x8871
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
#undef GL_VERTEX_ARRAY_BUFFER_BINDING
static const GLenum GL_VERTEX_ARRAY_BUFFER_BINDING=0x8896
#undef GL_NORMAL_ARRAY_BUFFER_BINDING
static const GLenum GL_NORMAL_ARRAY_BUFFER_BINDING=0x8897
#undef GL_COLOR_ARRAY_BUFFER_BINDING
static const GLenum GL_COLOR_ARRAY_BUFFER_BINDING=0x8898
#undef GL_INDEX_ARRAY_BUFFER_BINDING
static const GLenum GL_INDEX_ARRAY_BUFFER_BINDING=0x8899
#undef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
static const GLenum GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING=0x889A
#undef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
static const GLenum GL_EDGE_FLAG_ARRAY_BUFFER_BINDING=0x889B
#undef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
static const GLenum GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING=0x889C
#undef GL_FOG_COORD_ARRAY_BUFFER_BINDING
static const GLenum GL_FOG_COORD_ARRAY_BUFFER_BINDING=0x889D
#undef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
static const GLenum GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING=0x889D
#undef GL_WEIGHT_ARRAY_BUFFER_BINDING
static const GLenum GL_WEIGHT_ARRAY_BUFFER_BINDING=0x889E
#undef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=0x889F
#undef GL_READ_ONLY
static const GLenum GL_READ_ONLY=0x88B8
#undef GL_WRITE_ONLY
static const GLenum GL_WRITE_ONLY=0x88B9
#undef GL_READ_WRITE
static const GLenum GL_READ_WRITE=0x88BA
#undef GL_BUFFER_ACCESS
static const GLenum GL_BUFFER_ACCESS=0x88BB
#undef GL_BUFFER_MAPPED
static const GLenum GL_BUFFER_MAPPED=0x88BC
#undef GL_BUFFER_MAP_POINTER
static const GLenum GL_BUFFER_MAP_POINTER=0x88BD
#undef GL_STREAM_DRAW
static const GLenum GL_STREAM_DRAW=0x88E0
#undef GL_STREAM_READ
static const GLenum GL_STREAM_READ=0x88E1
#undef GL_STREAM_COPY
static const GLenum GL_STREAM_COPY=0x88E2
#undef GL_STATIC_DRAW
static const GLenum GL_STATIC_DRAW=0x88E4
#undef GL_STATIC_READ
static const GLenum GL_STATIC_READ=0x88E5
#undef GL_STATIC_COPY
static const GLenum GL_STATIC_COPY=0x88E6
#undef GL_DYNAMIC_DRAW
static const GLenum GL_DYNAMIC_DRAW=0x88E8
#undef GL_DYNAMIC_READ
static const GLenum GL_DYNAMIC_READ=0x88E9
#undef GL_DYNAMIC_COPY
static const GLenum GL_DYNAMIC_COPY=0x88EA
#undef GL_PIXEL_PACK_BUFFER
static const GLenum GL_PIXEL_PACK_BUFFER=0x88EB
#undef GL_PIXEL_UNPACK_BUFFER
static const GLenum GL_PIXEL_UNPACK_BUFFER=0x88EC
#undef GL_PIXEL_PACK_BUFFER_BINDING
static const GLenum GL_PIXEL_PACK_BUFFER_BINDING=0x88ED
#undef GL_PIXEL_UNPACK_BUFFER_BINDING
static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING=0x88EF
#undef GL_DEPTH24_STENCIL8
static const GLenum GL_DEPTH24_STENCIL8=0x88F0
#undef GL_TEXTURE_STENCIL_SIZE
static const GLenum GL_TEXTURE_STENCIL_SIZE=0x88F1
#undef GL_VERTEX_ATTRIB_ARRAY_INTEGER
static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER=0x88FD
#undef GL_MAX_ARRAY_TEXTURE_LAYERS
static const GLenum GL_MAX_ARRAY_TEXTURE_LAYERS=0x88FF
#undef GL_MIN_PROGRAM_TEXEL_OFFSET
static const GLenum GL_MIN_PROGRAM_TEXEL_OFFSET=0x8904
#undef GL_MAX_PROGRAM_TEXEL_OFFSET
static const GLenum GL_MAX_PROGRAM_TEXEL_OFFSET=0x8905
#undef GL_SAMPLES_PASSED
static const GLenum GL_SAMPLES_PASSED=0x8914
#undef GL_CLAMP_VERTEX_COLOR
static const GLenum GL_CLAMP_VERTEX_COLOR=0x891A
#undef GL_CLAMP_FRAGMENT_COLOR
static const GLenum GL_CLAMP_FRAGMENT_COLOR=0x891B
#undef GL_CLAMP_READ_COLOR
static const GLenum GL_CLAMP_READ_COLOR=0x891C
#undef GL_FIXED_ONLY
static const GLenum GL_FIXED_ONLY=0x891D
#undef GL_UNIFORM_BUFFER
static const GLenum GL_UNIFORM_BUFFER=0x8A11
#undef GL_UNIFORM_BUFFER_BINDING
static const GLenum GL_UNIFORM_BUFFER_BINDING=0x8A28
#undef GL_UNIFORM_BUFFER_START
static const GLenum GL_UNIFORM_BUFFER_START=0x8A29
#undef GL_UNIFORM_BUFFER_SIZE
static const GLenum GL_UNIFORM_BUFFER_SIZE=0x8A2A
#undef GL_MAX_VERTEX_UNIFORM_BLOCKS
static const GLenum GL_MAX_VERTEX_UNIFORM_BLOCKS=0x8A2B
#undef GL_MAX_GEOMETRY_UNIFORM_BLOCKS
static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS=0x8A2C
#undef GL_MAX_FRAGMENT_UNIFORM_BLOCKS
static const GLenum GL_MAX_FRAGMENT_UNIFORM_BLOCKS=0x8A2D
#undef GL_MAX_COMBINED_UNIFORM_BLOCKS
static const GLenum GL_MAX_COMBINED_UNIFORM_BLOCKS=0x8A2E
#undef GL_MAX_UNIFORM_BUFFER_BINDINGS
static const GLenum GL_MAX_UNIFORM_BUFFER_BINDINGS=0x8A2F
#undef GL_MAX_UNIFORM_BLOCK_SIZE
static const GLenum GL_MAX_UNIFORM_BLOCK_SIZE=0x8A30
#undef GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
static const GLenum GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS=0x8A31
#undef GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS=0x8A32
#undef GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
static const GLenum GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS=0x8A33
#undef GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT
static const GLenum GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT=0x8A34
#undef GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
static const GLenum GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH=0x8A35
#undef GL_ACTIVE_UNIFORM_BLOCKS
static const GLenum GL_ACTIVE_UNIFORM_BLOCKS=0x8A36
#undef GL_UNIFORM_TYPE
static const GLenum GL_UNIFORM_TYPE=0x8A37
#undef GL_UNIFORM_SIZE
static const GLenum GL_UNIFORM_SIZE=0x8A38
#undef GL_UNIFORM_NAME_LENGTH
static const GLenum GL_UNIFORM_NAME_LENGTH=0x8A39
#undef GL_UNIFORM_BLOCK_INDEX
static const GLenum GL_UNIFORM_BLOCK_INDEX=0x8A3A
#undef GL_UNIFORM_OFFSET
static const GLenum GL_UNIFORM_OFFSET=0x8A3B
#undef GL_UNIFORM_ARRAY_STRIDE
static const GLenum GL_UNIFORM_ARRAY_STRIDE=0x8A3C
#undef GL_UNIFORM_MATRIX_STRIDE
static const GLenum GL_UNIFORM_MATRIX_STRIDE=0x8A3D
#undef GL_UNIFORM_IS_ROW_MAJOR
static const GLenum GL_UNIFORM_IS_ROW_MAJOR=0x8A3E
#undef GL_UNIFORM_BLOCK_BINDING
static const GLenum GL_UNIFORM_BLOCK_BINDING=0x8A3F
#undef GL_UNIFORM_BLOCK_DATA_SIZE
static const GLenum GL_UNIFORM_BLOCK_DATA_SIZE=0x8A40
#undef GL_UNIFORM_BLOCK_NAME_LENGTH
static const GLenum GL_UNIFORM_BLOCK_NAME_LENGTH=0x8A41
#undef GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS=0x8A42
#undef GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES=0x8A43
#undef GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER=0x8A44
#undef GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER=0x8A45
#undef GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER=0x8A46
#undef GL_FRAGMENT_SHADER
static const GLenum GL_FRAGMENT_SHADER=0x8B30
#undef GL_VERTEX_SHADER
static const GLenum GL_VERTEX_SHADER=0x8B31
#undef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
static const GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS=0x8B49
#undef GL_MAX_VERTEX_UNIFORM_COMPONENTS
static const GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS=0x8B4A
#undef GL_MAX_VARYING_FLOATS
static const GLenum GL_MAX_VARYING_FLOATS=0x8B4B
#undef GL_MAX_VARYING_COMPONENTS
static const GLenum GL_MAX_VARYING_COMPONENTS=0x8B4B
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
#undef GL_SAMPLER_1D
static const GLenum GL_SAMPLER_1D=0x8B5D
#undef GL_SAMPLER_2D
static const GLenum GL_SAMPLER_2D=0x8B5E
#undef GL_SAMPLER_3D
static const GLenum GL_SAMPLER_3D=0x8B5F
#undef GL_SAMPLER_CUBE
static const GLenum GL_SAMPLER_CUBE=0x8B60
#undef GL_SAMPLER_1D_SHADOW
static const GLenum GL_SAMPLER_1D_SHADOW=0x8B61
#undef GL_SAMPLER_2D_SHADOW
static const GLenum GL_SAMPLER_2D_SHADOW=0x8B62
#undef GL_SAMPLER_2D_RECT
static const GLenum GL_SAMPLER_2D_RECT=0x8B63
#undef GL_SAMPLER_2D_RECT_SHADOW
static const GLenum GL_SAMPLER_2D_RECT_SHADOW=0x8B64
#undef GL_FLOAT_MAT2x3
static const GLenum GL_FLOAT_MAT2x3=0x8B65
#undef GL_FLOAT_MAT2x4
static const GLenum GL_FLOAT_MAT2x4=0x8B66
#undef GL_FLOAT_MAT3x2
static const GLenum GL_FLOAT_MAT3x2=0x8B67
#undef GL_FLOAT_MAT3x4
static const GLenum GL_FLOAT_MAT3x4=0x8B68
#undef GL_FLOAT_MAT4x2
static const GLenum GL_FLOAT_MAT4x2=0x8B69
#undef GL_FLOAT_MAT4x3
static const GLenum GL_FLOAT_MAT4x3=0x8B6A
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
#undef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT=0x8B8B
#undef GL_SHADING_LANGUAGE_VERSION
static const GLenum GL_SHADING_LANGUAGE_VERSION=0x8B8C
#undef GL_CURRENT_PROGRAM
static const GLenum GL_CURRENT_PROGRAM=0x8B8D
#undef GL_TEXTURE_RED_TYPE
static const GLenum GL_TEXTURE_RED_TYPE=0x8C10
#undef GL_TEXTURE_GREEN_TYPE
static const GLenum GL_TEXTURE_GREEN_TYPE=0x8C11
#undef GL_TEXTURE_BLUE_TYPE
static const GLenum GL_TEXTURE_BLUE_TYPE=0x8C12
#undef GL_TEXTURE_ALPHA_TYPE
static const GLenum GL_TEXTURE_ALPHA_TYPE=0x8C13
#undef GL_TEXTURE_DEPTH_TYPE
static const GLenum GL_TEXTURE_DEPTH_TYPE=0x8C16
#undef GL_UNSIGNED_NORMALIZED
static const GLenum GL_UNSIGNED_NORMALIZED=0x8C17
#undef GL_TEXTURE_1D_ARRAY
static const GLenum GL_TEXTURE_1D_ARRAY=0x8C18
#undef GL_PROXY_TEXTURE_1D_ARRAY
static const GLenum GL_PROXY_TEXTURE_1D_ARRAY=0x8C19
#undef GL_TEXTURE_2D_ARRAY
static const GLenum GL_TEXTURE_2D_ARRAY=0x8C1A
#undef GL_PROXY_TEXTURE_2D_ARRAY
static const GLenum GL_PROXY_TEXTURE_2D_ARRAY=0x8C1B
#undef GL_TEXTURE_BINDING_1D_ARRAY
static const GLenum GL_TEXTURE_BINDING_1D_ARRAY=0x8C1C
#undef GL_TEXTURE_BINDING_2D_ARRAY
static const GLenum GL_TEXTURE_BINDING_2D_ARRAY=0x8C1D
#undef GL_TEXTURE_BUFFER
static const GLenum GL_TEXTURE_BUFFER=0x8C2A
#undef GL_MAX_TEXTURE_BUFFER_SIZE
static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE=0x8C2B
#undef GL_TEXTURE_BINDING_BUFFER
static const GLenum GL_TEXTURE_BINDING_BUFFER=0x8C2C
#undef GL_TEXTURE_BUFFER_DATA_STORE_BINDING
static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING=0x8C2D
#undef GL_R11F_G11F_B10F
static const GLenum GL_R11F_G11F_B10F=0x8C3A
#undef GL_UNSIGNED_INT_10F_11F_11F_REV
static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV=0x8C3B
#undef GL_RGB9_E5
static const GLenum GL_RGB9_E5=0x8C3D
#undef GL_UNSIGNED_INT_5_9_9_9_REV
static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV=0x8C3E
#undef GL_TEXTURE_SHARED_SIZE
static const GLenum GL_TEXTURE_SHARED_SIZE=0x8C3F
#undef GL_SRGB
static const GLenum GL_SRGB=0x8C40
#undef GL_SRGB8
static const GLenum GL_SRGB8=0x8C41
#undef GL_SRGB_ALPHA
static const GLenum GL_SRGB_ALPHA=0x8C42
#undef GL_SRGB8_ALPHA8
static const GLenum GL_SRGB8_ALPHA8=0x8C43
#undef GL_SLUMINANCE_ALPHA
static const GLenum GL_SLUMINANCE_ALPHA=0x8C44
#undef GL_SLUMINANCE8_ALPHA8
static const GLenum GL_SLUMINANCE8_ALPHA8=0x8C45
#undef GL_SLUMINANCE
static const GLenum GL_SLUMINANCE=0x8C46
#undef GL_SLUMINANCE8
static const GLenum GL_SLUMINANCE8=0x8C47
#undef GL_COMPRESSED_SRGB
static const GLenum GL_COMPRESSED_SRGB=0x8C48
#undef GL_COMPRESSED_SRGB_ALPHA
static const GLenum GL_COMPRESSED_SRGB_ALPHA=0x8C49
#undef GL_COMPRESSED_SLUMINANCE
static const GLenum GL_COMPRESSED_SLUMINANCE=0x8C4A
#undef GL_COMPRESSED_SLUMINANCE_ALPHA
static const GLenum GL_COMPRESSED_SLUMINANCE_ALPHA=0x8C4B
#undef GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH
static const GLenum GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH=0x8C76
#undef GL_TRANSFORM_FEEDBACK_BUFFER_MODE
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_MODE=0x8C7F
#undef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS=0x8C80
#undef GL_TRANSFORM_FEEDBACK_VARYINGS
static const GLenum GL_TRANSFORM_FEEDBACK_VARYINGS=0x8C83
#undef GL_TRANSFORM_FEEDBACK_BUFFER_START
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START=0x8C84
#undef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE=0x8C85
#undef GL_PRIMITIVES_GENERATED
static const GLenum GL_PRIMITIVES_GENERATED=0x8C87
#undef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN
static const GLenum GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN=0x8C88
#undef GL_RASTERIZER_DISCARD
static const GLenum GL_RASTERIZER_DISCARD=0x8C89
#undef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS=0x8C8A
#undef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS=0x8C8B
#undef GL_INTERLEAVED_ATTRIBS
static const GLenum GL_INTERLEAVED_ATTRIBS=0x8C8C
#undef GL_SEPARATE_ATTRIBS
static const GLenum GL_SEPARATE_ATTRIBS=0x8C8D
#undef GL_TRANSFORM_FEEDBACK_BUFFER
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER=0x8C8E
#undef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING=0x8C8F
#undef GL_POINT_SPRITE_COORD_ORIGIN
static const GLenum GL_POINT_SPRITE_COORD_ORIGIN=0x8CA0
#undef GL_LOWER_LEFT
static const GLenum GL_LOWER_LEFT=0x8CA1
#undef GL_UPPER_LEFT
static const GLenum GL_UPPER_LEFT=0x8CA2
#undef GL_STENCIL_BACK_REF
static const GLenum GL_STENCIL_BACK_REF=0x8CA3
#undef GL_STENCIL_BACK_VALUE_MASK
static const GLenum GL_STENCIL_BACK_VALUE_MASK=0x8CA4
#undef GL_STENCIL_BACK_WRITEMASK
static const GLenum GL_STENCIL_BACK_WRITEMASK=0x8CA5
#undef GL_FRAMEBUFFER_BINDING
static const GLenum GL_FRAMEBUFFER_BINDING=0x8CA6
#undef GL_DRAW_FRAMEBUFFER_BINDING
static const GLenum GL_DRAW_FRAMEBUFFER_BINDING=0x8CA6
#undef GL_RENDERBUFFER_BINDING
static const GLenum GL_RENDERBUFFER_BINDING=0x8CA7
#undef GL_READ_FRAMEBUFFER
static const GLenum GL_READ_FRAMEBUFFER=0x8CA8
#undef GL_DRAW_FRAMEBUFFER
static const GLenum GL_DRAW_FRAMEBUFFER=0x8CA9
#undef GL_READ_FRAMEBUFFER_BINDING
static const GLenum GL_READ_FRAMEBUFFER_BINDING=0x8CAA
#undef GL_RENDERBUFFER_SAMPLES
static const GLenum GL_RENDERBUFFER_SAMPLES=0x8CAB
#undef GL_DEPTH_COMPONENT32F
static const GLenum GL_DEPTH_COMPONENT32F=0x8CAC
#undef GL_DEPTH32F_STENCIL8
static const GLenum GL_DEPTH32F_STENCIL8=0x8CAD
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=0x8CD0
#undef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=0x8CD1
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=0x8CD2
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=0x8CD3
#undef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER=0x8CD4
#undef GL_FRAMEBUFFER_COMPLETE
static const GLenum GL_FRAMEBUFFER_COMPLETE=0x8CD5
#undef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT=0x8CD6
#undef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=0x8CD7
#undef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER=0x8CDB
#undef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER=0x8CDC
#undef GL_FRAMEBUFFER_UNSUPPORTED
static const GLenum GL_FRAMEBUFFER_UNSUPPORTED=0x8CDD
#undef GL_MAX_COLOR_ATTACHMENTS
static const GLenum GL_MAX_COLOR_ATTACHMENTS=0x8CDF
#undef GL_COLOR_ATTACHMENT0
static const GLenum GL_COLOR_ATTACHMENT0=0x8CE0
#undef GL_COLOR_ATTACHMENT1
static const GLenum GL_COLOR_ATTACHMENT1=0x8CE1
#undef GL_COLOR_ATTACHMENT2
static const GLenum GL_COLOR_ATTACHMENT2=0x8CE2
#undef GL_COLOR_ATTACHMENT3
static const GLenum GL_COLOR_ATTACHMENT3=0x8CE3
#undef GL_COLOR_ATTACHMENT4
static const GLenum GL_COLOR_ATTACHMENT4=0x8CE4
#undef GL_COLOR_ATTACHMENT5
static const GLenum GL_COLOR_ATTACHMENT5=0x8CE5
#undef GL_COLOR_ATTACHMENT6
static const GLenum GL_COLOR_ATTACHMENT6=0x8CE6
#undef GL_COLOR_ATTACHMENT7
static const GLenum GL_COLOR_ATTACHMENT7=0x8CE7
#undef GL_COLOR_ATTACHMENT8
static const GLenum GL_COLOR_ATTACHMENT8=0x8CE8
#undef GL_COLOR_ATTACHMENT9
static const GLenum GL_COLOR_ATTACHMENT9=0x8CE9
#undef GL_COLOR_ATTACHMENT10
static const GLenum GL_COLOR_ATTACHMENT10=0x8CEA
#undef GL_COLOR_ATTACHMENT11
static const GLenum GL_COLOR_ATTACHMENT11=0x8CEB
#undef GL_COLOR_ATTACHMENT12
static const GLenum GL_COLOR_ATTACHMENT12=0x8CEC
#undef GL_COLOR_ATTACHMENT13
static const GLenum GL_COLOR_ATTACHMENT13=0x8CED
#undef GL_COLOR_ATTACHMENT14
static const GLenum GL_COLOR_ATTACHMENT14=0x8CEE
#undef GL_COLOR_ATTACHMENT15
static const GLenum GL_COLOR_ATTACHMENT15=0x8CEF
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
#undef GL_STENCIL_INDEX1
static const GLenum GL_STENCIL_INDEX1=0x8D46
#undef GL_STENCIL_INDEX4
static const GLenum GL_STENCIL_INDEX4=0x8D47
#undef GL_STENCIL_INDEX8
static const GLenum GL_STENCIL_INDEX8=0x8D48
#undef GL_STENCIL_INDEX16
static const GLenum GL_STENCIL_INDEX16=0x8D49
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
#undef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE=0x8D56
#undef GL_MAX_SAMPLES
static const GLenum GL_MAX_SAMPLES=0x8D57
#undef GL_RGBA32UI
static const GLenum GL_RGBA32UI=0x8D70
#undef GL_RGB32UI
static const GLenum GL_RGB32UI=0x8D71
#undef GL_RGBA16UI
static const GLenum GL_RGBA16UI=0x8D76
#undef GL_RGB16UI
static const GLenum GL_RGB16UI=0x8D77
#undef GL_RGBA8UI
static const GLenum GL_RGBA8UI=0x8D7C
#undef GL_RGB8UI
static const GLenum GL_RGB8UI=0x8D7D
#undef GL_RGBA32I
static const GLenum GL_RGBA32I=0x8D82
#undef GL_RGB32I
static const GLenum GL_RGB32I=0x8D83
#undef GL_RGBA16I
static const GLenum GL_RGBA16I=0x8D88
#undef GL_RGB16I
static const GLenum GL_RGB16I=0x8D89
#undef GL_RGBA8I
static const GLenum GL_RGBA8I=0x8D8E
#undef GL_RGB8I
static const GLenum GL_RGB8I=0x8D8F
#undef GL_RED_INTEGER
static const GLenum GL_RED_INTEGER=0x8D94
#undef GL_GREEN_INTEGER
static const GLenum GL_GREEN_INTEGER=0x8D95
#undef GL_BLUE_INTEGER
static const GLenum GL_BLUE_INTEGER=0x8D96
#undef GL_ALPHA_INTEGER
static const GLenum GL_ALPHA_INTEGER=0x8D97
#undef GL_RGB_INTEGER
static const GLenum GL_RGB_INTEGER=0x8D98
#undef GL_RGBA_INTEGER
static const GLenum GL_RGBA_INTEGER=0x8D99
#undef GL_BGR_INTEGER
static const GLenum GL_BGR_INTEGER=0x8D9A
#undef GL_BGRA_INTEGER
static const GLenum GL_BGRA_INTEGER=0x8D9B
#undef GL_FLOAT_32_UNSIGNED_INT_24_8_REV
static const GLenum GL_FLOAT_32_UNSIGNED_INT_24_8_REV=0x8DAD
#undef GL_FRAMEBUFFER_SRGB
static const GLenum GL_FRAMEBUFFER_SRGB=0x8DB9
#undef GL_COMPRESSED_RED_RGTC1
static const GLenum GL_COMPRESSED_RED_RGTC1=0x8DBB
#undef GL_COMPRESSED_SIGNED_RED_RGTC1
static const GLenum GL_COMPRESSED_SIGNED_RED_RGTC1=0x8DBC
#undef GL_COMPRESSED_RG_RGTC2
static const GLenum GL_COMPRESSED_RG_RGTC2=0x8DBD
#undef GL_COMPRESSED_SIGNED_RG_RGTC2
static const GLenum GL_COMPRESSED_SIGNED_RG_RGTC2=0x8DBE
#undef GL_SAMPLER_1D_ARRAY
static const GLenum GL_SAMPLER_1D_ARRAY=0x8DC0
#undef GL_SAMPLER_2D_ARRAY
static const GLenum GL_SAMPLER_2D_ARRAY=0x8DC1
#undef GL_SAMPLER_BUFFER
static const GLenum GL_SAMPLER_BUFFER=0x8DC2
#undef GL_SAMPLER_1D_ARRAY_SHADOW
static const GLenum GL_SAMPLER_1D_ARRAY_SHADOW=0x8DC3
#undef GL_SAMPLER_2D_ARRAY_SHADOW
static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW=0x8DC4
#undef GL_SAMPLER_CUBE_SHADOW
static const GLenum GL_SAMPLER_CUBE_SHADOW=0x8DC5
#undef GL_UNSIGNED_INT_VEC2
static const GLenum GL_UNSIGNED_INT_VEC2=0x8DC6
#undef GL_UNSIGNED_INT_VEC3
static const GLenum GL_UNSIGNED_INT_VEC3=0x8DC7
#undef GL_UNSIGNED_INT_VEC4
static const GLenum GL_UNSIGNED_INT_VEC4=0x8DC8
#undef GL_INT_SAMPLER_1D
static const GLenum GL_INT_SAMPLER_1D=0x8DC9
#undef GL_INT_SAMPLER_2D
static const GLenum GL_INT_SAMPLER_2D=0x8DCA
#undef GL_INT_SAMPLER_3D
static const GLenum GL_INT_SAMPLER_3D=0x8DCB
#undef GL_INT_SAMPLER_CUBE
static const GLenum GL_INT_SAMPLER_CUBE=0x8DCC
#undef GL_INT_SAMPLER_2D_RECT
static const GLenum GL_INT_SAMPLER_2D_RECT=0x8DCD
#undef GL_INT_SAMPLER_1D_ARRAY
static const GLenum GL_INT_SAMPLER_1D_ARRAY=0x8DCE
#undef GL_INT_SAMPLER_2D_ARRAY
static const GLenum GL_INT_SAMPLER_2D_ARRAY=0x8DCF
#undef GL_INT_SAMPLER_BUFFER
static const GLenum GL_INT_SAMPLER_BUFFER=0x8DD0
#undef GL_UNSIGNED_INT_SAMPLER_1D
static const GLenum GL_UNSIGNED_INT_SAMPLER_1D=0x8DD1
#undef GL_UNSIGNED_INT_SAMPLER_2D
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D=0x8DD2
#undef GL_UNSIGNED_INT_SAMPLER_3D
static const GLenum GL_UNSIGNED_INT_SAMPLER_3D=0x8DD3
#undef GL_UNSIGNED_INT_SAMPLER_CUBE
static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE=0x8DD4
#undef GL_UNSIGNED_INT_SAMPLER_2D_RECT
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_RECT=0x8DD5
#undef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
static const GLenum GL_UNSIGNED_INT_SAMPLER_1D_ARRAY=0x8DD6
#undef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY=0x8DD7
#undef GL_UNSIGNED_INT_SAMPLER_BUFFER
static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER=0x8DD8
#undef GL_QUERY_WAIT
static const GLenum GL_QUERY_WAIT=0x8E13
#undef GL_QUERY_NO_WAIT
static const GLenum GL_QUERY_NO_WAIT=0x8E14
#undef GL_QUERY_BY_REGION_WAIT
static const GLenum GL_QUERY_BY_REGION_WAIT=0x8E15
#undef GL_QUERY_BY_REGION_NO_WAIT
static const GLenum GL_QUERY_BY_REGION_NO_WAIT=0x8E16
#undef GL_COPY_READ_BUFFER
static const GLenum GL_COPY_READ_BUFFER=0x8F36
#undef GL_COPY_WRITE_BUFFER
static const GLenum GL_COPY_WRITE_BUFFER=0x8F37
#undef GL_R8_SNORM
static const GLenum GL_R8_SNORM=0x8F94
#undef GL_RG8_SNORM
static const GLenum GL_RG8_SNORM=0x8F95
#undef GL_RGB8_SNORM
static const GLenum GL_RGB8_SNORM=0x8F96
#undef GL_RGBA8_SNORM
static const GLenum GL_RGBA8_SNORM=0x8F97
#undef GL_R16_SNORM
static const GLenum GL_R16_SNORM=0x8F98
#undef GL_RG16_SNORM
static const GLenum GL_RG16_SNORM=0x8F99
#undef GL_RGB16_SNORM
static const GLenum GL_RGB16_SNORM=0x8F9A
#undef GL_RGBA16_SNORM
static const GLenum GL_RGBA16_SNORM=0x8F9B
#undef GL_SIGNED_NORMALIZED
static const GLenum GL_SIGNED_NORMALIZED=0x8F9C
#undef GL_PRIMITIVE_RESTART
static const GLenum GL_PRIMITIVE_RESTART=0x8F9D
#undef GL_PRIMITIVE_RESTART_INDEX
static const GLenum GL_PRIMITIVE_RESTART_INDEX=0x8F9E
#undef GL_BUFFER_ACCESS_FLAGS
static const GLenum GL_BUFFER_ACCESS_FLAGS=0x911F
#undef GL_BUFFER_MAP_LENGTH
static const GLenum GL_BUFFER_MAP_LENGTH=0x9120
#undef GL_BUFFER_MAP_OFFSET
static const GLenum GL_BUFFER_MAP_OFFSET=0x9121
#undef GL_ALL_ATTRIB_BITS
static const GLenum GL_ALL_ATTRIB_BITS=0xFFFFFFFF
#undef GL_INVALID_INDEX
static const GLenum GL_INVALID_INDEX=0xFFFFFFFF
#undef GL_CLIENT_ALL_ATTRIB_BITS
static const GLenum GL_CLIENT_ALL_ATTRIB_BITS=0xFFFFFFFF
#undef GL_ONE
static const GLenum GL_ONE=1
#undef GL_TRUE
static const GLenum GL_TRUE=1
extern "C" {
extern void glAccum(GLenum,GLfloat);
extern void glAlphaFunc(GLenum,GLfloat);
extern GLboolean glAreTexturesResident(GLsizei,const GLuint *,GLboolean *);
extern void glArrayElement(GLint);
extern void glBegin(GLenum);
extern void glBindTexture(GLenum,GLuint);
extern void glBitmap(GLsizei,GLsizei,GLfloat,GLfloat,GLfloat,GLfloat,const GLubyte *);
extern void glBlendFunc(GLenum,GLenum);
extern void glCallList(GLuint);
extern void glCallLists(GLsizei,GLenum,const void *);
extern void glClear(GLbitfield);
extern void glClearAccum(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearColor(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glClearDepth(GLdouble);
extern void glClearIndex(GLfloat);
extern void glClearStencil(GLint);
extern void glClipPlane(GLenum,const GLdouble *);
extern void glColor3b(GLbyte,GLbyte,GLbyte);
extern void glColor3bv(const GLbyte *);
extern void glColor3d(GLdouble,GLdouble,GLdouble);
extern void glColor3dv(const GLdouble *);
extern void glColor3f(GLfloat,GLfloat,GLfloat);
extern void glColor3fv(const GLfloat *);
extern void glColor3i(GLint,GLint,GLint);
extern void glColor3iv(const GLint *);
extern void glColor3s(GLshort,GLshort,GLshort);
extern void glColor3sv(const GLshort *);
extern void glColor3ub(GLubyte,GLubyte,GLubyte);
extern void glColor3ubv(const GLubyte *);
extern void glColor3ui(GLuint,GLuint,GLuint);
extern void glColor3uiv(const GLuint *);
extern void glColor3us(GLushort,GLushort,GLushort);
extern void glColor3usv(const GLushort *);
extern void glColor4b(GLbyte,GLbyte,GLbyte,GLbyte);
extern void glColor4bv(const GLbyte *);
extern void glColor4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glColor4dv(const GLdouble *);
extern void glColor4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glColor4fv(const GLfloat *);
extern void glColor4i(GLint,GLint,GLint,GLint);
extern void glColor4iv(const GLint *);
extern void glColor4s(GLshort,GLshort,GLshort,GLshort);
extern void glColor4sv(const GLshort *);
extern void glColor4ub(GLubyte,GLubyte,GLubyte,GLubyte);
extern void glColor4ubv(const GLubyte *);
extern void glColor4ui(GLuint,GLuint,GLuint,GLuint);
extern void glColor4uiv(const GLuint *);
extern void glColor4us(GLushort,GLushort,GLushort,GLushort);
extern void glColor4usv(const GLushort *);
extern void glColorMask(GLboolean,GLboolean,GLboolean,GLboolean);
extern void glColorMaterial(GLenum,GLenum);
extern void glColorPointer(GLint,GLenum,GLsizei,const void *);
extern void glCopyPixels(GLint,GLint,GLsizei,GLsizei,GLenum);
extern void glCopyTexImage1D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLint);
extern void glCopyTexImage2D(GLenum,GLint,GLenum,GLint,GLint,GLsizei,GLsizei,GLint);
extern void glCopyTexSubImage1D(GLenum,GLint,GLint,GLint,GLint,GLsizei);
extern void glCopyTexSubImage2D(GLenum,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
extern void glCullFace(GLenum);
extern void glDeleteLists(GLuint,GLsizei);
extern void glDeleteTextures(GLsizei,const GLuint *);
extern void glDepthFunc(GLenum);
extern void glDepthMask(GLboolean);
extern void glDepthRange(GLdouble,GLdouble);
extern void glDisable(GLenum);
extern void glDisableClientState(GLenum);
extern void glDrawArrays(GLenum,GLint,GLsizei);
extern void glDrawBuffer(GLenum);
extern void glDrawElements(GLenum,GLsizei,GLenum,const void *);
extern void glDrawPixels(GLsizei,GLsizei,GLenum,GLenum,const void *);
extern void glEdgeFlag(GLboolean);
extern void glEdgeFlagPointer(GLsizei,const void *);
extern void glEdgeFlagv(const GLboolean *);
extern void glEnable(GLenum);
extern void glEnableClientState(GLenum);
extern void glEnd();
extern void glEndList();
extern void glEvalCoord1d(GLdouble);
extern void glEvalCoord1dv(const GLdouble *);
extern void glEvalCoord1f(GLfloat);
extern void glEvalCoord1fv(const GLfloat *);
extern void glEvalCoord2d(GLdouble,GLdouble);
extern void glEvalCoord2dv(const GLdouble *);
extern void glEvalCoord2f(GLfloat,GLfloat);
extern void glEvalCoord2fv(const GLfloat *);
extern void glEvalMesh1(GLenum,GLint,GLint);
extern void glEvalMesh2(GLenum,GLint,GLint,GLint,GLint);
extern void glEvalPoint1(GLint);
extern void glEvalPoint2(GLint,GLint);
extern void glFeedbackBuffer(GLsizei,GLenum,GLfloat *);
extern void glFinish();
extern void glFlush();
extern void glFogf(GLenum,GLfloat);
extern void glFogfv(GLenum,const GLfloat *);
extern void glFogi(GLenum,GLint);
extern void glFogiv(GLenum,const GLint *);
extern void glFrontFace(GLenum);
extern void glFrustum(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
extern GLuint glGenLists(GLsizei);
extern void glGenTextures(GLsizei,GLuint *);
extern void glGetBooleanv(GLenum,GLboolean *);
extern void glGetClipPlane(GLenum,GLdouble *);
extern void glGetDoublev(GLenum,GLdouble *);
extern GLenum glGetError();
extern void glGetFloatv(GLenum,GLfloat *);
extern void glGetIntegerv(GLenum,GLint *);
extern void glGetLightfv(GLenum,GLenum,GLfloat *);
extern void glGetLightiv(GLenum,GLenum,GLint *);
extern void glGetMapdv(GLenum,GLenum,GLdouble *);
extern void glGetMapfv(GLenum,GLenum,GLfloat *);
extern void glGetMapiv(GLenum,GLenum,GLint *);
extern void glGetMaterialfv(GLenum,GLenum,GLfloat *);
extern void glGetMaterialiv(GLenum,GLenum,GLint *);
extern void glGetPixelMapfv(GLenum,GLfloat *);
extern void glGetPixelMapuiv(GLenum,GLuint *);
extern void glGetPixelMapusv(GLenum,GLushort *);
extern void glGetPointerv(GLenum,void **);
extern void glGetPolygonStipple(GLubyte *);
extern const GLubyte * glGetString(GLenum);
extern void glGetTexEnvfv(GLenum,GLenum,GLfloat *);
extern void glGetTexEnviv(GLenum,GLenum,GLint *);
extern void glGetTexGendv(GLenum,GLenum,GLdouble *);
extern void glGetTexGenfv(GLenum,GLenum,GLfloat *);
extern void glGetTexGeniv(GLenum,GLenum,GLint *);
extern void glGetTexImage(GLenum,GLint,GLenum,GLenum,void *);
extern void glGetTexLevelParameterfv(GLenum,GLint,GLenum,GLfloat *);
extern void glGetTexLevelParameteriv(GLenum,GLint,GLenum,GLint *);
extern void glGetTexParameterfv(GLenum,GLenum,GLfloat *);
extern void glGetTexParameteriv(GLenum,GLenum,GLint *);
extern void glHint(GLenum,GLenum);
extern void glIndexMask(GLuint);
extern void glIndexPointer(GLenum,GLsizei,const void *);
extern void glIndexd(GLdouble);
extern void glIndexdv(const GLdouble *);
extern void glIndexf(GLfloat);
extern void glIndexfv(const GLfloat *);
extern void glIndexi(GLint);
extern void glIndexiv(const GLint *);
extern void glIndexs(GLshort);
extern void glIndexsv(const GLshort *);
extern void glIndexub(GLubyte);
extern void glIndexubv(const GLubyte *);
extern void glInitNames();
extern void glInterleavedArrays(GLenum,GLsizei,const void *);
extern GLboolean glIsEnabled(GLenum);
extern GLboolean glIsList(GLuint);
extern GLboolean glIsTexture(GLuint);
extern void glLightModelf(GLenum,GLfloat);
extern void glLightModelfv(GLenum,const GLfloat *);
extern void glLightModeli(GLenum,GLint);
extern void glLightModeliv(GLenum,const GLint *);
extern void glLightf(GLenum,GLenum,GLfloat);
extern void glLightfv(GLenum,GLenum,const GLfloat *);
extern void glLighti(GLenum,GLenum,GLint);
extern void glLightiv(GLenum,GLenum,const GLint *);
extern void glLineStipple(GLint,GLushort);
extern void glLineWidth(GLfloat);
extern void glListBase(GLuint);
extern void glLoadIdentity();
extern void glLoadMatrixd(const GLdouble *);
extern void glLoadMatrixf(const GLfloat *);
extern void glLoadName(GLuint);
extern void glLogicOp(GLenum);
extern void glMap1d(GLenum,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
extern void glMap1f(GLenum,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
extern void glMap2d(GLenum,GLdouble,GLdouble,GLint,GLint,GLdouble,GLdouble,GLint,GLint,const GLdouble *);
extern void glMap2f(GLenum,GLfloat,GLfloat,GLint,GLint,GLfloat,GLfloat,GLint,GLint,const GLfloat *);
extern void glMapGrid1d(GLint,GLdouble,GLdouble);
extern void glMapGrid1f(GLint,GLfloat,GLfloat);
extern void glMapGrid2d(GLint,GLdouble,GLdouble,GLint,GLdouble,GLdouble);
extern void glMapGrid2f(GLint,GLfloat,GLfloat,GLint,GLfloat,GLfloat);
extern void glMaterialf(GLenum,GLenum,GLfloat);
extern void glMaterialfv(GLenum,GLenum,const GLfloat *);
extern void glMateriali(GLenum,GLenum,GLint);
extern void glMaterialiv(GLenum,GLenum,const GLint *);
extern void glMatrixMode(GLenum);
extern void glMultMatrixd(const GLdouble *);
extern void glMultMatrixf(const GLfloat *);
extern void glNewList(GLuint,GLenum);
extern void glNormal3b(GLbyte,GLbyte,GLbyte);
extern void glNormal3bv(const GLbyte *);
extern void glNormal3d(GLdouble,GLdouble,GLdouble);
extern void glNormal3dv(const GLdouble *);
extern void glNormal3f(GLfloat,GLfloat,GLfloat);
extern void glNormal3fv(const GLfloat *);
extern void glNormal3i(GLint,GLint,GLint);
extern void glNormal3iv(const GLint *);
extern void glNormal3s(GLshort,GLshort,GLshort);
extern void glNormal3sv(const GLshort *);
extern void glNormalPointer(GLenum,GLsizei,const void *);
extern void glOrtho(GLdouble,GLdouble,GLdouble,GLdouble,GLdouble,GLdouble);
extern void glPassThrough(GLfloat);
extern void glPixelMapfv(GLenum,GLsizei,const GLfloat *);
extern void glPixelMapuiv(GLenum,GLsizei,const GLuint *);
extern void glPixelMapusv(GLenum,GLsizei,const GLushort *);
extern void glPixelStoref(GLenum,GLfloat);
extern void glPixelStorei(GLenum,GLint);
extern void glPixelTransferf(GLenum,GLfloat);
extern void glPixelTransferi(GLenum,GLint);
extern void glPixelZoom(GLfloat,GLfloat);
extern void glPointSize(GLfloat);
extern void glPolygonMode(GLenum,GLenum);
extern void glPolygonOffset(GLfloat,GLfloat);
extern void glPolygonStipple(const GLubyte *);
extern void glPopAttrib();
extern void glPopClientAttrib();
extern void glPopMatrix();
extern void glPopName();
extern void glPrioritizeTextures(GLsizei,const GLuint *,const GLfloat *);
extern void glPushAttrib(GLbitfield);
extern void glPushClientAttrib(GLbitfield);
extern void glPushMatrix();
extern void glPushName(GLuint);
extern void glRasterPos2d(GLdouble,GLdouble);
extern void glRasterPos2dv(const GLdouble *);
extern void glRasterPos2f(GLfloat,GLfloat);
extern void glRasterPos2fv(const GLfloat *);
extern void glRasterPos2i(GLint,GLint);
extern void glRasterPos2iv(const GLint *);
extern void glRasterPos2s(GLshort,GLshort);
extern void glRasterPos2sv(const GLshort *);
extern void glRasterPos3d(GLdouble,GLdouble,GLdouble);
extern void glRasterPos3dv(const GLdouble *);
extern void glRasterPos3f(GLfloat,GLfloat,GLfloat);
extern void glRasterPos3fv(const GLfloat *);
extern void glRasterPos3i(GLint,GLint,GLint);
extern void glRasterPos3iv(const GLint *);
extern void glRasterPos3s(GLshort,GLshort,GLshort);
extern void glRasterPos3sv(const GLshort *);
extern void glRasterPos4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRasterPos4dv(const GLdouble *);
extern void glRasterPos4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glRasterPos4fv(const GLfloat *);
extern void glRasterPos4i(GLint,GLint,GLint,GLint);
extern void glRasterPos4iv(const GLint *);
extern void glRasterPos4s(GLshort,GLshort,GLshort,GLshort);
extern void glRasterPos4sv(const GLshort *);
extern void glReadBuffer(GLenum);
extern void glReadPixels(GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,void *);
extern void glRectd(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRectdv(const GLdouble *,const GLdouble *);
extern void glRectf(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glRectfv(const GLfloat *,const GLfloat *);
extern void glRecti(GLint,GLint,GLint,GLint);
extern void glRectiv(const GLint *,const GLint *);
extern void glRects(GLshort,GLshort,GLshort,GLshort);
extern void glRectsv(const GLshort *,const GLshort *);
extern GLint glRenderMode(GLenum);
extern void glRotated(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glRotatef(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glScaled(GLdouble,GLdouble,GLdouble);
extern void glScalef(GLfloat,GLfloat,GLfloat);
extern void glScissor(GLint,GLint,GLsizei,GLsizei);
extern void glSelectBuffer(GLsizei,GLuint *);
extern void glShadeModel(GLenum);
extern void glStencilFunc(GLenum,GLint,GLuint);
extern void glStencilMask(GLuint);
extern void glStencilOp(GLenum,GLenum,GLenum);
extern void glTexCoord1d(GLdouble);
extern void glTexCoord1dv(const GLdouble *);
extern void glTexCoord1f(GLfloat);
extern void glTexCoord1fv(const GLfloat *);
extern void glTexCoord1i(GLint);
extern void glTexCoord1iv(const GLint *);
extern void glTexCoord1s(GLshort);
extern void glTexCoord1sv(const GLshort *);
extern void glTexCoord2d(GLdouble,GLdouble);
extern void glTexCoord2dv(const GLdouble *);
extern void glTexCoord2f(GLfloat,GLfloat);
extern void glTexCoord2fv(const GLfloat *);
extern void glTexCoord2i(GLint,GLint);
extern void glTexCoord2iv(const GLint *);
extern void glTexCoord2s(GLshort,GLshort);
extern void glTexCoord2sv(const GLshort *);
extern void glTexCoord3d(GLdouble,GLdouble,GLdouble);
extern void glTexCoord3dv(const GLdouble *);
extern void glTexCoord3f(GLfloat,GLfloat,GLfloat);
extern void glTexCoord3fv(const GLfloat *);
extern void glTexCoord3i(GLint,GLint,GLint);
extern void glTexCoord3iv(const GLint *);
extern void glTexCoord3s(GLshort,GLshort,GLshort);
extern void glTexCoord3sv(const GLshort *);
extern void glTexCoord4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glTexCoord4dv(const GLdouble *);
extern void glTexCoord4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glTexCoord4fv(const GLfloat *);
extern void glTexCoord4i(GLint,GLint,GLint,GLint);
extern void glTexCoord4iv(const GLint *);
extern void glTexCoord4s(GLshort,GLshort,GLshort,GLshort);
extern void glTexCoord4sv(const GLshort *);
extern void glTexCoordPointer(GLint,GLenum,GLsizei,const void *);
extern void glTexEnvf(GLenum,GLenum,GLfloat);
extern void glTexEnvfv(GLenum,GLenum,const GLfloat *);
extern void glTexEnvi(GLenum,GLenum,GLint);
extern void glTexEnviv(GLenum,GLenum,const GLint *);
extern void glTexGend(GLenum,GLenum,GLdouble);
extern void glTexGendv(GLenum,GLenum,const GLdouble *);
extern void glTexGenf(GLenum,GLenum,GLfloat);
extern void glTexGenfv(GLenum,GLenum,const GLfloat *);
extern void glTexGeni(GLenum,GLenum,GLint);
extern void glTexGeniv(GLenum,GLenum,const GLint *);
extern void glTexImage1D(GLenum,GLint,GLint,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexImage2D(GLenum,GLint,GLint,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
extern void glTexParameterf(GLenum,GLenum,GLfloat);
extern void glTexParameterfv(GLenum,GLenum,const GLfloat *);
extern void glTexParameteri(GLenum,GLenum,GLint);
extern void glTexParameteriv(GLenum,GLenum,const GLint *);
extern void glTexSubImage1D(GLenum,GLint,GLint,GLsizei,GLenum,GLenum,const void *);
extern void glTexSubImage2D(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLenum,const void *);
extern void glTranslated(GLdouble,GLdouble,GLdouble);
extern void glTranslatef(GLfloat,GLfloat,GLfloat);
extern void glVertex2d(GLdouble,GLdouble);
extern void glVertex2dv(const GLdouble *);
extern void glVertex2f(GLfloat,GLfloat);
extern void glVertex2fv(const GLfloat *);
extern void glVertex2i(GLint,GLint);
extern void glVertex2iv(const GLint *);
extern void glVertex2s(GLshort,GLshort);
extern void glVertex2sv(const GLshort *);
extern void glVertex3d(GLdouble,GLdouble,GLdouble);
extern void glVertex3dv(const GLdouble *);
extern void glVertex3f(GLfloat,GLfloat,GLfloat);
extern void glVertex3fv(const GLfloat *);
extern void glVertex3i(GLint,GLint,GLint);
extern void glVertex3iv(const GLint *);
extern void glVertex3s(GLshort,GLshort,GLshort);
extern void glVertex3sv(const GLshort *);
extern void glVertex4d(GLdouble,GLdouble,GLdouble,GLdouble);
extern void glVertex4dv(const GLdouble *);
extern void glVertex4f(GLfloat,GLfloat,GLfloat,GLfloat);
extern void glVertex4fv(const GLfloat *);
extern void glVertex4i(GLint,GLint,GLint,GLint);
extern void glVertex4iv(const GLint *);
extern void glVertex4s(GLshort,GLshort,GLshort,GLshort);
extern void glVertex4sv(const GLshort *);
extern void glVertexPointer(GLint,GLenum,GLsizei,const void *);
extern void glViewport(GLint,GLint,GLsizei,GLsizei);
}
namespace gl{

static inline void Accum(GLenum op1,GLfloat value1)
{
	 glAccum(op1,value1);
}
typedef void (*PFNGLACTIVETEXTUREPROC_HPP)(GLenum);
static inline void ActiveTexture(GLenum texture1)
{
	static PFNGLACTIVETEXTUREPROC_HPP fn=reinterpret_cast<PFNGLACTIVETEXTUREPROC_HPP>(_impl::_get_proc_address("glActiveTexture",3,1));
	 fn(texture1);
}
static inline void AlphaFunc(GLenum func1,GLfloat ref1)
{
	 glAlphaFunc(func1,ref1);
}
static inline GLboolean AreTexturesResident(GLsizei n1,const GLuint * textures1,GLboolean * residences1)
{
	return glAreTexturesResident(n1,textures1,residences1);
}
static inline void ArrayElement(GLint i1)
{
	 glArrayElement(i1);
}
typedef void (*PFNGLATTACHSHADERPROC_HPP)(GLuint,GLuint);
static inline void AttachShader(GLuint program1,GLuint shader1)
{
	static PFNGLATTACHSHADERPROC_HPP fn=reinterpret_cast<PFNGLATTACHSHADERPROC_HPP>(_impl::_get_proc_address("glAttachShader",3,1));
	 fn(program1,shader1);
}
static inline void Begin(GLenum mode1)
{
	 glBegin(mode1);
}
typedef void (*PFNGLBEGINCONDITIONALRENDERPROC_HPP)(GLuint,GLenum);
static inline void BeginConditionalRender(GLuint id1,GLenum mode1)
{
	static PFNGLBEGINCONDITIONALRENDERPROC_HPP fn=reinterpret_cast<PFNGLBEGINCONDITIONALRENDERPROC_HPP>(_impl::_get_proc_address("glBeginConditionalRender",3,1));
	 fn(id1,mode1);
}
typedef void (*PFNGLBEGINQUERYPROC_HPP)(GLenum,GLuint);
static inline void BeginQuery(GLenum target1,GLuint id1)
{
	static PFNGLBEGINQUERYPROC_HPP fn=reinterpret_cast<PFNGLBEGINQUERYPROC_HPP>(_impl::_get_proc_address("glBeginQuery",3,1));
	 fn(target1,id1);
}
typedef void (*PFNGLBEGINTRANSFORMFEEDBACKPROC_HPP)(GLenum);
static inline void BeginTransformFeedback(GLenum primitiveMode1)
{
	static PFNGLBEGINTRANSFORMFEEDBACKPROC_HPP fn=reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKPROC_HPP>(_impl::_get_proc_address("glBeginTransformFeedback",3,1));
	 fn(primitiveMode1);
}
typedef void (*PFNGLBINDATTRIBLOCATIONPROC_HPP)(GLuint,GLuint,const GLchar *);
static inline void BindAttribLocation(GLuint program1,GLuint index1,const GLchar * name1)
{
	static PFNGLBINDATTRIBLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC_HPP>(_impl::_get_proc_address("glBindAttribLocation",3,1));
	 fn(program1,index1,name1);
}
typedef void (*PFNGLBINDBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindBuffer(GLenum target1,GLuint buffer1)
{
	static PFNGLBINDBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDBUFFERPROC_HPP>(_impl::_get_proc_address("glBindBuffer",3,1));
	 fn(target1,buffer1);
}
typedef void (*PFNGLBINDBUFFERBASEPROC_HPP)(GLenum,GLuint,GLuint);
static inline void BindBufferBase(GLenum target1,GLuint index1,GLuint buffer1)
{
	static PFNGLBINDBUFFERBASEPROC_HPP fn=reinterpret_cast<PFNGLBINDBUFFERBASEPROC_HPP>(_impl::_get_proc_address("glBindBufferBase",3,1));
	 fn(target1,index1,buffer1);
}
typedef void (*PFNGLBINDBUFFERRANGEPROC_HPP)(GLenum,GLuint,GLuint,GLintptr,GLsizeiptr);
static inline void BindBufferRange(GLenum target1,GLuint index1,GLuint buffer1,GLintptr offset1,GLsizeiptr size1)
{
	static PFNGLBINDBUFFERRANGEPROC_HPP fn=reinterpret_cast<PFNGLBINDBUFFERRANGEPROC_HPP>(_impl::_get_proc_address("glBindBufferRange",3,1));
	 fn(target1,index1,buffer1,offset1,size1);
}
typedef void (*PFNGLBINDFRAGDATALOCATIONPROC_HPP)(GLuint,GLuint,const GLchar *);
static inline void BindFragDataLocation(GLuint program1,GLuint color1,const GLchar * name1)
{
	static PFNGLBINDFRAGDATALOCATIONPROC_HPP fn=reinterpret_cast<PFNGLBINDFRAGDATALOCATIONPROC_HPP>(_impl::_get_proc_address("glBindFragDataLocation",3,1));
	 fn(program1,color1,name1);
}
typedef void (*PFNGLBINDFRAMEBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindFramebuffer(GLenum target1,GLuint framebuffer1)
{
	static PFNGLBINDFRAMEBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC_HPP>(_impl::_get_proc_address("glBindFramebuffer",3,1));
	 fn(target1,framebuffer1);
}
typedef void (*PFNGLBINDRENDERBUFFERPROC_HPP)(GLenum,GLuint);
static inline void BindRenderbuffer(GLenum target1,GLuint renderbuffer1)
{
	static PFNGLBINDRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBINDRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glBindRenderbuffer",3,1));
	 fn(target1,renderbuffer1);
}
static inline void BindTexture(GLenum target1,GLuint texture1)
{
	 glBindTexture(target1,texture1);
}
typedef void (*PFNGLBINDVERTEXARRAYPROC_HPP)(GLuint);
static inline void BindVertexArray(GLuint array1)
{
	static PFNGLBINDVERTEXARRAYPROC_HPP fn=reinterpret_cast<PFNGLBINDVERTEXARRAYPROC_HPP>(_impl::_get_proc_address("glBindVertexArray",3,1));
	 fn(array1);
}
static inline void Bitmap(GLsizei width1,GLsizei height1,GLfloat xorig1,GLfloat yorig1,GLfloat xmove1,GLfloat ymove1,const GLubyte * bitmap1)
{
	 glBitmap(width1,height1,xorig1,yorig1,xmove1,ymove1,bitmap1);
}
typedef void (*PFNGLBLENDCOLORPROC_HPP)(GLfloat,GLfloat,GLfloat,GLfloat);
static inline void BlendColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	static PFNGLBLENDCOLORPROC_HPP fn=reinterpret_cast<PFNGLBLENDCOLORPROC_HPP>(_impl::_get_proc_address("glBlendColor",3,1));
	 fn(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLBLENDEQUATIONPROC_HPP)(GLenum);
static inline void BlendEquation(GLenum mode1)
{
	static PFNGLBLENDEQUATIONPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONPROC_HPP>(_impl::_get_proc_address("glBlendEquation",3,1));
	 fn(mode1);
}
typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC_HPP)(GLenum,GLenum);
static inline void BlendEquationSeparate(GLenum modeRGB1,GLenum modeAlpha1)
{
	static PFNGLBLENDEQUATIONSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC_HPP>(_impl::_get_proc_address("glBlendEquationSeparate",3,1));
	 fn(modeRGB1,modeAlpha1);
}
static inline void BlendFunc(GLenum sfactor1,GLenum dfactor1)
{
	 glBlendFunc(sfactor1,dfactor1);
}
typedef void (*PFNGLBLENDFUNCSEPARATEPROC_HPP)(GLenum,GLenum,GLenum,GLenum);
static inline void BlendFuncSeparate(GLenum sfactorRGB1,GLenum dfactorRGB1,GLenum sfactorAlpha1,GLenum dfactorAlpha1)
{
	static PFNGLBLENDFUNCSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC_HPP>(_impl::_get_proc_address("glBlendFuncSeparate",3,1));
	 fn(sfactorRGB1,dfactorRGB1,sfactorAlpha1,dfactorAlpha1);
}
typedef void (*PFNGLBLITFRAMEBUFFERPROC_HPP)(GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLint,GLbitfield,GLenum);
static inline void BlitFramebuffer(GLint srcX01,GLint srcY01,GLint srcX11,GLint srcY11,GLint dstX01,GLint dstY01,GLint dstX11,GLint dstY11,GLbitfield mask1,GLenum filter1)
{
	static PFNGLBLITFRAMEBUFFERPROC_HPP fn=reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC_HPP>(_impl::_get_proc_address("glBlitFramebuffer",3,1));
	 fn(srcX01,srcY01,srcX11,srcY11,dstX01,dstY01,dstX11,dstY11,mask1,filter1);
}
typedef void (*PFNGLBUFFERDATAPROC_HPP)(GLenum,GLsizeiptr,const void *,GLenum);
static inline void BufferData(GLenum target1,GLsizeiptr size1,const void * data1,GLenum usage1)
{
	static PFNGLBUFFERDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERDATAPROC_HPP>(_impl::_get_proc_address("glBufferData",3,1));
	 fn(target1,size1,data1,usage1);
}
typedef void (*PFNGLBUFFERSUBDATAPROC_HPP)(GLenum,GLintptr,GLsizeiptr,const void *);
static inline void BufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,const void * data1)
{
	static PFNGLBUFFERSUBDATAPROC_HPP fn=reinterpret_cast<PFNGLBUFFERSUBDATAPROC_HPP>(_impl::_get_proc_address("glBufferSubData",3,1));
	 fn(target1,offset1,size1,data1);
}
static inline void CallList(GLuint list1)
{
	 glCallList(list1);
}
static inline void CallLists(GLsizei n1,GLenum type1,const void * lists1)
{
	 glCallLists(n1,type1,lists1);
}
typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP)(GLenum);
static inline GLenum CheckFramebufferStatus(GLenum target1)
{
	static PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP fn=reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC_HPP>(_impl::_get_proc_address("glCheckFramebufferStatus",3,1));
	return fn(target1);
}
typedef void (*PFNGLCLAMPCOLORPROC_HPP)(GLenum,GLenum);
static inline void ClampColor(GLenum target1,GLenum clamp1)
{
	static PFNGLCLAMPCOLORPROC_HPP fn=reinterpret_cast<PFNGLCLAMPCOLORPROC_HPP>(_impl::_get_proc_address("glClampColor",3,1));
	 fn(target1,clamp1);
}
static inline void Clear(GLbitfield mask1)
{
	 glClear(mask1);
}
static inline void ClearAccum(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearAccum(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCLEARBUFFERFIPROC_HPP)(GLenum,GLint,GLfloat,GLint);
static inline void ClearBufferfi(GLenum buffer1,GLint drawbuffer1,GLfloat depth1,GLint stencil1)
{
	static PFNGLCLEARBUFFERFIPROC_HPP fn=reinterpret_cast<PFNGLCLEARBUFFERFIPROC_HPP>(_impl::_get_proc_address("glClearBufferfi",3,1));
	 fn(buffer1,drawbuffer1,depth1,stencil1);
}
typedef void (*PFNGLCLEARBUFFERFVPROC_HPP)(GLenum,GLint,const GLfloat *);
static inline void ClearBufferfv(GLenum buffer1,GLint drawbuffer1,const GLfloat * value1)
{
	static PFNGLCLEARBUFFERFVPROC_HPP fn=reinterpret_cast<PFNGLCLEARBUFFERFVPROC_HPP>(_impl::_get_proc_address("glClearBufferfv",3,1));
	 fn(buffer1,drawbuffer1,value1);
}
typedef void (*PFNGLCLEARBUFFERIVPROC_HPP)(GLenum,GLint,const GLint *);
static inline void ClearBufferiv(GLenum buffer1,GLint drawbuffer1,const GLint * value1)
{
	static PFNGLCLEARBUFFERIVPROC_HPP fn=reinterpret_cast<PFNGLCLEARBUFFERIVPROC_HPP>(_impl::_get_proc_address("glClearBufferiv",3,1));
	 fn(buffer1,drawbuffer1,value1);
}
typedef void (*PFNGLCLEARBUFFERUIVPROC_HPP)(GLenum,GLint,const GLuint *);
static inline void ClearBufferuiv(GLenum buffer1,GLint drawbuffer1,const GLuint * value1)
{
	static PFNGLCLEARBUFFERUIVPROC_HPP fn=reinterpret_cast<PFNGLCLEARBUFFERUIVPROC_HPP>(_impl::_get_proc_address("glClearBufferuiv",3,1));
	 fn(buffer1,drawbuffer1,value1);
}
static inline void ClearColor(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glClearColor(red1,green1,blue1,alpha1);
}
static inline void ClearDepth(GLdouble depth1)
{
	 glClearDepth(depth1);
}
static inline void ClearIndex(GLfloat c1)
{
	 glClearIndex(c1);
}
static inline void ClearStencil(GLint s1)
{
	 glClearStencil(s1);
}
typedef void (*PFNGLCLIENTACTIVETEXTUREPROC_HPP)(GLenum);
static inline void ClientActiveTexture(GLenum texture1)
{
	static PFNGLCLIENTACTIVETEXTUREPROC_HPP fn=reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC_HPP>(_impl::_get_proc_address("glClientActiveTexture",3,1));
	 fn(texture1);
}
static inline void ClipPlane(GLenum plane1,const GLdouble * equation1)
{
	 glClipPlane(plane1,equation1);
}
static inline void Color3b(GLbyte red1,GLbyte green1,GLbyte blue1)
{
	 glColor3b(red1,green1,blue1);
}
static inline void Color3bv(const GLbyte * v1)
{
	 glColor3bv(v1);
}
static inline void Color3d(GLdouble red1,GLdouble green1,GLdouble blue1)
{
	 glColor3d(red1,green1,blue1);
}
static inline void Color3dv(const GLdouble * v1)
{
	 glColor3dv(v1);
}
static inline void Color3f(GLfloat red1,GLfloat green1,GLfloat blue1)
{
	 glColor3f(red1,green1,blue1);
}
static inline void Color3fv(const GLfloat * v1)
{
	 glColor3fv(v1);
}
static inline void Color3i(GLint red1,GLint green1,GLint blue1)
{
	 glColor3i(red1,green1,blue1);
}
static inline void Color3iv(const GLint * v1)
{
	 glColor3iv(v1);
}
static inline void Color3s(GLshort red1,GLshort green1,GLshort blue1)
{
	 glColor3s(red1,green1,blue1);
}
static inline void Color3sv(const GLshort * v1)
{
	 glColor3sv(v1);
}
static inline void Color3ub(GLubyte red1,GLubyte green1,GLubyte blue1)
{
	 glColor3ub(red1,green1,blue1);
}
static inline void Color3ubv(const GLubyte * v1)
{
	 glColor3ubv(v1);
}
static inline void Color3ui(GLuint red1,GLuint green1,GLuint blue1)
{
	 glColor3ui(red1,green1,blue1);
}
static inline void Color3uiv(const GLuint * v1)
{
	 glColor3uiv(v1);
}
static inline void Color3us(GLushort red1,GLushort green1,GLushort blue1)
{
	 glColor3us(red1,green1,blue1);
}
static inline void Color3usv(const GLushort * v1)
{
	 glColor3usv(v1);
}
static inline void Color4b(GLbyte red1,GLbyte green1,GLbyte blue1,GLbyte alpha1)
{
	 glColor4b(red1,green1,blue1,alpha1);
}
static inline void Color4bv(const GLbyte * v1)
{
	 glColor4bv(v1);
}
static inline void Color4d(GLdouble red1,GLdouble green1,GLdouble blue1,GLdouble alpha1)
{
	 glColor4d(red1,green1,blue1,alpha1);
}
static inline void Color4dv(const GLdouble * v1)
{
	 glColor4dv(v1);
}
static inline void Color4f(GLfloat red1,GLfloat green1,GLfloat blue1,GLfloat alpha1)
{
	 glColor4f(red1,green1,blue1,alpha1);
}
static inline void Color4fv(const GLfloat * v1)
{
	 glColor4fv(v1);
}
static inline void Color4i(GLint red1,GLint green1,GLint blue1,GLint alpha1)
{
	 glColor4i(red1,green1,blue1,alpha1);
}
static inline void Color4iv(const GLint * v1)
{
	 glColor4iv(v1);
}
static inline void Color4s(GLshort red1,GLshort green1,GLshort blue1,GLshort alpha1)
{
	 glColor4s(red1,green1,blue1,alpha1);
}
static inline void Color4sv(const GLshort * v1)
{
	 glColor4sv(v1);
}
static inline void Color4ub(GLubyte red1,GLubyte green1,GLubyte blue1,GLubyte alpha1)
{
	 glColor4ub(red1,green1,blue1,alpha1);
}
static inline void Color4ubv(const GLubyte * v1)
{
	 glColor4ubv(v1);
}
static inline void Color4ui(GLuint red1,GLuint green1,GLuint blue1,GLuint alpha1)
{
	 glColor4ui(red1,green1,blue1,alpha1);
}
static inline void Color4uiv(const GLuint * v1)
{
	 glColor4uiv(v1);
}
static inline void Color4us(GLushort red1,GLushort green1,GLushort blue1,GLushort alpha1)
{
	 glColor4us(red1,green1,blue1,alpha1);
}
static inline void Color4usv(const GLushort * v1)
{
	 glColor4usv(v1);
}
static inline void ColorMask(GLboolean red1,GLboolean green1,GLboolean blue1,GLboolean alpha1)
{
	 glColorMask(red1,green1,blue1,alpha1);
}
typedef void (*PFNGLCOLORMASKIPROC_HPP)(GLuint,GLboolean,GLboolean,GLboolean,GLboolean);
static inline void ColorMaski(GLuint index1,GLboolean r1,GLboolean g1,GLboolean b1,GLboolean a1)
{
	static PFNGLCOLORMASKIPROC_HPP fn=reinterpret_cast<PFNGLCOLORMASKIPROC_HPP>(_impl::_get_proc_address("glColorMaski",3,1));
	 fn(index1,r1,g1,b1,a1);
}
static inline void ColorMaterial(GLenum face1,GLenum mode1)
{
	 glColorMaterial(face1,mode1);
}
static inline void ColorPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glColorPointer(size1,type1,stride1,pointer1);
}
typedef void (*PFNGLCOMPILESHADERPROC_HPP)(GLuint);
static inline void CompileShader(GLuint shader1)
{
	static PFNGLCOMPILESHADERPROC_HPP fn=reinterpret_cast<PFNGLCOMPILESHADERPROC_HPP>(_impl::_get_proc_address("glCompileShader",3,1));
	 fn(shader1);
}
typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage1D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE1DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE1DPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage1D",3,1));
	 fn(target1,level1,internalformat1,width1,border1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage2D",3,1));
	 fn(target1,level1,internalformat1,width1,height1,border1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC_HPP)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLsizei,const void *);
static inline void CompressedTexImage3D(GLenum target1,GLint level1,GLenum internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXIMAGE3DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DPROC_HPP>(_impl::_get_proc_address("glCompressedTexImage3D",3,1));
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC_HPP)(GLenum,GLint,GLint,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage1D(GLenum target1,GLint level1,GLint xoffset1,GLsizei width1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage1D",3,1));
	 fn(target1,level1,xoffset1,width1,format1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage2D",3,1));
	 fn(target1,level1,xoffset1,yoffset1,width1,height1,format1,imageSize1,data1);
}
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLsizei,const void *);
static inline void CompressedTexSubImage3D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLsizei imageSize1,const void * data1)
{
	static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC_HPP fn=reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC_HPP>(_impl::_get_proc_address("glCompressedTexSubImage3D",3,1));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,imageSize1,data1);
}
typedef void (*PFNGLCOPYBUFFERSUBDATAPROC_HPP)(GLenum,GLenum,GLintptr,GLintptr,GLsizeiptr);
static inline void CopyBufferSubData(GLenum readTarget1,GLenum writeTarget1,GLintptr readOffset1,GLintptr writeOffset1,GLsizeiptr size1)
{
	static PFNGLCOPYBUFFERSUBDATAPROC_HPP fn=reinterpret_cast<PFNGLCOPYBUFFERSUBDATAPROC_HPP>(_impl::_get_proc_address("glCopyBufferSubData",3,1));
	 fn(readTarget1,writeTarget1,readOffset1,writeOffset1,size1);
}
static inline void CopyPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum type1)
{
	 glCopyPixels(x1,y1,width1,height1,type1);
}
static inline void CopyTexImage1D(GLenum target1,GLint level1,GLenum internalformat1,GLint x1,GLint y1,GLsizei width1,GLint border1)
{
	 glCopyTexImage1D(target1,level1,internalformat1,x1,y1,width1,border1);
}
static inline void CopyTexImage2D(GLenum target1,GLint level1,GLenum internalformat1,GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLint border1)
{
	 glCopyTexImage2D(target1,level1,internalformat1,x1,y1,width1,height1,border1);
}
static inline void CopyTexSubImage1D(GLenum target1,GLint level1,GLint xoffset1,GLint x1,GLint y1,GLsizei width1)
{
	 glCopyTexSubImage1D(target1,level1,xoffset1,x1,y1,width1);
}
static inline void CopyTexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glCopyTexSubImage2D(target1,level1,xoffset1,yoffset1,x1,y1,width1,height1);
}
typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLint,GLint,GLsizei,GLsizei);
static inline void CopyTexSubImage3D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	static PFNGLCOPYTEXSUBIMAGE3DPROC_HPP fn=reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC_HPP>(_impl::_get_proc_address("glCopyTexSubImage3D",3,1));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,x1,y1,width1,height1);
}
typedef GLuint (*PFNGLCREATEPROGRAMPROC_HPP)();
static inline GLuint CreateProgram()
{
	static PFNGLCREATEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLCREATEPROGRAMPROC_HPP>(_impl::_get_proc_address("glCreateProgram",3,1));
	return fn();
}
typedef GLuint (*PFNGLCREATESHADERPROC_HPP)(GLenum);
static inline GLuint CreateShader(GLenum type1)
{
	static PFNGLCREATESHADERPROC_HPP fn=reinterpret_cast<PFNGLCREATESHADERPROC_HPP>(_impl::_get_proc_address("glCreateShader",3,1));
	return fn(type1);
}
static inline void CullFace(GLenum mode1)
{
	 glCullFace(mode1);
}
typedef void (*PFNGLDELETEBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteBuffers(GLsizei n1,const GLuint * buffers1)
{
	static PFNGLDELETEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETEBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteBuffers",3,1));
	 fn(n1,buffers1);
}
typedef void (*PFNGLDELETEFRAMEBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteFramebuffers(GLsizei n1,const GLuint * framebuffers1)
{
	static PFNGLDELETEFRAMEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteFramebuffers",3,1));
	 fn(n1,framebuffers1);
}
static inline void DeleteLists(GLuint list1,GLsizei range1)
{
	 glDeleteLists(list1,range1);
}
typedef void (*PFNGLDELETEPROGRAMPROC_HPP)(GLuint);
static inline void DeleteProgram(GLuint program1)
{
	static PFNGLDELETEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLDELETEPROGRAMPROC_HPP>(_impl::_get_proc_address("glDeleteProgram",3,1));
	 fn(program1);
}
typedef void (*PFNGLDELETEQUERIESPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteQueries(GLsizei n1,const GLuint * ids1)
{
	static PFNGLDELETEQUERIESPROC_HPP fn=reinterpret_cast<PFNGLDELETEQUERIESPROC_HPP>(_impl::_get_proc_address("glDeleteQueries",3,1));
	 fn(n1,ids1);
}
typedef void (*PFNGLDELETERENDERBUFFERSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteRenderbuffers(GLsizei n1,const GLuint * renderbuffers1)
{
	static PFNGLDELETERENDERBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC_HPP>(_impl::_get_proc_address("glDeleteRenderbuffers",3,1));
	 fn(n1,renderbuffers1);
}
typedef void (*PFNGLDELETESHADERPROC_HPP)(GLuint);
static inline void DeleteShader(GLuint shader1)
{
	static PFNGLDELETESHADERPROC_HPP fn=reinterpret_cast<PFNGLDELETESHADERPROC_HPP>(_impl::_get_proc_address("glDeleteShader",3,1));
	 fn(shader1);
}
static inline void DeleteTextures(GLsizei n1,const GLuint * textures1)
{
	 glDeleteTextures(n1,textures1);
}
typedef void (*PFNGLDELETEVERTEXARRAYSPROC_HPP)(GLsizei,const GLuint *);
static inline void DeleteVertexArrays(GLsizei n1,const GLuint * arrays1)
{
	static PFNGLDELETEVERTEXARRAYSPROC_HPP fn=reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC_HPP>(_impl::_get_proc_address("glDeleteVertexArrays",3,1));
	 fn(n1,arrays1);
}
static inline void DepthFunc(GLenum func1)
{
	 glDepthFunc(func1);
}
static inline void DepthMask(GLboolean flag1)
{
	 glDepthMask(flag1);
}
static inline void DepthRange(GLdouble near1,GLdouble far1)
{
	 glDepthRange(near1,far1);
}
typedef void (*PFNGLDETACHSHADERPROC_HPP)(GLuint,GLuint);
static inline void DetachShader(GLuint program1,GLuint shader1)
{
	static PFNGLDETACHSHADERPROC_HPP fn=reinterpret_cast<PFNGLDETACHSHADERPROC_HPP>(_impl::_get_proc_address("glDetachShader",3,1));
	 fn(program1,shader1);
}
static inline void Disable(GLenum cap1)
{
	 glDisable(cap1);
}
static inline void DisableClientState(GLenum array1)
{
	 glDisableClientState(array1);
}
typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP)(GLuint);
static inline void DisableVertexAttribArray(GLuint index1)
{
	static PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP fn=reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC_HPP>(_impl::_get_proc_address("glDisableVertexAttribArray",3,1));
	 fn(index1);
}
typedef void (*PFNGLDISABLEIPROC_HPP)(GLenum,GLuint);
static inline void Disablei(GLenum target1,GLuint index1)
{
	static PFNGLDISABLEIPROC_HPP fn=reinterpret_cast<PFNGLDISABLEIPROC_HPP>(_impl::_get_proc_address("glDisablei",3,1));
	 fn(target1,index1);
}
static inline void DrawArrays(GLenum mode1,GLint first1,GLsizei count1)
{
	 glDrawArrays(mode1,first1,count1);
}
typedef void (*PFNGLDRAWARRAYSINSTANCEDPROC_HPP)(GLenum,GLint,GLsizei,GLsizei);
static inline void DrawArraysInstanced(GLenum mode1,GLint first1,GLsizei count1,GLsizei instancecount1)
{
	static PFNGLDRAWARRAYSINSTANCEDPROC_HPP fn=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC_HPP>(_impl::_get_proc_address("glDrawArraysInstanced",3,1));
	 fn(mode1,first1,count1,instancecount1);
}
static inline void DrawBuffer(GLenum buf1)
{
	 glDrawBuffer(buf1);
}
typedef void (*PFNGLDRAWBUFFERSPROC_HPP)(GLsizei,const GLenum *);
static inline void DrawBuffers(GLsizei n1,const GLenum * bufs1)
{
	static PFNGLDRAWBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLDRAWBUFFERSPROC_HPP>(_impl::_get_proc_address("glDrawBuffers",3,1));
	 fn(n1,bufs1);
}
static inline void DrawElements(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1)
{
	 glDrawElements(mode1,count1,type1,indices1);
}
typedef void (*PFNGLDRAWELEMENTSINSTANCEDPROC_HPP)(GLenum,GLsizei,GLenum,const void *,GLsizei);
static inline void DrawElementsInstanced(GLenum mode1,GLsizei count1,GLenum type1,const void * indices1,GLsizei instancecount1)
{
	static PFNGLDRAWELEMENTSINSTANCEDPROC_HPP fn=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC_HPP>(_impl::_get_proc_address("glDrawElementsInstanced",3,1));
	 fn(mode1,count1,type1,indices1,instancecount1);
}
static inline void DrawPixels(GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glDrawPixels(width1,height1,format1,type1,pixels1);
}
typedef void (*PFNGLDRAWRANGEELEMENTSPROC_HPP)(GLenum,GLuint,GLuint,GLsizei,GLenum,const void *);
static inline void DrawRangeElements(GLenum mode1,GLuint start1,GLuint end1,GLsizei count1,GLenum type1,const void * indices1)
{
	static PFNGLDRAWRANGEELEMENTSPROC_HPP fn=reinterpret_cast<PFNGLDRAWRANGEELEMENTSPROC_HPP>(_impl::_get_proc_address("glDrawRangeElements",3,1));
	 fn(mode1,start1,end1,count1,type1,indices1);
}
static inline void EdgeFlag(GLboolean flag1)
{
	 glEdgeFlag(flag1);
}
static inline void EdgeFlagPointer(GLsizei stride1,const void * pointer1)
{
	 glEdgeFlagPointer(stride1,pointer1);
}
static inline void EdgeFlagv(const GLboolean * flag1)
{
	 glEdgeFlagv(flag1);
}
static inline void Enable(GLenum cap1)
{
	 glEnable(cap1);
}
static inline void EnableClientState(GLenum array1)
{
	 glEnableClientState(array1);
}
typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP)(GLuint);
static inline void EnableVertexAttribArray(GLuint index1)
{
	static PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP fn=reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC_HPP>(_impl::_get_proc_address("glEnableVertexAttribArray",3,1));
	 fn(index1);
}
typedef void (*PFNGLENABLEIPROC_HPP)(GLenum,GLuint);
static inline void Enablei(GLenum target1,GLuint index1)
{
	static PFNGLENABLEIPROC_HPP fn=reinterpret_cast<PFNGLENABLEIPROC_HPP>(_impl::_get_proc_address("glEnablei",3,1));
	 fn(target1,index1);
}
static inline void End()
{
	 glEnd();
}
typedef void (*PFNGLENDCONDITIONALRENDERPROC_HPP)();
static inline void EndConditionalRender()
{
	static PFNGLENDCONDITIONALRENDERPROC_HPP fn=reinterpret_cast<PFNGLENDCONDITIONALRENDERPROC_HPP>(_impl::_get_proc_address("glEndConditionalRender",3,1));
	 fn();
}
static inline void EndList()
{
	 glEndList();
}
typedef void (*PFNGLENDQUERYPROC_HPP)(GLenum);
static inline void EndQuery(GLenum target1)
{
	static PFNGLENDQUERYPROC_HPP fn=reinterpret_cast<PFNGLENDQUERYPROC_HPP>(_impl::_get_proc_address("glEndQuery",3,1));
	 fn(target1);
}
typedef void (*PFNGLENDTRANSFORMFEEDBACKPROC_HPP)();
static inline void EndTransformFeedback()
{
	static PFNGLENDTRANSFORMFEEDBACKPROC_HPP fn=reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKPROC_HPP>(_impl::_get_proc_address("glEndTransformFeedback",3,1));
	 fn();
}
static inline void EvalCoord1d(GLdouble u1)
{
	 glEvalCoord1d(u1);
}
static inline void EvalCoord1dv(const GLdouble * u1)
{
	 glEvalCoord1dv(u1);
}
static inline void EvalCoord1f(GLfloat u1)
{
	 glEvalCoord1f(u1);
}
static inline void EvalCoord1fv(const GLfloat * u1)
{
	 glEvalCoord1fv(u1);
}
static inline void EvalCoord2d(GLdouble u1,GLdouble v1)
{
	 glEvalCoord2d(u1,v1);
}
static inline void EvalCoord2dv(const GLdouble * u1)
{
	 glEvalCoord2dv(u1);
}
static inline void EvalCoord2f(GLfloat u1,GLfloat v1)
{
	 glEvalCoord2f(u1,v1);
}
static inline void EvalCoord2fv(const GLfloat * u1)
{
	 glEvalCoord2fv(u1);
}
static inline void EvalMesh1(GLenum mode1,GLint i11,GLint i21)
{
	 glEvalMesh1(mode1,i11,i21);
}
static inline void EvalMesh2(GLenum mode1,GLint i11,GLint i21,GLint j11,GLint j21)
{
	 glEvalMesh2(mode1,i11,i21,j11,j21);
}
static inline void EvalPoint1(GLint i1)
{
	 glEvalPoint1(i1);
}
static inline void EvalPoint2(GLint i1,GLint j1)
{
	 glEvalPoint2(i1,j1);
}
static inline void FeedbackBuffer(GLsizei size1,GLenum type1,GLfloat * buffer1)
{
	 glFeedbackBuffer(size1,type1,buffer1);
}
static inline void Finish()
{
	 glFinish();
}
static inline void Flush()
{
	 glFlush();
}
typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEPROC_HPP)(GLenum,GLintptr,GLsizeiptr);
static inline void FlushMappedBufferRange(GLenum target1,GLintptr offset1,GLsizeiptr length1)
{
	static PFNGLFLUSHMAPPEDBUFFERRANGEPROC_HPP fn=reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEPROC_HPP>(_impl::_get_proc_address("glFlushMappedBufferRange",3,1));
	 fn(target1,offset1,length1);
}
typedef void (*PFNGLFOGCOORDPOINTERPROC_HPP)(GLenum,GLsizei,const void *);
static inline void FogCoordPointer(GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLFOGCOORDPOINTERPROC_HPP fn=reinterpret_cast<PFNGLFOGCOORDPOINTERPROC_HPP>(_impl::_get_proc_address("glFogCoordPointer",3,1));
	 fn(type1,stride1,pointer1);
}
typedef void (*PFNGLFOGCOORDDPROC_HPP)(GLdouble);
static inline void FogCoordd(GLdouble coord1)
{
	static PFNGLFOGCOORDDPROC_HPP fn=reinterpret_cast<PFNGLFOGCOORDDPROC_HPP>(_impl::_get_proc_address("glFogCoordd",3,1));
	 fn(coord1);
}
typedef void (*PFNGLFOGCOORDDVPROC_HPP)(const GLdouble *);
static inline void FogCoorddv(const GLdouble * coord1)
{
	static PFNGLFOGCOORDDVPROC_HPP fn=reinterpret_cast<PFNGLFOGCOORDDVPROC_HPP>(_impl::_get_proc_address("glFogCoorddv",3,1));
	 fn(coord1);
}
typedef void (*PFNGLFOGCOORDFPROC_HPP)(GLfloat);
static inline void FogCoordf(GLfloat coord1)
{
	static PFNGLFOGCOORDFPROC_HPP fn=reinterpret_cast<PFNGLFOGCOORDFPROC_HPP>(_impl::_get_proc_address("glFogCoordf",3,1));
	 fn(coord1);
}
typedef void (*PFNGLFOGCOORDFVPROC_HPP)(const GLfloat *);
static inline void FogCoordfv(const GLfloat * coord1)
{
	static PFNGLFOGCOORDFVPROC_HPP fn=reinterpret_cast<PFNGLFOGCOORDFVPROC_HPP>(_impl::_get_proc_address("glFogCoordfv",3,1));
	 fn(coord1);
}
static inline void Fogf(GLenum pname1,GLfloat param1)
{
	 glFogf(pname1,param1);
}
static inline void Fogfv(GLenum pname1,const GLfloat * params1)
{
	 glFogfv(pname1,params1);
}
static inline void Fogi(GLenum pname1,GLint param1)
{
	 glFogi(pname1,param1);
}
static inline void Fogiv(GLenum pname1,const GLint * params1)
{
	 glFogiv(pname1,params1);
}
typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP)(GLenum,GLenum,GLenum,GLuint);
static inline void FramebufferRenderbuffer(GLenum target1,GLenum attachment1,GLenum renderbuffertarget1,GLuint renderbuffer1)
{
	static PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glFramebufferRenderbuffer",3,1));
	 fn(target1,attachment1,renderbuffertarget1,renderbuffer1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURE1DPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint);
static inline void FramebufferTexture1D(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTURE1DPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE1DPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture1D",3,1));
	 fn(target1,attachment1,textarget1,texture1,level1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint);
static inline void FramebufferTexture2D(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1)
{
	static PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture2D",3,1));
	 fn(target1,attachment1,textarget1,texture1,level1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURE3DPROC_HPP)(GLenum,GLenum,GLenum,GLuint,GLint,GLint);
static inline void FramebufferTexture3D(GLenum target1,GLenum attachment1,GLenum textarget1,GLuint texture1,GLint level1,GLint zoffset1)
{
	static PFNGLFRAMEBUFFERTEXTURE3DPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DPROC_HPP>(_impl::_get_proc_address("glFramebufferTexture3D",3,1));
	 fn(target1,attachment1,textarget1,texture1,level1,zoffset1);
}
typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERPROC_HPP)(GLenum,GLenum,GLuint,GLint,GLint);
static inline void FramebufferTextureLayer(GLenum target1,GLenum attachment1,GLuint texture1,GLint level1,GLint layer1)
{
	static PFNGLFRAMEBUFFERTEXTURELAYERPROC_HPP fn=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC_HPP>(_impl::_get_proc_address("glFramebufferTextureLayer",3,1));
	 fn(target1,attachment1,texture1,level1,layer1);
}
static inline void FrontFace(GLenum mode1)
{
	 glFrontFace(mode1);
}
static inline void Frustum(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	 glFrustum(left1,right1,bottom1,top1,zNear1,zFar1);
}
typedef void (*PFNGLGENBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenBuffers(GLsizei n1,GLuint * buffers1)
{
	static PFNGLGENBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenBuffers",3,1));
	 fn(n1,buffers1);
}
typedef void (*PFNGLGENFRAMEBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenFramebuffers(GLsizei n1,GLuint * framebuffers1)
{
	static PFNGLGENFRAMEBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenFramebuffers",3,1));
	 fn(n1,framebuffers1);
}
static inline GLuint GenLists(GLsizei range1)
{
	return glGenLists(range1);
}
typedef void (*PFNGLGENQUERIESPROC_HPP)(GLsizei,GLuint *);
static inline void GenQueries(GLsizei n1,GLuint * ids1)
{
	static PFNGLGENQUERIESPROC_HPP fn=reinterpret_cast<PFNGLGENQUERIESPROC_HPP>(_impl::_get_proc_address("glGenQueries",3,1));
	 fn(n1,ids1);
}
typedef void (*PFNGLGENRENDERBUFFERSPROC_HPP)(GLsizei,GLuint *);
static inline void GenRenderbuffers(GLsizei n1,GLuint * renderbuffers1)
{
	static PFNGLGENRENDERBUFFERSPROC_HPP fn=reinterpret_cast<PFNGLGENRENDERBUFFERSPROC_HPP>(_impl::_get_proc_address("glGenRenderbuffers",3,1));
	 fn(n1,renderbuffers1);
}
static inline void GenTextures(GLsizei n1,GLuint * textures1)
{
	 glGenTextures(n1,textures1);
}
typedef void (*PFNGLGENVERTEXARRAYSPROC_HPP)(GLsizei,GLuint *);
static inline void GenVertexArrays(GLsizei n1,GLuint * arrays1)
{
	static PFNGLGENVERTEXARRAYSPROC_HPP fn=reinterpret_cast<PFNGLGENVERTEXARRAYSPROC_HPP>(_impl::_get_proc_address("glGenVertexArrays",3,1));
	 fn(n1,arrays1);
}
typedef void (*PFNGLGENERATEMIPMAPPROC_HPP)(GLenum);
static inline void GenerateMipmap(GLenum target1)
{
	static PFNGLGENERATEMIPMAPPROC_HPP fn=reinterpret_cast<PFNGLGENERATEMIPMAPPROC_HPP>(_impl::_get_proc_address("glGenerateMipmap",3,1));
	 fn(target1);
}
typedef void (*PFNGLGETACTIVEATTRIBPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
static inline void GetActiveAttrib(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	static PFNGLGETACTIVEATTRIBPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEATTRIBPROC_HPP>(_impl::_get_proc_address("glGetActiveAttrib",3,1));
	 fn(program1,index1,bufSize1,length1,size1,type1,name1);
}
typedef void (*PFNGLGETACTIVEUNIFORMPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLint *,GLenum *,GLchar *);
static inline void GetActiveUniform(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLint * size1,GLenum * type1,GLchar * name1)
{
	static PFNGLGETACTIVEUNIFORMPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC_HPP>(_impl::_get_proc_address("glGetActiveUniform",3,1));
	 fn(program1,index1,bufSize1,length1,size1,type1,name1);
}
typedef void (*PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetActiveUniformBlockName(GLuint program1,GLuint uniformBlockIndex1,GLsizei bufSize1,GLsizei * length1,GLchar * uniformBlockName1)
{
	static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC_HPP>(_impl::_get_proc_address("glGetActiveUniformBlockName",3,1));
	 fn(program1,uniformBlockIndex1,bufSize1,length1,uniformBlockName1);
}
typedef void (*PFNGLGETACTIVEUNIFORMBLOCKIVPROC_HPP)(GLuint,GLuint,GLenum,GLint *);
static inline void GetActiveUniformBlockiv(GLuint program1,GLuint uniformBlockIndex1,GLenum pname1,GLint * params1)
{
	static PFNGLGETACTIVEUNIFORMBLOCKIVPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKIVPROC_HPP>(_impl::_get_proc_address("glGetActiveUniformBlockiv",3,1));
	 fn(program1,uniformBlockIndex1,pname1,params1);
}
typedef void (*PFNGLGETACTIVEUNIFORMNAMEPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetActiveUniformName(GLuint program1,GLuint uniformIndex1,GLsizei bufSize1,GLsizei * length1,GLchar * uniformName1)
{
	static PFNGLGETACTIVEUNIFORMNAMEPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMNAMEPROC_HPP>(_impl::_get_proc_address("glGetActiveUniformName",3,1));
	 fn(program1,uniformIndex1,bufSize1,length1,uniformName1);
}
typedef void (*PFNGLGETACTIVEUNIFORMSIVPROC_HPP)(GLuint,GLsizei,const GLuint *,GLenum,GLint *);
static inline void GetActiveUniformsiv(GLuint program1,GLsizei uniformCount1,const GLuint * uniformIndices1,GLenum pname1,GLint * params1)
{
	static PFNGLGETACTIVEUNIFORMSIVPROC_HPP fn=reinterpret_cast<PFNGLGETACTIVEUNIFORMSIVPROC_HPP>(_impl::_get_proc_address("glGetActiveUniformsiv",3,1));
	 fn(program1,uniformCount1,uniformIndices1,pname1,params1);
}
typedef void (*PFNGLGETATTACHEDSHADERSPROC_HPP)(GLuint,GLsizei,GLsizei *,GLuint *);
static inline void GetAttachedShaders(GLuint program1,GLsizei maxCount1,GLsizei * count1,GLuint * shaders1)
{
	static PFNGLGETATTACHEDSHADERSPROC_HPP fn=reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC_HPP>(_impl::_get_proc_address("glGetAttachedShaders",3,1));
	 fn(program1,maxCount1,count1,shaders1);
}
typedef GLint (*PFNGLGETATTRIBLOCATIONPROC_HPP)(GLuint,const GLchar *);
static inline GLint GetAttribLocation(GLuint program1,const GLchar * name1)
{
	static PFNGLGETATTRIBLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC_HPP>(_impl::_get_proc_address("glGetAttribLocation",3,1));
	return fn(program1,name1);
}
typedef void (*PFNGLGETBOOLEANI_VPROC_HPP)(GLenum,GLuint,GLboolean *);
static inline void GetBooleani_v(GLenum target1,GLuint index1,GLboolean * data1)
{
	static PFNGLGETBOOLEANI_VPROC_HPP fn=reinterpret_cast<PFNGLGETBOOLEANI_VPROC_HPP>(_impl::_get_proc_address("glGetBooleani_v",3,1));
	 fn(target1,index1,data1);
}
static inline void GetBooleanv(GLenum pname1,GLboolean * data1)
{
	 glGetBooleanv(pname1,data1);
}
typedef void (*PFNGLGETBUFFERPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetBufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETBUFFERPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetBufferParameteriv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETBUFFERPOINTERVPROC_HPP)(GLenum,GLenum,void **);
static inline void GetBufferPointerv(GLenum target1,GLenum pname1,void ** params1)
{
	static PFNGLGETBUFFERPOINTERVPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC_HPP>(_impl::_get_proc_address("glGetBufferPointerv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETBUFFERSUBDATAPROC_HPP)(GLenum,GLintptr,GLsizeiptr,void *);
static inline void GetBufferSubData(GLenum target1,GLintptr offset1,GLsizeiptr size1,void * data1)
{
	static PFNGLGETBUFFERSUBDATAPROC_HPP fn=reinterpret_cast<PFNGLGETBUFFERSUBDATAPROC_HPP>(_impl::_get_proc_address("glGetBufferSubData",3,1));
	 fn(target1,offset1,size1,data1);
}
static inline void GetClipPlane(GLenum plane1,GLdouble * equation1)
{
	 glGetClipPlane(plane1,equation1);
}
typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEPROC_HPP)(GLenum,GLint,void *);
static inline void GetCompressedTexImage(GLenum target1,GLint level1,void * img1)
{
	static PFNGLGETCOMPRESSEDTEXIMAGEPROC_HPP fn=reinterpret_cast<PFNGLGETCOMPRESSEDTEXIMAGEPROC_HPP>(_impl::_get_proc_address("glGetCompressedTexImage",3,1));
	 fn(target1,level1,img1);
}
static inline void GetDoublev(GLenum pname1,GLdouble * data1)
{
	 glGetDoublev(pname1,data1);
}
static inline GLenum GetError()
{
	return glGetError();
}
static inline void GetFloatv(GLenum pname1,GLfloat * data1)
{
	 glGetFloatv(pname1,data1);
}
typedef GLint (*PFNGLGETFRAGDATALOCATIONPROC_HPP)(GLuint,const GLchar *);
static inline GLint GetFragDataLocation(GLuint program1,const GLchar * name1)
{
	static PFNGLGETFRAGDATALOCATIONPROC_HPP fn=reinterpret_cast<PFNGLGETFRAGDATALOCATIONPROC_HPP>(_impl::_get_proc_address("glGetFragDataLocation",3,1));
	return fn(program1,name1);
}
typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP)(GLenum,GLenum,GLenum,GLint *);
static inline void GetFramebufferAttachmentParameteriv(GLenum target1,GLenum attachment1,GLenum pname1,GLint * params1)
{
	static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetFramebufferAttachmentParameteriv",3,1));
	 fn(target1,attachment1,pname1,params1);
}
typedef void (*PFNGLGETINTEGERI_VPROC_HPP)(GLenum,GLuint,GLint *);
static inline void GetIntegeri_v(GLenum target1,GLuint index1,GLint * data1)
{
	static PFNGLGETINTEGERI_VPROC_HPP fn=reinterpret_cast<PFNGLGETINTEGERI_VPROC_HPP>(_impl::_get_proc_address("glGetIntegeri_v",3,1));
	 fn(target1,index1,data1);
}
static inline void GetIntegerv(GLenum pname1,GLint * data1)
{
	 glGetIntegerv(pname1,data1);
}
static inline void GetLightfv(GLenum light1,GLenum pname1,GLfloat * params1)
{
	 glGetLightfv(light1,pname1,params1);
}
static inline void GetLightiv(GLenum light1,GLenum pname1,GLint * params1)
{
	 glGetLightiv(light1,pname1,params1);
}
static inline void GetMapdv(GLenum target1,GLenum query1,GLdouble * v1)
{
	 glGetMapdv(target1,query1,v1);
}
static inline void GetMapfv(GLenum target1,GLenum query1,GLfloat * v1)
{
	 glGetMapfv(target1,query1,v1);
}
static inline void GetMapiv(GLenum target1,GLenum query1,GLint * v1)
{
	 glGetMapiv(target1,query1,v1);
}
static inline void GetMaterialfv(GLenum face1,GLenum pname1,GLfloat * params1)
{
	 glGetMaterialfv(face1,pname1,params1);
}
static inline void GetMaterialiv(GLenum face1,GLenum pname1,GLint * params1)
{
	 glGetMaterialiv(face1,pname1,params1);
}
static inline void GetPixelMapfv(GLenum map1,GLfloat * values1)
{
	 glGetPixelMapfv(map1,values1);
}
static inline void GetPixelMapuiv(GLenum map1,GLuint * values1)
{
	 glGetPixelMapuiv(map1,values1);
}
static inline void GetPixelMapusv(GLenum map1,GLushort * values1)
{
	 glGetPixelMapusv(map1,values1);
}
static inline void GetPointerv(GLenum pname1,void ** params1)
{
	 glGetPointerv(pname1,params1);
}
static inline void GetPolygonStipple(GLubyte * mask1)
{
	 glGetPolygonStipple(mask1);
}
typedef void (*PFNGLGETPROGRAMINFOLOGPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetProgramInfoLog(GLuint program1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	static PFNGLGETPROGRAMINFOLOGPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC_HPP>(_impl::_get_proc_address("glGetProgramInfoLog",3,1));
	 fn(program1,bufSize1,length1,infoLog1);
}
typedef void (*PFNGLGETPROGRAMIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetProgramiv(GLuint program1,GLenum pname1,GLint * params1)
{
	static PFNGLGETPROGRAMIVPROC_HPP fn=reinterpret_cast<PFNGLGETPROGRAMIVPROC_HPP>(_impl::_get_proc_address("glGetProgramiv",3,1));
	 fn(program1,pname1,params1);
}
typedef void (*PFNGLGETQUERYOBJECTIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetQueryObjectiv(GLuint id1,GLenum pname1,GLint * params1)
{
	static PFNGLGETQUERYOBJECTIVPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTIVPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectiv",3,1));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYOBJECTUIVPROC_HPP)(GLuint,GLenum,GLuint *);
static inline void GetQueryObjectuiv(GLuint id1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETQUERYOBJECTUIVPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC_HPP>(_impl::_get_proc_address("glGetQueryObjectuiv",3,1));
	 fn(id1,pname1,params1);
}
typedef void (*PFNGLGETQUERYIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetQueryiv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETQUERYIVPROC_HPP fn=reinterpret_cast<PFNGLGETQUERYIVPROC_HPP>(_impl::_get_proc_address("glGetQueryiv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetRenderbufferParameteriv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glGetRenderbufferParameteriv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETSHADERINFOLOGPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetShaderInfoLog(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * infoLog1)
{
	static PFNGLGETSHADERINFOLOGPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERINFOLOGPROC_HPP>(_impl::_get_proc_address("glGetShaderInfoLog",3,1));
	 fn(shader1,bufSize1,length1,infoLog1);
}
typedef void (*PFNGLGETSHADERSOURCEPROC_HPP)(GLuint,GLsizei,GLsizei *,GLchar *);
static inline void GetShaderSource(GLuint shader1,GLsizei bufSize1,GLsizei * length1,GLchar * source1)
{
	static PFNGLGETSHADERSOURCEPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERSOURCEPROC_HPP>(_impl::_get_proc_address("glGetShaderSource",3,1));
	 fn(shader1,bufSize1,length1,source1);
}
typedef void (*PFNGLGETSHADERIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetShaderiv(GLuint shader1,GLenum pname1,GLint * params1)
{
	static PFNGLGETSHADERIVPROC_HPP fn=reinterpret_cast<PFNGLGETSHADERIVPROC_HPP>(_impl::_get_proc_address("glGetShaderiv",3,1));
	 fn(shader1,pname1,params1);
}
static inline const GLubyte * GetString(GLenum name1)
{
	return glGetString(name1);
}
typedef const GLubyte * (*PFNGLGETSTRINGIPROC_HPP)(GLenum,GLuint);
static inline const GLubyte * GetStringi(GLenum name1,GLuint index1)
{
	static PFNGLGETSTRINGIPROC_HPP fn=reinterpret_cast<PFNGLGETSTRINGIPROC_HPP>(_impl::_get_proc_address("glGetStringi",3,1));
	return fn(name1,index1);
}
static inline void GetTexEnvfv(GLenum target1,GLenum pname1,GLfloat * params1)
{
	 glGetTexEnvfv(target1,pname1,params1);
}
static inline void GetTexEnviv(GLenum target1,GLenum pname1,GLint * params1)
{
	 glGetTexEnviv(target1,pname1,params1);
}
static inline void GetTexGendv(GLenum coord1,GLenum pname1,GLdouble * params1)
{
	 glGetTexGendv(coord1,pname1,params1);
}
static inline void GetTexGenfv(GLenum coord1,GLenum pname1,GLfloat * params1)
{
	 glGetTexGenfv(coord1,pname1,params1);
}
static inline void GetTexGeniv(GLenum coord1,GLenum pname1,GLint * params1)
{
	 glGetTexGeniv(coord1,pname1,params1);
}
static inline void GetTexImage(GLenum target1,GLint level1,GLenum format1,GLenum type1,void * pixels1)
{
	 glGetTexImage(target1,level1,format1,type1,pixels1);
}
static inline void GetTexLevelParameterfv(GLenum target1,GLint level1,GLenum pname1,GLfloat * params1)
{
	 glGetTexLevelParameterfv(target1,level1,pname1,params1);
}
static inline void GetTexLevelParameteriv(GLenum target1,GLint level1,GLenum pname1,GLint * params1)
{
	 glGetTexLevelParameteriv(target1,level1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERIIVPROC_HPP)(GLenum,GLenum,GLint *);
static inline void GetTexParameterIiv(GLenum target1,GLenum pname1,GLint * params1)
{
	static PFNGLGETTEXPARAMETERIIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIIVPROC_HPP>(_impl::_get_proc_address("glGetTexParameterIiv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLGETTEXPARAMETERIUIVPROC_HPP)(GLenum,GLenum,GLuint *);
static inline void GetTexParameterIuiv(GLenum target1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETTEXPARAMETERIUIVPROC_HPP fn=reinterpret_cast<PFNGLGETTEXPARAMETERIUIVPROC_HPP>(_impl::_get_proc_address("glGetTexParameterIuiv",3,1));
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
typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGPROC_HPP)(GLuint,GLuint,GLsizei,GLsizei *,GLsizei *,GLenum *,GLchar *);
static inline void GetTransformFeedbackVarying(GLuint program1,GLuint index1,GLsizei bufSize1,GLsizei * length1,GLsizei * size1,GLenum * type1,GLchar * name1)
{
	static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC_HPP fn=reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC_HPP>(_impl::_get_proc_address("glGetTransformFeedbackVarying",3,1));
	 fn(program1,index1,bufSize1,length1,size1,type1,name1);
}
typedef GLuint (*PFNGLGETUNIFORMBLOCKINDEXPROC_HPP)(GLuint,const GLchar *);
static inline GLuint GetUniformBlockIndex(GLuint program1,const GLchar * uniformBlockName1)
{
	static PFNGLGETUNIFORMBLOCKINDEXPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMBLOCKINDEXPROC_HPP>(_impl::_get_proc_address("glGetUniformBlockIndex",3,1));
	return fn(program1,uniformBlockName1);
}
typedef void (*PFNGLGETUNIFORMINDICESPROC_HPP)(GLuint,GLsizei,const GLchar *const*,GLuint *);
static inline void GetUniformIndices(GLuint program1,GLsizei uniformCount1,const GLchar *const* uniformNames1,GLuint * uniformIndices1)
{
	static PFNGLGETUNIFORMINDICESPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMINDICESPROC_HPP>(_impl::_get_proc_address("glGetUniformIndices",3,1));
	 fn(program1,uniformCount1,uniformNames1,uniformIndices1);
}
typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC_HPP)(GLuint,const GLchar *);
static inline GLint GetUniformLocation(GLuint program1,const GLchar * name1)
{
	static PFNGLGETUNIFORMLOCATIONPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC_HPP>(_impl::_get_proc_address("glGetUniformLocation",3,1));
	return fn(program1,name1);
}
typedef void (*PFNGLGETUNIFORMFVPROC_HPP)(GLuint,GLint,GLfloat *);
static inline void GetUniformfv(GLuint program1,GLint location1,GLfloat * params1)
{
	static PFNGLGETUNIFORMFVPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMFVPROC_HPP>(_impl::_get_proc_address("glGetUniformfv",3,1));
	 fn(program1,location1,params1);
}
typedef void (*PFNGLGETUNIFORMIVPROC_HPP)(GLuint,GLint,GLint *);
static inline void GetUniformiv(GLuint program1,GLint location1,GLint * params1)
{
	static PFNGLGETUNIFORMIVPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMIVPROC_HPP>(_impl::_get_proc_address("glGetUniformiv",3,1));
	 fn(program1,location1,params1);
}
typedef void (*PFNGLGETUNIFORMUIVPROC_HPP)(GLuint,GLint,GLuint *);
static inline void GetUniformuiv(GLuint program1,GLint location1,GLuint * params1)
{
	static PFNGLGETUNIFORMUIVPROC_HPP fn=reinterpret_cast<PFNGLGETUNIFORMUIVPROC_HPP>(_impl::_get_proc_address("glGetUniformuiv",3,1));
	 fn(program1,location1,params1);
}
typedef void (*PFNGLGETVERTEXATTRIBIIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetVertexAttribIiv(GLuint index1,GLenum pname1,GLint * params1)
{
	static PFNGLGETVERTEXATTRIBIIVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBIIVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribIiv",3,1));
	 fn(index1,pname1,params1);
}
typedef void (*PFNGLGETVERTEXATTRIBIUIVPROC_HPP)(GLuint,GLenum,GLuint *);
static inline void GetVertexAttribIuiv(GLuint index1,GLenum pname1,GLuint * params1)
{
	static PFNGLGETVERTEXATTRIBIUIVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribIuiv",3,1));
	 fn(index1,pname1,params1);
}
typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP)(GLuint,GLenum,void **);
static inline void GetVertexAttribPointerv(GLuint index1,GLenum pname1,void ** pointer1)
{
	static PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribPointerv",3,1));
	 fn(index1,pname1,pointer1);
}
typedef void (*PFNGLGETVERTEXATTRIBDVPROC_HPP)(GLuint,GLenum,GLdouble *);
static inline void GetVertexAttribdv(GLuint index1,GLenum pname1,GLdouble * params1)
{
	static PFNGLGETVERTEXATTRIBDVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBDVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribdv",3,1));
	 fn(index1,pname1,params1);
}
typedef void (*PFNGLGETVERTEXATTRIBFVPROC_HPP)(GLuint,GLenum,GLfloat *);
static inline void GetVertexAttribfv(GLuint index1,GLenum pname1,GLfloat * params1)
{
	static PFNGLGETVERTEXATTRIBFVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribfv",3,1));
	 fn(index1,pname1,params1);
}
typedef void (*PFNGLGETVERTEXATTRIBIVPROC_HPP)(GLuint,GLenum,GLint *);
static inline void GetVertexAttribiv(GLuint index1,GLenum pname1,GLint * params1)
{
	static PFNGLGETVERTEXATTRIBIVPROC_HPP fn=reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC_HPP>(_impl::_get_proc_address("glGetVertexAttribiv",3,1));
	 fn(index1,pname1,params1);
}
static inline void Hint(GLenum target1,GLenum mode1)
{
	 glHint(target1,mode1);
}
static inline void IndexMask(GLuint mask1)
{
	 glIndexMask(mask1);
}
static inline void IndexPointer(GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glIndexPointer(type1,stride1,pointer1);
}
static inline void Indexd(GLdouble c1)
{
	 glIndexd(c1);
}
static inline void Indexdv(const GLdouble * c1)
{
	 glIndexdv(c1);
}
static inline void Indexf(GLfloat c1)
{
	 glIndexf(c1);
}
static inline void Indexfv(const GLfloat * c1)
{
	 glIndexfv(c1);
}
static inline void Indexi(GLint c1)
{
	 glIndexi(c1);
}
static inline void Indexiv(const GLint * c1)
{
	 glIndexiv(c1);
}
static inline void Indexs(GLshort c1)
{
	 glIndexs(c1);
}
static inline void Indexsv(const GLshort * c1)
{
	 glIndexsv(c1);
}
static inline void Indexub(GLubyte c1)
{
	 glIndexub(c1);
}
static inline void Indexubv(const GLubyte * c1)
{
	 glIndexubv(c1);
}
static inline void InitNames()
{
	 glInitNames();
}
static inline void InterleavedArrays(GLenum format1,GLsizei stride1,const void * pointer1)
{
	 glInterleavedArrays(format1,stride1,pointer1);
}
typedef GLboolean (*PFNGLISBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsBuffer(GLuint buffer1)
{
	static PFNGLISBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISBUFFERPROC_HPP>(_impl::_get_proc_address("glIsBuffer",3,1));
	return fn(buffer1);
}
static inline GLboolean IsEnabled(GLenum cap1)
{
	return glIsEnabled(cap1);
}
typedef GLboolean (*PFNGLISENABLEDIPROC_HPP)(GLenum,GLuint);
static inline GLboolean IsEnabledi(GLenum target1,GLuint index1)
{
	static PFNGLISENABLEDIPROC_HPP fn=reinterpret_cast<PFNGLISENABLEDIPROC_HPP>(_impl::_get_proc_address("glIsEnabledi",3,1));
	return fn(target1,index1);
}
typedef GLboolean (*PFNGLISFRAMEBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsFramebuffer(GLuint framebuffer1)
{
	static PFNGLISFRAMEBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISFRAMEBUFFERPROC_HPP>(_impl::_get_proc_address("glIsFramebuffer",3,1));
	return fn(framebuffer1);
}
static inline GLboolean IsList(GLuint list1)
{
	return glIsList(list1);
}
typedef GLboolean (*PFNGLISPROGRAMPROC_HPP)(GLuint);
static inline GLboolean IsProgram(GLuint program1)
{
	static PFNGLISPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLISPROGRAMPROC_HPP>(_impl::_get_proc_address("glIsProgram",3,1));
	return fn(program1);
}
typedef GLboolean (*PFNGLISQUERYPROC_HPP)(GLuint);
static inline GLboolean IsQuery(GLuint id1)
{
	static PFNGLISQUERYPROC_HPP fn=reinterpret_cast<PFNGLISQUERYPROC_HPP>(_impl::_get_proc_address("glIsQuery",3,1));
	return fn(id1);
}
typedef GLboolean (*PFNGLISRENDERBUFFERPROC_HPP)(GLuint);
static inline GLboolean IsRenderbuffer(GLuint renderbuffer1)
{
	static PFNGLISRENDERBUFFERPROC_HPP fn=reinterpret_cast<PFNGLISRENDERBUFFERPROC_HPP>(_impl::_get_proc_address("glIsRenderbuffer",3,1));
	return fn(renderbuffer1);
}
typedef GLboolean (*PFNGLISSHADERPROC_HPP)(GLuint);
static inline GLboolean IsShader(GLuint shader1)
{
	static PFNGLISSHADERPROC_HPP fn=reinterpret_cast<PFNGLISSHADERPROC_HPP>(_impl::_get_proc_address("glIsShader",3,1));
	return fn(shader1);
}
static inline GLboolean IsTexture(GLuint texture1)
{
	return glIsTexture(texture1);
}
typedef GLboolean (*PFNGLISVERTEXARRAYPROC_HPP)(GLuint);
static inline GLboolean IsVertexArray(GLuint array1)
{
	static PFNGLISVERTEXARRAYPROC_HPP fn=reinterpret_cast<PFNGLISVERTEXARRAYPROC_HPP>(_impl::_get_proc_address("glIsVertexArray",3,1));
	return fn(array1);
}
static inline void LightModelf(GLenum pname1,GLfloat param1)
{
	 glLightModelf(pname1,param1);
}
static inline void LightModelfv(GLenum pname1,const GLfloat * params1)
{
	 glLightModelfv(pname1,params1);
}
static inline void LightModeli(GLenum pname1,GLint param1)
{
	 glLightModeli(pname1,param1);
}
static inline void LightModeliv(GLenum pname1,const GLint * params1)
{
	 glLightModeliv(pname1,params1);
}
static inline void Lightf(GLenum light1,GLenum pname1,GLfloat param1)
{
	 glLightf(light1,pname1,param1);
}
static inline void Lightfv(GLenum light1,GLenum pname1,const GLfloat * params1)
{
	 glLightfv(light1,pname1,params1);
}
static inline void Lighti(GLenum light1,GLenum pname1,GLint param1)
{
	 glLighti(light1,pname1,param1);
}
static inline void Lightiv(GLenum light1,GLenum pname1,const GLint * params1)
{
	 glLightiv(light1,pname1,params1);
}
static inline void LineStipple(GLint factor1,GLushort pattern1)
{
	 glLineStipple(factor1,pattern1);
}
static inline void LineWidth(GLfloat width1)
{
	 glLineWidth(width1);
}
typedef void (*PFNGLLINKPROGRAMPROC_HPP)(GLuint);
static inline void LinkProgram(GLuint program1)
{
	static PFNGLLINKPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLLINKPROGRAMPROC_HPP>(_impl::_get_proc_address("glLinkProgram",3,1));
	 fn(program1);
}
static inline void ListBase(GLuint base1)
{
	 glListBase(base1);
}
static inline void LoadIdentity()
{
	 glLoadIdentity();
}
static inline void LoadMatrixd(const GLdouble * m1)
{
	 glLoadMatrixd(m1);
}
static inline void LoadMatrixf(const GLfloat * m1)
{
	 glLoadMatrixf(m1);
}
static inline void LoadName(GLuint name1)
{
	 glLoadName(name1);
}
typedef void (*PFNGLLOADTRANSPOSEMATRIXDPROC_HPP)(const GLdouble *);
static inline void LoadTransposeMatrixd(const GLdouble * m1)
{
	static PFNGLLOADTRANSPOSEMATRIXDPROC_HPP fn=reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXDPROC_HPP>(_impl::_get_proc_address("glLoadTransposeMatrixd",3,1));
	 fn(m1);
}
typedef void (*PFNGLLOADTRANSPOSEMATRIXFPROC_HPP)(const GLfloat *);
static inline void LoadTransposeMatrixf(const GLfloat * m1)
{
	static PFNGLLOADTRANSPOSEMATRIXFPROC_HPP fn=reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXFPROC_HPP>(_impl::_get_proc_address("glLoadTransposeMatrixf",3,1));
	 fn(m1);
}
static inline void LogicOp(GLenum opcode1)
{
	 glLogicOp(opcode1);
}
static inline void Map1d(GLenum target1,GLdouble u11,GLdouble u21,GLint stride1,GLint order1,const GLdouble * points1)
{
	 glMap1d(target1,u11,u21,stride1,order1,points1);
}
static inline void Map1f(GLenum target1,GLfloat u11,GLfloat u21,GLint stride1,GLint order1,const GLfloat * points1)
{
	 glMap1f(target1,u11,u21,stride1,order1,points1);
}
static inline void Map2d(GLenum target1,GLdouble u11,GLdouble u21,GLint ustride1,GLint uorder1,GLdouble v11,GLdouble v21,GLint vstride1,GLint vorder1,const GLdouble * points1)
{
	 glMap2d(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
static inline void Map2f(GLenum target1,GLfloat u11,GLfloat u21,GLint ustride1,GLint uorder1,GLfloat v11,GLfloat v21,GLint vstride1,GLint vorder1,const GLfloat * points1)
{
	 glMap2f(target1,u11,u21,ustride1,uorder1,v11,v21,vstride1,vorder1,points1);
}
typedef void * (*PFNGLMAPBUFFERPROC_HPP)(GLenum,GLenum);
static inline void * MapBuffer(GLenum target1,GLenum access1)
{
	static PFNGLMAPBUFFERPROC_HPP fn=reinterpret_cast<PFNGLMAPBUFFERPROC_HPP>(_impl::_get_proc_address("glMapBuffer",3,1));
	return fn(target1,access1);
}
typedef void * (*PFNGLMAPBUFFERRANGEPROC_HPP)(GLenum,GLintptr,GLsizeiptr,GLbitfield);
static inline void * MapBufferRange(GLenum target1,GLintptr offset1,GLsizeiptr length1,GLbitfield access1)
{
	static PFNGLMAPBUFFERRANGEPROC_HPP fn=reinterpret_cast<PFNGLMAPBUFFERRANGEPROC_HPP>(_impl::_get_proc_address("glMapBufferRange",3,1));
	return fn(target1,offset1,length1,access1);
}
static inline void MapGrid1d(GLint un1,GLdouble u11,GLdouble u21)
{
	 glMapGrid1d(un1,u11,u21);
}
static inline void MapGrid1f(GLint un1,GLfloat u11,GLfloat u21)
{
	 glMapGrid1f(un1,u11,u21);
}
static inline void MapGrid2d(GLint un1,GLdouble u11,GLdouble u21,GLint vn1,GLdouble v11,GLdouble v21)
{
	 glMapGrid2d(un1,u11,u21,vn1,v11,v21);
}
static inline void MapGrid2f(GLint un1,GLfloat u11,GLfloat u21,GLint vn1,GLfloat v11,GLfloat v21)
{
	 glMapGrid2f(un1,u11,u21,vn1,v11,v21);
}
static inline void Materialf(GLenum face1,GLenum pname1,GLfloat param1)
{
	 glMaterialf(face1,pname1,param1);
}
static inline void Materialfv(GLenum face1,GLenum pname1,const GLfloat * params1)
{
	 glMaterialfv(face1,pname1,params1);
}
static inline void Materiali(GLenum face1,GLenum pname1,GLint param1)
{
	 glMateriali(face1,pname1,param1);
}
static inline void Materialiv(GLenum face1,GLenum pname1,const GLint * params1)
{
	 glMaterialiv(face1,pname1,params1);
}
static inline void MatrixMode(GLenum mode1)
{
	 glMatrixMode(mode1);
}
static inline void MultMatrixd(const GLdouble * m1)
{
	 glMultMatrixd(m1);
}
static inline void MultMatrixf(const GLfloat * m1)
{
	 glMultMatrixf(m1);
}
typedef void (*PFNGLMULTTRANSPOSEMATRIXDPROC_HPP)(const GLdouble *);
static inline void MultTransposeMatrixd(const GLdouble * m1)
{
	static PFNGLMULTTRANSPOSEMATRIXDPROC_HPP fn=reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXDPROC_HPP>(_impl::_get_proc_address("glMultTransposeMatrixd",3,1));
	 fn(m1);
}
typedef void (*PFNGLMULTTRANSPOSEMATRIXFPROC_HPP)(const GLfloat *);
static inline void MultTransposeMatrixf(const GLfloat * m1)
{
	static PFNGLMULTTRANSPOSEMATRIXFPROC_HPP fn=reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXFPROC_HPP>(_impl::_get_proc_address("glMultTransposeMatrixf",3,1));
	 fn(m1);
}
typedef void (*PFNGLMULTIDRAWARRAYSPROC_HPP)(GLenum,const GLint *,const GLsizei *,GLsizei);
static inline void MultiDrawArrays(GLenum mode1,const GLint * first1,const GLsizei * count1,GLsizei drawcount1)
{
	static PFNGLMULTIDRAWARRAYSPROC_HPP fn=reinterpret_cast<PFNGLMULTIDRAWARRAYSPROC_HPP>(_impl::_get_proc_address("glMultiDrawArrays",3,1));
	 fn(mode1,first1,count1,drawcount1);
}
typedef void (*PFNGLMULTIDRAWELEMENTSPROC_HPP)(GLenum,const GLsizei *,GLenum,const void *const*,GLsizei);
static inline void MultiDrawElements(GLenum mode1,const GLsizei * count1,GLenum type1,const void *const* indices1,GLsizei drawcount1)
{
	static PFNGLMULTIDRAWELEMENTSPROC_HPP fn=reinterpret_cast<PFNGLMULTIDRAWELEMENTSPROC_HPP>(_impl::_get_proc_address("glMultiDrawElements",3,1));
	 fn(mode1,count1,type1,indices1,drawcount1);
}
typedef void (*PFNGLMULTITEXCOORD1DPROC_HPP)(GLenum,GLdouble);
static inline void MultiTexCoord1d(GLenum target1,GLdouble s1)
{
	static PFNGLMULTITEXCOORD1DPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1DPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1d",3,1));
	 fn(target1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1DVPROC_HPP)(GLenum,const GLdouble *);
static inline void MultiTexCoord1dv(GLenum target1,const GLdouble * v1)
{
	static PFNGLMULTITEXCOORD1DVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1DVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1dv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD1FPROC_HPP)(GLenum,GLfloat);
static inline void MultiTexCoord1f(GLenum target1,GLfloat s1)
{
	static PFNGLMULTITEXCOORD1FPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1FPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1f",3,1));
	 fn(target1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1FVPROC_HPP)(GLenum,const GLfloat *);
static inline void MultiTexCoord1fv(GLenum target1,const GLfloat * v1)
{
	static PFNGLMULTITEXCOORD1FVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1FVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1fv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD1IPROC_HPP)(GLenum,GLint);
static inline void MultiTexCoord1i(GLenum target1,GLint s1)
{
	static PFNGLMULTITEXCOORD1IPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1IPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1i",3,1));
	 fn(target1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1IVPROC_HPP)(GLenum,const GLint *);
static inline void MultiTexCoord1iv(GLenum target1,const GLint * v1)
{
	static PFNGLMULTITEXCOORD1IVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1IVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1iv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD1SPROC_HPP)(GLenum,GLshort);
static inline void MultiTexCoord1s(GLenum target1,GLshort s1)
{
	static PFNGLMULTITEXCOORD1SPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1SPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1s",3,1));
	 fn(target1,s1);
}
typedef void (*PFNGLMULTITEXCOORD1SVPROC_HPP)(GLenum,const GLshort *);
static inline void MultiTexCoord1sv(GLenum target1,const GLshort * v1)
{
	static PFNGLMULTITEXCOORD1SVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD1SVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord1sv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD2DPROC_HPP)(GLenum,GLdouble,GLdouble);
static inline void MultiTexCoord2d(GLenum target1,GLdouble s1,GLdouble t1)
{
	static PFNGLMULTITEXCOORD2DPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2DPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2d",3,1));
	 fn(target1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2DVPROC_HPP)(GLenum,const GLdouble *);
static inline void MultiTexCoord2dv(GLenum target1,const GLdouble * v1)
{
	static PFNGLMULTITEXCOORD2DVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2DVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2dv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD2FPROC_HPP)(GLenum,GLfloat,GLfloat);
static inline void MultiTexCoord2f(GLenum target1,GLfloat s1,GLfloat t1)
{
	static PFNGLMULTITEXCOORD2FPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2FPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2f",3,1));
	 fn(target1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2FVPROC_HPP)(GLenum,const GLfloat *);
static inline void MultiTexCoord2fv(GLenum target1,const GLfloat * v1)
{
	static PFNGLMULTITEXCOORD2FVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2FVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2fv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD2IPROC_HPP)(GLenum,GLint,GLint);
static inline void MultiTexCoord2i(GLenum target1,GLint s1,GLint t1)
{
	static PFNGLMULTITEXCOORD2IPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2IPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2i",3,1));
	 fn(target1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2IVPROC_HPP)(GLenum,const GLint *);
static inline void MultiTexCoord2iv(GLenum target1,const GLint * v1)
{
	static PFNGLMULTITEXCOORD2IVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2IVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2iv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD2SPROC_HPP)(GLenum,GLshort,GLshort);
static inline void MultiTexCoord2s(GLenum target1,GLshort s1,GLshort t1)
{
	static PFNGLMULTITEXCOORD2SPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2SPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2s",3,1));
	 fn(target1,s1,t1);
}
typedef void (*PFNGLMULTITEXCOORD2SVPROC_HPP)(GLenum,const GLshort *);
static inline void MultiTexCoord2sv(GLenum target1,const GLshort * v1)
{
	static PFNGLMULTITEXCOORD2SVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD2SVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord2sv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD3DPROC_HPP)(GLenum,GLdouble,GLdouble,GLdouble);
static inline void MultiTexCoord3d(GLenum target1,GLdouble s1,GLdouble t1,GLdouble r1)
{
	static PFNGLMULTITEXCOORD3DPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3DPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3d",3,1));
	 fn(target1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3DVPROC_HPP)(GLenum,const GLdouble *);
static inline void MultiTexCoord3dv(GLenum target1,const GLdouble * v1)
{
	static PFNGLMULTITEXCOORD3DVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3DVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3dv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD3FPROC_HPP)(GLenum,GLfloat,GLfloat,GLfloat);
static inline void MultiTexCoord3f(GLenum target1,GLfloat s1,GLfloat t1,GLfloat r1)
{
	static PFNGLMULTITEXCOORD3FPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3FPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3f",3,1));
	 fn(target1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3FVPROC_HPP)(GLenum,const GLfloat *);
static inline void MultiTexCoord3fv(GLenum target1,const GLfloat * v1)
{
	static PFNGLMULTITEXCOORD3FVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3FVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3fv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD3IPROC_HPP)(GLenum,GLint,GLint,GLint);
static inline void MultiTexCoord3i(GLenum target1,GLint s1,GLint t1,GLint r1)
{
	static PFNGLMULTITEXCOORD3IPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3IPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3i",3,1));
	 fn(target1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3IVPROC_HPP)(GLenum,const GLint *);
static inline void MultiTexCoord3iv(GLenum target1,const GLint * v1)
{
	static PFNGLMULTITEXCOORD3IVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3IVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3iv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD3SPROC_HPP)(GLenum,GLshort,GLshort,GLshort);
static inline void MultiTexCoord3s(GLenum target1,GLshort s1,GLshort t1,GLshort r1)
{
	static PFNGLMULTITEXCOORD3SPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3SPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3s",3,1));
	 fn(target1,s1,t1,r1);
}
typedef void (*PFNGLMULTITEXCOORD3SVPROC_HPP)(GLenum,const GLshort *);
static inline void MultiTexCoord3sv(GLenum target1,const GLshort * v1)
{
	static PFNGLMULTITEXCOORD3SVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD3SVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord3sv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD4DPROC_HPP)(GLenum,GLdouble,GLdouble,GLdouble,GLdouble);
static inline void MultiTexCoord4d(GLenum target1,GLdouble s1,GLdouble t1,GLdouble r1,GLdouble q1)
{
	static PFNGLMULTITEXCOORD4DPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4DPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4d",3,1));
	 fn(target1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4DVPROC_HPP)(GLenum,const GLdouble *);
static inline void MultiTexCoord4dv(GLenum target1,const GLdouble * v1)
{
	static PFNGLMULTITEXCOORD4DVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4DVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4dv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD4FPROC_HPP)(GLenum,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void MultiTexCoord4f(GLenum target1,GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
	static PFNGLMULTITEXCOORD4FPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4FPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4f",3,1));
	 fn(target1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4FVPROC_HPP)(GLenum,const GLfloat *);
static inline void MultiTexCoord4fv(GLenum target1,const GLfloat * v1)
{
	static PFNGLMULTITEXCOORD4FVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4FVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4fv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD4IPROC_HPP)(GLenum,GLint,GLint,GLint,GLint);
static inline void MultiTexCoord4i(GLenum target1,GLint s1,GLint t1,GLint r1,GLint q1)
{
	static PFNGLMULTITEXCOORD4IPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4IPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4i",3,1));
	 fn(target1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4IVPROC_HPP)(GLenum,const GLint *);
static inline void MultiTexCoord4iv(GLenum target1,const GLint * v1)
{
	static PFNGLMULTITEXCOORD4IVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4IVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4iv",3,1));
	 fn(target1,v1);
}
typedef void (*PFNGLMULTITEXCOORD4SPROC_HPP)(GLenum,GLshort,GLshort,GLshort,GLshort);
static inline void MultiTexCoord4s(GLenum target1,GLshort s1,GLshort t1,GLshort r1,GLshort q1)
{
	static PFNGLMULTITEXCOORD4SPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4SPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4s",3,1));
	 fn(target1,s1,t1,r1,q1);
}
typedef void (*PFNGLMULTITEXCOORD4SVPROC_HPP)(GLenum,const GLshort *);
static inline void MultiTexCoord4sv(GLenum target1,const GLshort * v1)
{
	static PFNGLMULTITEXCOORD4SVPROC_HPP fn=reinterpret_cast<PFNGLMULTITEXCOORD4SVPROC_HPP>(_impl::_get_proc_address("glMultiTexCoord4sv",3,1));
	 fn(target1,v1);
}
static inline void NewList(GLuint list1,GLenum mode1)
{
	 glNewList(list1,mode1);
}
static inline void Normal3b(GLbyte nx1,GLbyte ny1,GLbyte nz1)
{
	 glNormal3b(nx1,ny1,nz1);
}
static inline void Normal3bv(const GLbyte * v1)
{
	 glNormal3bv(v1);
}
static inline void Normal3d(GLdouble nx1,GLdouble ny1,GLdouble nz1)
{
	 glNormal3d(nx1,ny1,nz1);
}
static inline void Normal3dv(const GLdouble * v1)
{
	 glNormal3dv(v1);
}
static inline void Normal3f(GLfloat nx1,GLfloat ny1,GLfloat nz1)
{
	 glNormal3f(nx1,ny1,nz1);
}
static inline void Normal3fv(const GLfloat * v1)
{
	 glNormal3fv(v1);
}
static inline void Normal3i(GLint nx1,GLint ny1,GLint nz1)
{
	 glNormal3i(nx1,ny1,nz1);
}
static inline void Normal3iv(const GLint * v1)
{
	 glNormal3iv(v1);
}
static inline void Normal3s(GLshort nx1,GLshort ny1,GLshort nz1)
{
	 glNormal3s(nx1,ny1,nz1);
}
static inline void Normal3sv(const GLshort * v1)
{
	 glNormal3sv(v1);
}
static inline void NormalPointer(GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glNormalPointer(type1,stride1,pointer1);
}
static inline void Ortho(GLdouble left1,GLdouble right1,GLdouble bottom1,GLdouble top1,GLdouble zNear1,GLdouble zFar1)
{
	 glOrtho(left1,right1,bottom1,top1,zNear1,zFar1);
}
static inline void PassThrough(GLfloat token1)
{
	 glPassThrough(token1);
}
static inline void PixelMapfv(GLenum map1,GLsizei mapsize1,const GLfloat * values1)
{
	 glPixelMapfv(map1,mapsize1,values1);
}
static inline void PixelMapuiv(GLenum map1,GLsizei mapsize1,const GLuint * values1)
{
	 glPixelMapuiv(map1,mapsize1,values1);
}
static inline void PixelMapusv(GLenum map1,GLsizei mapsize1,const GLushort * values1)
{
	 glPixelMapusv(map1,mapsize1,values1);
}
static inline void PixelStoref(GLenum pname1,GLfloat param1)
{
	 glPixelStoref(pname1,param1);
}
static inline void PixelStorei(GLenum pname1,GLint param1)
{
	 glPixelStorei(pname1,param1);
}
static inline void PixelTransferf(GLenum pname1,GLfloat param1)
{
	 glPixelTransferf(pname1,param1);
}
static inline void PixelTransferi(GLenum pname1,GLint param1)
{
	 glPixelTransferi(pname1,param1);
}
static inline void PixelZoom(GLfloat xfactor1,GLfloat yfactor1)
{
	 glPixelZoom(xfactor1,yfactor1);
}
typedef void (*PFNGLPOINTPARAMETERFPROC_HPP)(GLenum,GLfloat);
static inline void PointParameterf(GLenum pname1,GLfloat param1)
{
	static PFNGLPOINTPARAMETERFPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERFPROC_HPP>(_impl::_get_proc_address("glPointParameterf",3,1));
	 fn(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERFVPROC_HPP)(GLenum,const GLfloat *);
static inline void PointParameterfv(GLenum pname1,const GLfloat * params1)
{
	static PFNGLPOINTPARAMETERFVPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERFVPROC_HPP>(_impl::_get_proc_address("glPointParameterfv",3,1));
	 fn(pname1,params1);
}
typedef void (*PFNGLPOINTPARAMETERIPROC_HPP)(GLenum,GLint);
static inline void PointParameteri(GLenum pname1,GLint param1)
{
	static PFNGLPOINTPARAMETERIPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERIPROC_HPP>(_impl::_get_proc_address("glPointParameteri",3,1));
	 fn(pname1,param1);
}
typedef void (*PFNGLPOINTPARAMETERIVPROC_HPP)(GLenum,const GLint *);
static inline void PointParameteriv(GLenum pname1,const GLint * params1)
{
	static PFNGLPOINTPARAMETERIVPROC_HPP fn=reinterpret_cast<PFNGLPOINTPARAMETERIVPROC_HPP>(_impl::_get_proc_address("glPointParameteriv",3,1));
	 fn(pname1,params1);
}
static inline void PointSize(GLfloat size1)
{
	 glPointSize(size1);
}
static inline void PolygonMode(GLenum face1,GLenum mode1)
{
	 glPolygonMode(face1,mode1);
}
static inline void PolygonOffset(GLfloat factor1,GLfloat units1)
{
	 glPolygonOffset(factor1,units1);
}
static inline void PolygonStipple(const GLubyte * mask1)
{
	 glPolygonStipple(mask1);
}
static inline void PopAttrib()
{
	 glPopAttrib();
}
static inline void PopClientAttrib()
{
	 glPopClientAttrib();
}
static inline void PopMatrix()
{
	 glPopMatrix();
}
static inline void PopName()
{
	 glPopName();
}
typedef void (*PFNGLPRIMITIVERESTARTINDEXPROC_HPP)(GLuint);
static inline void PrimitiveRestartIndex(GLuint index1)
{
	static PFNGLPRIMITIVERESTARTINDEXPROC_HPP fn=reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXPROC_HPP>(_impl::_get_proc_address("glPrimitiveRestartIndex",3,1));
	 fn(index1);
}
static inline void PrioritizeTextures(GLsizei n1,const GLuint * textures1,const GLfloat * priorities1)
{
	 glPrioritizeTextures(n1,textures1,priorities1);
}
static inline void PushAttrib(GLbitfield mask1)
{
	 glPushAttrib(mask1);
}
static inline void PushClientAttrib(GLbitfield mask1)
{
	 glPushClientAttrib(mask1);
}
static inline void PushMatrix()
{
	 glPushMatrix();
}
static inline void PushName(GLuint name1)
{
	 glPushName(name1);
}
static inline void RasterPos2d(GLdouble x1,GLdouble y1)
{
	 glRasterPos2d(x1,y1);
}
static inline void RasterPos2dv(const GLdouble * v1)
{
	 glRasterPos2dv(v1);
}
static inline void RasterPos2f(GLfloat x1,GLfloat y1)
{
	 glRasterPos2f(x1,y1);
}
static inline void RasterPos2fv(const GLfloat * v1)
{
	 glRasterPos2fv(v1);
}
static inline void RasterPos2i(GLint x1,GLint y1)
{
	 glRasterPos2i(x1,y1);
}
static inline void RasterPos2iv(const GLint * v1)
{
	 glRasterPos2iv(v1);
}
static inline void RasterPos2s(GLshort x1,GLshort y1)
{
	 glRasterPos2s(x1,y1);
}
static inline void RasterPos2sv(const GLshort * v1)
{
	 glRasterPos2sv(v1);
}
static inline void RasterPos3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glRasterPos3d(x1,y1,z1);
}
static inline void RasterPos3dv(const GLdouble * v1)
{
	 glRasterPos3dv(v1);
}
static inline void RasterPos3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glRasterPos3f(x1,y1,z1);
}
static inline void RasterPos3fv(const GLfloat * v1)
{
	 glRasterPos3fv(v1);
}
static inline void RasterPos3i(GLint x1,GLint y1,GLint z1)
{
	 glRasterPos3i(x1,y1,z1);
}
static inline void RasterPos3iv(const GLint * v1)
{
	 glRasterPos3iv(v1);
}
static inline void RasterPos3s(GLshort x1,GLshort y1,GLshort z1)
{
	 glRasterPos3s(x1,y1,z1);
}
static inline void RasterPos3sv(const GLshort * v1)
{
	 glRasterPos3sv(v1);
}
static inline void RasterPos4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	 glRasterPos4d(x1,y1,z1,w1);
}
static inline void RasterPos4dv(const GLdouble * v1)
{
	 glRasterPos4dv(v1);
}
static inline void RasterPos4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	 glRasterPos4f(x1,y1,z1,w1);
}
static inline void RasterPos4fv(const GLfloat * v1)
{
	 glRasterPos4fv(v1);
}
static inline void RasterPos4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	 glRasterPos4i(x1,y1,z1,w1);
}
static inline void RasterPos4iv(const GLint * v1)
{
	 glRasterPos4iv(v1);
}
static inline void RasterPos4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	 glRasterPos4s(x1,y1,z1,w1);
}
static inline void RasterPos4sv(const GLshort * v1)
{
	 glRasterPos4sv(v1);
}
static inline void ReadBuffer(GLenum src1)
{
	 glReadBuffer(src1);
}
static inline void ReadPixels(GLint x1,GLint y1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,void * pixels1)
{
	 glReadPixels(x1,y1,width1,height1,format1,type1,pixels1);
}
static inline void Rectd(GLdouble x11,GLdouble y11,GLdouble x21,GLdouble y21)
{
	 glRectd(x11,y11,x21,y21);
}
static inline void Rectdv(const GLdouble * v11,const GLdouble * v21)
{
	 glRectdv(v11,v21);
}
static inline void Rectf(GLfloat x11,GLfloat y11,GLfloat x21,GLfloat y21)
{
	 glRectf(x11,y11,x21,y21);
}
static inline void Rectfv(const GLfloat * v11,const GLfloat * v21)
{
	 glRectfv(v11,v21);
}
static inline void Recti(GLint x11,GLint y11,GLint x21,GLint y21)
{
	 glRecti(x11,y11,x21,y21);
}
static inline void Rectiv(const GLint * v11,const GLint * v21)
{
	 glRectiv(v11,v21);
}
static inline void Rects(GLshort x11,GLshort y11,GLshort x21,GLshort y21)
{
	 glRects(x11,y11,x21,y21);
}
static inline void Rectsv(const GLshort * v11,const GLshort * v21)
{
	 glRectsv(v11,v21);
}
static inline GLint RenderMode(GLenum mode1)
{
	return glRenderMode(mode1);
}
typedef void (*PFNGLRENDERBUFFERSTORAGEPROC_HPP)(GLenum,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorage(GLenum target1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorage",3,1));
	 fn(target1,internalformat1,width1,height1);
}
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC_HPP)(GLenum,GLsizei,GLenum,GLsizei,GLsizei);
static inline void RenderbufferStorageMultisample(GLenum target1,GLsizei samples1,GLenum internalformat1,GLsizei width1,GLsizei height1)
{
	static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC_HPP fn=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC_HPP>(_impl::_get_proc_address("glRenderbufferStorageMultisample",3,1));
	 fn(target1,samples1,internalformat1,width1,height1);
}
static inline void Rotated(GLdouble angle1,GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glRotated(angle1,x1,y1,z1);
}
static inline void Rotatef(GLfloat angle1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glRotatef(angle1,x1,y1,z1);
}
typedef void (*PFNGLSAMPLECOVERAGEPROC_HPP)(GLfloat,GLboolean);
static inline void SampleCoverage(GLfloat value1,GLboolean invert1)
{
	static PFNGLSAMPLECOVERAGEPROC_HPP fn=reinterpret_cast<PFNGLSAMPLECOVERAGEPROC_HPP>(_impl::_get_proc_address("glSampleCoverage",3,1));
	 fn(value1,invert1);
}
static inline void Scaled(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glScaled(x1,y1,z1);
}
static inline void Scalef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glScalef(x1,y1,z1);
}
static inline void Scissor(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glScissor(x1,y1,width1,height1);
}
typedef void (*PFNGLSECONDARYCOLOR3BPROC_HPP)(GLbyte,GLbyte,GLbyte);
static inline void SecondaryColor3b(GLbyte red1,GLbyte green1,GLbyte blue1)
{
	static PFNGLSECONDARYCOLOR3BPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3BPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3b",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3BVPROC_HPP)(const GLbyte *);
static inline void SecondaryColor3bv(const GLbyte * v1)
{
	static PFNGLSECONDARYCOLOR3BVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3BVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3bv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void SecondaryColor3d(GLdouble red1,GLdouble green1,GLdouble blue1)
{
	static PFNGLSECONDARYCOLOR3DPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3DPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3d",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3DVPROC_HPP)(const GLdouble *);
static inline void SecondaryColor3dv(const GLdouble * v1)
{
	static PFNGLSECONDARYCOLOR3DVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3DVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3dv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void SecondaryColor3f(GLfloat red1,GLfloat green1,GLfloat blue1)
{
	static PFNGLSECONDARYCOLOR3FPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3FPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3f",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3FVPROC_HPP)(const GLfloat *);
static inline void SecondaryColor3fv(const GLfloat * v1)
{
	static PFNGLSECONDARYCOLOR3FVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3FVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3fv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3IPROC_HPP)(GLint,GLint,GLint);
static inline void SecondaryColor3i(GLint red1,GLint green1,GLint blue1)
{
	static PFNGLSECONDARYCOLOR3IPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3IPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3i",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3IVPROC_HPP)(const GLint *);
static inline void SecondaryColor3iv(const GLint * v1)
{
	static PFNGLSECONDARYCOLOR3IVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3IVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3iv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void SecondaryColor3s(GLshort red1,GLshort green1,GLshort blue1)
{
	static PFNGLSECONDARYCOLOR3SPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3SPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3s",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3SVPROC_HPP)(const GLshort *);
static inline void SecondaryColor3sv(const GLshort * v1)
{
	static PFNGLSECONDARYCOLOR3SVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3SVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3sv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3UBPROC_HPP)(GLubyte,GLubyte,GLubyte);
static inline void SecondaryColor3ub(GLubyte red1,GLubyte green1,GLubyte blue1)
{
	static PFNGLSECONDARYCOLOR3UBPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3UBPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3ub",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3UBVPROC_HPP)(const GLubyte *);
static inline void SecondaryColor3ubv(const GLubyte * v1)
{
	static PFNGLSECONDARYCOLOR3UBVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3UBVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3ubv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3UIPROC_HPP)(GLuint,GLuint,GLuint);
static inline void SecondaryColor3ui(GLuint red1,GLuint green1,GLuint blue1)
{
	static PFNGLSECONDARYCOLOR3UIPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3UIPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3ui",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3UIVPROC_HPP)(const GLuint *);
static inline void SecondaryColor3uiv(const GLuint * v1)
{
	static PFNGLSECONDARYCOLOR3UIVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3UIVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3uiv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLOR3USPROC_HPP)(GLushort,GLushort,GLushort);
static inline void SecondaryColor3us(GLushort red1,GLushort green1,GLushort blue1)
{
	static PFNGLSECONDARYCOLOR3USPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3USPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3us",3,1));
	 fn(red1,green1,blue1);
}
typedef void (*PFNGLSECONDARYCOLOR3USVPROC_HPP)(const GLushort *);
static inline void SecondaryColor3usv(const GLushort * v1)
{
	static PFNGLSECONDARYCOLOR3USVPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLOR3USVPROC_HPP>(_impl::_get_proc_address("glSecondaryColor3usv",3,1));
	 fn(v1);
}
typedef void (*PFNGLSECONDARYCOLORPOINTERPROC_HPP)(GLint,GLenum,GLsizei,const void *);
static inline void SecondaryColorPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLSECONDARYCOLORPOINTERPROC_HPP fn=reinterpret_cast<PFNGLSECONDARYCOLORPOINTERPROC_HPP>(_impl::_get_proc_address("glSecondaryColorPointer",3,1));
	 fn(size1,type1,stride1,pointer1);
}
static inline void SelectBuffer(GLsizei size1,GLuint * buffer1)
{
	 glSelectBuffer(size1,buffer1);
}
static inline void ShadeModel(GLenum mode1)
{
	 glShadeModel(mode1);
}
typedef void (*PFNGLSHADERSOURCEPROC_HPP)(GLuint,GLsizei,const GLchar *const*,const GLint *);
static inline void ShaderSource(GLuint shader1,GLsizei count1,const GLchar *const* string1,const GLint * length1)
{
	static PFNGLSHADERSOURCEPROC_HPP fn=reinterpret_cast<PFNGLSHADERSOURCEPROC_HPP>(_impl::_get_proc_address("glShaderSource",3,1));
	 fn(shader1,count1,string1,length1);
}
static inline void StencilFunc(GLenum func1,GLint ref1,GLuint mask1)
{
	 glStencilFunc(func1,ref1,mask1);
}
typedef void (*PFNGLSTENCILFUNCSEPARATEPROC_HPP)(GLenum,GLenum,GLint,GLuint);
static inline void StencilFuncSeparate(GLenum face1,GLenum func1,GLint ref1,GLuint mask1)
{
	static PFNGLSTENCILFUNCSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilFuncSeparate",3,1));
	 fn(face1,func1,ref1,mask1);
}
static inline void StencilMask(GLuint mask1)
{
	 glStencilMask(mask1);
}
typedef void (*PFNGLSTENCILMASKSEPARATEPROC_HPP)(GLenum,GLuint);
static inline void StencilMaskSeparate(GLenum face1,GLuint mask1)
{
	static PFNGLSTENCILMASKSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilMaskSeparate",3,1));
	 fn(face1,mask1);
}
static inline void StencilOp(GLenum fail1,GLenum zfail1,GLenum zpass1)
{
	 glStencilOp(fail1,zfail1,zpass1);
}
typedef void (*PFNGLSTENCILOPSEPARATEPROC_HPP)(GLenum,GLenum,GLenum,GLenum);
static inline void StencilOpSeparate(GLenum face1,GLenum sfail1,GLenum dpfail1,GLenum dppass1)
{
	static PFNGLSTENCILOPSEPARATEPROC_HPP fn=reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC_HPP>(_impl::_get_proc_address("glStencilOpSeparate",3,1));
	 fn(face1,sfail1,dpfail1,dppass1);
}
typedef void (*PFNGLTEXBUFFERPROC_HPP)(GLenum,GLenum,GLuint);
static inline void TexBuffer(GLenum target1,GLenum internalformat1,GLuint buffer1)
{
	static PFNGLTEXBUFFERPROC_HPP fn=reinterpret_cast<PFNGLTEXBUFFERPROC_HPP>(_impl::_get_proc_address("glTexBuffer",3,1));
	 fn(target1,internalformat1,buffer1);
}
static inline void TexCoord1d(GLdouble s1)
{
	 glTexCoord1d(s1);
}
static inline void TexCoord1dv(const GLdouble * v1)
{
	 glTexCoord1dv(v1);
}
static inline void TexCoord1f(GLfloat s1)
{
	 glTexCoord1f(s1);
}
static inline void TexCoord1fv(const GLfloat * v1)
{
	 glTexCoord1fv(v1);
}
static inline void TexCoord1i(GLint s1)
{
	 glTexCoord1i(s1);
}
static inline void TexCoord1iv(const GLint * v1)
{
	 glTexCoord1iv(v1);
}
static inline void TexCoord1s(GLshort s1)
{
	 glTexCoord1s(s1);
}
static inline void TexCoord1sv(const GLshort * v1)
{
	 glTexCoord1sv(v1);
}
static inline void TexCoord2d(GLdouble s1,GLdouble t1)
{
	 glTexCoord2d(s1,t1);
}
static inline void TexCoord2dv(const GLdouble * v1)
{
	 glTexCoord2dv(v1);
}
static inline void TexCoord2f(GLfloat s1,GLfloat t1)
{
	 glTexCoord2f(s1,t1);
}
static inline void TexCoord2fv(const GLfloat * v1)
{
	 glTexCoord2fv(v1);
}
static inline void TexCoord2i(GLint s1,GLint t1)
{
	 glTexCoord2i(s1,t1);
}
static inline void TexCoord2iv(const GLint * v1)
{
	 glTexCoord2iv(v1);
}
static inline void TexCoord2s(GLshort s1,GLshort t1)
{
	 glTexCoord2s(s1,t1);
}
static inline void TexCoord2sv(const GLshort * v1)
{
	 glTexCoord2sv(v1);
}
static inline void TexCoord3d(GLdouble s1,GLdouble t1,GLdouble r1)
{
	 glTexCoord3d(s1,t1,r1);
}
static inline void TexCoord3dv(const GLdouble * v1)
{
	 glTexCoord3dv(v1);
}
static inline void TexCoord3f(GLfloat s1,GLfloat t1,GLfloat r1)
{
	 glTexCoord3f(s1,t1,r1);
}
static inline void TexCoord3fv(const GLfloat * v1)
{
	 glTexCoord3fv(v1);
}
static inline void TexCoord3i(GLint s1,GLint t1,GLint r1)
{
	 glTexCoord3i(s1,t1,r1);
}
static inline void TexCoord3iv(const GLint * v1)
{
	 glTexCoord3iv(v1);
}
static inline void TexCoord3s(GLshort s1,GLshort t1,GLshort r1)
{
	 glTexCoord3s(s1,t1,r1);
}
static inline void TexCoord3sv(const GLshort * v1)
{
	 glTexCoord3sv(v1);
}
static inline void TexCoord4d(GLdouble s1,GLdouble t1,GLdouble r1,GLdouble q1)
{
	 glTexCoord4d(s1,t1,r1,q1);
}
static inline void TexCoord4dv(const GLdouble * v1)
{
	 glTexCoord4dv(v1);
}
static inline void TexCoord4f(GLfloat s1,GLfloat t1,GLfloat r1,GLfloat q1)
{
	 glTexCoord4f(s1,t1,r1,q1);
}
static inline void TexCoord4fv(const GLfloat * v1)
{
	 glTexCoord4fv(v1);
}
static inline void TexCoord4i(GLint s1,GLint t1,GLint r1,GLint q1)
{
	 glTexCoord4i(s1,t1,r1,q1);
}
static inline void TexCoord4iv(const GLint * v1)
{
	 glTexCoord4iv(v1);
}
static inline void TexCoord4s(GLshort s1,GLshort t1,GLshort r1,GLshort q1)
{
	 glTexCoord4s(s1,t1,r1,q1);
}
static inline void TexCoord4sv(const GLshort * v1)
{
	 glTexCoord4sv(v1);
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
static inline void TexGend(GLenum coord1,GLenum pname1,GLdouble param1)
{
	 glTexGend(coord1,pname1,param1);
}
static inline void TexGendv(GLenum coord1,GLenum pname1,const GLdouble * params1)
{
	 glTexGendv(coord1,pname1,params1);
}
static inline void TexGenf(GLenum coord1,GLenum pname1,GLfloat param1)
{
	 glTexGenf(coord1,pname1,param1);
}
static inline void TexGenfv(GLenum coord1,GLenum pname1,const GLfloat * params1)
{
	 glTexGenfv(coord1,pname1,params1);
}
static inline void TexGeni(GLenum coord1,GLenum pname1,GLint param1)
{
	 glTexGeni(coord1,pname1,param1);
}
static inline void TexGeniv(GLenum coord1,GLenum pname1,const GLint * params1)
{
	 glTexGeniv(coord1,pname1,params1);
}
static inline void TexImage1D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexImage1D(target1,level1,internalformat1,width1,border1,format1,type1,pixels1);
}
static inline void TexImage2D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexImage2D(target1,level1,internalformat1,width1,height1,border1,format1,type1,pixels1);
}
typedef void (*PFNGLTEXIMAGE3DPROC_HPP)(GLenum,GLint,GLint,GLsizei,GLsizei,GLsizei,GLint,GLenum,GLenum,const void *);
static inline void TexImage3D(GLenum target1,GLint level1,GLint internalformat1,GLsizei width1,GLsizei height1,GLsizei depth1,GLint border1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXIMAGE3DPROC_HPP fn=reinterpret_cast<PFNGLTEXIMAGE3DPROC_HPP>(_impl::_get_proc_address("glTexImage3D",3,1));
	 fn(target1,level1,internalformat1,width1,height1,depth1,border1,format1,type1,pixels1);
}
typedef void (*PFNGLTEXPARAMETERIIVPROC_HPP)(GLenum,GLenum,const GLint *);
static inline void TexParameterIiv(GLenum target1,GLenum pname1,const GLint * params1)
{
	static PFNGLTEXPARAMETERIIVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIIVPROC_HPP>(_impl::_get_proc_address("glTexParameterIiv",3,1));
	 fn(target1,pname1,params1);
}
typedef void (*PFNGLTEXPARAMETERIUIVPROC_HPP)(GLenum,GLenum,const GLuint *);
static inline void TexParameterIuiv(GLenum target1,GLenum pname1,const GLuint * params1)
{
	static PFNGLTEXPARAMETERIUIVPROC_HPP fn=reinterpret_cast<PFNGLTEXPARAMETERIUIVPROC_HPP>(_impl::_get_proc_address("glTexParameterIuiv",3,1));
	 fn(target1,pname1,params1);
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
static inline void TexSubImage1D(GLenum target1,GLint level1,GLint xoffset1,GLsizei width1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexSubImage1D(target1,level1,xoffset1,width1,format1,type1,pixels1);
}
static inline void TexSubImage2D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLsizei width1,GLsizei height1,GLenum format1,GLenum type1,const void * pixels1)
{
	 glTexSubImage2D(target1,level1,xoffset1,yoffset1,width1,height1,format1,type1,pixels1);
}
typedef void (*PFNGLTEXSUBIMAGE3DPROC_HPP)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLenum,const void *);
static inline void TexSubImage3D(GLenum target1,GLint level1,GLint xoffset1,GLint yoffset1,GLint zoffset1,GLsizei width1,GLsizei height1,GLsizei depth1,GLenum format1,GLenum type1,const void * pixels1)
{
	static PFNGLTEXSUBIMAGE3DPROC_HPP fn=reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC_HPP>(_impl::_get_proc_address("glTexSubImage3D",3,1));
	 fn(target1,level1,xoffset1,yoffset1,zoffset1,width1,height1,depth1,format1,type1,pixels1);
}
typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSPROC_HPP)(GLuint,GLsizei,const GLchar *const*,GLenum);
static inline void TransformFeedbackVaryings(GLuint program1,GLsizei count1,const GLchar *const* varyings1,GLenum bufferMode1)
{
	static PFNGLTRANSFORMFEEDBACKVARYINGSPROC_HPP fn=reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSPROC_HPP>(_impl::_get_proc_address("glTransformFeedbackVaryings",3,1));
	 fn(program1,count1,varyings1,bufferMode1);
}
static inline void Translated(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glTranslated(x1,y1,z1);
}
static inline void Translatef(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glTranslatef(x1,y1,z1);
}
typedef void (*PFNGLUNIFORM1FPROC_HPP)(GLint,GLfloat);
static inline void Uniform1f(GLint location1,GLfloat v01)
{
	static PFNGLUNIFORM1FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1FPROC_HPP>(_impl::_get_proc_address("glUniform1f",3,1));
	 fn(location1,v01);
}
typedef void (*PFNGLUNIFORM1FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform1fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM1FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1FVPROC_HPP>(_impl::_get_proc_address("glUniform1fv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM1IPROC_HPP)(GLint,GLint);
static inline void Uniform1i(GLint location1,GLint v01)
{
	static PFNGLUNIFORM1IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1IPROC_HPP>(_impl::_get_proc_address("glUniform1i",3,1));
	 fn(location1,v01);
}
typedef void (*PFNGLUNIFORM1IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform1iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM1IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1IVPROC_HPP>(_impl::_get_proc_address("glUniform1iv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM1UIPROC_HPP)(GLint,GLuint);
static inline void Uniform1ui(GLint location1,GLuint v01)
{
	static PFNGLUNIFORM1UIPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1UIPROC_HPP>(_impl::_get_proc_address("glUniform1ui",3,1));
	 fn(location1,v01);
}
typedef void (*PFNGLUNIFORM1UIVPROC_HPP)(GLint,GLsizei,const GLuint *);
static inline void Uniform1uiv(GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLUNIFORM1UIVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM1UIVPROC_HPP>(_impl::_get_proc_address("glUniform1uiv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM2FPROC_HPP)(GLint,GLfloat,GLfloat);
static inline void Uniform2f(GLint location1,GLfloat v01,GLfloat v11)
{
	static PFNGLUNIFORM2FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2FPROC_HPP>(_impl::_get_proc_address("glUniform2f",3,1));
	 fn(location1,v01,v11);
}
typedef void (*PFNGLUNIFORM2FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform2fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2FVPROC_HPP>(_impl::_get_proc_address("glUniform2fv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM2IPROC_HPP)(GLint,GLint,GLint);
static inline void Uniform2i(GLint location1,GLint v01,GLint v11)
{
	static PFNGLUNIFORM2IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2IPROC_HPP>(_impl::_get_proc_address("glUniform2i",3,1));
	 fn(location1,v01,v11);
}
typedef void (*PFNGLUNIFORM2IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform2iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM2IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2IVPROC_HPP>(_impl::_get_proc_address("glUniform2iv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM2UIPROC_HPP)(GLint,GLuint,GLuint);
static inline void Uniform2ui(GLint location1,GLuint v01,GLuint v11)
{
	static PFNGLUNIFORM2UIPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2UIPROC_HPP>(_impl::_get_proc_address("glUniform2ui",3,1));
	 fn(location1,v01,v11);
}
typedef void (*PFNGLUNIFORM2UIVPROC_HPP)(GLint,GLsizei,const GLuint *);
static inline void Uniform2uiv(GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLUNIFORM2UIVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM2UIVPROC_HPP>(_impl::_get_proc_address("glUniform2uiv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM3FPROC_HPP)(GLint,GLfloat,GLfloat,GLfloat);
static inline void Uniform3f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21)
{
	static PFNGLUNIFORM3FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3FPROC_HPP>(_impl::_get_proc_address("glUniform3f",3,1));
	 fn(location1,v01,v11,v21);
}
typedef void (*PFNGLUNIFORM3FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform3fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3FVPROC_HPP>(_impl::_get_proc_address("glUniform3fv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM3IPROC_HPP)(GLint,GLint,GLint,GLint);
static inline void Uniform3i(GLint location1,GLint v01,GLint v11,GLint v21)
{
	static PFNGLUNIFORM3IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3IPROC_HPP>(_impl::_get_proc_address("glUniform3i",3,1));
	 fn(location1,v01,v11,v21);
}
typedef void (*PFNGLUNIFORM3IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform3iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM3IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3IVPROC_HPP>(_impl::_get_proc_address("glUniform3iv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM3UIPROC_HPP)(GLint,GLuint,GLuint,GLuint);
static inline void Uniform3ui(GLint location1,GLuint v01,GLuint v11,GLuint v21)
{
	static PFNGLUNIFORM3UIPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3UIPROC_HPP>(_impl::_get_proc_address("glUniform3ui",3,1));
	 fn(location1,v01,v11,v21);
}
typedef void (*PFNGLUNIFORM3UIVPROC_HPP)(GLint,GLsizei,const GLuint *);
static inline void Uniform3uiv(GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLUNIFORM3UIVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM3UIVPROC_HPP>(_impl::_get_proc_address("glUniform3uiv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM4FPROC_HPP)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void Uniform4f(GLint location1,GLfloat v01,GLfloat v11,GLfloat v21,GLfloat v31)
{
	static PFNGLUNIFORM4FPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4FPROC_HPP>(_impl::_get_proc_address("glUniform4f",3,1));
	 fn(location1,v01,v11,v21,v31);
}
typedef void (*PFNGLUNIFORM4FVPROC_HPP)(GLint,GLsizei,const GLfloat *);
static inline void Uniform4fv(GLint location1,GLsizei count1,const GLfloat * value1)
{
	static PFNGLUNIFORM4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4FVPROC_HPP>(_impl::_get_proc_address("glUniform4fv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM4IPROC_HPP)(GLint,GLint,GLint,GLint,GLint);
static inline void Uniform4i(GLint location1,GLint v01,GLint v11,GLint v21,GLint v31)
{
	static PFNGLUNIFORM4IPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4IPROC_HPP>(_impl::_get_proc_address("glUniform4i",3,1));
	 fn(location1,v01,v11,v21,v31);
}
typedef void (*PFNGLUNIFORM4IVPROC_HPP)(GLint,GLsizei,const GLint *);
static inline void Uniform4iv(GLint location1,GLsizei count1,const GLint * value1)
{
	static PFNGLUNIFORM4IVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4IVPROC_HPP>(_impl::_get_proc_address("glUniform4iv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORM4UIPROC_HPP)(GLint,GLuint,GLuint,GLuint,GLuint);
static inline void Uniform4ui(GLint location1,GLuint v01,GLuint v11,GLuint v21,GLuint v31)
{
	static PFNGLUNIFORM4UIPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4UIPROC_HPP>(_impl::_get_proc_address("glUniform4ui",3,1));
	 fn(location1,v01,v11,v21,v31);
}
typedef void (*PFNGLUNIFORM4UIVPROC_HPP)(GLint,GLsizei,const GLuint *);
static inline void Uniform4uiv(GLint location1,GLsizei count1,const GLuint * value1)
{
	static PFNGLUNIFORM4UIVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORM4UIVPROC_HPP>(_impl::_get_proc_address("glUniform4uiv",3,1));
	 fn(location1,count1,value1);
}
typedef void (*PFNGLUNIFORMBLOCKBINDINGPROC_HPP)(GLuint,GLuint,GLuint);
static inline void UniformBlockBinding(GLuint program1,GLuint uniformBlockIndex1,GLuint uniformBlockBinding1)
{
	static PFNGLUNIFORMBLOCKBINDINGPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMBLOCKBINDINGPROC_HPP>(_impl::_get_proc_address("glUniformBlockBinding",3,1));
	 fn(program1,uniformBlockIndex1,uniformBlockBinding1);
}
typedef void (*PFNGLUNIFORMMATRIX2FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2x3fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2X3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2x3fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix2x4fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX2X4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix2x4fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX3FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3x2fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3X2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3x2fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix3x4fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX3X4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix3x4fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX4FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4x2fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4X2FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4x2fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC_HPP)(GLint,GLsizei,GLboolean,const GLfloat *);
static inline void UniformMatrix4x3fv(GLint location1,GLsizei count1,GLboolean transpose1,const GLfloat * value1)
{
	static PFNGLUNIFORMMATRIX4X3FVPROC_HPP fn=reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVPROC_HPP>(_impl::_get_proc_address("glUniformMatrix4x3fv",3,1));
	 fn(location1,count1,transpose1,value1);
}
typedef GLboolean (*PFNGLUNMAPBUFFERPROC_HPP)(GLenum);
static inline GLboolean UnmapBuffer(GLenum target1)
{
	static PFNGLUNMAPBUFFERPROC_HPP fn=reinterpret_cast<PFNGLUNMAPBUFFERPROC_HPP>(_impl::_get_proc_address("glUnmapBuffer",3,1));
	return fn(target1);
}
typedef void (*PFNGLUSEPROGRAMPROC_HPP)(GLuint);
static inline void UseProgram(GLuint program1)
{
	static PFNGLUSEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLUSEPROGRAMPROC_HPP>(_impl::_get_proc_address("glUseProgram",3,1));
	 fn(program1);
}
typedef void (*PFNGLVALIDATEPROGRAMPROC_HPP)(GLuint);
static inline void ValidateProgram(GLuint program1)
{
	static PFNGLVALIDATEPROGRAMPROC_HPP fn=reinterpret_cast<PFNGLVALIDATEPROGRAMPROC_HPP>(_impl::_get_proc_address("glValidateProgram",3,1));
	 fn(program1);
}
static inline void Vertex2d(GLdouble x1,GLdouble y1)
{
	 glVertex2d(x1,y1);
}
static inline void Vertex2dv(const GLdouble * v1)
{
	 glVertex2dv(v1);
}
static inline void Vertex2f(GLfloat x1,GLfloat y1)
{
	 glVertex2f(x1,y1);
}
static inline void Vertex2fv(const GLfloat * v1)
{
	 glVertex2fv(v1);
}
static inline void Vertex2i(GLint x1,GLint y1)
{
	 glVertex2i(x1,y1);
}
static inline void Vertex2iv(const GLint * v1)
{
	 glVertex2iv(v1);
}
static inline void Vertex2s(GLshort x1,GLshort y1)
{
	 glVertex2s(x1,y1);
}
static inline void Vertex2sv(const GLshort * v1)
{
	 glVertex2sv(v1);
}
static inline void Vertex3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	 glVertex3d(x1,y1,z1);
}
static inline void Vertex3dv(const GLdouble * v1)
{
	 glVertex3dv(v1);
}
static inline void Vertex3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	 glVertex3f(x1,y1,z1);
}
static inline void Vertex3fv(const GLfloat * v1)
{
	 glVertex3fv(v1);
}
static inline void Vertex3i(GLint x1,GLint y1,GLint z1)
{
	 glVertex3i(x1,y1,z1);
}
static inline void Vertex3iv(const GLint * v1)
{
	 glVertex3iv(v1);
}
static inline void Vertex3s(GLshort x1,GLshort y1,GLshort z1)
{
	 glVertex3s(x1,y1,z1);
}
static inline void Vertex3sv(const GLshort * v1)
{
	 glVertex3sv(v1);
}
static inline void Vertex4d(GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	 glVertex4d(x1,y1,z1,w1);
}
static inline void Vertex4dv(const GLdouble * v1)
{
	 glVertex4dv(v1);
}
static inline void Vertex4f(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	 glVertex4f(x1,y1,z1,w1);
}
static inline void Vertex4fv(const GLfloat * v1)
{
	 glVertex4fv(v1);
}
static inline void Vertex4i(GLint x1,GLint y1,GLint z1,GLint w1)
{
	 glVertex4i(x1,y1,z1,w1);
}
static inline void Vertex4iv(const GLint * v1)
{
	 glVertex4iv(v1);
}
static inline void Vertex4s(GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	 glVertex4s(x1,y1,z1,w1);
}
static inline void Vertex4sv(const GLshort * v1)
{
	 glVertex4sv(v1);
}
typedef void (*PFNGLVERTEXATTRIB1DPROC_HPP)(GLuint,GLdouble);
static inline void VertexAttrib1d(GLuint index1,GLdouble x1)
{
	static PFNGLVERTEXATTRIB1DPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1DPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1d",3,1));
	 fn(index1,x1);
}
typedef void (*PFNGLVERTEXATTRIB1DVPROC_HPP)(GLuint,const GLdouble *);
static inline void VertexAttrib1dv(GLuint index1,const GLdouble * v1)
{
	static PFNGLVERTEXATTRIB1DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1DVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1dv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB1FPROC_HPP)(GLuint,GLfloat);
static inline void VertexAttrib1f(GLuint index1,GLfloat x1)
{
	static PFNGLVERTEXATTRIB1FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1f",3,1));
	 fn(index1,x1);
}
typedef void (*PFNGLVERTEXATTRIB1FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib1fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB1FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1fv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB1SPROC_HPP)(GLuint,GLshort);
static inline void VertexAttrib1s(GLuint index1,GLshort x1)
{
	static PFNGLVERTEXATTRIB1SPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1SPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1s",3,1));
	 fn(index1,x1);
}
typedef void (*PFNGLVERTEXATTRIB1SVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttrib1sv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIB1SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB1SVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib1sv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB2DPROC_HPP)(GLuint,GLdouble,GLdouble);
static inline void VertexAttrib2d(GLuint index1,GLdouble x1,GLdouble y1)
{
	static PFNGLVERTEXATTRIB2DPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2DPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2d",3,1));
	 fn(index1,x1,y1);
}
typedef void (*PFNGLVERTEXATTRIB2DVPROC_HPP)(GLuint,const GLdouble *);
static inline void VertexAttrib2dv(GLuint index1,const GLdouble * v1)
{
	static PFNGLVERTEXATTRIB2DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2DVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2dv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB2FPROC_HPP)(GLuint,GLfloat,GLfloat);
static inline void VertexAttrib2f(GLuint index1,GLfloat x1,GLfloat y1)
{
	static PFNGLVERTEXATTRIB2FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2f",3,1));
	 fn(index1,x1,y1);
}
typedef void (*PFNGLVERTEXATTRIB2FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib2fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB2FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2fv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB2SPROC_HPP)(GLuint,GLshort,GLshort);
static inline void VertexAttrib2s(GLuint index1,GLshort x1,GLshort y1)
{
	static PFNGLVERTEXATTRIB2SPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2SPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2s",3,1));
	 fn(index1,x1,y1);
}
typedef void (*PFNGLVERTEXATTRIB2SVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttrib2sv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIB2SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB2SVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib2sv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB3DPROC_HPP)(GLuint,GLdouble,GLdouble,GLdouble);
static inline void VertexAttrib3d(GLuint index1,GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLVERTEXATTRIB3DPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3DPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3d",3,1));
	 fn(index1,x1,y1,z1);
}
typedef void (*PFNGLVERTEXATTRIB3DVPROC_HPP)(GLuint,const GLdouble *);
static inline void VertexAttrib3dv(GLuint index1,const GLdouble * v1)
{
	static PFNGLVERTEXATTRIB3DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3DVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3dv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB3FPROC_HPP)(GLuint,GLfloat,GLfloat,GLfloat);
static inline void VertexAttrib3f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLVERTEXATTRIB3FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3f",3,1));
	 fn(index1,x1,y1,z1);
}
typedef void (*PFNGLVERTEXATTRIB3FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib3fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB3FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3fv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB3SPROC_HPP)(GLuint,GLshort,GLshort,GLshort);
static inline void VertexAttrib3s(GLuint index1,GLshort x1,GLshort y1,GLshort z1)
{
	static PFNGLVERTEXATTRIB3SPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3SPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3s",3,1));
	 fn(index1,x1,y1,z1);
}
typedef void (*PFNGLVERTEXATTRIB3SVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttrib3sv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIB3SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB3SVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib3sv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NBVPROC_HPP)(GLuint,const GLbyte *);
static inline void VertexAttrib4Nbv(GLuint index1,const GLbyte * v1)
{
	static PFNGLVERTEXATTRIB4NBVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NBVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nbv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NIVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttrib4Niv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIB4NIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NIVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Niv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NSVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttrib4Nsv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIB4NSVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NSVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nsv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NUBPROC_HPP)(GLuint,GLubyte,GLubyte,GLubyte,GLubyte);
static inline void VertexAttrib4Nub(GLuint index1,GLubyte x1,GLubyte y1,GLubyte z1,GLubyte w1)
{
	static PFNGLVERTEXATTRIB4NUBPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NUBPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nub",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIB4NUBVPROC_HPP)(GLuint,const GLubyte *);
static inline void VertexAttrib4Nubv(GLuint index1,const GLubyte * v1)
{
	static PFNGLVERTEXATTRIB4NUBVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NUBVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nubv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NUIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttrib4Nuiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIB4NUIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NUIVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nuiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4NUSVPROC_HPP)(GLuint,const GLushort *);
static inline void VertexAttrib4Nusv(GLuint index1,const GLushort * v1)
{
	static PFNGLVERTEXATTRIB4NUSVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4NUSVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4Nusv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4BVPROC_HPP)(GLuint,const GLbyte *);
static inline void VertexAttrib4bv(GLuint index1,const GLbyte * v1)
{
	static PFNGLVERTEXATTRIB4BVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4BVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4bv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4DPROC_HPP)(GLuint,GLdouble,GLdouble,GLdouble,GLdouble);
static inline void VertexAttrib4d(GLuint index1,GLdouble x1,GLdouble y1,GLdouble z1,GLdouble w1)
{
	static PFNGLVERTEXATTRIB4DPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4DPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4d",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIB4DVPROC_HPP)(GLuint,const GLdouble *);
static inline void VertexAttrib4dv(GLuint index1,const GLdouble * v1)
{
	static PFNGLVERTEXATTRIB4DVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4DVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4dv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4FPROC_HPP)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
static inline void VertexAttrib4f(GLuint index1,GLfloat x1,GLfloat y1,GLfloat z1,GLfloat w1)
{
	static PFNGLVERTEXATTRIB4FPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4FPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4f",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIB4FVPROC_HPP)(GLuint,const GLfloat *);
static inline void VertexAttrib4fv(GLuint index1,const GLfloat * v1)
{
	static PFNGLVERTEXATTRIB4FVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4fv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4IVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttrib4iv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIB4IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4IVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4iv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4SPROC_HPP)(GLuint,GLshort,GLshort,GLshort,GLshort);
static inline void VertexAttrib4s(GLuint index1,GLshort x1,GLshort y1,GLshort z1,GLshort w1)
{
	static PFNGLVERTEXATTRIB4SPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4SPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4s",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIB4SVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttrib4sv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIB4SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4SVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4sv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4UBVPROC_HPP)(GLuint,const GLubyte *);
static inline void VertexAttrib4ubv(GLuint index1,const GLubyte * v1)
{
	static PFNGLVERTEXATTRIB4UBVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4UBVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4ubv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4UIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttrib4uiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIB4UIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4UIVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4uiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIB4USVPROC_HPP)(GLuint,const GLushort *);
static inline void VertexAttrib4usv(GLuint index1,const GLushort * v1)
{
	static PFNGLVERTEXATTRIB4USVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIB4USVPROC_HPP>(_impl::_get_proc_address("glVertexAttrib4usv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI1IPROC_HPP)(GLuint,GLint);
static inline void VertexAttribI1i(GLuint index1,GLint x1)
{
	static PFNGLVERTEXATTRIBI1IPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI1IPROC_HPP>(_impl::_get_proc_address("glVertexAttribI1i",3,1));
	 fn(index1,x1);
}
typedef void (*PFNGLVERTEXATTRIBI1IVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttribI1iv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIBI1IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI1IVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI1iv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI1UIPROC_HPP)(GLuint,GLuint);
static inline void VertexAttribI1ui(GLuint index1,GLuint x1)
{
	static PFNGLVERTEXATTRIBI1UIPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI1UIPROC_HPP>(_impl::_get_proc_address("glVertexAttribI1ui",3,1));
	 fn(index1,x1);
}
typedef void (*PFNGLVERTEXATTRIBI1UIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttribI1uiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIBI1UIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI1UIVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI1uiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI2IPROC_HPP)(GLuint,GLint,GLint);
static inline void VertexAttribI2i(GLuint index1,GLint x1,GLint y1)
{
	static PFNGLVERTEXATTRIBI2IPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI2IPROC_HPP>(_impl::_get_proc_address("glVertexAttribI2i",3,1));
	 fn(index1,x1,y1);
}
typedef void (*PFNGLVERTEXATTRIBI2IVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttribI2iv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIBI2IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI2IVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI2iv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI2UIPROC_HPP)(GLuint,GLuint,GLuint);
static inline void VertexAttribI2ui(GLuint index1,GLuint x1,GLuint y1)
{
	static PFNGLVERTEXATTRIBI2UIPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI2UIPROC_HPP>(_impl::_get_proc_address("glVertexAttribI2ui",3,1));
	 fn(index1,x1,y1);
}
typedef void (*PFNGLVERTEXATTRIBI2UIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttribI2uiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIBI2UIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI2UIVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI2uiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI3IPROC_HPP)(GLuint,GLint,GLint,GLint);
static inline void VertexAttribI3i(GLuint index1,GLint x1,GLint y1,GLint z1)
{
	static PFNGLVERTEXATTRIBI3IPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI3IPROC_HPP>(_impl::_get_proc_address("glVertexAttribI3i",3,1));
	 fn(index1,x1,y1,z1);
}
typedef void (*PFNGLVERTEXATTRIBI3IVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttribI3iv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIBI3IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI3IVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI3iv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI3UIPROC_HPP)(GLuint,GLuint,GLuint,GLuint);
static inline void VertexAttribI3ui(GLuint index1,GLuint x1,GLuint y1,GLuint z1)
{
	static PFNGLVERTEXATTRIBI3UIPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI3UIPROC_HPP>(_impl::_get_proc_address("glVertexAttribI3ui",3,1));
	 fn(index1,x1,y1,z1);
}
typedef void (*PFNGLVERTEXATTRIBI3UIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttribI3uiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIBI3UIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI3UIVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI3uiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4BVPROC_HPP)(GLuint,const GLbyte *);
static inline void VertexAttribI4bv(GLuint index1,const GLbyte * v1)
{
	static PFNGLVERTEXATTRIBI4BVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4BVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4bv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4IPROC_HPP)(GLuint,GLint,GLint,GLint,GLint);
static inline void VertexAttribI4i(GLuint index1,GLint x1,GLint y1,GLint z1,GLint w1)
{
	static PFNGLVERTEXATTRIBI4IPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4IPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4i",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIBI4IVPROC_HPP)(GLuint,const GLint *);
static inline void VertexAttribI4iv(GLuint index1,const GLint * v1)
{
	static PFNGLVERTEXATTRIBI4IVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4IVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4iv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4SVPROC_HPP)(GLuint,const GLshort *);
static inline void VertexAttribI4sv(GLuint index1,const GLshort * v1)
{
	static PFNGLVERTEXATTRIBI4SVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4SVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4sv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4UBVPROC_HPP)(GLuint,const GLubyte *);
static inline void VertexAttribI4ubv(GLuint index1,const GLubyte * v1)
{
	static PFNGLVERTEXATTRIBI4UBVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4UBVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4ubv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4UIPROC_HPP)(GLuint,GLuint,GLuint,GLuint,GLuint);
static inline void VertexAttribI4ui(GLuint index1,GLuint x1,GLuint y1,GLuint z1,GLuint w1)
{
	static PFNGLVERTEXATTRIBI4UIPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4UIPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4ui",3,1));
	 fn(index1,x1,y1,z1,w1);
}
typedef void (*PFNGLVERTEXATTRIBI4UIVPROC_HPP)(GLuint,const GLuint *);
static inline void VertexAttribI4uiv(GLuint index1,const GLuint * v1)
{
	static PFNGLVERTEXATTRIBI4UIVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4UIVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4uiv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBI4USVPROC_HPP)(GLuint,const GLushort *);
static inline void VertexAttribI4usv(GLuint index1,const GLushort * v1)
{
	static PFNGLVERTEXATTRIBI4USVPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBI4USVPROC_HPP>(_impl::_get_proc_address("glVertexAttribI4usv",3,1));
	 fn(index1,v1);
}
typedef void (*PFNGLVERTEXATTRIBIPOINTERPROC_HPP)(GLuint,GLint,GLenum,GLsizei,const void *);
static inline void VertexAttribIPointer(GLuint index1,GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	static PFNGLVERTEXATTRIBIPOINTERPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC_HPP>(_impl::_get_proc_address("glVertexAttribIPointer",3,1));
	 fn(index1,size1,type1,stride1,pointer1);
}
typedef void (*PFNGLVERTEXATTRIBPOINTERPROC_HPP)(GLuint,GLint,GLenum,GLboolean,GLsizei,const void *);
static inline void VertexAttribPointer(GLuint index1,GLint size1,GLenum type1,GLboolean normalized1,GLsizei stride1,const void * pointer1)
{
	static PFNGLVERTEXATTRIBPOINTERPROC_HPP fn=reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC_HPP>(_impl::_get_proc_address("glVertexAttribPointer",3,1));
	 fn(index1,size1,type1,normalized1,stride1,pointer1);
}
static inline void VertexPointer(GLint size1,GLenum type1,GLsizei stride1,const void * pointer1)
{
	 glVertexPointer(size1,type1,stride1,pointer1);
}
static inline void Viewport(GLint x1,GLint y1,GLsizei width1,GLsizei height1)
{
	 glViewport(x1,y1,width1,height1);
}
typedef void (*PFNGLWINDOWPOS2DPROC_HPP)(GLdouble,GLdouble);
static inline void WindowPos2d(GLdouble x1,GLdouble y1)
{
	static PFNGLWINDOWPOS2DPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2DPROC_HPP>(_impl::_get_proc_address("glWindowPos2d",3,1));
	 fn(x1,y1);
}
typedef void (*PFNGLWINDOWPOS2DVPROC_HPP)(const GLdouble *);
static inline void WindowPos2dv(const GLdouble * v1)
{
	static PFNGLWINDOWPOS2DVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2DVPROC_HPP>(_impl::_get_proc_address("glWindowPos2dv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS2FPROC_HPP)(GLfloat,GLfloat);
static inline void WindowPos2f(GLfloat x1,GLfloat y1)
{
	static PFNGLWINDOWPOS2FPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2FPROC_HPP>(_impl::_get_proc_address("glWindowPos2f",3,1));
	 fn(x1,y1);
}
typedef void (*PFNGLWINDOWPOS2FVPROC_HPP)(const GLfloat *);
static inline void WindowPos2fv(const GLfloat * v1)
{
	static PFNGLWINDOWPOS2FVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2FVPROC_HPP>(_impl::_get_proc_address("glWindowPos2fv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS2IPROC_HPP)(GLint,GLint);
static inline void WindowPos2i(GLint x1,GLint y1)
{
	static PFNGLWINDOWPOS2IPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2IPROC_HPP>(_impl::_get_proc_address("glWindowPos2i",3,1));
	 fn(x1,y1);
}
typedef void (*PFNGLWINDOWPOS2IVPROC_HPP)(const GLint *);
static inline void WindowPos2iv(const GLint * v1)
{
	static PFNGLWINDOWPOS2IVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2IVPROC_HPP>(_impl::_get_proc_address("glWindowPos2iv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS2SPROC_HPP)(GLshort,GLshort);
static inline void WindowPos2s(GLshort x1,GLshort y1)
{
	static PFNGLWINDOWPOS2SPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2SPROC_HPP>(_impl::_get_proc_address("glWindowPos2s",3,1));
	 fn(x1,y1);
}
typedef void (*PFNGLWINDOWPOS2SVPROC_HPP)(const GLshort *);
static inline void WindowPos2sv(const GLshort * v1)
{
	static PFNGLWINDOWPOS2SVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS2SVPROC_HPP>(_impl::_get_proc_address("glWindowPos2sv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS3DPROC_HPP)(GLdouble,GLdouble,GLdouble);
static inline void WindowPos3d(GLdouble x1,GLdouble y1,GLdouble z1)
{
	static PFNGLWINDOWPOS3DPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3DPROC_HPP>(_impl::_get_proc_address("glWindowPos3d",3,1));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLWINDOWPOS3DVPROC_HPP)(const GLdouble *);
static inline void WindowPos3dv(const GLdouble * v1)
{
	static PFNGLWINDOWPOS3DVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3DVPROC_HPP>(_impl::_get_proc_address("glWindowPos3dv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS3FPROC_HPP)(GLfloat,GLfloat,GLfloat);
static inline void WindowPos3f(GLfloat x1,GLfloat y1,GLfloat z1)
{
	static PFNGLWINDOWPOS3FPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3FPROC_HPP>(_impl::_get_proc_address("glWindowPos3f",3,1));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLWINDOWPOS3FVPROC_HPP)(const GLfloat *);
static inline void WindowPos3fv(const GLfloat * v1)
{
	static PFNGLWINDOWPOS3FVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3FVPROC_HPP>(_impl::_get_proc_address("glWindowPos3fv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS3IPROC_HPP)(GLint,GLint,GLint);
static inline void WindowPos3i(GLint x1,GLint y1,GLint z1)
{
	static PFNGLWINDOWPOS3IPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3IPROC_HPP>(_impl::_get_proc_address("glWindowPos3i",3,1));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLWINDOWPOS3IVPROC_HPP)(const GLint *);
static inline void WindowPos3iv(const GLint * v1)
{
	static PFNGLWINDOWPOS3IVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3IVPROC_HPP>(_impl::_get_proc_address("glWindowPos3iv",3,1));
	 fn(v1);
}
typedef void (*PFNGLWINDOWPOS3SPROC_HPP)(GLshort,GLshort,GLshort);
static inline void WindowPos3s(GLshort x1,GLshort y1,GLshort z1)
{
	static PFNGLWINDOWPOS3SPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3SPROC_HPP>(_impl::_get_proc_address("glWindowPos3s",3,1));
	 fn(x1,y1,z1);
}
typedef void (*PFNGLWINDOWPOS3SVPROC_HPP)(const GLshort *);
static inline void WindowPos3sv(const GLshort * v1)
{
	static PFNGLWINDOWPOS3SVPROC_HPP fn=reinterpret_cast<PFNGLWINDOWPOS3SVPROC_HPP>(_impl::_get_proc_address("glWindowPos3sv",3,1));
	 fn(v1);
}}
#endif
