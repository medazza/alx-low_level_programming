# 0x0E. C - Structures, typedef

In the C programming language, structures and typedef are powerful features that allow you to define custom data types and organize related data elements into a single unit. This section provides an overview of structures and typedef, explaining what they are, when to use them, and how to use them effectively.

## Structures
A structure is a user-defined data type in C that allows you to combine different types of variables under a single name. It enables you to create a new data type that can hold multiple related data elements, such as integers, characters, arrays, or even other structures. The syntax for defining a structure is as follows:

```c
struct structure_name {
    data_type member1;
    data_type member2;
    // ...
};
```

To use a structure, you declare variables of that structure type, just like you would with any other data type. Here's an example:

```c
struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct person p1;
    strcpy(p1.name, "John");
    p1.age = 25;
    p1.height = 1.75;
    
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);
    
    return 0;
}
```

Structures are useful when you want to group related data together. They provide a convenient way to organize and manipulate complex data structures, such as linked lists, trees, or records.

## Typedef
The typedef keyword is used to create an alias or a new name for existing data types in C. It allows you to define a new name for a data type, making the code more readable and easier to understand. The general syntax for typedef is as follows:

```c
typedef existing_data_type new_name;
```

Here's an example that demonstrates the usage of typedef:

```c
typedef unsigned int uint;

int main() {
    uint x = 42;
    printf("Value: %u\n", x);
    
    return 0;
}
```

In this example, `typedef unsigned int uint;` creates a new name `uint` for the existing data type `unsigned int`. Now, you can use `uint` instead of `unsigned int` throughout your code, which can enhance code clarity and maintainability.

Typedef is often used in conjunction with structures to define custom types more conveniently. For instance:

```c
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    Person p1;
    strcpy(p1.name, "John");
    p1.age = 25;
    p1.height = 1.75;
    
    // ...
    
    return 0;
}
```

In this example, the `typedef` statement creates a new type `Person`, which is an alias for the structure `struct person`. Now, you can declare variables of type `Person` directly, without using the `struct` keyword.

## Conclusion
Structures and typedef are essential features in C that enable you to create custom data types and improve code organization. Structures allow you to group related data elements, while typedef allows you to define new names for existing types.

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17