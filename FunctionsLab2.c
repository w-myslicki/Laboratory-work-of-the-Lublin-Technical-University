#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void runTemperaturConversionFromFahrenheitToCelsius(void) {
  float F, C;

  printf("Enter the temperature in degrees Fahrenheit: ");
  scanf("%f", &F);
  C = (F - 32) * 5 / 9;
  printf("%.1f Fahrenheit is %.1f degrees Celsius\n", F, C);

  printf("\n");

  printf("Enter the temperature in degrees Celsius: ");
  scanf("%f", &C);
  F = 1.8 * C + 32;
  printf("%.1f Celsius is %.1f degrees Fahrenheit\n", C, F);
}

void runRandomNumber(void) {

  int min, max, random;
  srand(time(NULL));

  printf("Enter Max and Min limits of the limit:");
  scanf("%d %d", &min, &max);

  random = (rand() % (max - min + 1)) + min;
  printf("Random number is: %d\n", random);
}

void runFloatRandomNumber(void) {

  float min, max, random;
  int places;
  srand(time(NULL));

  printf(
      "Enter Max and Min limits of the limit with number of decimal places:");
  scanf("%f %f %d", &min, &max, &places);

  random = ((float)rand() / RAND_MAX) * (max - min) + min;
  printf("Random number is: %.*f\n", places, random);
}