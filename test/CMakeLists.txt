add_subdirectory(glfwpp)

include(CTest)


#//todo use find and make an import target just so others can import

find_package(OpenGL)

if(BUILD_TESTING)

add_executable(glhpphello
	glhpphello.cpp
)

target_link_libraries(glhpphello INTERFACE GLEW)
target_compile_features(glhpphello PUBLIC cxx_std_11)
target_include_directories(glhpphello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(glhpphello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")
target_include_directories(glhpphello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/deps")
target_link_libraries(glhpphello PRIVATE glfwpp)
target_link_libraries(glhpphello PRIVATE OpenGL::GL)

add_executable(glhppbunny
	glhppbunny.cpp
	bunny.c
)
target_link_libraries(glhppbunny INTERFACE GLEW)
target_compile_features(glhppbunny PUBLIC cxx_std_11)
target_include_directories(glhppbunny PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(glhppbunny PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")
target_include_directories(glhppbunny PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/deps")
target_link_libraries(glhppbunny PRIVATE glfwpp)
target_link_libraries(glhppbunny PRIVATE OpenGL::GL)

endif()
