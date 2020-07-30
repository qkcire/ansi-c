#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/**
 * Exercise 1-15
 * Rewrite the termperature conversion program
 * of section 1.2 to use a function for conversion
*/

float convert_to_celsius(int fahr);

int main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, convert_to_celsius(fahr));
    }
    return 0;
}

float convert_to_celsius(int fahr) {
    return ((5.0/9.0) * (fahr-32));
}