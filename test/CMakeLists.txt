add_subdirectory(glfwpp)

include(CTest)


#//todo use find and make an import target just so others can import

find_package(OpenGL)

if(BUILD_TESTING)

add_executable(glhppgears
	glhppgears.cpp
)


target_link_libraries(glhppgears INTERFACE GLEW)
target_compile_features(glhppgears PUBLIC cxx_std_11)
target_include_directories(glhppgears PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(glhppgears PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")
target_include_directories(glhppgears PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/deps")
target_link_libraries(glhppgears PRIVATE glfwpp)
target_link_libraries(glhppgears PRIVATE OpenGL::GL)

endif()
