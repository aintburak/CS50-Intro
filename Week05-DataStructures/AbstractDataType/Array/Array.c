#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 // Maximum size of the array

typedef struct {
    int arr[MAX_SIZE];
    int size;
} Array;

// Function to initialize an empty array
void initializeArray(Array *array) {
    array->size = 0;
}

// Function to insert an element at a specific index
bool insert(Array *array, int index, int value) {
    if (index < 0 || index > array->size || array->size == MAX_SIZE)
        return false;

    // Shift elements to the right to make space for the new element
    for (int i = array->size; i > index; i--) {
        array->arr[i] = array->arr[i - 1];
    }

    array->arr[index] = value;
    array->size++;
    return true;
}

// Function to delete an element at a specific index
bool deleteAtIndex(Array *array, int index) {
    if (index < 0 || index >= array->size)
        return false;

    // Shift elements to the left to fill the gap created by deletion
    for (int i = index; i < array->size - 1; i++) {
        array->arr[i] = array->arr[i + 1];
    }

    array->size--;
    return true;
}

// Function to append an element to the end of the array
bool append(Array *array, int value) {
    return insert(array, array->size, value);
}

// Function to find the value at a specific index
int findValueAtIndex(Array *array, int index) {
    if (index < 0 || index >= array->size)
        return -1; // Invalid index, return a default value

    return array->arr[index];
}

// Function to find the index of a given value
int findIndexByValue(Array *array, int value) {
    for (int i = 0; i < array->size; i++) {
        if (array->arr[i] == value)
            return i;
    }

    return -1; // Value not found
}

// Function to delete an element by its value
bool deleteByValue(Array *array, int value) {
    int index = findIndexByValue(array, value);
    if (index == -1)
        return false; // Value not found

    return deleteAtIndex(array, index);
}

// Function to iterate through the array
void iterateArray(Array *array) {
    for (int i = 0; i < array->size; i++) {
        printf("%d ", array->arr[i]);
    }
    printf("\n");
}

int main() {
    Array array;
    initializeArray(&array);

    // Example usage
    append(&array, 10);
    append(&array, 20);
    append(&array, 30);

    printf("Array elements: ");
    iterateArray(&array);

    printf("Index of value 20: %d\n", findIndexByValue(&array, 20));

    deleteAtIndex(&array, 1);
    printf("Array elements after deletion: ");
    iterateArray(&array);

    return 0;
}
