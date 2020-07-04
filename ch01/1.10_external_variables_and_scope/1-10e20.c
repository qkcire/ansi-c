#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
/**
 * Exercise 1-20
 * Write a program detab that replaces in the
 * tabs input with the proper number of blanks to
 * space to the next tab stop. Assume a fixed
 * set of tabs stops, say every n columns. Should
 * n be a variable or a symbolic parameters?
*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(char to[], int maxline) {
    int c, i;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {

    }
    return i;
}

/**
 * copy: copy 'from' into 'to'; assume to is big enough
*/
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

