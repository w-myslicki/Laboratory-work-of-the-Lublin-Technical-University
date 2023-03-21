#include <stdio.h>

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