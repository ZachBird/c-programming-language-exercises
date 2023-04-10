#include <stdio.h>

int main()
{
  int lower = 0, upper = 300, step = 20;
  float C = 5.0 / 9.0;

  printf("Fahr Celsius \n");
  for (float fahrenheit = upper; fahrenheit >= lower; fahrenheit -= step)
    printf("%3.0f, %6.1f \n", fahrenheit, C * (fahrenheit - 32.0));
}