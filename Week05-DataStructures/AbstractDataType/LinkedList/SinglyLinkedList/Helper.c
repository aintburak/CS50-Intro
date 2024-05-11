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

/*
struct Node *findValueOnList(List list,int key) {
    Node* iterator; // In fact, double pointer
    iterator = list->head;
    while(iterator->next != NULL) {
        printf("--> %d ", iterator->value);
    }
}
*/


void displayList(List list) {
    Node iterator; // In fact, double pointer
    iterator = list->head->next;
    // meaning empty is also head == tail, but anyway why not 
    printf("head");
    while(iterator != NULL) { 
        printf("--> %d ", iterator->value);
        iterator = iterator->next;
    }
    printf("as tail");

}



void insertAtGivenIndex(List list, int index, int value) {
    if(index < 0 || index > list->size - 1 ){
        printf("[Error] : Please enter a valid index. Index value should between 0 and %d", list->size - 1);
    }

    int i,j;
    
    Node newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->value = value;
    newnode->next = NULL; // make null temporarily
    for(i = 0; i < list->size; i++) {
        if(index == 0) {
            // insert after head
            newnode->next = list->head->next;
            list->head->next = newnode;
            

        } else if(index == list->size - 1) {
            // at the tail
            list->tail->next = newnode;


        } else {
            // in middlewhere



        }
    }
    // increase the size
    list->size += 1;

    // free allocated memory
    free(newnode);

}


void deleteFromList(List list, int value) {

}


int getValueAtGivenIndex(List list, int index) {

    return 0;
}


void append(List list, int value) {

    // create new node :)
    Node newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->value = value;
    newnode->next = NULL;
    
    if(isEmptyList(list)) {
        // if list is empty
        list->head->next = newnode;
        list->tail = newnode;
    } else {   
        // if list is NOT empty meaning we have already items in the list
        list->tail->next = newnode;
        list->tail = newnode;
    }
    list->size += 1;
    free(newnode);
}


