#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char to[], int maxline);
void reverse(char rev[], char norm[], int len);
void cleararr(char arr[], int len);

/**
 * Exercise 1-19
 * Write a function reverse(s) that reverses the
 * character string s. Use it to write a program
 * that reverses its input a line at time.
*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char reversed[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(reversed, line, len);
        printf("Reversed line: %s\n", reversed);
        cleararr(reversed, len);
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
 * reverse: reverses rev array from norm array
*/

void reverse(char rev[], char norm[], int len) {
    int i, j;
    for (i = len - 2, j = 0; i >= 0; --i, ++j) {
        rev[j] = norm[i];
    }
    ++j;
    rev[j] = '\0';
}

/**
 * cleararr: clears array for multiple uses
*/

void cleararr(char arr[], int len) {
    int i;
    for (i = 0; i < len; ++i) {
        arr[i] = 0;
    }
}