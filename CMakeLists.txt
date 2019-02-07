cmake_minimum_required(VERSION 3.1)
project(bsv C)

set(BSV_MAJOR 0)
set(BSV_MINOR 1)
set(BSV_PATCHLEVEL 0)
set(RANGE_V3_VERSION ${BSV_MAJOR}.${BSV_MINOR}.${BSV_PATCHLEVEL})

add_library(bsv INTERFACE)
target_include_directories(bsv INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>)

if (${CMAKE_C_COMPILER_ID} STREQUAL "GNU")
    link_libraries(bmesh m)   # Maths std library.
endif()

install(TARGETS bsv EXPORT bsv-targets DESTINATION lib)
install(EXPORT bsv-targets FILE bsv-config.cmake DESTINATION lib/cmake/bsv)
install(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.h")
