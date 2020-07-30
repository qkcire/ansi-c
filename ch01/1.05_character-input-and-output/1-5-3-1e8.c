#include <stdio.h>

/**
 * Exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
*/

int main() {
    int c;
    int blanks, tabs, newlines;
    blanks = 0;
    tabs = 0;
    newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newlines;
        }
        if (c == '\t') {
            ++tabs;
        }
        if (c == ' ') {
            ++blanks;
        }
    }
    printf("blanks: %d, tabs: %d, newlines: %d", blanks, tabs, newlines);
    printf("\n");
    return 0;
}