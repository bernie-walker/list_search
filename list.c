#include "list.h"

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}