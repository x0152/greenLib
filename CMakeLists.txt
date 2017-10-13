cmake_minimum_required(VERSION 3.7.2)

project(shell)
set(SOURCE_DIR src) 
set(TESTS_DIR tests) 

set(SOURCE 
    ${SOURCE_DIR}/defer/defer.cpp
    ${SOURCE_DIR}/flags/flags.cpp
    ${SOURCE_DIR}/log/log.cpp)

include_directories(${SOURCE_DIR}/tests)
include_directories(${SOURCE_DIR}/defer)
include_directories(${SOURCE_DIR}/flags)
include_directories(${SOURCE_DIR}/log)
include_directories(${SOURCE_DIR}/singelton)

enable_testing()

add_subdirectory(${TESTS_DIR}/test_defer)
add_subdirectory(${TESTS_DIR}/test_flags)
add_subdirectory(${TESTS_DIR}/test_log)
add_subdirectory(${TESTS_DIR}/test_singelton)
