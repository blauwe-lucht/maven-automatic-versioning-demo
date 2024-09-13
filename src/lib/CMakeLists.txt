add_library(version_lib STATIC src/main.cpp)

# LIBRARY_VERSION is set by passing -D in pom.xml.
target_compile_definitions(version_lib PRIVATE LIBRARY_VERSION="${LIBRARY_VERSION}")
