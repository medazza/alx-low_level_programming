# 0x09. C - Static libraries

## What is a static library?
A static library, also known as an archive, is a collection of object files that are compiled and linked together into a single file. It contains pre-compiled code and data that can be used by other programs during the linking phase of the compilation process. When you create a static library, the object files are combined into a single file, which can then be linked with other programs to provide additional functionality.

### Here's a step-by-step explanation of how to create and use a static library:

1.**Compilation:** First, you need to compile the source code files into object files (.o files). This can be done using a compiler such as GCC or Clang. For example, to compile a C source file named example.c into an object file, you can use the following command: gcc -c example.c

2.**Archiving:** Once you have the object files, you can create a static library using the ar command. The ar command is typically available on Unix-like systems. Here's the basic syntax:ar rcs libexample.a example.o
In this command, libexample.a is the name of the static library you want to create, and example.o is the object file you want to include in the library. You can include multiple object files by specifying them one after another.

3.**Indexing:** After creating the static library, it's a good practice to run the ranlib command to create an index for the library. The index allows faster access to the symbols within the library. The ranlib command is optional on some systems, as newer versions of ar automatically generate the index. Here's an example:ranlib libexample.a

### Using the static library: 

To use the static library in another program, you need to include it during the linking phase. When compiling your program, you can specify the library using the -l flag, followed by the library name (without the lib prefix) and the path to the library file. For example, to link against the libexample.a library, you would use: gcc -o myprogrammyprogram.c `-L/path/to/library -lexample` 
In this command, `/path/to/library` is the directory where the library file is located. The -L flag tells the linker where to find the library, and the -l flag specifies the library to link against.

### Symbol inspection:

If you want to inspect the symbols contained within a static library, you can use the nm command. The nm command displays the symbol table of an object file or library. For example, to list the symbols in libexample.a, you can use: nm libexample.a

*This will show a list of symbols, including function names, variables, and other symbols defined in the library.*

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17