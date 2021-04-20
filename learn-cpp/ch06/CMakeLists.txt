cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 17)

project(ch6)

add_executable(main main.cpp foo.cpp goo.cpp)
add_executable(userCompareTwo userCompareTwo.cpp)
add_executable(passFail passFail.cpp)

add_executable(q1 quiz/q1.cpp)
add_executable(q2 quiz/q2.cpp)
add_executable(q3 quiz/q3.cpp)

