# Merge Sort

Merge sort is a divide-and-conquer algorithm that splits the array into halves, sorts each half, and then merges the sorted halves.

## How Merge Sort Works

1. **Divide**: The array is divided into two halves until each sub-array contains a single element or no elements.
2. **Conquer**: Each half is recursively sorted.
3. **Combine**: The sorted halves are merged into a fully sorted array.

## Detailed Step-by-Step Example

### Initial Array
- `[34, 7, 23, 32, 5, 62]`

### Step 1: Divide
Split the array into two halves:
- Left half: `[34, 7, 23]`
- Right half: `[32, 5, 62]`

### Step 2: Recursively Sort Each Half
- Sort the left half `[34, 7, 23]`:
  - Split into `[34]` and `[7, 23]`
  - `[7, 23]` splits into `[7]` and `[23]` (both are already sorted)
  - Merge `[7]` and `[23]` into `[7, 23]`
  - Merge `[34]` with `[7, 23]` into `[7, 23, 34]`

- Sort the right half `[32, 5, 62]`:
  - Split into `[32]` and `[5, 62]`
  - `[5, 62]` splits into `[5]` and `[62]` (both are already sorted)
  - Merge `[5]` and `[62]` into `[5, 62]`
  - Merge `[32]` with `[5, 62]` into `[5, 32, 62]`

### Step 3: Merge Sorted Halves
- Merge `[7, 23, 34]` with `[5, 32, 62]`:
  - Compare and merge elements one by one:
    - `[5, 7, 23, 32, 34, 62]`

### Final Sorted Array
- `[5, 7, 23, 32, 34, 62]`
