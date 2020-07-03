#include <stdio.h>

/**
 * Exercise 1-10
 * Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b,
 * and each backslash by \\. This makes tabs and
 * backspaces visible in an unambiguous way.
*/

int main() {
    int c;
    int tab, backspace, backslash;
    tab = '\t';
    backspace = '\b';
    backslash = '\\';
    while ((c = getchar()) != EOF) {
        if (c == tab) {
            printf("\\t");
        }
        else if (c == backspace) {
            printf("\\b");
        }
        else if (c == backslash) {
            printf("\\\\");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}