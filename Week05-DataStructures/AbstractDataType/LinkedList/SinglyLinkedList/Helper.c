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
    Node iterator = (struct Node*) malloc(sizeof(struct Node)); // In fact, double pointer
    iterator = list->head;
    // meaning empty is also head == tail, but anyway why not 
    while(!isEmptyList(list) && iterator != list->tail && iterator->next != NULL) { 
        printf("--> %d ", iterator->value);
    }

}



void insertAtGivenIndex(List list, int index, int value) {

}


void deleteFromList(List list, int value) {

}


int getValueAtGivenIndex(List list, int index) {

    return 0;
}


void append(List list, int value) {

}


