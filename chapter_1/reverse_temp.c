#include <stdio.h>

int main()

{

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;

  while(fahr >= lower)
    {
      celsius = 5.0 * (fahr -32 ) / 9.0;
      printf("%.1f %6.1f\n", fahr, celsius);
      fahr = fahr - step;
    }

}
