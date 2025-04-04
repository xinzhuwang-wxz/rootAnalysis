##### one ##### basic settings
cmake_minimum_required(VERSION 3.10)
project(HelloWorld)
set(CMAKE_CXX_STANDARD 17)
##### two ##### find the ROOT library
find_package(ROOT REQUIRED)
include_directories(${ROOT_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR})

##### three ##### include directories

include_directories(src)

root_generate_dictionary(G__HelloWorld
        src/Helloworld.h
        src/HelloworldLinkDef.h
)  # generate the dictionary for the Helloworld class
   # this must be done after the include_directories, otherwise it will not find the header files

##### four ##### add the library

add_library(helloworld SHARED
        src/Helloworld.cpp
        G__HelloWorld.cxx
        )

##### five ##### add the subdirectory

##### six ##### link the libraries

target_link_libraries(helloworld
        PRIVATE
        ${ROOT_LIBRARIES}
        )
