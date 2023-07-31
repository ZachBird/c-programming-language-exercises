#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int sum = add(3, 5);
  printf("sum is %3d \n", sum);
  printf("Hello \t World!");
}