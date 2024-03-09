# Improve Python Code with GitHub Copilot

## Convert Int to String

To run the following code, please create a "Hello World" style Python project 
using Visual Studio or JetBrain's Pycharm.

1. Open the Python file with the `main` function. Replace the code in the file, 
   with this code.

    ```python
    def main():
        sum = 1 + 2
        message = "Sum=" + sum
        print(message)
      
    if __name__ == "__main__":
        main()
    ```

    The code should fail to run.

2. Highlight the code, right click, mouse over Copilot, and ask Copilot to fix the code in the context menu.

3. Copilot should offer a fix similar to this:

    ```python
    def main():
        sum = 1 + 2
        message = "Sum=" + str(sum)
        print(message)
      
    if __name__ == "__main__":
        main()
    ```

