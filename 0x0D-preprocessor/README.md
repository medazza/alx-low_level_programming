## 0x0D. C - Preprocessor

### Macros and Their Usage

In C programming, macros are preprocessor directives that allow you to define reusable code snippets. They are created using the `#define` directive and are replaced with their respective values during the preprocessing phase of compilation. Macros can be used to define constants, perform simple computations, or create code shortcuts.

General syntax for defining a macro:

```c
#define MACRO_NAME value
```

To use a macro, you simply write its name in your code, and the preprocessor replaces it with the specified value or code snippet. For example:

```c
#define PI 3.14159

int radius = 5;
float area = PI * radius * radius;
```

In the above example, `PI` is a macro that gets replaced with the value `3.14159`. The resulting code after preprocessing would be:

```c
int radius = 5;
float area = 3.14159 * radius * radius;
```

### Common Predefined Macros

C compilers often provide a set of predefined macros that can be useful for conditional compilation and platform-specific code. Here are some of the most common ones:

- `__FILE__`: Represents the current file name as a string.
- `__LINE__`: Represents the current line number as an integer.
- `__DATE__`: Represents the current date as a string in the format "MMM DD YYYY".
- `__TIME__`: Represents the current time as a string in the format "HH:MM:SS".

These macros can be used to obtain information about the source file, the line number, and other useful details during compilation.

### Header File Include Guards

Header files in C often contain declarations and definitions that are needed by multiple source files. To avoid errors caused by multiple inclusions of the same header file, you can use include guards or header guards. These guards ensure that the contents of the header file are only included once in a particular translation unit.

To create an include guard, you typically follow this format:

```c
#ifndef ALX_H
#define ALX_H

// Contents of the header file

#endif /* ALX_H */
```

Here's a breakdown of the steps:

1. The `#ifndef` directive checks if the macro `ALX_H` is not defined.
2. If it is not defined, the `#define` directive defines the macro `ALX_H`.
3. The contents of the header file follow.
4. Finally, the `#endif` directive closes the conditional block.

When the header file is included for the first time, the macro `ALX_H` is not defined, so it gets defined, and the contents of the header file are included. If the same header file is included again in the same translation unit, the `#ifndef` check will fail because `ALX_H` is already defined, and the contents of the header file will be skipped.

Using include guards ensures that the declarations and definitions in the header file are only processed once, preventing multiple definitions and potential compilation errors.

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17