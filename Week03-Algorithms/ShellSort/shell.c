#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayArray(int* array, int size);
void swap(int* a, int* b);
void shellSort(int* array, int size);

int main() {
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    
    printf("Original array: ");
    displayArray(myArray, mySize);
    
    shellSort(myArray, mySize);
    
    printf("Sorted array: ");
    displayArray(myArray, mySize);
    
    return 0;
}

void shellSort(int* array, int size) {
    // Start with a large gap, then reduce the gap
    for (int gap = size/2; gap > 0; gap /= 2) {
        // Do a gapped insertion sort for this gap size.
        for (int i = gap; i < size; i += 1) {
            // Add a[i] to the elements that have been gap sorted
            // Save a[i] to temp and make a hole at position i
            int temp = array[i];
            // Shift earlier gap-sorted elements up until the correct location for a[i] is found
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            // Put temp (the original a[i]) in its correct location
            array[j] = temp;
        }
    }
}

void displayArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
