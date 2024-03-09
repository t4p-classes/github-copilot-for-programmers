# Improve C++ Code with GitHub Copilot

## Detect Undefined Behaviors with Github Copilot

To run the following code, please create a "Hello World" style C++ project
using Visual Studio or JetBrain's CLion. You may use whatever project and
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file,
   with this code.

    ```cpp
    #include <iostream>
    
    int main() {
      int x = 10;
    
      x = x++ + --x;
    
      std::cout << "x = " << x << std::endl;
    
      return 0;
    }
    ```

2. Can you identify the undefined behavior in the code? Unfortunately, even
   static analysis tool can miss this potential code problem. The statement
   `x = x++ + --x;` is undefined because the variable `x` is modified more than
   once between sequence points. This explanation is both obvious and 
   possibly confusing. What is meant by sequence points? GitHub Copilot can 
   be used to detect problems and explain concepts.

3. Select the code, and ask GitHub Copilot to fix it. The explanation of the
   solution will most likely mention sequence points. After reviewing the
   suggested solution, ask Copilot in the chat to explain the concept of
   sequence points.

   **Possible Copilot Prompt:**
    ```text
    Please explain to me what C++ sequence points are with respect to this code problem.
    ```

   **Probable Copilot Response:**
    ```text
    In C++, a sequence point defines any point in a computer program's
   execution at which it is guaranteed that all side effects of previous
   evaluations will have been performed, and no side effects from subsequent
   evaluations have yet been performed. They are used to specify the order in
   which expressions are evaluated in a program.
    
    In the context of the code problem, the expression `x = x++ + --x;` has
   undefined behavior because it modifies `x` more than once between sequence
   points. The `++` and `--` operators each create a sequence point, but the
   order in which they are evaluated is not specified, leading to undefined
   behavior. 
    
    In the corrected code, we use temporary variables to hold the results of
   `x++` and `--x`, ensuring that `x` is not modified more than once between
   sequence points. This makes the behavior of the code consistent and
   predictable.
    ```

   Yeah, that's pretty cool, right?

4. From the chat session, apply the suggested fix, and verify it generates
   the result you intend the code to produce. Because the original code was
   undefined and given to you, you get to decide how you want the
   calculation to be completed.

    ```cpp
    #include <iostream>
    
    int main() {
      int x = 10;
    
      int temp1 = x++;
      int temp2 = --x;
      x = temp1 + temp2;
    
      std::cout << "x = " << x << std::endl;
    
      return 0;
    }
    ```