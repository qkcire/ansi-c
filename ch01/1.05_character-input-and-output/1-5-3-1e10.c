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
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\b' || c == '\\') {
            switch(c) {
                case '\t':
                    printf("\\t");
                    break;
                case '\b':
                    printf("\\b");
                    break;
                case '\\':
                    printf("\\\\");
                    break;
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}