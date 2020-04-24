#include "list.h"

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

List *create_list(void)
{
  List *new_list = malloc(sizeof(List));
  new_list->first = NULL;
  new_list->last = NULL;
  new_list->length = 0;
  return new_list;
}

void add_item(List *list, int value)
{
  Node *new_node = create_node(value);

  if (list->length == 0)
  {
    list->first = new_node;
  }
  else
  {
    list->last->next = new_node;
  }

  list->last = new_node;
  ++list->length;
}