cmake_minimum_required(VERSION 3.20)
project(BlackScholesIV CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(implied_vol main.cpp)
