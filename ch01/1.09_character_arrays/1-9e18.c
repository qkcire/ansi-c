#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char to[], int maxline);
void copy(char to[], char from[]);

/**
 * Write a program to remove trailing blanks and
 * tabs from each line of ionput, and to delete
 * entirely blank lines.
*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line: %s", longest);
    }
    return 0;
}

/**
 * getline: read a line into s, return length
 *          checks for tabs, trailing blanks,
 *          and remove entire blank lines.
*/
int getline(char to[], int maxline) {
    int c, i;
    int blankspace, prevblankspace, tab;
    tab = '\t';
    blankspace = ' ';
    prevblankspace = 0;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (c == blankspace || c == tab) {
            if (prevblankspace == 1)
                --i;
            else {
                to[i] = blankspace;
                prevblankspace = 1;
            }
        }
        else {
            to[i] = c;
            prevblankspace = 0;
        }
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