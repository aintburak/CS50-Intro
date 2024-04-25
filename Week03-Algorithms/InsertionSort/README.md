# Insertion Sort

## What is Insertion Sort?

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It works by iteratively taking an element from the unsorted part of the array and inserting it into its correct position in the sorted part of the array. 

## Big-O (Omega) and Theta Notations

| Notation | Complexity  |
|----------|-------------|
| Big-O    | O(n^2)      |
| Omega    | Ω(n)        |
| Theta    | Θ(n^2)      |

## Pseudocode (Maybe python :D)

```plaintext
def insertion_sort(list):  
    for i in range(1, len(list)):  
        current = list[i]  

        j = i - 1  
        while j >= 0 and current < list[j]:  
            list[j+1] = list[j]  
            j -= 1  
        list[j+1] = current  

    return list
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
