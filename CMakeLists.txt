cmake_minimum_required(VERSION 3.20)
project(CloseToCloseVolatilityModel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the main source files
add_executable(close_to_close_volatility src/main.cpp src/volatility/close_to_close.cpp)

# Include directory for headers
target_include_directories(close_to_close_volatility PUBLIC include)

# Add the test executable
add_executable(test_close_to_close tests/test_close_to_close.cpp src/volatility/close_to_close.cpp)
target_include_directories(test_close_to_close PUBLIC include)
