
# Merge Sort Explanation

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


## Merge Sort Illustrated Example

This document illustrates the merge sort process using tables for the array `[34, 7, 23, 32, 5, 62]`.

## Initial Array
`[34, 7, 23, 32, 5, 62]`

## Detailed Steps with Tables

### Step 1: Divide the Array
| Left Half       | Right Half      |
|-----------------|-----------------|
| 34, 7, 23       | 32, 5, 62       |

### Step 2: Recursively Sort Each Half

#### Sort Left Half `[34, 7, 23]`
| Split           | Sort Each       | Merge Result    |
|-----------------|-----------------|-----------------|
| 34              | 34              |                 |
| 7, 23           | 7, 23           |                 |
| 7               | 7               |                 |
| 23              | 23              | 7, 23           |
| Merge Above     |                 | 7, 23, 34       |

#### Sort Right Half `[32, 5, 62]`
| Split           | Sort Each       | Merge Result    |
|-----------------|-----------------|-----------------|
| 32              | 32              |                 |
| 5, 62           | 5, 62           |                 |
| 5               | 5               |                 |
| 62              | 62              | 5, 62           |
| Merge Above     |                 | 5, 32, 62       |

### Step 3: Merge Sorted Halves
| Left Sorted     | Right Sorted    | Final Sorted Array |
|-----------------|-----------------|--------------------|
| 7, 23, 34       | 5, 32, 62       | 5, 7, 23, 32, 34, 62 |


## Merge Sort Pseudocode

This is the pseudocode for the merge sort algorithm, which is a divide and conquer algorithm that sorts an array by dividing it into halves, sorting the halves, and then merging them back together.

### mergesort function

```
mergesort(array a)
  if (n == 1)
    return a

  arrayOne = a[0] ... a[n/2]
  arrayTwo = a[n/2+1] ... a[n]

  arrayOne = mergesort(arrayOne)
  arrayTwo = mergesort(arrayTwo)

  return merge(arrayOne, arrayTwo)
```


### merge function

```
merge(array a, array b)
  array c

  while (a and b have elements)
    if (a[0] > b[0])
      add b[0] to the end of c
      remove b[0] from b
    else
      add a[0] to the end of c
      remove a[0] from a

  // At this point either a or b is empty

  while (a has elements)
    add a[0] to the end of c
    remove a[0] from a

  while (b has elements)
    add b[0] to the end of c
    remove b[0] from b

  return c
```

## Conclusion
The array `[34, 7, 23, 32, 5, 62]` is sorted as `[5, 7, 23, 32, 34, 62]` using the merge sort algorithm.
