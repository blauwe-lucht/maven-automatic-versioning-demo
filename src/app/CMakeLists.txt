add_executable(version_exe src/main.cpp)

# EXECUTABLE_VERSION is set by passing -D in pom.xml.
target_compile_definitions(version_exe PRIVATE EXECUTABLE_VERSION="${EXECUTABLE_VERSION}")

target_link_libraries(version_exe PRIVATE version_lib)
