# Bubble Sort Algorithm

This repository contains the pseudocode for the Bubble Sort algorithm. Bubble Sort is a simple sorting algorithm that works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. The process is repeated until no swaps are needed, indicating that the list is sorted.

## Pseudocode

```plaintext
function bubbleSort(array)
    n = length(array)
    repeat (loop)
        swapped = false
        for i = 1 to n-1
            if array[i] > array[i + 1] then
                swap array[i] with array[i + 1]
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end function
```

## Explanation

1. **Initialize the length of the array.**
2. **Use a loop to traverse through the array elements.**
3. **Use a nested loop to compare each element with the next one.**
4. **Swap elements if they are in the wrong order.**
5. **After each full pass through the list, reduce the number of elements to consider by one, as the last element of each pass is already in its correct position.**
6. **Repeat the process until no swaps are needed, indicating the array is sorted.**

Bubble Sort is not very efficient on large datasets as its average and worst-case performance is \(O(n^2)\), where \(n\) is the number of items being sorted.



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

## Conclusion

Understanding pointers is crucial for effective C programming. This example illustrates how pointers can be used for dynamic memory management and manipulating data through memory addresses.
