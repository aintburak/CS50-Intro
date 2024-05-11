#include "Helper.c"

int main() {
    
    // Create an empty list
    List list = createList();
    append(list,1);
    append(list,2);
    append(list,3);
    append(list,4);
    printf("\n");
    displayList(list);
    printf("\n");
    printf("list->size : %d\n", list->size);

    insertAtGivenIndex(list,3,5);
        
    //int value = getValueAtGivenIndex(&list, 1);
    //printf("\n\nValue at index 1: %d\n\n", value);
    printf("\n\n");
    displayList(list);
    printf("\n\n");
    printf("list->size : %d\n", list->size);
    deleteFromList(list,3);

    printf("\n\n");
    displayList(list);
    printf("\n\n");

    return 0;
}