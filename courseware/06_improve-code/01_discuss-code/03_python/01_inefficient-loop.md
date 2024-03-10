# Improve PythonCode with GitHub Copilot

## Improve Loop Efficiency

To run the following code, please create a "Hello World" style Python project 
using Visual Studio or JetBrain's Pycharm.

1. Open the Python file with the `main` function. Replace the code in the file, 
   with this code.

    ```python
    def main():

        nums = [1, 2, 3, 4, 5]
        double_nums = []

        for num in nums:
          double_nums.append(num * 2)

        print(nums)
        print(double_nums)

      
    if __name__ == "__main__":
        main()
    ```

    The code will run with no problems. But is this the most efficient way to double the numbers in the list? Copilot can help us improve the code.

2. Highlight the code, right click, mouse over Copilot, and ask Copilot to fix the code in the context menu. Add the following text following the `/fix` command:

    ```text
    /fix improve the code so it is more efficient and more Pythonic
    ```

3. Copilot should offer a fix similar to this:

    ```text
    To improve the code, I would suggest using a list comprehension instead of a for loop to create the double_nums list.    
    ```

    ```python
    def main():

        nums = [1, 2, 3, 4, 5]
        double_nums = [num * 2 for num in nums]

        print(nums)
        print(double_nums)

      
    if __name__ == "__main__":
        main()
    ```

4. Accept the fix and run the code. The code should run without errors.
