# 0x0C. C - More malloc, free

## Exit Function, calloc, and realloc

## Exit Function

The `exit()` function is a part of the C standard library and is used to terminate a program's execution. It takes an integer argument known as the exit status, which indicates the reason for termination. The exit status value 0 typically indicates successful termination, while non-zero values indicate an error or abnormal termination.

### Usage

```c
#include <stdlib.h>

int main() {
    // Program logic

    if (/* some condition */) {
        exit(0); // Successful termination
    } else {
        exit(1); // Error or abnormal termination
    }
}
```

## calloc Function

The `calloc()` function is used to dynamically allocate memory for an array of elements, initializing all the allocated bytes to zero. It is provided by the C standard library.

### Syntax

```c
#include <stdlib.h>

void *calloc(size_t num_elements, size_t element_size);
```

- `num_elements`: The number of elements to allocate memory for.
- `element_size`: The size of each element in bytes.

The return value is a pointer to the allocated memory block, or `NULL` if the allocation fails.

### Usage

```c
#include <stdlib.h>

int main() {
    int* numbers;

    numbers = (int*)calloc(5, sizeof(int)); // Allocates memory for 5 integers

    // Use the allocated memory

    free(numbers); // Release the allocated memory

    return 0;
}
```

## realloc Function

The `realloc()` function is used to dynamically resize the memory allocated by `malloc()`, `calloc()`, or a previous `realloc()` call. It is provided by the C standard library.

### Syntax

```c
#include <stdlib.h>

void *realloc(void *ptr, size_t new_size);
```

- `ptr`: A pointer to the previously allocated memory block.
- `new_size`: The new size in bytes.

The return value is a pointer to the resized memory block, which may or may not be the same as the original pointer `ptr`. If the reallocation fails, `NULL` is returned, and the original memory block is left unchanged.

### Usage

```c
#include <stdlib.h>

int main() {
    int* numbers;

    numbers = (int*)malloc(5 * sizeof(int)); // Allocates memory for 5 integers

    // Use the allocated memory

    numbers = (int*)realloc(numbers, 10 * sizeof(int)); // Resizes memory for 10 integers

    // Use the resized memory

    free(numbers); // Release the allocated memory

    return 0;
}
```
---

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17