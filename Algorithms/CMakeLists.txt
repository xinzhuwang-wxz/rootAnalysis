cmake_minimum_required(VERSION 3.10)
project(Algorithm)
set(CMAKE_CXX_STANDARD 17)

find_package(ROOT REQUIRED)
include_directories(${ROOT_INCLUDE_DIRS})
add_definitions(${ROOT_CXX_FLAGS})

include_directories(${CMAKE_SOURCE_DIR}/../Data/src)  # include the Data library
include_directories(inc)
include_directories(src)

add_library(algorithm SHARED src/Algorithm.cpp)  # shared library
target_link_libraries(algorithm PRIVATE ${ROOT_LIBRARIES} )


#add_library(algorithm STATIC src/Algorithm.cpp) # static library
#set_target_properties(algorithm PROPERTIES POSITION_INDEPENDENT_CODE ON) # position independent code
#target_link_libraries(algorithm ${ROOT_LIBRARIES})  # this library need root libraries

