# Counting Sort 

## What is Counting Sort?
Counting Sort is a non-comparative sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is then used to position each element in the sorted array. It is efficient if the range of input data is not significantly greater than the number of objects to be sorted.

## How to Implement Counting Sort
Counting Sort works by creating an auxiliary array that counts the occurrences of each element. The algorithm then calculates the starting index for each element in the sorted output array by accumulating the counts.

## Detailed Example and Steps to Sort Using Counting Sort
Consider the array `A = [4, 2, 2, 8, 3, 3, 1]`. Here's how to sort it using Counting Sort:

### Step-by-Step Example:
1. **Count each element's frequency**:
   - Count array after counting elements: `[1, 2, 2, 1, 0, 0, 0, 1]` (assuming range of elements is from 1 to 8)
2. **Calculate the starting indices for each element**:
   - Cumulative count array: `[1, 3, 5, 6, 6, 6, 6, 7]`
3. **Place each element in its correct position and build the sorted array**:
   - Sorted array: `[1, 2, 2, 3, 3, 4, 8]`

## Pseudocode of Counting Sort

```
function countingSort(array, maxValue)
    count = array of size (maxValue + 1) initialized to 0

    // Count each element
    for each element in array
        count[element]++

    // Build the output array
    index = 0
    for i from 0 to maxValue
        while count[i] > 0
            array[index++] = i
            count[i]--

end function
```

## Another Example with Detailed Iteration

Let's take the array `B = [5, 2, 9, 8, 2, 9, 2, 5]`.

### Sorting Process:
- Count each element's frequency:
  - Count array: `[0, 0, 3, 0, 0, 2, 0, 1, 1, 2]` (assuming range of elements is from 1 to 9)
- Calculate the starting indices for each element:
  - Cumulative count array: `[0, 0, 3, 3, 3, 5, 5, 6, 7, 9]`
- Place each element in its correct position:
  - Sorted array: `[2, 2, 2, 5, 5, 8, 9, 9]`

This method allows for efficient sorting when the range of potential items in the input is known in advance and not too large compared to the number of items.
