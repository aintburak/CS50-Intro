#ifndef HELPER_H
#define HELPER_H

#include "Node.h"

List createList(void);
void makeEmptyList(List);
int listSize(List);
int headOfList(List);
int tailOfList(List);
int isEmptyList(List);
struct Node *findValueOnList(List,int);
void displayList(List);
void insertAtGivenIndex(List,int,int);
void deleteList(List, int);
int getValueAtGivenIndex(List,int);
void append(List, int);

#endif // end of HELPER_H