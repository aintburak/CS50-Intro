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

    //insertAtGivenIndex(list,2,5);
        
    int value = getValueAtGivenIndex(&list, 1);
    printf("Value at index 1: %d\n", value);

    printf("\n getValueAtGivenIndex(&list,1) -> %d\n\n", value);
    displayList(list);
    printf("\n");
    printf("list->size : %d\n", list->size);

    return 0;
}