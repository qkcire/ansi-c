#include <stdio.h>

/**
 * Exercise 1-9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a
 * single blank.
*/

int main() {
    int current_c, prev_c;
    prev_c = 0;
    while ((current_c = getchar()) != EOF) {
        if (current_c == ' ') {
            if (prev_c == 1) {
                continue;
            } else {
                prev_c = 1;
                putchar(current_c);
            }
        } else {
            putchar(current_c);
            prev_c = 0;
        }
    }
    return 0;
}