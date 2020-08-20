#include <stdio.h>

/**
 * Exercise 1-17
 * Write a program to ptint all input lines
 * that are longer than 80 characters.
*/
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 80;
  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      printf("%s", line);
      printf("Input accepted. LEN=%d\n", len);
      printf("Try again.\n");
    } else {
      printf("Input not long enough. LEN=%d. Try again.\n", len);
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