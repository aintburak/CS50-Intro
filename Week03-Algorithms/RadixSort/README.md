# Radix Sort Explanation and Implementation

## What is Radix Sort?
Radix Sort is a non-comparative sorting algorithm that sorts integers by processing individual digits. Numbers are processed from the least significant digit to the most significant digit, using counting sort as a subroutine to sort the digits.

## How to Implement Radix Sort
To implement Radix Sort, the algorithm sorts data by each digit using a stable sort to maintain the relative order of entries with equal keys. It typically uses counting sort as the intermediate sorting mechanism.

## Detailed Example and Steps to Sort Using Radix Sort
Consider the array `A = [170, 45, 75, 90, 802, 24, 2, 66]`. Here's a detailed step-by-step sorting process using Radix Sort:

### Step-by-Step Example
1. **Sort by the least significant digit (units place)**:
   - 170, 90, 802, 2 (ends in 0)
   - 24, 45 (ends in 4 and 5 respectively)
   - 75, 66 (ends in 5 and 6 respectively)
   - After sorting: `[170, 90, 802, 2, 24, 45, 75, 66]`
2. **Sort by the next digit (tens place)**:
   - 802, 2 (tens digit absent or 0)
   - 24 (tens digit 2)
   - 45, 75, 66 (tens digit 4, 5, and 6 respectively)
   - 170, 90 (tens digit 7 and 9 respectively)
   - After sorting: `[802, 2, 24, 45, 75, 66, 170, 90]`
3. **Sort by the hundreds place** (or more significant digits until sorting is complete):
   - Sorted result: `[2, 24, 45, 66, 75, 90, 170, 802]`

## Pseudocode of Radix Sort
```
function radixSort(array)
    maxNum = find maximum number in array
    for each digit position (starting from least significant digit)
        apply counting sort to array on this digit
end function
```


```
RadixSort(array, d)
    // array is the input array
    // d is the number of digits in the largest number in the array

    for i from 1 to d
        // Apply a stable sort to sort array on digit i
        CountingSortOnDigit(array, i)

CountingSortOnDigit(array, digit)
    // Initialize count array for each digit (0-9)
    count[0..9] initialized to 0
    
    // Count occurrences of each digit in the given place value
    for each number in array
        digitValue = extractDigit(number, digit)
        count[digitValue] = count[digitValue] + 1

    // Change count so that it now contains actual position of this digit in output[]
    for i from 1 to 9
        count[i] += count[i - 1]

    // Build the output array
    for j from size of array down to 1
        digitValue = extractDigit(array[j], digit)
        output[count[digitValue] - 1] = array[j]
        count[digitValue] -= 1

    // Copy the output array to array, so that array now contains sorted numbers
    for i from 0 to size of array
        array[i] = output[i]

extractDigit(number, digit)
    // Returns the digit at the given place value
    return (number / 10^(digit - 1)) % 10

```

## Another Example with Detailed Iteration
Let's take the array `B = [34, 8, 530, 90, 88, 23, 9]`.

### Sorting Process:
1. **Units place**:
   - Groups formed: 530, 90 (0); 23, 34 (3, 4); 8, 88, 9 (8, 9)
   - After sorting: `[530, 90, 23, 34, 8, 88, 9]`
2. **Tens place**:
   - Groups formed: 8, 9 (0 tens); 23, 34 (2, 3 tens); 530, 90 (3, 9 tens); 88 (8 tens)
   - After sorting: `[8, 9, 23, 34, 530, 88, 90]`
3. **Hundreds place**:
   - Groups formed: 8, 9, 23, 34, 88, 90 (0 hundreds); 530 (5 hundreds)
   - After sorting: `[8, 9, 23, 34, 88, 90, 530]`

This method ensures that numbers are sorted based on each digit from least significant to most significant, resulting in a fully sorted array at the end of the process.
