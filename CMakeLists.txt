cmake_minimum_required(VERSION 3.20)
project(cpp_template_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(cpp_template_test
    main.cpp
    main.h)
