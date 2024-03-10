# Improve Java Code with GitHub Copilot

## Equality Confusion

To run the following code, please create a "Hello World" style Java project 
using Visual Studio or JetBrain's IntelliJ.

1. Open the Java file with the `main` function. Update the code in the `Main` class 
   with this code.

    ```java
    public class Main {
        public static void main(String[] args) {
            String a = new String("example");
            String b = new String("example");

            if (a == b) {
                System.out.println("a and b are equal using ==");
            } else {
                System.out.println("a and b are not equal using ==");
            }
        }
    }
    ```

    The code will compile and run, but will not return the expect result of the strings being equal to each other. Why? Ask Copilot to find out more about the problem, and how to fix it.

2. Highlight the code in the `main` function, right click, mouse over Copilot, and ask Copilot to fix the code in the context menu.

    ```text
    /fix Why do the two string not equal each other? How do I compare the two strings to see if they are equal?
    ```

3. Copilot will offer an explanation and a fix similar. Read the explanation, and apply the proposed fix. The fix should look similar to this.

    ```java
    public class Main {
        public static void main(String[] args) {
            String a = new String("example");
            String b = new String("example");

            if (a.equals(b)) {
                System.out.println("a and b are equal using .equals()");
            } else {
                System.out.println("a and b are not equal using .equals()");
            }
        }
    }
    ```

4. Run the code. The code should run with expected result.
