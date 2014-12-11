cmake_minimum_required(VERSION 2.8)

project(glhpp)

#find_package(OpenGL REQUIRED)

if(NOT(MSVC))
	set(CMAKE_CXX_FLAGS "-std=c++11")
endif()
add_executable(maintest maintest.cpp)
add_executable(glxgears glxgears.cpp)
add_executable(glxgearsc glxgears.c)
target_link_libraries(maintest X11 GL)
target_link_libraries(glxgears X11 GL)
target_link_libraries(glxgearsc X11 GL m)

