#include <stdio.h>
#include <stdlib.h>

#ifndef __LIST_H_
#define __LIST_H_

typedef struct node
{
  int value;
  struct node *next;
} Node;

typedef struct
{
  Node *first;
  Node *last;
  size_t length;
} List;

Node *create_node(int);

List *create_list(void);

void add_item(List *, int);

int search_item(List *, int);

#endif // !__LIST_H_