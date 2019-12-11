cmake_minimum_required(VERSION 3.1)

file (GLOB BENCHBSV_SOURCE  "benchmain.c")
source_group("bsv_bench_source" FILES ${BENCHBSV_SOURCE})


# And add the main as an executable ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
add_executable(bsv_bench ${BENCHBSV_SOURCE})
target_compile_definitions(bsv_bench PRIVATE _CRT_SECURE_NO_WARNINGS)


