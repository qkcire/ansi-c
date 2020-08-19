#include <stdio.h>

/**
 * Exercise 1-8
 * Write a program to count blanks, tabs,
 * and newlines.
*/

int main() {
  int c;
  int nl, blanks, tabs;
  nl = 0;
  blanks = 0;
  tabs = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ') {
      ++blanks;
    }
    if (c == '\t') {
      ++tabs;
    }
  }
  printf("blank #: %d, tab #: %d, newline #: %d\n", blanks, tabs, nl);
  return 0;
}