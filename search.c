#include <stdio.h>
#include "list.h"

int get_user_in(char[]);

int get_user_in(char message[])
{
  int input;
  printf("%s", message);
  scanf("%d", &input);
  return input;
}

List *initialize_search_list(void);

List *initialize_search_list(void)
{
  List *user_list = create_list();
  int value = get_user_in("Please enter a number:\n");

  while (value != -99)
  {
    add_item(user_list, value);
    value = get_user_in("Please enter a number:\n");
  }

  return user_list;
}

void print_search_result(int, int);

void print_search_result(int item, int index)
{
  if (index == -1)
  {
    printf("%d is not present in the list\n", item);
    return;
  }

  printf("%d is present present in the list at position %d\n", item, index);
}

void search_list(List *);

void search_list(List *list)
{
  int search_value = get_user_in("\nWhat number would you like to search for?\n");

  while (search_value != -99)
  {
    int item_index = find_item(list, search_value);
    print_search_result(search_value, item_index);
    search_value = get_user_in("\nWhat number would you like to search for?\n");
  }
}

int main(void)
{
  List *user_list = initialize_search_list();
  search_list(user_list);
  return 0;
}