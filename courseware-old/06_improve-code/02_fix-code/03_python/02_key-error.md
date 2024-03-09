# Improve Python Code with GitHub Copilot

## Dictionary Key Error

To run the following code, please create a "Hello World" style Python project 
using Visual Studio or JetBrain's Pycharm.

1. Open the Python file with the `main` function. Replace the code in the file, 
   with this code.

    ```python
    def main():

        person = {
          "first_name": "John",
          "last_name": "Doe",
        }

        print(person["age"])

      
    if __name__ == "__main__":
        main()
    ```

    The code should fail to run.

2. Highlight the code, right click, mouse over Copilot, and ask Copilot to fix the code in the context menu.

3. Copilot should offer a fix similar to this:

    ```python
    def main():

        person = {
          "first_name": "John",
          "last_name": "Doe",
          "age": 25,
        }

        print(person["age"])

      
    if __name__ == "__main__":
        main()
    ```

4. Accept the fix and run the code. The code should run without errors.

5. Undo the fix, and ask Copilot to fix the code again. But the add the following text following the `/fix` command:

```text
/fix improve the code so it works even if the age key is not present in the dictionary
```

6. Copilot should offer a fix similar to this:

    ```text
    To improve the code so it works even if the "age" key is not present in the dictionary, I would use the get() method to retrieve the value of the "age" key, and provide a default value of 0 if the key is not found.
    ```

    ```python
    def main():

        person = {
          "first_name": "John",
          "last_name": "Doe",
        }

        age = person.get("age", 0)
        print(age)

      
    if __name__ == "__main__":
        main()
    ```

7. Accept the fix and run the code. The code should run without errors.

