
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
