# Improve C++ Code with GitHub Copilot

## Convert Int to String

To run the following code, please create a "Hello World" style C++ project 
using Visual Studio or JetBrain's CLion. You may use whatever project and 
build tools you would like.

1. Open the C++ file with the `main` function. Replace the code in the file, 
   with this code.

    ```cpp
    #include <iostream>
    #include <string>

    using namespace std;

    class Person {
      private:
        string name;
        int age;
      public:
        Person(string name, int age) {
          this->name = name;
          this->age = age;
        }
        string getName() {
          return name;
        }
        int getAge() {
          return age;
        }
        void setName(string name) {
          this->name = name;
        }
        void setAge(int age) {
          this->age = age;
        }
        string print() {
          return "Name: " + name + ", Age: " + age;
        }
    };

    int main() {
      Person person1("John", 30);
      cout << person1.print() << endl;
      return 0;
    }
    ```

    The code should fail to compile.

2. The error is located in this line of code `return "Name: " + name + ", Age: " + age;`. The variable `age` is an integer and cannot be concatenated to a string value. To solve the problem, the integer must be converted to a string. How to do this? This is a common thing that a programmer may forget how to do if they work with many other languages, especially loosely typed languages where this conversion would happen automatically. How can Copilot help us fix it?

3. Highlight the `return "Name: " + name + ", Age: " + age;` line of code in the editor, right click, and ask Copilot to fix the code in the context menu.

    Copilot should give a response similar to this:
    ![Github Copilot Convert Intto String](../../images/github-copilot-fix-int-to-string.png "Github Copilot Convert Intto String")

4. Accept the change, and review the code. It should look similar to this.

    ```cpp
    #include <iostream>
    #include <string>

    using namespace std;

    class Person {
      private:
        string name;
        int age;
      public:
        Person(string name, int age) {
          this->name = name;
          this->age = age;
        }
        string getName() {
          return name;
        }
        int getAge() {
          return age;
        }
        void setName(string name) {
          this->name = name;
        }
        void setAge(int age) {
          this->age = age;
        }
        string print() {
          return "Name: " + name + ", Age: " + to_string(age);
        }
    };

    int main() {
      Person person1("John", 30);
      cout << person1.print() << endl;
      return 0;
    }
    ```

    Compile and run the code. It should work.
