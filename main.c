#include <stdio.h>
#include "list.h"

int main(void)
{
  List *my_list = create_list();
  add_item(my_list, 1);
  add_item(my_list, 3);
  add_item(my_list, 5);
  printf("when item is present %d\n", search_item(my_list, 3));
  printf("when item is not present %d\n", search_item(my_list, 4));
  return 0;
}