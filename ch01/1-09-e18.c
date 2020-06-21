/* Section Notes:
    - I was having trouble figuring out why getline was not outputing the correct string.
    - for example:
        input: h     i
        output: h @
    - diagnosis: for loop was continuing forward without allocating any character into the array
        i.e. it was leaving elements blank
    - fix: i decrement the for loop i variable to stay in place until a valid character was
        found. 
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* remove trailing blanks and tabs from each line of input
   and delete entirely blank lines */

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0 ) {
        /* printf("line after getline call: %s\n", line); */
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s\n", longest);
    }
    return 0;
}

int getline(char s[], int lim) {
    int yesSpace = 1;
    int noSpace = 0;
    int previousC = noSpace;
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ' && previousC == noSpace) {
            previousC = yesSpace;
            s[i] = c;
        }
        else if (c == ' ' && previousC == yesSpace)
            i -= 1;
        else {
            previousC = noSpace;
            s[i] = c;
        }
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}