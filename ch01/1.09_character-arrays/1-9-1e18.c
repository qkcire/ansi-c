#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
/**
 * Exercise 1-18
 * Write a program to remove trailing blanks and
 * tabs from each line of input, and to delete 
 * entirely blank lines.
*/

int main() {
    int len;
    char line[MAXLINE];
    char cp[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0) {
        copy(cp, line);
        printf("%s", cp);
    }
    return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(char s[], int lim) {
    int prev_c, c, i;
    prev_c = 0;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ') {
            if (prev_c == 1) {
                continue;
            } else {
                s[i] = c;
                prev_c = 1;
            }
        } else {
            s[i] = c;
            prev_c = 0;
        }
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
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