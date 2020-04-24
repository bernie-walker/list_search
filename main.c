#include <stdio.h>
#include "list.h"
#include "search.h"

int main(void)
{
  List *user_list = initialize_search_list();
  search_list(user_list);
  return 0;
}