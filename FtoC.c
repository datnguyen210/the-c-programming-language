#include <stdio.h>

#define LOWER 0 
#define UPPER 300 
#define STEP 20

float FtoC(int fahr);

int main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("%s\n", "Fahrenheit to Celsius converter");
  while(fahr <= UPPER) {
    printf("%3.0f %6.1f\n", fahr, FtoC(fahr));
    fahr = fahr + STEP;
  }
  return 0;
}

float FtoC(int fahr) {
  float cel;
  cel = 5.0 * (fahr - 32.0) / 9.0;
  return cel;
}
