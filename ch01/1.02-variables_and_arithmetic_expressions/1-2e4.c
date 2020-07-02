#include <stdio.h>

/* Exercise 1-4
   Write a program to print the corresponding
   Celsius to Fahrenheit table. */

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Celsius\t Fahrenheit\n");
    printf("-------------------\n");
    while (celsius <= upper) {
        fahr = 32.0 + (celsius * (9.0/5.0));
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}