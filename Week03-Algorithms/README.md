# Lecture 3 - CS50x 2024



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

