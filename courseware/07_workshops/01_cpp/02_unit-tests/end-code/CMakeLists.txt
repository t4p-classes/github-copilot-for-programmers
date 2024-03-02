cmake_minimum_required(VERSION 3.27)  # CMake 3.27 or later is required

# set the project name
project(CalculatorCpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)


# specify the C++ standard
set(CMAKE_CXX_STANDARD 23)

# add the executable
add_executable(CalculatorCpp
        main.cpp
        utils.cpp
        utils.h)

add_executable(tests test_utils.cpp utils.cpp utils.h)
target_link_libraries(tests gtest_main)
enable_testing()

add_test(NAME tests COMMAND tests)
