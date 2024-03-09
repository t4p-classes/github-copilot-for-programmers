# Build a Calculator with C++ and Copilot

## Setup

This tutorial builds on the previous tutorial. Complete the previous tutorial
before starting this one. Be sure to open the project in the Visual Studio Code
or JetBrains CLion.

## Steps for Part 2

1. Open the file `main.cpp` in the editor. Then, open the Copilot chat window.

2. Ask Copilot to how to initialize a result variable to 0 and display the 
   result on the screen.

    **Copilot Chat Prompt:**
    ```text
    How do I initialize a result variable to 0 and display the result on the screen?
    ```

    **Probable Partial Response:**
    ```c++
    #include <iostream>
    
    int main() {
        int result = 0;
        std::cout << "The result is: " << result << std::endl;
        return 0;
    }
    ```

3. Update the `main` function with the following code:

    ```c++
    int main() {
    
      int result = 0;
    
      std::cout << "The result is: " << result << std::endl;
      return 0;
    }
    ```

    Run the project, and verify it works.

4. Ask Copilot to how to read numeric input from the user and add the entered 
   number to the result.

    **Copilot Chat Prompt:**
    ```text
    How does the program accept user input from the console? I would like to have 
    the user enter a number, then add the number to the result.
    ```
    
    **Probable Partial Response:**
    ```c++
    #include <iostream>
    
    int main() {
        int result = 0;
        int input;
    
        std::cout << "Enter a number: ";
        std::cin >> input;
    
        result += input;
    
        std::cout << "The result is: " << result << std::endl;
        return 0;
    }
    ```

5. Update the `main` function to use the following code:

    ```c++
    #include <iostream>
    
    int main() {
        int result = 0;
        int input;
    
        std::cout << "Enter a number: ";
        std::cin >> input;
    
        result += input;
    
        std::cout << "The result is: " << result << std::endl;
        return 0;
    }
    ```

    Compile and run the code. It should work as expected.

6. Ask Copilot to add a loop so the user can enter multiple numbers and 
   continue to add to the result.

    **Copilot Chat Prompt:**
    ```text
    How do I implement a loop so that users can add many numbers to the result?
    ```
    
    **Probable Partial Response:**
    ```text
    To implement a loop that allows users to add multiple numbers to the result, you can use a `while` loop. Here's the step-by-step plan:
    
    1. Initialize a `char` variable to store the user's choice to continue or not.
    2. Start a `do-while` loop. This type of loop will execute the code block at least once before checking the condition.
    3. Inside the loop, prompt the user to enter a number.
    4. Read the user's input and add it to the result.
    5. Display the updated result.
    6. Ask the user if they want to enter another number.
    7. Read the user's choice.
    8. The loop will continue as long as the user enters 'y' or 'Y'.
    
    Here's the code:
    
    #include <iostream>
    
    int main() {
        int result = 0;
        int input;
        char choice;
    
        do {
            std::cout << "Enter a number: ";
            std::cin >> input;
    
            result += input;
    
            std::cout << "The result is: " << result << std::endl;
    
            std::cout << "Do you want to enter another number? (y/n): ";
            std::cin >> choice;
        } while(choice == 'y' || choice == 'Y');
    
        return 0;
    }
    
    This code will keep asking the user to enter a number and add it to the result until the user decides to stop by entering anything other than 'y' or 'Y'.
    ```

7. Using the last Copilot response, update your code, and run the program. Does 
   it work? If it works, then great! If not, continue to step 8 and compare 
   your code to the reference code.

8. Compare your code updates in the previous step to the code below. If your 
   code does not work, please update accordingly.

    ```cpp
    #include <iostream>
    
    int main() {
    
      int result = 0;
      int input;
      char choice;
    
      do {
    
        std::cout << "Enter a number: ";
        std::cin >> input;
    
        result += input;
    
        std::cout << "The result is: " << result << std::endl;
    
        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> choice;
    
      } while (choice == 'y' || choice == 'Y');
      
      return 0;
    }
    ```

9. Ask the Copilot chat how to support multiple math operations.

    **Copilot Chat Prompt:**
    ```text
    How do I update the program to support add, subtract, multiply, and divide? 
    The user must choose a math operation on each iteration of the command loop.
    ```
    
    **Probable Partial Response:**
    ```cpp
    #include <iostream>
    
    int main() {
        int result = 0;
        int input;
        char choice;
        char operation;
    
        do {
            std::cout << "Enter a number: ";
            std::cin >> input;
    
            std::cout << "Choose an operation (+, -, *, /): ";
            std::cin >> operation;
    
            switch (operation) {
                case '+':
                    result += input;
                    break;
                case '-':
                    result -= input;
                    break;
                case '*':
                    result *= input;
                    break;
                case '/':
                    if (input != 0) {
                        result /= input;
                    } else {
                        std::cout << "Error: Division by zero is not allowed.\n";
                    }
                    break;
                default:
                    std::cout << "Error: Invalid operation. Please choose +, -, *, or /.\n";
                    continue; // Skip the rest of the loop for this iteration
            }
    
            std::cout << "The result is: " << result << std::endl;
    
            std::cout << "Do you want to enter another number? (y/n): ";
            std::cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    
        return 0;
    }
    ```

    Using the response from Copilot, please update your code.

   10. Compare you code to the reference code below. Make any needed 
       adjustments. Your code does not have to match this code exactly. Simply 
       use the code to ensure similar functionality and to resolve any bugs you 
       may have.

       ```cpp
       #include <iostream>
    
       int main() {
    
         int result = 0;
         int input;
         char choice;
         char operation;
    
         do {
    
           std::cout << "Enter a number: ";
           std::cin >> input;
    
           std::cout << "Choose an operation (+, -, *, /): ";
           std::cin >> operation;
    
           switch (operation) {
             case '+':
               result += input;
               break;
             case '-':
               result -= input;
               break;
             case '*':
               result *= input;
               break;
             case '/':
               // -- used the comment below to encourage Copilot suggestion --
               // Check for division by zero
               if (input == 0) {
                 std::cout << "Division by zero is not allowed." << std::endl;
               } else {
                 result /= input;
               }
               break;
             default:
               // -- used the comment below to encourage Copilot suggestion --
               // show an invalid operation message that includes a list of valid
               // operations
               std::cout << "Error: Invalid operation. Please choose +, -, *, /." <<
               std::endl;
               continue;
           }
    
           std::cout << "The result is: " << result << std::endl;
    
           std::cout << "Do you want to enter another number? (y/n): ";
           std::cin >> choice;
    
         } while (choice == 'y' || choice == 'Y');
    
         return 0;
       }
       ```

11. For part, one final improvement is needed. The user input for the math 
    operation command and the exit loop command need to be combined. Copilot 
    can help us do this. Ask Copilot to refactor our logic to reduce the 
    code to single user input for math operations and loop exit.

    For this step, try writing your own Copilot prompt and follow the 
    suggestion offer by Copilot. A suggested prompt and solution is offered 
    [Part 2 - Solution](./calculator-part-2-solution.md) file.

