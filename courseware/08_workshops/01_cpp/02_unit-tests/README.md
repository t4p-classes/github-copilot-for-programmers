# Write a Unit Test with C++ and Copilot

## Setup

This tutorial requires Microsoft Windows with Visual Studio 2022 Community
Edition. Also, Visual Studio Code will need Microsoft's C++ and CMake
extensions.

## Steps

1. Copy the folder `begin-code`. Open the copied folder with Visual Studio Code.

2. Open the file `utils.cpp`, review the `add` function. A unit test is needed
   for the `add` function. How would you write this? A popular unit testing
   library is [Google Test](https://google.github.io/googletest/). Do you know how to wire up the test framework and write the test off the top of your head? Do you work on projects where the testing framework is already configured? How would you setup unit testing for this project?

3. Let's start with learn how to configure unit testing for the project.

    **Copilot Chat Prompt:**
    ```text
    How do I add Google Test to an existing C++ project that is using CMake as the build tool? I would like CMake to fetch and install the release zip file for Google Test when building. Also, how do I configure a build target for running the tests.
    ```
    **Probable Copilot Response**
    ```text
    To add Google Test to a C++ project using CMake, have CMake install the latest release zip file for Google Test during the build process, and configure a build target for running the tests, you can follow these steps:

    1. In your `CMakeLists.txt`, include the `FetchContent` module:

    include(FetchContent)

    2. Use `FetchContent_Declare` to specify the Google Test repository:

    FetchContent_Declare(
      googletest
      URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
    )

    3. Use `FetchContent_MakeAvailable` to download and set up Google Test:

    FetchContent_MakeAvailable(googletest)

    4. Create a new executable for your tests:

    add_executable(tests your_test_file.cpp)

    5. Link Google Test to your test executable:

    target_link_libraries(tests gtest_main)

    6. Add a test command to enable testing:

    enable_testing()

    7. Add your test executable as a test:

    add_test(NAME example_test COMMAND tests)

    Remember to replace `your_test_file.cpp` with your actual test file name. Now, when you build your project, CMake will automatically download and set up Google Test. You can run the tests by using the `ctest` command in the command prompt.

    Please note that you need to have CMake and a C++ compiler installed on your machine. If you're on Windows, you can use the Visual Studio compiler, or install MinGW or Cygwin.
    ```

4. Update the `CMakeLists.txt` file to contain this code. This code will be
   similar to the suggested code with source file names update for the specifics
   of this project. Sometimes, Copilot gets the solution perfectly sometimes it
   gets the solution most of the way there.

    ```cmake
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
    ```

5. Next, a new unit test is needed for the `add` function. Highlight the `add`
   function in the `utils.cpp` file. Right click on the selection and have
   Copilot "Generate Tests". The code will look similar to this. Copilot may
   offer to create a new unit test file named something similar to
   `test_utils.cpp`. If it offers, allow it to create the file, and make sure it
   is in the same folder as the `utils.cpp` file. If it does not offer, then
   create a file in the same folder as the `utils.cpp` file, and copy the
   suggested code into it.

    ```cpp
    #include <gtest/gtest.h>

    #include "utils.h"

    TEST(AddFunction, ReturnsSumOfTwoPositiveNumbers) {
      EXPECT_EQ(add(1, 2), 3);
    }

    TEST(AddFunction, ReturnsSumOfTwoNegativeNumbers) {
      EXPECT_EQ(add(-1, -2), -3);
    }

    TEST(AddFunction, ReturnsZeroWhenAddingPositiveAndNegativeOfSameValue) {
      EXPECT_EQ(add(5, -5), 0);
    }

    TEST(AddFunction, ReturnsSumOfZeroAndNumber) {
      EXPECT_EQ(add(0, 5), 5);
    }

    TEST(AddFunction, ReturnsSumOfNumberAndZero) {
      EXPECT_EQ(add(5, 0), 5);
    }

    TEST(AddFunction, ReturnsSumOfTwoLargeNumbers) {
      EXPECT_EQ(add(1000000, 2000000), 3000000);
    }

    TEST(AddFunction, ReturnsSumOfTwoNegativeLargeNumbers) {
      EXPECT_EQ(add(-1000000, -2000000), -3000000);
    }

    TEST(AddFunction, ReturnsSumOfLargeNumberAndZero) {
      EXPECT_EQ(add(5000000, 0), 5000000);
    }

    TEST(AddFunction, ReturnsSumOfZeroAndLargeNumber) {
      EXPECT_EQ(add(0, 5000000), 5000000);
    }
    ```

6. Using the CMake extension, run the tests. The test should pass. Update one of the tests to make it fail.

