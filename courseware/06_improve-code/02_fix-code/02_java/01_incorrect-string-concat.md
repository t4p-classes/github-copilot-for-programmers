# Improve Java Code with GitHub Copilot

## Incorrect String Concatenation

To run the following code, please create a "Hello World" style Java project 
using Visual Studio or JetBrain's IntelliJ.

1. Open the Java file with the `main` function. Update the code in the `Main` class 
   with this code.

    ```java
    public class Main {
        public static void main(String[] args) {

            String message = "Sum=" + 1 + 2;

            System.out.println(message);
        }
    }
    ```

    The code should fail to run.

2. Highlight the code in the `main` function, right click, mouse over Copilot, and ask Copilot to fix the code in the context menu.

3. Copilot should offer a fix similar to this:

    ```java
    public class Main {
        public static void main(String[] args) {

            int sum = 1 + 2;
            String message = "Sum=" + sum;

            System.out.println(message);
        }
    }
    ```

