cmake_minimum_required(VERSION 3.7.2)

project(test_singelton)
set(SOURCE_DIR ../../src) 

set(SOURCE 
    main.cpp)

include_directories(${SOURCE_DIR}/singelton)

add_executable(test_singelton ${SOURCE})

add_test(test_singelton "./test_singelton")

