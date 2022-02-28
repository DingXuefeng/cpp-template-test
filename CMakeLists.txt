cmake_minimum_required(VERSION 3.20)
project(cpp_template_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_library(B STATIC B.h B.cc)

add_library(C STATIC C.h C.tpp C.cc)

add_executable(cpp_template_test
    main.cpp
    main.h)

target_link_libraries(cpp_template_test B C)

