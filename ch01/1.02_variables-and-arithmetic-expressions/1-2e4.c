#include <stdio.h>

/**
 * Exercise 1-4
 * Write a program to print the
 * corresponding Celsius to
 * Fahrenheit table.
*/

int main() {
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;
  upper = 10;
  step = 0.1;
  celsius = lower;
  printf("Celsuis-Fahrenheit\n");
  printf("    Converter     \n");
  printf("------------------\n");
  while (celsius <= upper) {
    fahr = 32.0 + (9.0/5.0 * celsius);
    printf("%3.1f\t%6.2f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}