#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
void swap(int* a, int* b);
int* bubbleSort(int* array, int size);

int main() {

    // int* myRandomArray = {9,7,5,3,1,2,7,12}; in C, we , unfortunately, cannot init the array like this;
    // But instead: Correctly initializing an array with a specific set of values
    int myArray[] = {9, 7, 5, 3, 1, 2, 7, 12};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    displayArray(myArray,mySize);
    
    int* a;
    *a = 12;
    int* b;
    *b = 3;

    printf("\na: %d  \tb: %d\t --> &a: %i \t &b: %i\t --> a: %i \t b: %d ", *a, *b,&a,&b,a,b);
    swap(a,b);
    printf("\na: %d  \tb: %d\t --> &a: %i \t &b: %i\t --> a: %i \t b: %d ", *a, *b,&a,&b,a,b);

    return 0;
}


int* bubbleSort(int* array,int n) {
    int i = 0, j = 0;

    for(i = 1; i <= n; i++) {

        for(j = 0; j <= n - 1; j++) {

            if(array[j] > array[j+1]) {
                swap(&array[j],&array[j+1]);
            }


        }

    }

    return array;

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