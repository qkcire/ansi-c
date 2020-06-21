#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print all input lines that are longer than 80 characters */
int main() {
    int len;
    int min;
    char line[MAXLINE];
    char longerThanEightyChars[MAXLINE];
    min = 80;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 80) {
            copy(longerThanEightyChars, line);
            printf("%s", longerThanEightyChars);            
        }
        else {
            printf("The string was too short! %d\n", len);
            printf("Try again: ");
        }
    }
    return 0;
}

/* getline: read a line into s, return length */
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}