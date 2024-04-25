#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
int bubbleSort(int* array, int size);

int main() {

    // int* myRandomArray = {9,7,5,3,1,2,7,12}; in C, we , unfortunately, cannot init the array like this;
    // But instead: Correctly initializing an array with a specific set of values
    int myArray[] = {9, 7, 5, 3, 1, 2, 7, 12};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", size);
    displayArray(myArray,mySize);
    

    return 0;
}


int* bubbleSort(int* array,int size) {


}


void displayArray(int* array, int size) {
    
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}