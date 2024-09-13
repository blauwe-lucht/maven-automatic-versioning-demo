add_library(version_lib STATIC src/main.cpp)
target_compile_definitions(version_lib PRIVATE LIBRARY_VERSION="${library.version}")
