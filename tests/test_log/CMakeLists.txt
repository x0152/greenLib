cmake_minimum_required(VERSION 3.7.2)

project(test_log)
set(SOURCE_DIR ../../src) 

set(SOURCE 
    main.cpp
    ${SOURCE_DIR}/log/log.cpp)

include_directories(${SOURCE_DIR}/tests)
include_directories(${SOURCE_DIR}/log)

add_executable(test_log ${SOURCE})

add_test(test_log "./test_log")
