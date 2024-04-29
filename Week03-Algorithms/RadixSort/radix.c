#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayArray(int* array, int size);
void swap(int* a, int* b);
void radixSort(int* array, int size);
void countSort(int* array, int size, int exp);
int getMax(int* array, int size);

int main() {
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    
    printf("Original array: ");
    displayArray(myArray, mySize);
    
    radixSort(myArray, mySize);
    
    printf("Sorted array: ");
    displayArray(myArray, mySize);
    
    return 0;
}

void radixSort(int* array, int size) {
    int m = getMax(array, size);
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countSort(array, size, exp);
    }
}

void countSort(int* array, int size, int exp) {
    int output[size]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < size; i++) {
        count[(array[i] / exp) % 10]++;
    }

    // Change count[i] so that count[i] now contains the position of
    // this digit in output[]
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (i = size - 1; i >= 0; i--) {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }

    // Copy the output array to array[], so that array now
    // contains sorted numbers according to current digit
    for (i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

int getMax(int* array, int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void displayArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
