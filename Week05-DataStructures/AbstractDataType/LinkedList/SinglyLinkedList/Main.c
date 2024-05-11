#include "Helper.c"

int main() {
    
    // Create an empty list
    List list = createList();
    append(list,1);
    append(list,2);
    append(list,3);
    printf("\n");
    displayList(list);
    printf("\n");
    printf("list->size : %d\n", list->size);

    insertAtGivenIndex(list,1,5);
    printf("\n");
    displayList(list);
    printf("\n");
    printf("list->size : %d\n", list->size);
    
    return 0;
}