#ifndef _LIST_H_
#define _LIST_H_

#include <stdbool.h>

typedef struct _node Node;
typedef struct _list List;

List* createList();
void destroyList(List **list);
void pushFront(List *list, int *data);
void* popFront(List *list);
void pushBack(List *list, int *value);
void* popBack(List *list);
Node* getN(List *list, int index);
void insert(List *list, int index, int *value);
void* deleteN(List *list, int index);
void printList(List *list);
int topList(List *list);
//void cyclicalSh(List *list);

#endif