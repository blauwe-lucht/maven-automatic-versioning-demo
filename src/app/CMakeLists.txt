add_executable(version_exe src/main.cpp)
target_compile_definitions(version_exe PRIVATE EXECUTABLE_VERSION="${executable.version}")

target_link_libraries(version_exe PRIVATE version_lib)
