#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayArray(int* array, int size);
void swap(int* a, int* b);
int* copyArray(int* source, int* target, int startIndex, int endIndex);
int* mergeSort(int* array, int size);
int* merge(int* a, int sizeA, int* b, int sizeB);

int main() {
   
    int myArray[] = {2, 8, 5, 3, 9, 4};
    int* a = (int*)malloc(6 * sizeof(int));
    int mySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("The size of the array is: %d\n", mySize);
    displayArray(myArray,mySize);
    printf("\n");
    printf("%d",sizeof(myArray));
    //TODO

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

    // Copy remaining elements of a, if any
    while (i < sizeA) {
        result[k++] = a[i++];
    }

    // Copy remaining elements of b, if any
    while (j < sizeB) {
        result[k++] = b[j++];
    }

    return result;
}


int* mergeSort(int* array,int size) {
   
    // TODO

    if(size == 1)
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

// getArray takes source array, starting index, ending index
// it copies elements from source array to target array given border
int* copyArray(int* source, int* target, int startIndex, int endIndex) {
    int i,j;
    int length = startIndex - endIndex + 1;
    

    for(i = 0; i < length; i++) {
        target[i] = source[i];
    }

    return target;
}