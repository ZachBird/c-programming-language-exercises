#include <stdio.h>

int main()
{
  int lower = 0, upper = 300, step = 20;
  float fahr = lower, celsius;
  float C = 5.0 / 9.0;

  printf("Fahr Celsius\n");
  while (fahr <= upper)
  {
    celsius = C * (fahr - 32.0);
    printf("%3.0f, %6.1f \n", fahr, celsius);
    fahr += step;
  }
}