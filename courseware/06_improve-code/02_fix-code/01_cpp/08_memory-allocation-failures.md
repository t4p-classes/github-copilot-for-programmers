# Improve C++ Code with GitHub Copilot

## Detect Memory Allocation Failures with Github Copilot

To run the following code, please create a "Hello World" style C++ project
using Visual Studio or JetBrain's CLion. You may use whatever project and
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file,
   with this code.

      ```cpp
      #include <iostream>
      #include <new>
      
      int main() {
        int* largeArray = nullptr;
      
        largeArray = new int[1000000000000];
      
        delete[] largeArray;
      
        return 0;
      }
      ```

2. Do you see the issue? A large array is being allocated, most likely this will
   fail and a `std::bad_alloc` exception will be thrown. Static code analysis
   tools will probably not detect this problem. Can GitHub Copilot catch the
   problem?

3. Highlight the code, and ask GitHub Copilot to review the code and suggest
   a fix if needed. Copilot will probably reply with something similar to this.

    ```text
    **Problem 1: Memory Allocation Size**

    The code is trying to allocate a very large amount of memory (1 trillion integers) which is likely to exceed the available memory, causing a `std::bad_alloc` exception to be thrown.

    **Before:**
    largeArray = new int[1000000000000];

    **After:**
    try {
        largeArray = new int[1000000]; // Reduced size
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1;
    }

    **Fixed Version of the Code:**

    #include <iostream>
    #include <new>

    int main() {
        int* largeArray = nullptr;

        try {
            largeArray = new int[1000000]; // Reduced size
        } catch (const std::bad_alloc& e) {
            std::cerr << "Memory allocation failed: " << e.what() << '\n';
            return 1;
        }

        delete[] largeArray;

        return 0;
    }

    This version of the code reduces the size of the memory allocation to a more reasonable amount and adds error handling for the memory allocation.
    ```

4. Fix the code as suggested, and run it to verify it still works.

    ```cpp
    #include <iostream>
    #include <new>

    int main() {
      int* largeArray = nullptr;

      try {
        largeArray = new int[1000000]; // Reduced size
      } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1;
      }

      delete[] largeArray;

      return 0;
    }
    ```