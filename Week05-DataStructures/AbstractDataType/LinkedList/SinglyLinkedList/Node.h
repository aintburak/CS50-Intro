#ifndef NODE_H
#define NODE_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    /* data */
    int value;
    struct Node* next;

};
typedef struct Node* Node;


struct ListRecord {
    struct Node *head;
    struct Node *tail;
    int size;
};
typedef struct ListRecord* List;

#endif // end SINGLYNODE_H