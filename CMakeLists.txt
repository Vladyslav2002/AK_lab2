cmake_minimum_required(VERSION 3.16.3)

project("AK-2HW2" VERSION 0.1)

add_library(calculator STATIC calculator.cpp)
add_executable("${PROJECT_NAME}" main.cpp)
target_link_libraries("${PROJECT_NAME}" calculator)
