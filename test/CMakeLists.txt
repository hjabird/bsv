cmake_minimum_required(VERSION 3.1)

file (GLOB TESTMINVEC_SOURCE  "testmain.c")
source_group("minvec_test_source" FILES ${TESTMINVEC_SOURCE})


# And add the main as an executable ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
enable_testing()
add_executable(minvec_tests ${TESTMINVEC_SOURCE})
target_compile_definitions(minvec_tests PRIVATE _CRT_SECURE_NO_WARNINGS)


