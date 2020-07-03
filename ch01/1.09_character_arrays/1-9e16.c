#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * Exercise 1-16
 * Revise the main reoutine of the longest-line
 * program so it will correctly print the length
 * of arbitrary long input lines, and as much as
 * possible of the text.
 * note: commented out portion not working properly.
 *       not entirely sure why since it's the exact
 *       same thing.
*/

/*

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line: %s", longest);
        printf("Length: %d", max);
    }
    return 0;
}

/**
 * getline: read a line into s, return length

int getline(char to[], int maxline) {
    int c, i;
    for (i = 0; i < maxline - 1 && (c - getchar()) != EOF && c != '\n'; ++i) {
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


void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line: %s", longest);
        printf("Length: %d\n", max);
    }
    return 0;
}

/**
 * getline: read aline into s, return length
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