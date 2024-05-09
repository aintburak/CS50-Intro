#ifndef HELPER_H
#define HELPER_H

#include "Node.h"

List CreateList(void);
void MakeEmptyList(List);
int ListSize(List);
int HeadOfList(List);
int TailOfList(List);
int IsEmptyList(List);
struct Node *findCode(List,int);
void DisplayList(List);
void InsertList(List,int,int);
void DeleteList(List, int);
void givenpos(List,int);


#endif // end of HELPER_H