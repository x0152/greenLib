cmake_minimum_required(VERSION 3.7.2)

project(test_defer)
set(SOURCE_DIR ../../src) 

set(SOURCE 
    main.cpp
    ${SOURCE_DIR}/defer/defer.cpp)

include_directories(${SOURCE_DIR}/defer)

add_executable(test_defer ${SOURCE})

add_test(test_defer "./test_defer")

