# X-Shot Prompting for a Java Project

## Zero Shot Prompting

Chat with Copilot using the following prompt.

```text
Create a new Java class for an Airplane.
```

## Multiple Shot Prompting

Chat with Copilot using the following prompt which includes an example of what we are looking for.

```text
Create a new Java class for an Airplane.

Use the following C++ code as an example for the Java class:

class Car {
  private:
  string make_name;
  string model_name;
  string registration_number;

  public:
  string getMakeName();
  string getModelName();
  string getRegistrationNumber();
  void drive();
}
```