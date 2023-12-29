# 0x15. C - File I/O

This readme provides a brief overview of file input/output (I/O) in C programming. It covers the key concepts, functions, and system calls related to file I/O operations.

### Overview
File I/O in C involves creating, opening, closing, reading, and writing files. It enables programs to interact with files stored on disk or other storage media. C provides standard library functions and system calls for performing file I/O operations.

### Key Concepts
- **File Pointers:** File operations in C are performed using file pointers (`FILE*`). They keep track of the current position within a file and are used to read from or write to files.

- **Opening a File:** Files are opened using the `fopen()` function. It takes the file name and mode as parameters. The mode can be "r" for reading, "w" for writing, or "a" for appending.

- **Closing a File:** After finishing with a file, it should be closed using the `fclose()` function. This ensures any pending writes are saved, and resources associated with the file are released.

- **Reading from a File:** Functions like `fgetc()`, `fgets()`, and `fscanf()` are used to read data from files. They return the read data or specific values like `EOF` to indicate the end of the file.

- **Writing to a File:** Functions like `fputc()`, `fputs()`, and `fprintf()` are used to write data to files. They write characters, strings, or formatted data to the file.

- **Error Handling:** It is essential to check for errors during file I/O operations. Functions return `NULL` or specific values to indicate errors, and appropriate error handling should be implemented.

- **File Descriptors:** File descriptors are integers representing open files in Unix-like systems. The standard file descriptors are STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO.

- **System Calls:** System calls are requests made by programs to the operating system kernel for privileged operations. Examples include `open()`, `close()`, `read()`, and `write()`.

### Using System Calls
To perform file I/O using system calls:
- `open()` is used to open a file, specifying the file name and mode.
- `close()` is used to close an open file.
- `read()` is used to read data from a file into a buffer.
- `write()` is used to write data from a buffer to a file.

Flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR` are used with `open()` to specify the file's mode. File permissions can be set when creating a file using the `open()` system call.

### Conclusion
File I/O in C enables reading from and writing to files. Understanding the file pointer operations, functions, system calls, and file descriptors is essential for effective file I/O programming in C.

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17