# Heap Sort

## What is Heap Sort?
Heap Sort is a comparison-based sorting technique based on a Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for the remaining elements.

## How to Implement Heap Sort
Heap Sort uses the binary heap data structure to sort elements. The process can be divided into two main phases:
1. **Build a Max Heap from the unordered array.**
2. **Repeatedly extract the maximum element from the heap and replace it with the last item of the heap followed by reducing the size of the heap by one. Finally, heapify the root of the tree.**
Repeat until the heap is empty.

## Detailed Example and Steps to Sort Using Heap Sort
Consider the array `A = [12, 11, 13, 5, 6, 7]`. Here's how to sort it using Heap Sort:

### Step-by-Step Example:
1. **Build a Max Heap**:
   - Convert the array into a Max Heap so that the largest value is at the root.
   - The array will be modified to `[13, 11, 12, 5, 6, 7]` after building the Max Heap.
2. **Sort the Array**:
   - Swap the first element of the array with the last element. Decrease the size of the heap by one and then heapify the root of the heap.
   - Continue this process for the size of the heap.

Here's what each step would look like:
- Initial array: `[12, 11, 13, 5, 6, 7]`
- After building max heap: `[13, 11, 12, 5, 6, 7]`
- Extract 13 and heapify: `[12, 11, 7, 5, 6]`
- Extract 12 and heapify: `[11, 6, 7, 5]`
- Extract 11 and heapify: `[7, 6, 5]`
- Continue this process until the array is sorted.

## Pseudocode of Heap Sort

```
function heapSort(array)
    buildMaxHeap(array)
    for i from array.length downto 1
        swap(array[0], array[i])
        heapSize = i - 1
        maxHeapify(array, 0, heapSize)
end function

function buildMaxHeap(array)
    for i from floor(array.length / 2) downto 0
        maxHeapify(array, i, array.length)
end function

function maxHeapify(array, i, heapSize)
    left = 2*i + 1
    right = 2*i + 2
    largest = i

    if left < heapSize and array[left] > array[largest]
        largest = left
    if right < heapSize and array[right] > array[largest]
        largest = right
    if largest != i
        swap(array[i], array[largest])
        maxHeapify(array, largest, heapSize)
end function
```

## Another Example with Detailed Iteration

Let's take the array `B = [4, 10, 3, 5, 1]`.

### Sorting Process:
- Build a Max Heap: Convert the array to `[10, 5, 3, 4, 1]`.
- Sort the array:
  - Extract 10 and heapify: `[5, 4, 3, 1]`
  - Extract 5 and heapify: `[4, 1, 3]`
  - Extract 4 and heapify: `[3, 1]`
  - Continue this process until the array is sorted: `[1, 3, 4, 5, 10]`

This method sorts the numbers by constructing a heap tree and then extracting the root (which is the maximum element) repeatedly until the heap is empty, resulting in a sorted array.
