#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * Exercise 1-17
 * Write a program to print all input lines
 * that are longer than 80 characters
*/

int main() {
    int len;
    int min;
    char line[MAXLINE];
    char longest[MAXLINE];
    min = 80;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > min) {
            printf("text: %s", line);
            printf("\n");
            printf("length of text: %d", len);
            printf("\n");
        } else {
            printf("Line length (%d) is not long enough. Must be > 80. Try again.\n", len);
        }
    }
    return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}