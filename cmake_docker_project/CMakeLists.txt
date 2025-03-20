# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(cmake_example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add executable and source files
add_executable(my_program src/main.cpp src/helper.cpp)

# Enable testing
enable_testing()

# Add Google Test (find the installed package)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executables
add_executable(test_prime tests/test_prime.cpp src/helper.cpp)

# Link Google Test and pthreads
target_link_libraries(test_prime GTest::GTest GTest::Main pthread)

# Register test
add_test(NAME PrimeTest COMMAND test_prime)

