# 0x12. C - Singly linked lists

## When and why using linked lists vs arrays
- Linked lists are useful when the size of the data is unknown or may change dynamically. Unlike arrays, linked lists can grow or shrink as needed.
- Linked lists are efficient for insertion and deletion operations, especially in the middle of the list, as they require only updating pointers.
- Linked lists allow for efficient memory allocation since they do not require contiguous memory.

On the other hand, arrays have certain advantages over linked lists:
- Arrays provide faster access to elements since they are stored contiguously in memory, allowing for direct indexing.
- Arrays are more suitable when the size of the data is known and fixed, as they have a fixed size and require less memory overhead than linked lists.

## How to build and use linked lists
To build and use linked lists in C, follow these steps:

1. Define a structure to represent the nodes of the linked list. For example:
```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;
```

2. Create functions to perform various operations on the linked list, such as creating a new node, inserting elements, deleting elements, and printing the list.

3. Start with an empty list by initializing a pointer to the first node as NULL:
```c
Node* head = NULL;
```

4. Perform operations on the linked list by calling the respective functions. For example, to insert a new node at the beginning of the list:
```c
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
```

5. Remember to handle memory allocation and deallocation properly to avoid memory leaks.

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17