#include <stdio.h>

/* This program prints farenheit-celsius table
   for far = 0, 20, ..., 300 */

int main()
{

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature */
  upper = 300; /* upper limit of temperature*/
  step = 20; /* Step size for the program*/

  printf("Temperature Conversion from Farenheit to Celsius\n");
  
  fahr = lower;
  while(fahr <= upper) {
    celsius = 5.0 * (fahr-32) / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr+ step;
  }


}
