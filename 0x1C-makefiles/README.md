# 0x1C. C - Makefiles

## Table of Contents

1. [What are make and Makefiles?](#what-are-make-and-makefiles)
2. [When, why, and how to use Makefiles](#when-why-and-how-to-use-makefiles)
3. [What are rules and how to set and use them](#what-are-rules-and-how-to-set-and-use-them)
4. [What are explicit and implicit rules](#what-are-explicit-and-implicit-rules)
5. [Common and useful rules](#common-and-useful-rules)
6. [What are variables and how to set and use them](#what-are-variables-and-how-to-set-and-use-them)

---

## 1. What are make and Makefiles?

Make is a build automation tool commonly used in software development to manage the build process of a project. It automates the compilation, linking, and other tasks necessary to build software. Makefiles are text files that contain instructions for the Make tool to execute a series of commands to build and manage a project. Makefiles define the dependencies and rules for building a project and make it easier to maintain and update the project's build process.

## 2. When, why, and how to use Makefiles

### When to use Makefiles:
- Makefiles are beneficial for projects with multiple source files, where keeping track of dependencies and build steps can be complex.
- They are useful when you want to automate the compilation and linking of code.
- Makefiles are especially handy in projects involving C/C++ development, but they can be applied to other languages and tasks as well.

### Why use Makefiles:
- Makefiles simplify the build process, reducing the likelihood of errors and inconsistencies.
- They help in managing project dependencies and ensure that only the necessary parts are rebuilt when source files change.
- Makefiles enhance collaboration by providing a consistent and automated build process for team members.

### How to use Makefiles:
1. Create a Makefile with instructions and rules for building your project.
2. Define dependencies between source files and targets.
3. Run `make` in the project directory to initiate the build process as defined in the Makefile.

## 3. What are rules and how to set and use them

In a Makefile, rules define how to build targets from dependencies. A rule typically consists of three parts:

- **Target:** The file or task you want to build.
- **Dependencies:** The files or tasks required to build the target.
- **Commands:** The actions to execute when building the target.

Example:
```make
target: dependency1 dependency2
    command1
    command2
```

To set and use rules in a Makefile, you should:
1. Define targets, dependencies, and commands.
2. Ensure that the commands are indented with a tab character.
3. Run `make` to execute the rules and build the targets.

## 4. What are explicit and implicit rules

- **Explicit rules:** These are rules defined explicitly in the Makefile, specifying how to build a target from its dependencies. Explicit rules are user-defined and customized for the project's needs.

- **Implicit rules:** Also known as built-in rules, these are predefined rules provided by Make for common build tasks. Implicit rules allow you to build targets without explicitly specifying rules for them. Make understands common conventions for compiling code and linking, making it easier to use implicit rules for standard tasks.

## 5. Common and useful rules

Common and useful rules in Makefiles can include:

- **Compile C/C++ code:** Rules to compile C/C++ source files into object files.
- **Linking:** Rules for linking object files to create executables.
- **Cleaning:** A rule to remove generated files and intermediate build artifacts.
- **Phony targets:** Targets that don't represent actual files but trigger specific actions, like "clean" or "all."

You can define custom rules as needed for your project's specific requirements.

## 6. What are variables and how to set and use them

In Makefiles, variables are used to store values that can be reused throughout the file. Variables make it easier to manage configuration options, paths, and other constants in your build process. To set and use variables:

- Define a variable with a name and value, like `CC = gcc` (defining a compiler).
- Reference variables using the `$(VARIABLE_NAME)` syntax, e.g., `$(CC)`.

Variables provide flexibility and allow you to make changes to your build process more easily by modifying the values of variables rather than altering numerous commands throughout the Makefile.

---

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17