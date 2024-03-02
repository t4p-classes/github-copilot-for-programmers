# Workspace New Command for a C++ Project

The following prompts demonstrate how to create a new project with GitHub Copilot and its `@workspace /new` command. There are several iterations of the same prompt adding additional detail to the new project request to explore how far GitHub Copilot can go to create a great start to a new project!

To run these commands, open the GitHub Copilot in Visual Studio Code.

## Iteration 1 - Simply Create a C++ Project

```text
@workspace /new Create a new C++ project.
```

## Iteration 2 - Create a C++ Project using a Specific Build Tool

```text
@workspace /new Create a new C++ project with CMake.
```

## Iteration 3 - Create a C++ Project using Specific Versions

```text
@workspace /new Create a new C++ project with CMake. My C++ version is 23. My CMake is version 3.28.2.
```

## Iteration 4 - Add Explicit Support for Google Test

```text
@workspace /new Create a new C++ project with Google Test and Cmake. The C++ version is 23. CMake is version 3.28.2. The CMake configuration will download the Google Test source from GitHub with tagged with v1.14.0.
```

## Iteration 5 - Add Documentation

```text
@workspace /new Create a new C++ project with Google Test and Cmake. The C++ version is 23. CMake is version 3.28.2. The CMake configuration will download the Google Test source from GitHub with tagged with v1.14.0. Also, give me instructions in a README.md on how to build the project with CMake not Make. Also, in the README.md, explain to me how to run the executable for the application and the tests.
```

