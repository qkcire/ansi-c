#include <stdio.h>

/**
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by
 * a single bank.
*/

int main() {
    int c, blank, prevBlank, nl;
    blank = ' ';
    prevBlank = 0;
    while ((c = getchar()) != EOF) {
        if (c == blank) {
            if (prevBlank == 0) {
                prevBlank = 1;
                putchar(c);
            }
            else {
                ;
            } 
        }
        else {
            prevBlank = 0;
            putchar(c);
        }
    }
    return 0;
}