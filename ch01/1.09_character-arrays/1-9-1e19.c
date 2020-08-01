#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char s[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int to_len);

/**
 * Exercise 1-19
 * Write a function reverse(s) that reverses
 * the character string s. Use it to write a
 * program that reverses its input a line at
 * a time.
*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char rev[MAXLINE];
    char clean_copy[MAXLINE];
    printf("%s", rev);
    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(rev, line, len);
        printf("%s", rev);
        printf("\n");
        copy(rev, clean_copy);
    }
    return 0;
}

int getline(char s[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char to[], char from[], int to_len) {
    int i;
    for (i = 0; i < to_len; ++i) {
        to[i] = from[to_len - 1 - i];
    }
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}