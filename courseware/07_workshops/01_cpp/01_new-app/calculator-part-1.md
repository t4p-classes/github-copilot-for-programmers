# Build a Calculator with C++ and Copilot

## Setup

This tutorial requires Microsoft Windows with Visual Studio Community Edition
and MinGW installed. MinGW can be downloaded
from [Winlibs](https://winlibs.com/). It is recommended to download the latest
UCRT version for your platform, x86 or x64. Finally, extract the archive, and
configure your `PATH` to include the `bin` folder of the extracted archive.

## Steps for Part 1

1. Create a new folder named `calculator-cpp`. Open the folder with VS Code.

2. Ask Copilot how to create a new C++ main file.

    **Copilot Chat Prompt:**
    ```text
    I am working on a new C++ project. Please generate a main file that prints hello world to the console.
    ```

    **Probable Partial Response:**
    ```c++
    #include <iostream>
    
    int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
    ```

3. Ask Copilot how to build and run the program.

    **Copilot Chat Prompt:**
    ```text
    How can I compile and run the C++ program you provided? The name of the executable file must be calculator.exe.
    ```

    **Probable Partial Response:**
    ```bash
    g++ main.cpp -o calculator.exe
    ```

3. Open a terminal, and run the following command.

    ```bash
    g++ main.cpp -o calculator.exe
    ```

   Then, run the program.

    ```bash
    calculator.exe
    ```

4. Ask Copilot to generate a CMake configuration.

    **Copilot Chat Prompt:**
    ```text
    Generate a new CMake configuration file for my project named CalculatorCpp. Use cmake version 3.27 and C++ version 23.
    ```

    **Probable Partial Response:**
    ```cmake
    cmake_minimum_required(VERSION 3.27)  # CMake 3.27 or later is required

    # set the project name
    project(CalculatorCpp)

    # specify the C++ standard
    set(CMAKE_CXX_STANDARD 23)

    # add the executable
    add_executable(CalculatorCpp main.cpp)
    ```

5. In the project's root folder, create a new file named `CMakeLists.txt` and
   add the following content to the file.

    ```cmake
    cmake_minimum_required(VERSION 3.27)  # CMake 3.27 or later is required

    # set the project name
    project(CalculatorCpp)

    # specify the C++ standard
    set(CMAKE_CXX_STANDARD 23)

    # add the executable
    add_executable(CalculatorCpp main.cpp)
    ```

6. Ask Copilot how to build the project with cmake.

    **Copilot Chat Prompt:**
    ```text
    How do I build the project with CMake?
    ```
    **Probable Partial Response:**
    ```bash
    mkdir build
    cd build
    
    cmake ..
    
    make
    ```

7. Run the following commands. The `make` command will fail. Instead,
   run `mingw2-make`. It will fail too, because there is no `Makefile.`

    ```bash
    mkdir build
    cd build
    
    cmake ..
    
    make
    
    mingw2-make
    ```

8. Ask GitHub Copilot how to build on Windows when there is no `Makefile` but
   there is a Visual Studio Solution file.

    **Copilot Chat Prompt:**
    ```text
    When running make, I receive an error saying there is no make target, but there is a Visual Studio Solution file. How do I use the CMmake command to execute a build the Visual Studio Solution?
    ```

    **Probable Partial Response:**
    ```bash
    cmake --build .
    ```

9. Run the following CMake build command, then run the executable.

    ```bash
    cmake --build .
    
    Debug\CalculatorCpp.exe
    ```

10. Create a new local git repository.

    ```bash
    git init
    ```

11. Ask GitHub Copilot how to create a `.gitignore` file for a C++ project.

    **Copilot Chat Prompt:**
    ```text
    Generate a Git ignore file for my C++ and CMake project.
    ```

    **Probable Partial Response:**
    ```text
    The contents of a Git ignore file.
    ```

12. Create a new `.gitignore` file, and add the contents suggested by the
    previous response.

13. Add the untracked file, create a commit, and push to a remote.

    ```bash
    git add -A
    
    git commit -m "initial commit"
    
    git remote add origin <SOME REMOTE>
    
    git push
    ```