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
    printf("It's working now !!");
    return 0;
}