#include <stdio.h>

/**
 * Exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
*/

int main() {
    int c, blanks, tabs, nl;
    blanks = 0;
    tabs = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
    }
    printf("blanks: %d\n", blanks);
    printf("tabs: %d\n", tabs);
    printf("newlines: %d\n", nl);
    return 0;
}