### Build a Calculator with C++ and Copilot

## Solution for Final Step of Part 2

The Copilot prompt and code below are the solution to final step of part 2. 
This solution is in a separate to give you the change to interact with 
Copilot on your own, using your own prompt, and applying the solution as you 
decide to.

**Copilot Chat Prompt:**
```text
Combine the user input for the math operation command and the exit loop command into a single input and update the appropriate control flow logic. The user input to capture the command/exit should be a different user input than capturing the number.
```

**Probable Partial Response:**
```text
To achieve this, you can modify the program to first ask for the operation and then ask for the number. If the user enters 'q' or 'Q' as the operation, the program will quit. Otherwise, it will ask for a number and perform the chosen operation on the result and the user's input. Here's the updated code:

#include <iostream>

int main() {
    int result = 0;
    int input;
    char operation;

    while (true) {
        std::cout << "Enter an operation (+, -, *, /) or 'q' to quit: ";
        std::cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            break;
        }

        std::cout << "Enter a number: ";
        std::cin >> input;

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
    }

    return 0;
}

This code will first prompt the user to enter an operation. If the user enters 'q' or 'Q', the program will quit. Otherwise, it will prompt the user to enter a number and perform the chosen operation on the result and the user's input. If the user chooses division and enters zero as the number, the program will print an error message and ask for another operation and number.
```

## Tutorial Reference Solution for Part 2

The following code if the final reference solution for the tutorial. Please 
compare your code to ensure similar functionality and that your code works 
as expected.

```cpp
#include <iostream>

int main() {
    int result = 0;
    int input;
    char operation;

    while (true) {
        std::cout << "Enter an operation (+, -, *, /) or 'q' to quit: ";
        std::cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            break;
        }

        std::cout << "Enter a number: ";
        std::cin >> input;

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
    }

    return 0;
}
```