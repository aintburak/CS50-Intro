#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayArray(int* array, int size);
void swap(int* a, int* b);
void quickSort(int* array, int left, int right);
int partition(int* array, int left, int right);

int main() {
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    
    printf("Original array: ");
    displayArray(myArray, mySize);
    
    quickSort(myArray, 0, mySize - 1);
    
    printf("Sorted array: ");
    displayArray(myArray, mySize);
    
    return 0;
}

void quickSort(int* array, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(array, left, right);
        quickSort(array, left, pivotIndex - 1);  // Sort left part
        quickSort(array, pivotIndex + 1, right); // Sort right part
    }
}

int partition(int* array, int left, int right) {
    int pivot = array[right];
    int i = (left - 1); // Index of smaller element
    
    for (int j = left; j < right; j++) {
        // If current element is smaller than or equal to pivot
        if (array[j] <= pivot) {
            i++; // increment index of smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[right]);
    return (i + 1);
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
