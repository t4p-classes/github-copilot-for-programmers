# Improve C++ Code with GitHub Copilot

## Detect a Memory Leak with Github Copilot

To run the following code, please create a "Hello World" style C++ project 
using Visual Studio or JetBrain's CLion. You may use whatever project and 
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file, 
   with this code.

    ```cpp
    #include <iostream>
    
    int main() {
        int *ptr = new int(5);
        std::cout << "Value: " << *ptr << std::endl;
        return 0;
    }
    ```
    
    Compile and run the code. It should work.

2. If you this code through a static code analysis tool, it will report a 
   memory leak. Can you spot it?

    The memory leak results from failing to deallocate the memory allocated 
   for the number 5 when assigning the `ptr` variable. Yes, the code runs 
   but this memory leak needs to be corrected.

3. Highlight the code in the editor, right click, and ask Copilot to fix the 
   code.

    Copilot should give a response similar to this:

    ```text
    The provided code snippet does not seem to have any syntax errors or logical problems. It correctly allocates memory for an integer, assigns it a value of 5, and then prints that value. However, there is a memory management issue that should be addressed.
    
    **Problem 1: Memory Leak**
    
    The code allocates memory using `new` but does not deallocate it using `delete`. This can lead to a memory leak if the code is run multiple times or in a loop.
    
    Here's how the code looks before and after the fix:
    
    Before:
    int main() {
      int *ptr = new int(5);
      std::cout << "Value: " << *ptr << std::endl;
      return 0;
    }
    
    After:
    int main() {
      int *ptr = new int(5);
      std::cout << "Value: " << *ptr << std::endl;
      delete ptr;
      return 0;
    }
    
    In the fixed version, `delete ptr;` is added to deallocate the memory that was previously allocated with `new`.
    
    Here's the completely fixed version of the code:
    
    #include <iostream>
    
    int main() {
      int *ptr = new int(5);
      std::cout << "Value: " << *ptr << std::endl;
      delete ptr;
      return 0;
    }
    ```

4. Using the Copilot response you received, update the code in the `main` 
   function, and ensure it still works.

    ```cpp
    #include <iostream>
    
    int main() {
      int *ptr = new int(5);
      std::cout << "Value: " << *ptr << std::endl;
      delete ptr;
      return 0;
    }
    ```
