#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
void swap(int* a, int* b);
int* merge(int* a, int sizeA, int* b, int sizeB);
int* mergeSort(int* array, int size);


int main() {
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    displayArray(myArray, mySize);
    printf("\n");

    int* sortedArray = mergeSort(myArray, mySize);
    displayArray(sortedArray, mySize);
    free(sortedArray);

    return 0;
}


/*
 *  If you're merging two arrays and you want to handle them based on their content, it's crucial to know the sizes of these arrays. 
 *  You can adjust the code to check each element and react accordingly (e.g., merging sorted lists).
 */
int* merge(int* a, int sizeA, int* b, int sizeB) {
    int* result = malloc((sizeA + sizeB) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < sizeA) {
        result[k++] = a[i++];
    }

    while (j < sizeB) {
        result[k++] = b[j++];
    }

    return result;
}


int* mergeSort(int* array, int size) {
    if (size < 2) {
        return array;  // This is not correct in recursive implementation. We need to copy the array here.
    }

    int mid = size / 2;
    int* left = malloc(mid * sizeof(int));
    int* right = malloc((size - mid) * sizeof(int));

    for (int i = 0; i < mid; i++) {
        left[i] = array[i];
    }
    for (int i = 0; i < size - mid; i++) {
        right[i] = array[mid + i];
    }

    int* sortedLeft = mergeSort(left, mid);
    int* sortedRight = mergeSort(right, size - mid);
    int* sortedArray = merge(sortedLeft, mid, sortedRight, size - mid);

    free(left);
    free(right);

    return sortedArray;
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
