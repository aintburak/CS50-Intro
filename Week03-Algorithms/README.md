# Lecture 3 - CS50x 2024


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

## Conclusion

Bubble sort's simplicity makes it a useful algorithm for small datasets or educational purposes where teaching the concept of sorting is necessary. However, for practical applications involving large or even moderately-sized datasets, more efficient algorithms are typically preferred due to their superior time complexity profiles.

