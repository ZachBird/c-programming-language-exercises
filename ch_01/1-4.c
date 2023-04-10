#include <stdio.h>

int main()
{
  int lower = 0, upper = 300, step = 20;
  float celsius = lower, fahriheit;
  float C = 5.0 / 9.0;

  printf("Celsius Fahr \n");
  while (celsius <= upper)
  {
    fahriheit = celsius / C + 32.0;
    printf("%3.0f, %6.1f \n", celsius, fahriheit);
    celsius += step;
  }
}
