cmake_minimum_required(VERSION 3.15)
project(qwt_example CXX)

add_executable(qwt_example src/qwt_example.cpp src/main.cpp)
target_include_directories(qwt_example PUBLIC include)

install(TARGETS qwt_example)
