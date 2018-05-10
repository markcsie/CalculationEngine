cmake_minimum_required(VERSION 3.2)

project(CalculationEngine CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
add_subdirectory(engines)
add_subdirectory(example)
add_subdirectory(test)
