cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 14)

project(car)

add_executable(main car_main.cpp car.cpp)