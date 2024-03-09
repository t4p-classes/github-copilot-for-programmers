# Improve C++ Code with GitHub Copilot

## Detect a Buffer Overflow with Github Copilot

To run the following code, please create a "Hello World" style C++ project
using Visual Studio or JetBrain's CLion. You may use whatever project and
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file,
   with this code.

    ```cpp
    #include <iostream>
    #include <cstring>
    
    int main() {
      char buffer[10];
    
      const char* source = "This string is too long for the buffer";
    
      strcpy(buffer, source);
    
      std::cout << "Buffer content: " << buffer << std::endl;
    
      return 0;
    }
    ```
    
    Compile the code, and run it.

2. Can you identify the buffer overflow? If you run the code through a
   static code analysis tool it will tell you the size of string referenced 
   by the `source` variable is larger than the memory allocated and 
   referenced by the `buffer` variable.

3. Highlight the code, right-click, and ask Copilot to fix the code. Apply
   the recommended fix and ensure the code works as expected.

4. Here is a reference solution to compare your code to.

    ```cpp
    #include <iostream>
    #include <cstring>
    
    int main() {
      char buffer[10];
    
      const char* source = "This string is too long for the buffer";
    
      strncpy(buffer, source, sizeof(buffer) - 1);
      buffer[sizeof(buffer) - 1] = '\0'; // Ensure null-termination
    
      std::cout << "Buffer content: " << buffer << std::endl;
    
      return 0;
    }
    ```