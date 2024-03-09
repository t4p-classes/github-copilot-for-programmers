# Code Suggestions

The following demo will explore how to use the in-editor code suggestions provided by GitHub Copilot

1. Create a function that adds three numbers together. In the editor, type in the following comment.

```cpp
// add three numbers together
```

When you hit enter, a code suggestion will appear at the start of the next line. Most likely, the suggestion will be a function that adds three numbers together. If you like the suggestion, hit tab to accept it. If you do not like the suggestion, hit escape to decline it. If you want to see the suggestion again, hit alt + backtick. If there are multiple suggestions, you can cycle through them with alt + ] and alt + [.

2. To view many suggestions in a new editor tab, type ctrl + enter to open a new tab and review the generated suggestions.

3. Above the code add the comment:

```cpp
int addTwoNumbers(int a, int b) {
    return a + b;
}
```

4. Place the cursor on the line following the original comment, type `ALT+\` to generate a suggestion. Observe how the suggestions follows the coding example of the `addTwoNumbers` function.

5. Revise the `add_two_numbers` function to look like this.


```cpp
int add_two_numbers(int a, int b) {
    return a + b;
}
```

6. Place the cursor on the line following the original comment, type `ALT+\` to generate a suggestion. Observe how the suggestions follows the coding example of the `add_two_numbers` function.

7. Delete the `add_two_numbers` function and any code and comments for the add three numbers function.

8. Update the code in the file with the code below. Instructions are in all caps. Do not type instructions into the file. After each comment, accept the suggestion.

```cpp
#include <iostream>

// TYPE THE COMMENT BELOW AND GET SUGGESTION
// generate an array of random integers


// TYPE THIS COMMENT BELOW AND GET SUGGESTION
// calculate some descriptive statistics for an array of integers

int main() {
    // DO NOT TYPE THIS, PLACE CURSOR HERE AND WAIT FOR SUGGESTION
    return 0;
}
```

9. Compile and run the program to see the output.
