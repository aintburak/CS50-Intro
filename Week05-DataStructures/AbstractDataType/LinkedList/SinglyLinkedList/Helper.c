#include "Helper.h"

List createList() {
    List init = (struct ListRecord *) malloc(sizeof(struct ListRecord));
	if (init == NULL)
		printf("Out of memory!\n");
    else
	    MakeEmptyList(l);

	return init;
}



void makeEmptyList(List list) {
    l->head = (struct Node *) malloc(sizeof(struct Node));
        if (l->head == NULL)
            printf("Out of memory!\n");

    l->head->next = NULL;
    l->tail = l->head;
    l->size = 0;
}


int listSize(List list) {
    return (list->size);
}


int headOfList(List list) {


}


int tailOfList(List list) {

}


int isEmptyList(List list) {
    return (list->size == 0);
}


struct Node *findValueOnList(List list,int value) {

}



void displayList(List list) {


}



void insertAtGivenIndex(List list, int index, int value) {

}


void deleteFromList(List list, int value) {

}


int getValueAtGivenIndex(List list, int index) {

}

