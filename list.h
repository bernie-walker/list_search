#include <stdio.h>
#include <stdlib.h>

#ifndef __LIST_H_
#define __LIST_H_

typedef struct node
{
  int value;
  struct node *next;
} Node;

Node *create_node(int);
#endif // !__LIST_H_