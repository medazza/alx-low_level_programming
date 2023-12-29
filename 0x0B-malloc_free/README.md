---

# Dynamic Allocation and Memory Management in C

## Table of Contents

1. [Automatic Allocation and Dynamic Allocation](#automatic-allocation-and-dynamic-allocation)
2. [The `malloc()` and `free()` Functions](#the-malloc-and-free-functions)
3. [Using `malloc()` to Solve a Factorial Recursion Task](#using-malloc-to-solve-a-factorial-recursion-task)
4. [Using Valgrind to Check for Memory Leaks](#using-valgrind-to-check-for-memory-leaks)

## Automatic Allocation and Dynamic Allocation

In C, memory allocation can be categorized into two types: automatic allocation (stack allocation) and dynamic allocation (heap allocation).

- **Automatic Allocation (Stack Allocation):** Variables declared inside functions or blocks are automatically allocated on the stack. The memory for these variables is managed by the compiler, and they are automatically deallocated when the function or block scope ends.

- **Dynamic Allocation (Heap Allocation):** Dynamic allocation is performed using functions like `malloc()`, `calloc()`, or `realloc()`. It allows you to allocate memory from the heap during runtime. The allocated memory remains valid until explicitly deallocated using `free()`. Dynamic allocation is useful when you need to allocate memory of variable size or extend the lifetime of a variable beyond its enclosing scope.

## The `malloc()` and `free()` Functions

- **`malloc()`:** `malloc()` is a function in C used for dynamic memory allocation. It allows you to allocate memory from the heap by specifying the number of bytes needed. It returns a pointer to the allocated memory block if the allocation is successful, or `NULL` if it fails.

- **`free()`:** `free()` is a function used to deallocate memory that was previously allocated dynamically using `malloc()`, `calloc()`, or `realloc()`. It takes a pointer to the memory block to be freed and releases that memory back to the system.

## Using `malloc()` to Solve a Factorial Recursion Task

To solve a factorial recursion task using `malloc()`, you can dynamically allocate memory for the factorial values. Here's an example of how it can be done:

```c
#include <stdio.h>
#include <stdlib.h>

unsigned long long* factorial(int n) {
    unsigned long long* result = (unsigned long long*)malloc((n + 1) * sizeof(unsigned long long));

    if (result != NULL) {
        if (n == 0 || n == 1) {
            result[n] = 1;
        } else {
            unsigned long long* temp = factorial(n - 1);
            result[n] = n * temp[n - 1];
            free(temp);
        }
    }

    return result;
}

int main() {
    int num = 10;

    unsigned long long* fact = factorial(num);

    if (fact != NULL) {
        printf("Factorial of %d is: %llu\n", num, fact[num]);
        free(fact);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}
```

## Using Valgrind to Check for Memory Leaks

Valgrind is a tool used for debugging and profiling programs. It can also help detect memory leaks and errors. Here's a simplified explanation of how to use Valgrind to check for memory leaks:

1. Install Valgrind on your computer.
2. Compile your program with debugging

---

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17