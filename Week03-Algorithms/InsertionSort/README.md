# Insertion Sort

## What is Insertion Sort?

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It works by iteratively taking an element from the unsorted part of the array and inserting it into its correct position in the sorted part of the array. 

## Big-O (Omega) and Theta Notations

| Notation | Complexity  |
|----------|-------------|
| Big-O    | O(n^2)      |
| Omega    | Ω(n)        |
| Theta    | Θ(n^2)      |

## Pseudocode

```plaintext
for i : 1 to len(Arr) - 1
    i = j
    while j > 0 and Arr[j-1] > Arr[j]
        swap(Arr[j-1],Arr[j])
        j--
````

## How to Implement Insertion Sort Step by Step

1. **Start**: Begin with the second element of the array since the first element is already considered sorted.
2. **Key Selection**: Select the next unsorted element and designate it as the "key".
3. **Comparison and Insertion**: Compare the key with the elements before it in the sorted array. Move elements greater than the key to the right.
4. **Insertion**: Insert the key into its correct position in the sorted array.
5. **Repeat**: Repeat steps 2-4 until all elements are sorted.

### Example

Let's sort the array `[5, 2, 4, 6, 1, 3]` using insertion sort:

1. Start with `key = 2`.
2. Compare `2` with `5`, move `5` to the right.
3. Insert `2` at the correct position.
4. Repeat for `4`, `6`, `1`, and `3`.

The sorted array is `[1, 2, 3, 4, 5, 6]`.

### How to Implement Insertion Sort Step by Step

1. **Start**: Begin with the second element of the array since the first element is already considered sorted.
2. **Key Selection**: Select the next unsorted element and designate it as the "key".
3. **Comparison and Insertion**: Compare the key with the elements before it in the sorted array. Move elements greater than the key to the right.
4. **Insertion**: Insert the key into its correct position in the sorted array.
5. **Repeat**: Repeat steps 2-4 until all elements are sorted.

#### Example: Sorting `[5, 2, 4, 6, 1, 3]` using Insertion Sort

1. **Initial Array**: `[5, 2, 4, 6, 1, 3]`

2. **Pass 1**:  
   - Start with key = 2.  
   - Compare 2 with 5, move 5 to the right.  
   - Insert 2 at the correct position.  
   - Array: `[2, 5, 4, 6, 1, 3]`

3. **Pass 2**:  
   - Start with key = 4.  
   - Compare 4 with 5, no need to move.  
   - Array remains `[2, 5, 4, 6, 1, 3]`

4. **Pass 3**:  
   - Start with key = 6.  
   - Compare 6 with 5, no need to move.  
   - Array remains `[2, 5, 4, 6, 1, 3]`

5. **Pass 4**:  
   - Start with key = 1.  
   - Compare 1 with 6, 4, 5, 2. Move them to the right.  
   - Insert 1 at the correct position.  
   - Array: `[1, 2, 4, 5, 6, 3]`

6. **Pass 5**:  
   - Start with key = 3.  
   - Compare 3 with 6, 5, 4, 2, 1. Move them to the right.  
   - Insert 3 at the correct position.  
   - Array: `[1, 2, 3, 4, 5, 6]`

#### Sorted Array: `[1, 2, 3, 4, 5, 6]`

The array `[5, 2, 4, 6, 1, 3]` is sorted in ascending order using the Insertion Sort algorithm.
