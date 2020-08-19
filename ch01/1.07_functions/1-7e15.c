#include <stdio.h>

/*float celsiusToFahrenheit(float cels);*/
float fahrenheitToCelsius(float fahr);
void temperatureConversion(void);

/**
 * Exercise 1-15
 * Rewrite the temperature conversion
 * program os section 1.2 to use a
 * function for conversion
*/

int main() {
  temperatureConversion();
  return 0;
}

/**
 * fahrenheitToCelsius: converts fahr to cels
*/
float fahrenheitToCelsius(float fahr) {
  float celsius;
  celsius = (5.0/9.0) * (fahr-32.0);
  return celsius;
}

/**
 * temperatureConversion: displays conversion
 * to output
*/
void temperatureConversion() {
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  while (fahr <= upper) {
    printf("%3.0f %6.1f\n", fahr, fahrenheitToCelsius(fahr));
    fahr = fahr + step;
  }
}