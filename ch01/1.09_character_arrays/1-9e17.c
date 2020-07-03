#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char to[], int maxline);
void copy(char to[], char from[]);

/**
 * Exercise 1-17
 * Write a program to print all input lines that are
 * longer than 80 characters.
*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 80;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            copy(longest, line);
            printf("Line accepted!\nLength: %d\n", len);
            printf("Line: %s", longest);
        }
        else {
            printf("Input line not long enough. Must be >= 80 characters.\n");
            printf("Length: %d\n", len);
        }
        printf("Try again or exit (CTRL+D):\n");
    }
    if (max > 0) {

    }
    return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(char to[], int maxline) {
    int c, i;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        to[i] = c;
    }
    if (c == '\n') {
        to[i] = c;
        ++i;
    }
    to[i] = '\0';
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