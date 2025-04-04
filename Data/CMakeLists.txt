cmake_minimum_required(VERSION 3.10)
project(Data)
set(CMAKE_CXX_STANDARD 17)

find_package(ROOT REQUIRED)
include_directories(${ROOT_INCLUDE_DIRS})
add_definitions(${ROOT_CXX_FLAGS})

include_directories(src)
add_library(data SHARED src/Data.cpp)  # make a new library called data
target_link_libraries(data ${ROOT_LIBRARIES})  # this library need root libraries

