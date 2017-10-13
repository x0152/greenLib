cmake_minimum_required(VERSION 3.7.2)

project(test_flags)
set(SOURCE_DIR ../../src) 

set(SOURCE 
    main.cpp
    ${SOURCE_DIR}/flags/flags.cpp)

include_directories(${SOURCE_DIR}/flags)

add_executable(test_flags ${SOURCE})

add_test(test_flags "./test_flags")

