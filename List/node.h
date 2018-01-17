#ifndef NODE_H
#define NODE_H
#include <stdlib.h>

typedef struct Node_T{
  void *data;
  struct Node_T *next;
}Node;
void append(Node** head_ref, void *new_data, size_t size);
void printList(Node *node, void (*fptr)(void *));
void printInt(void *n);
void printFloat(void *f);
void printChar(void *c);
int length(Node *head);
#endif
