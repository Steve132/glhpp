add_subdirectory(glfwpp)

include(CTest)

if(BUILD_TESTING)

add_executable(cpptest
	cpptest.cpp
)


target_link_libraries(cpptest INTERFACE GLEW)
target_compile_features(cpptest PUBLIC cxx_std_11)
target_include_directories(cpptest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(cpptest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")

add_executable(glhppgears
	glhppgears.cpp
)


target_link_libraries(glhppgears INTERFACE GLEW)
target_compile_features(glhppgears PUBLIC cxx_std_11)
target_include_directories(glhppgears PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(glhppgears PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")
target_link_libraries(glhppgears PRIVATE glfwpp GL)

endif()
