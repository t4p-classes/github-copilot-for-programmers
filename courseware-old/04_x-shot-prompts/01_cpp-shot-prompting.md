# X-Shot Prompting for a C++ Project

## Zero Shot Prompting

Chat with Copilot using the following prompt.

```text
Create a new C++ class for an Airplane.
```

## Multiple Shot Prompting

Chat with Copilot using the following prompt which includes an example of what we are looking for.

```text
Create a new C++ class for an Airplane.

Use the following code as an example:

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