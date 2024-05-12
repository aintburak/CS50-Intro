#include "Helper.h"

List createList() {
    List init = (struct ListRecord *) malloc(sizeof(struct ListRecord));
	if (init == NULL)
		printf("Out of memory!\n");
    else
	    makeEmptyList(init);

	return init;
}



void makeEmptyList(List list) {
    list->head = (struct Node *) malloc(sizeof(struct Node));
        if (list->head == NULL)
            printf("Out of memory!\n");

    list->head->next = NULL;
    list->head->previous = NULL;
    list->tail = list->head;
    list->size = 0;
}


int listSize(List list) {
    return (list->size);
}


int headOfList(List list) {
    return (list && list->head && list->head->next) ? list->head->next->value : -1;
}



int tailOfList(List list) {
    return ((list) && (list->tail) && (list->tail != list->head)) ? list->tail->value : -1;
}


int isEmptyList(List list) {
    return (list->size == 0);
}

struct Node *findValueOnList(List list,int value) {

}


void displayList(List list) {
    if (list == NULL || list->head == NULL) {
        printf("List or list head is NULL\n");
        return;
    }

    Node iterator = list->head->next; // Start from the first actual node (skip dummy head)

    printf("Head");
    while (iterator != NULL) {
        printf(" <--> %d", iterator->value);
        iterator = iterator->next;
    }
    printf(" -- as tail\n");
}

void displayListReversed(List list) {
    if(list == NULL || list->head == NULL) {
        printf("List or list head is NULL\n");
        return;
    }
    Node iterator = list->tail;
    printf("Tail as -- ");

    while(iterator != list->head) {
        printf(" %d <--> ", iterator->value);
        iterator = iterator->previous;
    }

    printf("Head");

}

// insert value at given index
void insertAtGivenIndex(List list, int index, int value) {
    if (index < 0 || index > list->size) {
        printf("[Error]: Please enter a valid index. Index value should be between 0 and %d\n", list->size);
        return; // Properly exit if index is invalid
    }

    int i;
    Node newnode = (Node) malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed to allocate memory for new node.\n");
        return;
    }
    newnode->value = value;
    newnode->next = NULL;
    newnode->previous = NULL;

    Node *current = &list->head->next;
    for (i = 0; i < index; i++) {
        current = &(*current)->next;
    }

    // Insert new node at the correct position
    newnode->next = *current;
    newnode->previous = (*current)->previous;
    *current = newnode;

    // Adjust the tail if needed
    if (index == list->size) {
        list->tail = newnode;
    }

    list->size += 1;
    
}


// Delete the first occurrence of a node with a specific value from the list
void deleteFromList(List list, int value) {
    if (list == NULL || list->head == NULL || list->head->next == NULL) {
        printf("List is empty or not initialized.\n");
        return;
    }

    Node prev = list->head;  // Dummy head to simplify edge cases
    Node current = list->head->next;

    while (current != NULL && current->value != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Value not found in list.\n");
        return;  // Value not found
    }

    // Update links

    /***** TO DO *****/
    prev->next = current->next;

    // If deleting the tail node, update the tail pointer
    if (current == list->tail) {
        list->tail = prev;
    }

    free(current);  // Free the node to be deleted
    list->size -= 1;

    if (list->size == 0) {  // Reset tail if list is empty
        list->tail = list->head;  // Dummy head acts as tail
    }
}

void deleteAllOccurrences(List list, int value) {
    
}


int getValueAtGivenIndex(List *list, int index) {
    if (index < 0 || index >= (*list)->size) {
        return -1; // Index out of bounds
    }

    Node current = (*list)->head->next; // Pointing to the first actual data node
    int i;
    for (i = 0; i < index; i++) {
        if (current == NULL) return -1; // Safety check if list is malformed
        
        current = current->next; // Move to the next node
    }
    return current ? current->value : -1; // Return the value if current is not NULL
}



// Append at the end of the list
void append(List list, int value) {
    Node newnode = (struct Node*) malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed to allocate memory for new node.\n");
        return;
    }
    newnode->value = value;
    newnode->next = NULL;
    newnode->previous = NULL;
    
    if (isEmptyList(list)) {
        newnode->previous = list->head;
        list->head->next = newnode; // Linking the first node after dummy 
    } else {
        newnode->previous = list->tail;
        list->tail->next = newnode; // Appending to the end of the list
    }
    list->tail = newnode; // Updating the tail pointer
    list->size += 1;
}


// Insert in front of the list
void insert(List list, int value) {

}



// Replace first occurence of the source with given target
void replace(List list, int source,int target) {

}


// Replace the all occurences of the source with given target
void replaceAll(List list, int source,int target) {

}


