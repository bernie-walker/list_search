#include "search.h"

List *initialize_search_list(void)
{
  List *user_list = create_list();
  int value;

  while (1)
  {
    printf("Please enter a number:\n");
    scanf("%d", &value);

    if (value == -99)
    {
      break;
    }

    add_item(user_list, value);
  }

  return user_list;
}

void print_search_result(int item, int index)
{
  if (index == -1)
  {
    printf("%d is not present in the list\n", item);
    return;
  }

  printf("%d is present present in the list at position %d\n\n", item, index);
}

void search_list(List *list)
{
  int search_value;

  while (1)
  {
    printf("What number would you like to search for?\n");
    scanf("%d", &search_value);

    if (search_value == -99)
    {
      break;
    }

    int item_index = search_item(list, search_value);
    print_search_result(search_value, item_index);
  }
}