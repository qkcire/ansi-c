#include <stdio.h>

/**
 * Exercise 1-13
 * Write a program to print a histogram of
 * the lengths of words in its input. It is
 * easy to draw the histogram wit the bars
 * horizontal; a vertical orientation is more
 * challenging.
*/

int main() {
    int c, nchar;
    nchar = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            printf("%2d ", nchar);
            for (int i = nchar; i > 0; --i) {
                printf("-");
            }
            printf("\n");
            nchar = 0;
        }
        else {
            ++nchar;
        }
    }
    return 0;
}