cmake_minimum_required(VERSION 3.1)
project(bsv C)

set(BSV_MAJOR 0)
set(BSV_MINOR 1)
set(BSV_PATCHLEVEL 0)
set(BSV_VERSION ${BSV_MAJOR}.${BSV_MINOR}.${BSV_PATCHLEVEL})

add_library(bsv INTERFACE)
target_include_directories(bsv
    INTERFACE 
        $<INSTALL_INTERFACE:include>    
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

if (${CMAKE_C_COMPILER_ID} STREQUAL "GNU")
    link_libraries(bsv m)   # Maths std library.
endif()

include(GNUInstallDirs)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(TARGETS bsv
    EXPORT bsv-targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(EXPORT bsv-targets
  FILE
    bsv-config.cmake
  DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/bsv
)
