# Selection Sort Algorithm

## Introduction
Selection Sort is a simple and intuitive comparison-based sorting algorithm. It is not efficient on large lists and has average and worst-case complexities of O(n^2), where n is the number of items being sorted.

## How it Works
The algorithm segments the list into two parts: sorted and unsorted. It continuously removes the smallest element of the unsorted segment and appends it to the sorted segment.

## Implementation Steps
1. For each element in the array (with index `i` from 0 to n-1):
    - Assume the element at `i` is the minimum.
    - Check each subsequent element (with index `j` from i+1 to n-1) to find the true minimum.
    - If the element at `j` is smaller than the current minimum, set `j` as the new minimum.
    - Swap the minimum element found with the element at `i`.
2. Repeat the process until the array is sorted.

## Pseudocode
```
procedure selectionSort( A : array of items )
   n := length(A)
   for i := 0 to n - 1 do
      minIndex := i
      for j := i+1 to n - 1 do
         if A[j] < A[minIndex] then
            minIndex := j
         end if
      end for
      if minIndex != i then
         swap A[i] and A[minIndex]
      end if
   end for
end procedure
```

## Example: Sorting the Array [2, 8, 5, 3, 9, 4, 1]
- Initial array: [2, 8, 5, 3, 9, 4, 1]
- Steps:
  - Find minimum (1), swap with first element: [1, 8, 5, 3, 9, 4, 2]
  - Find minimum (2), swap with second element: [1, 2, 5, 3, 9, 4, 8]
  - Find minimum (3), swap with third element: [1, 2, 3, 5, 9, 4, 8]
  - Find minimum (4), swap with fourth element: [1, 2, 3, 4, 9, 5, 8]
  - Find minimum (5), swap with fifth element: [1, 2, 3, 4, 5, 9, 8]
  - Find minimum (8), swap with sixth element: [1, 2, 3, 4, 5, 8, 9]
  - Array is sorted: [1, 2, 3, 4, 5, 8, 9]

Sorting complete. The array is now in ascending order.
