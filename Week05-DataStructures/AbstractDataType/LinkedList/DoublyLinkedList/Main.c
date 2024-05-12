#include "Helper.c"

int main() {
    
    // Create an empty list
    List list = createList();

    append(list,1);
    append(list,2);
    append(list,3);
    append(list,4);
    
    printf("\n---\nDisplay List:\n");
    displayList(list);
    printf("\n\n---\n\n");

    insertAtGivenIndex(list,1,7);
    insert(list,8);
    insert(list,9);
    append(list,4);
    insert(list,4);

    //deleteAllOccurrences(list,4);

    replaceAll(list,4,3);
  
    printf("\n---\nDisplay List:\n");
    displayList(list);
    printf("\n\n---\n\n");

    
    
    return 0;
}