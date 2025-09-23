#include <stdio.h>

#define LOWER 0 
#define UPPER 300 
#define STEP 20

main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("%s\n", "Fahrenheit to Celsius converter");
  while(fahr <= UPPER) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}
