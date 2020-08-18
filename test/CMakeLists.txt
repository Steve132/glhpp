
add_executable(cpptest
	cpptest.cpp
)


target_link_libraries(cpptest INTERFACE GLEW)
target_compile_features(cpptest PUBLIC cxx_std_11)
target_include_directories(cpptest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(cpptest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../")
