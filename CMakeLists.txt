cmake_minimum_required(VERSION 3.27)
project(src)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-fno-elide-constructors")

fiLe(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()