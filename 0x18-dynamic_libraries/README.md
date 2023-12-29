# 0x18. C - Dynamic libraries

## What is a Dynamic Library?

A dynamic library, also known as a shared library, is a compiled collection of functions, routines, or code that can be loaded into a program's memory space at runtime. Unlike static libraries, which are linked with the program at compile time, dynamic libraries are linked at runtime. This provides several advantages, including reduced executable size and the ability to update libraries without recompiling the entire program.

### How Does it Work?

When a program using dynamic libraries is executed, the operating system's dynamic linker (usually `ld.so` or a similar component) loads the required dynamic libraries into the program's memory. This process is known as dynamic linking. The program's code then references the functions and symbols from the loaded dynamic libraries, enabling code reuse and modularity.

## Creating a Dynamic Library

To create a dynamic library, follow these general steps:

1. Write the library code and functions.
2. Compile the code into an object file (e.g., `gcc -c mylibrary.c -o mylibrary.o`).
3. Create a shared library from the object files (e.g., `gcc -shared mylibrary.o -o libmylibrary.so`).

## Using a Dynamic Library

To use a dynamic library in your program:

1. Include the library's header file(s) in your code.
2. Link your program with the dynamic library at compile time (e.g., `gcc myprogram.c -o myprogram -lmylibrary`).

## $LD_LIBRARY_PATH Environment Variable

The `$LD_LIBRARY_PATH` environment variable is used to specify additional directories where the dynamic linker should search for shared libraries at runtime. This can be useful when your dynamic libraries are not in the standard system library paths.

To use it:

```bash
export LD_LIBRARY_PATH=/path/to/my/library:$LD_LIBRARY_PATH
```

## Static vs. Shared Libraries

### Static Libraries

Static libraries are linked with the program at compile time. The library's code is copied into the final executable, making it larger. However, it ensures that all the required code is available within the executable itself.

### Shared Libraries

Shared libraries are linked at runtime, leading to smaller executable sizes. Multiple programs can share the same copy of the library in memory. Updates to shared libraries don't require recompiling the entire program.

## Basic Tools: `nm`, `ldd`, `ldconfig`

- `nm`: The `nm` command lists symbols from object files and libraries. It helps identify functions and symbols within a library.

- `ldd`: The `ldd` command lists the shared library dependencies of an executable. It's useful for diagnosing missing libraries or version mismatches.

- `ldconfig`: The `ldconfig` command updates the cache of shared library locations. It's crucial after installing or updating shared libraries.

---

Do Hard Things

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17