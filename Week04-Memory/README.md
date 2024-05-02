# Lecture 4 - CS50x 2024

# CS50 Week 4: Memory

## Overview
Week 4 of CS50 delves into the concepts of memory management, pointers, and data structures. This week's content is fundamental for understanding how software interacts with hardware to manage data efficiently.

## Learning Objectives
- Understand how memory is allocated and managed in C.
- Learn to use pointers for more complex data manipulation.
- Explore data structures like arrays, linked lists, and more.
- Introduce memory allocation, memory leaks, and debugging tools.

## Lecture
Key topics covered in this week's lecture include:
- **Memory Basics**: Understanding bytes, memory addresses.
- **Pointers**: Concept, usage, and common pitfalls.
- **Dynamic Memory Allocation**: `malloc`, `free`, and memory management.
- **Data Structures**: Implementation and usage of arrays, linked lists, trees, and hash tables.
- **Debugging**: Tools like `valgrind` to detect memory leaks and errors.

## Shorts
Supplementary short videos provide detailed explanations on specific concepts like pointers, memory allocation, and data structures.

## Problem Set
Problem Set 4 often challenges students to:
1. **Implement dynamic data structures**: Such as linked lists or trees.
2. **Manage memory**: Correctly allocate and free memory.
3. **Utilize pointers**: Efficiently use pointers to manipulate data.

### Problem Set Tasks:
- **Memory Lab**: Practical exercises involving memory allocation and usage.
- **Data Structure Implementation**: Implement and manipulate one or more data structures.

## Resources
- **Week 4 Lecture and Shorts**: [CS50 Video Resources Week 4](https://cs50.harvard.edu/x/2023/weeks/4/)
- **Study Materials**: [Week 4 Study Guide](https://study.cs50.net/)

## Tips for Success
- Practice pointer arithmetic and manipulation in small, simple programs before applying them in larger tasks.
- Regularly run `valgrind` or similar tools to check your code for memory leaks.
- Use debugger frequently to understand how your programs handle memory in real-time.


Understanding memory is another important topic for logical thinking, impacting both the efficiency and correctness of software. The skills learned this week are foundational for all future programming and software development tasks.


---


<!-- # `$TODO` -->










<!-- Hex -->

---


# Understanding Hexadecimal Values and Their Relationship with Memory

Hexadecimal values are a base-16 numbering system commonly used in programming to represent memory addresses and binary data in a compact and human-readable format.

## What is a Hexadecimal Number?

Hexadecimal (or hex) is a base-16 number system. It uses sixteen distinct symbols: 0-9 to represent values zero to nine, and A-F to represent values ten to fifteen.

## Why Use Hexadecimal in Programming?

Hexadecimal is particularly useful in programming because it provides a more human-friendly way of expressing binary data. Each hexadecimal digit represents four binary digits (bits), which means it simplifies binary numbers by reducing them to a quarter of their length, making them easier to read and understand.

## Relationship with Memory

Memory addresses in computers are commonly expressed in hexadecimal. This is because hexadecimal can directly map to the binary addresses used by the computer's memory hardware, making it easier for programmers to work with these addresses.

## Example: Hexadecimal and Memory Addresses

Consider a simple C program that uses pointers to illustrate how hexadecimal is used to represent memory addresses:

```c
#include <stdio.h>

int main() {
    int n = 50;
    int *p = &n;

    printf("Address of n: %p\n", (void *)&n);
    return 0;
}
```

In this example, `%p` in `printf` is used to display the address of `n`. This address will appear in hexadecimal format, demonstrating how memory addresses are represented in a programming context.

## Key Takeaways

- **Hexadecimal is compact**: Represents binary data in a more compact form, reducing the length of binary sequences to a quarter.
- **Memory address representation**: Easier to map binary representations of memory addresses.
- **Common use in programming**: Extensively used for debugging and low-level programming, particularly when dealing with pointers and memory management.







<!-- Pointers -->


---


# Detailed Explanation of Pointers in C

Pointers are a fundamental aspect of C programming, providing powerful capabilities for direct memory manipulation.

## Introduction to Pointers

A pointer is essentially an address. This address refers to a location in your computer's memory where a value is stored. Therefore, a pointer in C is a variable that contains the address of another variable.

## Example of Pointer Initialization

Consider the following simple example to initialize and use pointers:

```c
int n = 50;
int *p = &n;
```

Here, `n` is an integer initialized to 50, and `p` is a pointer to an integer. The pointer `p` holds the address of `n`, as indicated by the address-of operator `&`.

## Basic Pointer Usage

To demonstrate how pointers can be used in a program, examine the following code snippet:

```c
#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}
```

This program prints the memory address stored in `p`, which is the address of `n`. Notice that `%p` is used in the `printf` function to format the address output.

## Using the Dereference Operator `*`

The dereference operator (`*`) is used to access or modify the value at the address a pointer is pointing to. Here's how you can use it:

```c
#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}
```

In this example, `*p` accesses the value at the address stored in `p` (which is `n`), and `printf` displays 50, the value of `n`.

## Visualizing Code Behavior

To help visualize what the code is doing:

1. `int n = 50;` declares an integer `n` and initializes it to 50.
2. `int *p = &n;` declares a pointer `p` that stores the address of `n`.
3. `printf("%p\n", p);` prints the memory address stored in `p`.
4. `printf("%i\n", *p);` prints the value at the address stored in `p`, which is the value of `n`.

This breakdown helps understand how pointers store and manipulate memory addresses in C programming.


```c
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
} 
```

---



<!-- File IO -->











<!-- Static Memory Alloc -->












<!-- Dynamic Memory Alloc -->












<!-- Dynamic Memory Alloc -->










<!-- Strings -->


---



# Understanding Strings in C

Strings in C are arrays of characters terminated by a null character (`\0`). They are used to store text and are fundamental to handling data in C programs.

## What are Strings?

In C, a string is essentially a contiguous sequence of characters terminated by a null character (`\0`). This null character indicates the end of the string, allowing functions to determine where the string stops in memory.

## How Strings Work

Strings are stored in contiguous memory locations. In C, you can manipulate strings using pointers, as a string name (like an array name) gives the address of the first element.

### Example with cs50 Library

Using the cs50 library, you might encounter a simplified way to handle strings using the `string` type, which is essentially a typedef for `char*`. Here is how you can manipulate and understand strings with cs50:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%p\n", s);        // Prints the address of the first character in the string
    printf("%p\n", &s[0]);    // Address of the first character
    printf("%p\n", &s[1]);    // Address of the second character
    printf("%p\n", &s[2]);    // Address of the third character
    printf("%p\n", &s[3]);    // Address of the null terminator '\0'
}
```

This code demonstrates how each character in the string (including the null terminator) is stored at contiguous memory addresses.

### Raw C Code Example

In raw C, without any library, strings are handled directly through character arrays or pointers:

```c
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);  // Prints the string starting from the address pointed to by 's'
}
```

## How We Know a String Ends

In C, all strings end with a null character `\0`. This is how functions like `printf` know where to stop reading the string. The null character acts as a sentinel to mark the end of the sequence of characters that comprise the string.



---
 







<!-- Strcmp -->










<!-- Strcpy -->






<!-- malloc and Valgrind -->










<!-- Garbage Values -->









<!-- Swap* -->






























<!-- # `$TODO` -->

---

![CS50 Week 3 - Sorting and Searching](https://cs50.harvard.edu/x/2024/notes/3/cs50Week3Slide010.png)

*Image source: CS50's Introduction to Computer Science, Week 3 lecture slide.*

---


## Attribution and Licensing
The content and resources provided in this README.md are derived from the CS50 course on Introduction to Computer Science offered by Harvard University. All information, including linked images and conceptual explanations, are used for educational purposes with proper credits to [CS50](https://cs50.harvard.edu/x/2024/). This work is provided under the terms that it is a supplement to the original CS50 course material and not a standalone resource.

## References
- **CS50 Course Website**: [CS50 Website](https://cs50.harvard.edu/x/2024/)
- **Week 3 Lecture Video**: [Sorting and Searching Lecture](https://video.cs50.net/2024/fall/lectures/3)
- **Image Reference**: The image used above is taken from CS50's official course materials and is intended for educational use in understanding the sorting and searching algorithms discussed during Week 3.