#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
void swap(int* a, int* b);
void insertionSort(int* array, int size);

int main() {
   
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    displayArray(myArray,mySize);
    
    insertionSort(myArray,mySize);

    printf("\n------\n");
    displayArray(myArray,mySize);
    return 0;
}


void insertionSort(int* array,int size) {
    int i = 0, j;
    printf("\niteration %d) ", i);
    displayArray(array,size);
    for(i = 1; i < size; i++) {
        // first item is automatically sorted hence we dont have any left item, so it starts w/ 1
        j = i;
        while((j > 0) && (array[j] < array[j-1])) {
            swap(&array[j],&array[j-1]);
            j = j - 1;
        }
        printf("\niteration %d) ", i);
        displayArray(array,size);
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