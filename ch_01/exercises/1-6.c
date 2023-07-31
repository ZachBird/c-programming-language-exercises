#include <stdio.h>

int main()
{
  int c;

  while ((c = (getchar() != EOF)))
    printf("c is: %d \n", c);
  printf("[getchar() != EOF] is: %d \n", c);
}