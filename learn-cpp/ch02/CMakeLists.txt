cmake_minimum_required(VERSION 3.0.0)

project(ch2)

set(CMAKE_CXX_STANDARD 17)

add_executable(functions functions.cpp doubleNum.cpp)
add_executable(main main.cpp io.cpp)
add_executable(quiz quiz/main.cpp quiz/io.cpp)
