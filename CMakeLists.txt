cmake_minimum_required(VERSION 3.1)
project(bsv)

add_library(bsv INTERFACE)
target_include_directories(bsv INTERFACE include/)

if (${CMAKE_C_COMPILER_ID} STREQUAL "GNU")
    link_libraries(bmesh m)   # Maths std library.
endif()
