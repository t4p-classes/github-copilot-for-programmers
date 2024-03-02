# Improve C++ Code with GitHub Copilot

## Detect Resource Leaks with Github Copilot

To run the following code, please create a "Hello World" style C++ project
using Visual Studio or JetBrain's CLion. You may use whatever project and
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file,
   with this code.

    ```cpp
    #include <iostream>
    #include <fstream>
    
    void openFileAndWrite() {
      auto* file = new std::ofstream("example.txt");
      if (file->is_open()) {
        *file << "Writing some data to the file." << std::endl;
      }
    }
    
    int main() {
      openFileAndWrite();
      std::cout << "File writing function is complete, but the file is still open." << std::endl;
      return 0;
    }
    ```
   
2. Do you see the two issues? First, there is a memory leak, the memory 
   allocated for the `file` pointer is never freed. Also, because the memory 
   is never freed, the destructor for the file stream object is never called 
   so the file is never implicitly closed. And there is no explicit closing 
   of the file either. The unclosed file handler is a resource leak. Some 
   static code analysis tools will catch this, and some will not. Can GitHub 
   Copilot catch the problem?

3. Highlight the code, and ask GitHub Copilot to review the code and suggest 
   a fix if needed. Copilot will probably reply with something similar to this.

    ```text
    **Problem 1: Memory Leak**
    
    The code is creating a new `std::ofstream` object using `new`, but it never deletes this object, leading to a memory leak. Additionally, the file that is opened is never closed, which can lead to data loss or corruption.
    
    Here's how the code looks before and after the fix:
    
    Before:
    auto* file = new std::ofstream("example.txt");
    if (file->is_open()) {
      *file << "Writing some data to the file." << std::endl;
    }
    
    After:
    std::ofstream file("example.txt");
    if (file.is_open()) {
      file << "Writing some data to the file." << std::endl;
      file.close();
    }
    
    In the fixed version, we create the `std::ofstream` object on the stack, which automatically gets cleaned up when it goes out of scope. We also explicitly close the file after we're done writing to it.
    
    Here's the completely fixed version of the code:
    
    #include <iostream>
    #include <fstream>
    
    void openFileAndWrite() {
      std::ofstream file("example.txt");
      if (file.is_open()) {
        file << "Writing some data to the file." << std::endl;
        file.close();
      }
    }
    
    int main() {
      openFileAndWrite();
      std::cout << "File writing function is complete, and the file is now closed." << std::endl;
      return 0;
    }
    
    In this fixed version, we avoid a memory leak by not using `new` to create the `std::ofstream` object, and we ensure that the file is properly closed after writing to it.
    ```
   
4. Fix the code as suggested, and run it to verify it still works.

    ```cpp
    #include <iostream>
    #include <fstream>
    
    void openFileAndWrite() {
      auto* file = new std::ofstream("example.txt");
      if (file->is_open()) {
        *file << "Writing some data to the file." << std::endl;
        file->close();
      }
      delete file;
    }
    
    int main() {
      openFileAndWrite();
      std::cout << "File writing function is complete." << std::endl;
      return 0;
    }
    ```

