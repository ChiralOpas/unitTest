cmake_minimum_required(VERSION 3.10)

# setting up name for solution
project (unitTest)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)

# enable testing functionality
enable_testing()

# setting up location to compile cmakelists for sub projects
add_subdirectory(src)
add_subdirectory(test)