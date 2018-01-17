/*
Linked List Functions
@author: bradosev02@gmail.com
Generic Linked List
inspired by: https://www.geeksforgeeks.org/generic-linked-list-in-c-2/
*/
/*Standard Libraries */
#include <stdlib.h>
#include <stdio.h>
/* User Defined Libraries */
#include "node.h"
/*
function: Append
description: Adds new element to linked list.
*/
void append(Node **head_ref, void *new_data, size_t size){
  Node* new_node = malloc(sizeof(Node));
  new_node->data = malloc(size);
  new_node->next = (*head_ref);
  int i;
  for (i=0; i< size; i++){
    *(char *) (new_node->data + i) = *(char *) (new_data + i);
  }//end
  (*head_ref) = new_node;
}//end append
/*
function: printList
description: Prints given List as Int, Float, or Char.
*/
void printList(Node *node, void (*fptr)(void *)){
  while(node != NULL){
    (*fptr)(node->data);
    node = node->next;
  }//end
}//end
/*
function: printInt
description: function parameter for printList
*/
void printInt(void *n){
  printf("%d\n",*(int *) n);
}//end
/*
function: printFloat
description: function parameter for printList
*/
void printFloat(void *f){
  printf("%f\n",*(float *) f);
}//end
/*
function: printChar
description: function parameter for printList
*/
void printChar(void *c){
  printf("%c\n",*(char *) c);
}//end

/*
function: length
description: Finds length of linked-list.
returns int.
*/
int length(Node *head){
  int count = 0;
  while (head != NULL){
    count++;
    head = head->next;
  }//end
  return count;
}//end
