cmake_minimum_required(VERSION 3.10)

# Project name
project(my_cpp_project)

# Include the lib directory, where the version_lib library is defined
add_subdirectory(lib)

# Include the app directory, where the version_exe executable is defined
add_subdirectory(app)
