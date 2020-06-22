#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void reversed(char to[], char from[]);
/*void copy(char to[], char from[]);*/

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char reversed[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(reversed, line);
        // if (len > max) {
        //     max = len;
        //     copy(longest, line);
        // }
    }
    if (max > 0) {
        prinft("%s", reversed);
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

void reversed(char to[], char from[]) {
    
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