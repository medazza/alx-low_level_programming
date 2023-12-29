# 0x17. C - Doubly linked lists

## What is a Doubly Linked List?

A doubly linked list is a type of data structure that consists of a sequence of elements, each containing a value and references (or pointers) to both the previous and the next elements in the sequence. Unlike a singly linked list, where each element points only to the next element, a doubly linked list allows for efficient traversal in both directions.

In a doubly linked list, each element, often called a "node," contains three main components:
- **Value/Data**: The actual data or value the node holds.
- **Previous Pointer**: A reference to the previous node in the list. For the first node, this pointer is typically null.
- **Next Pointer**: A reference to the next node in the list. For the last node, this pointer is also null.

## How to Use Doubly Linked Lists

Doubly linked lists can be utilized in various scenarios where efficient insertion, deletion, and traversal of elements in both directions are required. Here's a general outline of how to use a doubly linked list:

1. **Initialization**: Create an instance of the doubly linked list.

2. **Insertion**:
   - To insert a new element at the beginning of the list, create a new node with the desired value. Update its next pointer to point to the current first node, and update the previous pointer of the current first node to point to the new node.
   - To insert a new element at the end of the list, create a new node with the desired value. Update its previous pointer to point to the current last node, and update the next pointer of the current last node to point to the new node.
   - To insert a new element at a specific position, create a new node with the desired value. Update the next pointer of the previous node to point to the new node, and update the previous pointer of the next node to point to the new node.

3. **Deletion**:
   - To delete a node from the list, update the next pointer of the previous node to point to the next node, and update the previous pointer of the next node to point to the previous node.

4. **Traversal**:
   - To traverse the list from the beginning to the end, start from the first node and follow the next pointers until you reach the last node.
   - To traverse the list from the end to the beginning, start from the last node and follow the previous pointers until you reach the first node.

5. **Access and Modification**:
   - You can access and modify the values of nodes just like in a regular list.

Do Hard Things

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17