#include <stdio.h>

#define ON  1
#define OFF 0

/**
 * Exercise 1-12
 * Write a program that prints its input one word per line.
*/

int main() {
    int c, prev_c;
    prev_c = OFF;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ') {
            if (prev_c == ON) {
                continue;
            } else {
                printf("\n");
                prev_c = ON;
            }
        } else {
            putchar(c);
            prev_c = OFF;
        }
    }
    return 0;
}