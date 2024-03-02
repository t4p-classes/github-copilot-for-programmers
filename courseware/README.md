# GitHub Copilot for Programmers

Welcome to the GitHub Copilot for Programmers training! The following content is the courseware for this course. The course delivery is 100% live coding. Students are encouraged to code with the instructor if they have Copilot ready in Visual Studio Code and optionally in other editors.

## Welcome!

Below are the course modules and resource links used in the course. We will not use every demo and resource in your training session, but you are encouraged to explore all the resources following class to continue learning.

## Module 1: Official GitHub Copilot Extension/Plugin Links

GitHub Copilot is a web-based service that requires a GitHub account and active license via subscription. Your GitHub administrator assigns licenses. In addition to the subscription, you must install the GitHub Copilot extension(s) in your IDE.

The following links help start with GitHub Copilot in the officially supported editors. Not all editors support all features of GitHub Copilot. The links include instructions on how to install the extension as well as how to use it.

Some editors require two extensions: one for the Copilot suggestions and one for the chat feature. The chat feature is a way to interact with Copilot to get help, ask questions, and get code suggestions. The chat feature is not available in all editors. JetBrains IDEs support both code suggestions and chat using one plugin.

### GitHub Copilot Editor Extensions

- [Getting Started with Copilot Editor Extensions](https://docs.github.com/en/copilot/using-github-copilot/getting-started-with-github-copilot)
- [Getting Started with Copilot Chat Editor Extensions](https://docs.github.com/en/copilot/github-copilot-chat/using-github-copilot-chat-in-your-ide)

### Explore GitHub Copilot Demos

  - [C++ Console App with Visual Studio Code](./01_opening-demo/01_cpp-console-vscode.md)
  - [Java Console App with Visual Studio Code](./01_opening-demo/02_java-console-vscode.md)
  - [Python Console App with Visual Studio Code](./01_opening-demo/03_python-console-vscode.md)
  - [Java Spring Boot REST API with IntelliJ IDEA](./01_opening-demo/04_java-spring-boot-intellij.adoc)


## Module 2: Copilot Suggestions and Visual Studio Code

While Copilot is supported by many editors, the most popular editor is Visual Studio Code. The following notes will help you start with GitHub Copilot in Visual Studio Code. Below are some notes on how to use Copilot in Visual Studio Code. If using another editor, refer to the official instructions at the links above.

### Practical Copilot Techniques for Visual Studio Code

- Open a source file, write a comment description of what you want, type `<ENTER>`, and a suggestion should appear on the following line.
  - If you like the suggestion, hit `<TAB>` on the keyboard to accept.
  - If the suggestion is unacceptable and you want to type something else, type `<ESC>` on the keyboard to decline the suggestion. Then, you may continue typing.
  - If no suggestion appears, or the suggestion disappears, and you want it back, then hit `<ALT> + \` on the keyboard; if there is a suggestion, it will appear.
  - When there are multiple suggestions, to view them, type `<ALT>+]` or `<ALT>+[` to cycle left and right through them. Also, you can hover over the suggestion with your mouse cursor to see more.
  - To view multiple suggestions in a new editor tab, type `<CTRL> + <ENTER>` to open a new tab and review the generated suggestions.

### Useful Copilot Chat Techniques for Visual Studio Code

- To open a chat session to discuss a code snippet, highlight the code in the editor and type `<CTRL>+i` on Windows and Linux and `<CMD>+i` on macOS.
- If you do not understand some lines of code, highlight them, right-click, and select `Copilot` -> `Explain This` from the context menu.
- If you want to fix some lines of code, highlight them, right-click, and choose `Copilot` -> `Fix This` from the context menu.
- To get help within Copilot Chat, open the chat panel, type in `/help`, and then hit `<ENTER>`. A good summary of available Copilot Chat commands will appear.
- `@<SOME SCOPE>` handles your prompts within a scope; there are three scopes: `@workspace`, `@vscode`, and `@terminal`
  - @workspace is for creating new projects and managing existing projects.
  - @vscode is for editor configuration and managing extensions.
  - @terminal is for running commands in the terminal.

### Explore Non-Deterministic Code Suggestions

Deterministic and non-deterministic are terms used to describe the behavior of systems, including computer programs.

A deterministic program is one where, for a given input, the program's output and state will always be the same, no matter how many times you run it. This predictability can make deterministic programs easier to test and debug.

On the other hand, a non-deterministic program is one where the program's output or state can change even with the same input. The varying output could be due to random number generation, system time, concurrent execution, or external system interactions.

As for GitHub Copilot, OpenAI Codex powers Copilot; OpenAI Codex is a model trained on various public sources, including code repositories. GitHub Copilot provides non-deterministic suggestions. While GitHub designed Copilot to provide relevant code suggestions based on the context of your code, the exact suggestions can vary even in similar contexts. The variation is due to the underlying machine learning model, which has a degree of randomness in its outputs.

- [C++ Code Suggestions](./02_copilot-suggestions/01_cpp-suggestions.md)

## Module 3: Visual Studio Code Copilot Scopes

Visual Studio Code Copilot has three scopes: `@workspace`, `@vscode`, and `@terminal`. Each scope has its own set of commands and prompts. The following notes will help you understand how to use each scope. In this module, we will explore the `@vscode` and `@terminal` scopes. We explore the `@workspace` scope in module 5.

- [Editor Configuration Chat Prompts Demo](./03_copilot-scopes/01_copilot-vscode-scope.md)
- [Terminal Chat Prompts Demo](./03_copilot-scopes/02_copilot-terminal-scope.md)
- [Terminal Chat Prompts for Containerization Demo](./03_copilot-scopes/03_copilot-terminal-scope-containerization.md)

## Module 4: Prompts and Suggestions

This module goes deeper into how prompts and suggestions work in GitHub Copilot. Also, we will explore additional aspects of prompt engineering.

- What data does Copilot send in the prompts to the GitHub Copilot servers?
  - Copilot sends the code and comments that you are editing and the relevant surrounding context. The surrounding context includes the current file and other files opened in the editor.
- What data is retained by GitHub? 
  - GitHub deletes prompt data after making the suggestion, and GitHub does not store the suggestion after making it. GitHub stores user interaction data for 24 months. GitHub uses this data to improve the Copilot service, not the training AI model. GitHub trains the generative AI model with public source code, not code from private repositories.
- X-Shot Prompting
  - [C++](./04_x-shot-prompts/01_cpp-shot-prompting.md)
  - [Java](./04_x-shot-prompts/02_java-shot-prompting.md)
  - [Python](./04_x-shot-prompts/03_python-shot-prompting.md)

## Module 5: Copilot and Workspaces

The `@workspace` scope is for creating new projects and managing existing projects. The following demonstrations will help you understand how to use the `@workspace` scope. We explored the `@vscode` and `@terminal` scopes module 3. The `@workspace` scope is the primary scope for interacting with source code and Copilot Chat. Only the code in open editor windows is available to Copilot when working with existing code. Copilot does not have access to the file system except for creating a new project with the `@workspace /new` command. Copilot does not have access to your entire solution or other code repositories when making suggestions via Copilot.

- Workspace Copilot Chat
  - C++
    - [Workspace New Command](./05_workspace/01_cpp/01_cpp-workspace-new-prompt.md)
    - [Workspace Scoped Prompts](./05_workspace/01_cpp/02_cpp-workspace-prompts.md)
  - Java
    - [Workspace New Command](./05_workspace/02_java/01_java-workspace-new-prompt.md)
  - Python
    - [Workspace New Command](./05_workspace/03_python/01_python-workspace-new-prompt.md)

## Module 6: Improving Code with Copilot

We designed the following demonstrations to help you improve your code using GitHub Copilot. Within the module are two sections: Discuss Code and Fix Code. The Discuss Code section is for discussing code with Copilot and getting coding advice. The Fix Code section explores fixing code with Copilot. The fixes include static code errors and code patterns that lead to possible runtime errors.

- Discuss Code
  - C++
    - [Advice on C++ Getters/Setters](./06_improve-code/01_discuss-code/01_cpp/01_get-code-advice.md)
  - Java
    - [Java Equivalent of C# Like Properties](./06_improve-code/01_discuss-code/02_java/01_csharp-like-properties.md)
  - Python
    - [Improve Loop Efficiency](./06_improve-code/01_discuss-code/03_python/01_inefficient-loop.md)
- Fix Code
  - C++
    - [Convert Int to String](./06_improve-code/02_fix-code/01_cpp/01_convert-int-string.md)
    - [Memory Leaks](./06_improve-code/02_fix-code/01_cpp/02_memory-leaks.md)
    - [Dangling Pointers](./06_improve-code/02_fix-code/01_cpp/03_dangling-pointers.md)
    - [Buffer Overflows](./06_improve-code/02_fix-code/01_cpp/04_buffer-overflows.md)
    - [Undefined Behaviors](./06_improve-code/02_fix-code/01_cpp/05_undefined-behaviors.md)
    - [Resource Leaks](./06_improve-code/02_fix-code/01_cpp/06_resource-leaks.md)
    - [Improper Use of Pointers and References](./06_improve-code/02_fix-code/01_cpp/07_improper-use-pointers-and-references.md)
    - [Memory Allocation Failures](./06_improve-code/02_fix-code/01_cpp/08_memory-allocation-failures.md)
  - Java
    - [Incorrect String Concatenation](./06_improve-code/02_fix-code/02_java/01_incorrect-string-concat.md)
    - [Equality Confusion](./06_improve-code/02_fix-code/02_java/02_equality-confusion.md)
  - Python
    - [Convert Int to String](./06_improve-code/02_fix-code/03_python/01_convert-int-string.md)
    - [Dictionary Key Error](./06_improve-code/02_fix-code/03_python/02_key-error.md)
  - Java Spring Boot with IntelliJ IDEA (requires the creation of the [opening Spring Boot demo](#explore-github-copilot-demos))
    - [Sample Link](#)

## Module 7: Workshops

Following the training session, we encourage you to explore the workshops below to deepen your skills with GitHub Copilot. These language-specific workshops will help you understand how to use Copilot in a real-world scenario. 

- C++
  - [New C++ App](./07_workshops/01_cpp/01_new-app/README.md)
  - [C++ Unit Tests](./07_workshops/01_cpp/02_unit-tests/README.md)

## Conclusion

Thank you for attending the course! If you have any questions, please get in touch with [Eric Greene](https://www.linkedin.com/in/ericwgreene). We hope you enjoyed the course and learned a lot about GitHub Copilot.

We look forward to serving you in a future course!
