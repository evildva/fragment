cmake_minimum_required(VERSION 3.10)

# set the project name
project(Container)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# get all source files as src in .
#aux_source_directory(. src)

# print to terminate
#message(${src})

# add the executable
add_executable(container ./container.cpp)#${src})

# add library
#target_link_libraries(game SDL2)
