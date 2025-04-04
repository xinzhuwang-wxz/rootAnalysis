cmake_minimum_required(VERSION 3.10)
project(Loop)
set(CMAKE_CXX_STANDARD 17)

find_package(ROOT REQUIRED)
include_directories(${ROOT_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR})


include_directories(src)
include_directories(${CMAKE_SOURCE_DIR}/../Data/src)  # include the Data library,then can use #include "Data.h"
include_directories(${CMAKE_SOURCE_DIR}/../Algorithms/src)  # include the Algorithms library,then can use #include "Algorithm.h"
include_directories(${CMAKE_SOURCE_DIR}/../Algorithms/inc)

root_generate_dictionary(G__Loop src/EventLoop.h src/EventLoopLinkDef.h)  # now root knew the position of Data.h and Algorithms.h
# this must be done after the include_directories, otherwise it will not find the header files

add_library(loop SHARED src/EventLoop.cpp G__Loop.cxx)

add_subdirectory(${CMAKE_SOURCE_DIR}/../Data ${CMAKE_BINARY_DIR}/Data_build)  # add the Data library, and build it at Data_build
add_subdirectory(${CMAKE_SOURCE_DIR}/../Algorithms ${CMAKE_BINARY_DIR}/Algorithms_build)  # add the Algorithms library, and build it at Algorithms_build

target_link_libraries(loop PRIVATE ${ROOT_LIBRARIES} data algorithm)  # this library need root libraries and Data library
