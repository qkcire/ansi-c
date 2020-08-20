#include <stdio.h>

/**
 * Exercise 1-18
 * Write a program to remove trailing blanks
 * and tabs from each line of input, and to
 * delete entirely blank lines.
*/
#define MAXLINE 1000
#define ON      1
#define OFF     0

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 0;
  len = getline(line, MAXLINE);
  printf("%s", line);
  return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(char s[], int lim) {
  int c, i, blank_switch, tab_switch;
  blank_switch = OFF;
  tab_switch = OFF;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ' || c == '\t') {
      if (blank_switch == ON || tab_switch == ON) {
        --i;
        continue;
      } else {
        if (c == ' ') {
          blank_switch = ON;
        } else {
          tab_switch = ON;
        }
        s[i] = c;
      }
    } else {
      blank_switch = tab_switch = OFF;
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