#include <stdio.h>

/**
 * Write a program that prints its input
 * one word per line.
*/

int main() {
    int c, blank;
    blank = ' ';
    while ((c = getchar()) != EOF) {
        if (c == blank)
            printf("\n");
        else {
            putchar(c);
        }
    }
    return 0;
}