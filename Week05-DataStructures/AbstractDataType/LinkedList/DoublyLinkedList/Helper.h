#ifndef HELPER_H
#define HELPER_H

#include "Node.h"

void makeEmptyList(List);
List createList(void);
int listSize(List);
int headOfList(List);
int tailOfList(List);
int isEmptyList(List);
struct Node *findValueOnList(List,int);
void displayList(List);
void displayListReversed(List);
void insertAtGivenIndex(List,int,int);
void deleteFromList(List, int);
void deleteAllOccurrences(List, int);
int getValueAtGivenIndex(List*,int);
void append(List, int);
void insert(List, int);

#endif // end of HELPER_H