cmake_minimum_required(VERSION 3.7.2)

project(test_string)
set(SOURCE_DIR ../../src) 

set(SOURCE 
    main.cpp
    ${SOURCE_DIR}/string/string_formater.cpp
    ${SOURCE_DIR}/string/string_checker.cpp)

include_directories(${SOURCE_DIR}/string)

add_executable(test_string ${SOURCE})

add_test(test_string "./test_string")

