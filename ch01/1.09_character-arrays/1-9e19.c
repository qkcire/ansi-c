#include <stdio.h>

/**
 * Exercise 1-19
 * Write a function reverse(s) that reverses
 * the character string s. Use it to write a
 * program that reverses its input one line
 * at a time.
*/

#define MAXLINE 100
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int len_of_line);
void clear(char reversed[], int len_of_line);

int main() {
  int len_of_line;
  char line[MAXLINE];
  char reversed_line[MAXLINE];
  while ((len_of_line = getline(line, MAXLINE)) > 0) {
    reverse(reversed_line, line, len_of_line);
    printf("%s\n", reversed_line);
    clear(reversed_line, len_of_line);
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
/**
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
*/
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

/**
 * reverse: invert 'from' into 'to'; assume to is big enough
*/
void reverse(char to[], char from[], int from_len) {
  int i, j;
  for (i = from_len-1, j = 0; i >= 0, j < from_len; --i, ++j) {
    to[j] = from[i];
  }
  ++j;
  to[j] = '\0';
}

/**
 * clear: remove previous line from array
*/
void clear(char reversed[], int len) {
  int i;
  for (i = 0; i < len; ++i) {
    reversed[i] = '\0';
  }
}