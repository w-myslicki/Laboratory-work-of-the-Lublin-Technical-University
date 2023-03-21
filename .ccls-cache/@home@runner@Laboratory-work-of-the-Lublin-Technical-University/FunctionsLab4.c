#include <math.h>
#include <stdio.h>

void runRootSquareLevels(void) {

  float a, b, c;
  float delta, x1, x2;

  printf("Enter number a, b, c: ");
  scanf("%f %f %f", &a, &b, &c);

  delta = b * b - 4 * a * c;

  if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("The root of the equation is: %.4f, %.4f\n", x1, x2);
  } else if (delta == 0) {
    x1 = -b / (2 * a);
    printf("The root of the equation is: %.4f\n", x1);
  } else {
    printf("The quadratic equation has no roots :(\n");
  }
}

void runSort(void) {
    int numbers[3];
    int i, j;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

  printf("Numbers in ascending order:");
  for(i = 0; i<=2; i++) {
    printf("%d ", numbers[i]);
  }
}