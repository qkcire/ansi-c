#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void reverse(char to[], char from[], int len);
/*void copy(char to[], char from[]);*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char reversed[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        /* reverse(reversed, line, len); */
        if (len > max) {
            max = len;
            reverse(reversed, line, len);
            /* copy(longest, line); */ 
        }
    }
    if (max > 0) {
        printf("printing: %s", reversed);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char to[], char from[], int len) {
    printf("reverse f(x)");
    int i, j;
    j = 0;
    for (i = len - 1; i > -1; --i, ++j) {
        to[j] = from[i];
    }
    
    printf("line 46: %s", to);
}

/*
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
*/