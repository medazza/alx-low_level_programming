# 0x14. C - Bit Manipulation

## How to Manipulate Bits and Use Bitwise Operators in C

Bit manipulation and the use of bitwise operators in C provide a powerful way to work with individual bits within binary representations of data. By leveraging bitwise operations, you can efficiently perform logical, arithmetic, and other operations on binary values. This guide will walk you through the basics of manipulating bits and utilizing bitwise operators in C.

### Bitwise Operators in C

C provides several bitwise operators that allow you to perform operations at the bit level. Here are the commonly used bitwise operators:

- **Bitwise AND (`&`):** Performs a logical AND operation between corresponding bits of two operands. The result is 1 if both bits are 1, otherwise 0.

- **Bitwise OR (`|`):** Performs a logical OR operation between corresponding bits of two operands. The result is 1 if at least one of the bits is 1, otherwise 0.

- **Bitwise XOR (`^`):** Performs a logical XOR (exclusive OR) operation between corresponding bits of two operands. The result is 1 if the bits are different, otherwise 0.

- **Bitwise NOT (`~`):** Flips the bits of the operand, converting 0s to 1s and vice versa.

- **Left Shift (`<<`):** Shifts the bits of the left operand to the left by a specified number of positions. This operation is equivalent to multiplying the operand by 2 raised to the power of the shift count.

- **Right Shift (`>>`):** Shifts the bits of the left operand to the right by a specified number of positions. This operation is equivalent to dividing the operand by 2 raised to the power of the shift count.

### Manipulating Bits in C

Here are some common techniques for manipulating bits in C:

1. **Setting a Bit:** To set a specific bit to 1, use the bitwise OR operator (`|`) with a mask that has only the desired bit set to 1.

2. **Clearing a Bit:** To clear a specific bit to 0, use the bitwise AND operator (`&`) with a mask that has all bits set to 1 except the desired bit.

3. **Toggling a Bit:** To toggle a specific bit (i.e., change it from 0 to 1 or from 1 to 0), use the bitwise XOR operator (`^`) with a mask that has only the desired bit set to 1.

4. **Checking if a Bit is Set:** You can check if a specific bit is set (i.e., equal to 1) using the bitwise AND operator (`&`) with a mask that has only the desired bit set to 1.

### Practical Applications

Bit manipulation and bitwise operations find applications in various programming scenarios, such as:

- Optimizing code by utilizing compact representations of data structures.
- Implementing flags or bit flags to represent multiple boolean variables efficiently.
- Performing low-level operations with hardware registers, such as setting specific bits to control peripheral devices.
---

## Author
* **AZZA MOHAMED** [AZZA](https://github.com/medazza)- ALX-Africa SE Student cohort 17