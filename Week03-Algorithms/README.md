# Lecture 3 - CS50x 2024


## Overview
Week 3 of CS50 introduces students to essential computer science algorithms, focusing on sorting and searching techniques. This week includes lectures, shorts, and a problem set designed to enhance your understanding of how algorithms work and how they are implemented in C.

## Learning Objectives
- Understand and implement searching algorithms like linear search and binary search.
- Learn sorting algorithms such as bubble sort, selection sort, insertion sort, and more advanced algorithms like merge sort.
- Analyze and compare the time complexities of different algorithms.

## Lecture
The lecture covers the following key topics:
- **Searching Algorithms**: How to efficiently find data within a dataset.
- **Sorting Algorithms**: Techniques to reorder data in a specific sequence.
- **Algorithm Efficiency**: Time complexity and space complexity analysis.

## Shorts
Shorts provide additional explanations on specific topics covered in the lecture, including practical demonstrations of the algorithms discussed.

## Problem Set
The problem set for Week 3 challenges you to:
1. **Implement one or more sorting algorithms.**
2. **Implement one or more searching algorithms.**
3. **Optimize your implementations for speed and efficiency.**

### Problem Set Tasks:
- **Sort**: Implement a program that sorts a list of numbers using a sorting algorithm.
- **Search**: Implement a program that searches for a number in a list of numbers using a searching algorithm.

## Resources
- CS50 Study Material: [link to CS50 study materials for Week 3]
- Supplementary Videos: [link to supplementary videos relevant to Week 3]
- CS50 Reference: [link to CS50 reference tools and resources]

## Tips for Success
- Review the lecture and shorts multiple times to fully grasp the concepts.
- Start the problem set early and test your code thoroughly to handle all edge cases.
- Utilize CS50’s communities, like discussion forums or groups, to discuss and understand complex topics.


---
# C Programming: Structs and Typedef

This document covers the basics of using structs in C programming, including the use of `typedef` for easier struct management.

## Introduction to Structs

Structs in C are used to group related data items of different types under a single name, which is useful for creating complex data structures such as representing entities like a student or a car.

## Defining a Struct

Here is a basic example of how to define a struct in C:

```c
struct Point {
    int x;
    int y;
};
```

## Operations on Structs

You can perform several operations with structs, including:

1. **Declaration and Initialization** - Declaring and optionally initializing structs.
2. **Accessing Members** - Using the dot (`.`) operator to access individual members of the struct.
3. **Assignment** - Assigning one struct to another of the same type.
4. **Passing to Functions** - Passing structs to functions by value or by reference (using pointers).

## Using `typedef` with Structs

The `typedef` keyword can be used with structs to simplify the declaration of variables:

```c
typedef struct {
    char name[100];
    int age;
    float gpa;
} Student;
```

## Example Code

Below is a complete C program example demonstrating the declaration, initialization, and usage of a `Student` struct with `typedef`:

```c
#include <stdio.h>
#include <string.h>

// Define the struct using typedef
typedef struct {
    char name[100];
    int age;
    float gpa;
} Student;

// Function to print student information
void printStudent(Student s) {
    printf("Student: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

int main() {
    // Declare and initialize a struct
    Student student1 = {"Alice", 20, 3.5};

    // Accessing members and modifying them
    strcpy(student1.name, "Alice Johnson"); // Modifying the name
    student1.age = 21; // Updating the age

    // Print the student's info using a function
    printStudent(student1);

    return 0;
}
```
---

# Bubble Sort Overview

Bubble Sort is a simple comparison-based sorting algorithm. Its main features include:

1. **Simplicity**: It is straightforward to understand and implement.
2. **Inefficiency in Large Lists**: While easy, it is generally slow and impractical for large datasets compared to more efficient algorithms like quicksort or mergesort.
3. **Stability**: It maintains the relative order of records with equal keys (i.e., it is stable).
4. **In-Place Sorting**: It requires only a constant amount \(O(1)\) of additional memory space, making it an in-place sorting algorithm.
5. **Adaptive Possibilities**: Although not adaptive by default, bubble sort can be modified to stop early if no swaps are made on a new pass, indicating that the list is already sorted.

## How Bubble Sort Works

Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which means the list is sorted. Each iteration of the algorithm reduces the size of the sorting problem by one, as the largest element bubbles up to its correct position at the end of the list.

## Example of Bubble Sort

Let's take the example array: `[29, 10, 14, 37, 13]`.

### Step-by-Step Sorting Process

1. **First Pass**:
   - Compare 29 and 10, swap because 29 > 10. Array becomes `[10, 29, 14, 37, 13]`.
   - Compare 29 and 14, swap because 29 > 14. Array becomes `[10, 14, 29, 37, 13]`.
   - Compare 29 and 37, no swap because 29 < 37.
   - Compare 37 and 13, swap because 37 > 13. Array becomes `[10, 14, 29, 13, 37]`.

2. **Second Pass**:
   - Compare 10 and 14, no swap because 10 < 14.
   - Compare 14 and 29, no swap because 14 < 29.
   - Compare 29 and 13, swap because 29 > 13. Array becomes `[10, 14, 13, 29, 37]`.

3. **Third Pass**:
   - Compare 10 and 14, no swap needed.
   - Compare 14 and 13, swap because 14 > 13. Array becomes `[10, 13, 14, 29, 37]`.

4. **Fourth Pass**:
   - Compare 10 and 13, swap because 10 > 13. Array becomes `[10, 13, 14, 29, 37]`.

After the fourth pass, the list is sorted, and no more swaps are needed. The largest elements have successively "bubbled up" to their correct positions at the end of the list during each pass, which is characteristic of bubble sort.

--- 


# Understanding Pointers in C Programming

This README explains the basic concepts of pointers in C programming, particularly focusing on the differences between `a`, `*a`, and `&a` through a detailed example.

## Pointer Basics

Pointers are variables that store memory addresses of other variables. They are one of the fundamental aspects of C programming, allowing for efficient and dynamic memory management.

### Key Concepts

- **Pointer Declaration**:
  - `int* a;` - Declares `a` as a pointer to an integer. `a` will hold the address of an integer.

- **Dereferencing**:
  - `*a = 12;` - Sets the integer at the memory location pointed to by `a` to 12. This is valid only if `a` is initialized to point to a valid memory address.

- **Address of Operator**:
  - `&a` - Returns the memory address of the pointer variable itself, not the location it points to.

## Detailed Example

Here's a detailed example with memory allocation and a function to swap two pointers:

```c
#include <stdio.h>
#include <stdlib.h>

void swap(int** x, int** y) {
    int* temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int* a = malloc(sizeof(int));  // Allocate memory for an integer and assign the address to 'a'
    *a = 12;                       // Set the value at the memory 'a' points to, to 12
    int* b = malloc(sizeof(int));  // Allocate memory for another integer and assign the address to 'b'
    *b = 3;                        // Set the value at the memory 'b' points to, to 3

    // Print values and addresses before swap
    printf("\na: %d  \tb: %d\t --> &a: %p \t &b: %p\t --> a: %p \t b: %p ",
           *a, *b, (void *)&a, (void *)&b, (void *)a, (void *)b);

    swap(&a, &b); // Swap the pointers 'a' and 'b'

    // Print values and addresses after swap
    printf("\na: %d  \tb: %d\t --> &a: %p \t &b: %p\t --> a: %p \t b: %p ",
           *a, *b, (void *)&a, (void *)&b, (void *)a, (void *)b);

    free(a); // Free the allocated memory
    free(b); // Free the allocated memory
    return 0;
}
```

### Explanation

- `*a` and `*b` - The values at the addresses stored in `a` and `b`.
- `&a` and `&b` - The addresses of the pointer variables themselves.
- `a` and `b` - The addresses where the integers are stored.

The `swap` function in this example exchanges the pointers `a` and `b`, changing which integers the pointers reference. The actual addresses where `a` and `b` themselves are stored do not change.

---

# CS50 Course References

## Official Course Materials
- **CS50 Syllabus**: [CS50 Syllabus](https://cs50.harvard.edu/x/2023/syllabus/)
- **Course Lectures**: [CS50 Lectures](https://cs50.harvard.edu/x/2023/weeks/)
- **Problem Sets**: [CS50 Problem Sets](https://cs50.harvard.edu/x/2023/psets/)
- **Shorts**: [CS50 Shorts](https://cs50.harvard.edu/x/2023/shorts/)

## Study Resources
- **CS50 Study**: [CS50 Study Resource](https://study.cs50.net/)
- **CS50 Sandbox**: [CS50 Sandbox](https://sandbox.cs50.io/)
- **CS50 IDE**: [CS50 Cloud9 IDE](https://ide.cs50.io/)

## Supplementary Videos
- **CS50 on YouTube**: [CS50 YouTube Channel](https://www.youtube.com/channel/UCcabW7890RKJzL968QWEykA)

## Community and Support
- **CS50 Reddit**: [CS50 on Reddit](https://www.reddit.com/r/cs50/)
- **CS50 Discord**: [CS50 Discord Server](https://discord.gg/cs50)
- **CS50 on EdX**: [CS50 on EdX](https://www.edx.org/course/cs50s-introduction-to-computer-science)

## Reference Tools
- **CS50 Reference**: [CS50 Reference](https://reference.cs50.net/)
- **Style Guide**: [CS50 Style Guide](https://cs50.readthedocs.io/style/c/)

## Additional Learning Tools
- **CS50 Labs**: [CS50 Labs](https://cs50.harvard.edu/x/2023/labs/)
- **CS50 FAQs**: [CS50 FAQs](https://cs50.harvard.edu/x/2023/faqs/)

## Instructor Materials
- **Lecture Notes**: Available through the [CS50 Video Descriptions](https://cs50.harvard.edu/x/2023/weeks/)
- **Instructor Insights**: Insights and tips from CS50 instructors.

## Assessment
- **CS50's Test Tool**: [Check50](https://cs50.readthedocs.io/check50/)
- **Submit50**: [Submit50 Guide](https://cs50.readthedocs.io/submit50/)

## Contact and Help
- **CS50 Office Hours**: Schedule and link available on the course website.

## Licensing and Use
- **CS50 License**: Information on the use and sharing of CS50 materials.