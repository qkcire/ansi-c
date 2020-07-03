#include <stdio.h>

/**
 * Exercise 1-15
 * Rewrite the temperature conversion program
 * of section 1.2 to use a function for conversion.
*/

float fahrtocelsius(float fahr);

int main() {
    float fahr;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr < upper) {
        printf("%3.0f %6.1f\n", fahr, fahrtocelsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float fahrtocelsius(float fahr) {
    return ((5.0/9.0) * (fahr-32.0));
}