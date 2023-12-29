# 0x0A. C - argc, argv

## How to Use Arguments Passed to Your Program

- Access the command-line arguments using `argc` and `argv` parameters of the `main` function.
- `argc` represents the number of command-line arguments passed.
- `argv` is an array of strings containing the actual arguments.
- Iterate through `argv` to access individual arguments.

## Two Prototypes of `main` Function

1. **`int main(void)`:** Used when the program does not require command-line arguments.
2. **`int main(int argc, char *argv[])`:** Used when the program needs to handle command-line arguments.

## Compiling Functions with Unused Variables or Parameters

- Use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters without warnings.
- `__attribute__((unused))` attribute:

  ```c
  void unused_variable_function(void)
  {
      int unused_variable __attribute__((unused));
      // Rest of the function code
  }
  ```

- `(void)` casting:

  ```c
  void unused_parameter_function(int unused_parameter)
  {
      (void)unused_parameter;
      // Rest of the function code
  }
  ```

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17