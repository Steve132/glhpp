cmake_minimum_required(VERSION 2.8)

project(glhpp)

include_directories(generate)
find_package(OpenGL REQUIRED)

add_executable(maintest maintest.cpp)
target_link_libraries(maintest ${OPENGL_gl_LIBRARY})