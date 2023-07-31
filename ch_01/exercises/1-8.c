#include <stdio.h>

int main()
{
  int c, sp_count, tab_count, return_count;

  sp_count = 0;
  tab_count = 0;
  return_count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++sp_count;
    }
    if (c == '\t')
    {
      ++tab_count;
    }
    if (c == '\n')
    {
      ++return_count;
    }
  }
  printf("space count: %d\n", sp_count);
  printf("tab count: %d\n", tab_count);
  printf("return count: %d\n", return_count);
}
