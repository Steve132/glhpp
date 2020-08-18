cmake_minimum_required(VERSION 3.9)

add_executable(cpptest
	cpptest.cpp
)

set_property(TARGET cpptest PROPERTY CXX_STANDARD 11)
target_link_libraries(cpptest GLEW)

add_subdirectory(glhppu)
