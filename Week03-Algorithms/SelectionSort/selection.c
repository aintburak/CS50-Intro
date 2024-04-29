#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
void swap(int* a, int* b);
void selectionSort(int* array, int size);

int main() {
   
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    displayArray(myArray,mySize);
    
    //TODO

    return 0;
}


void selectionSort(int* array,int size) {
   
    // TODO
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
