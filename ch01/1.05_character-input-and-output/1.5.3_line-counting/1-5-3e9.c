#include <stdio.h>

#define ON  1
#define OFF 0
/**
 * Exercise 1-9
 * Write a program to copy its input
 * to its output, replacing each string
 * of one or more blanks by a single blank.
*/

int main() {
  int c, blank_switch;
  blank_switch = OFF;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (blank_switch == ON) {
        continue;
      } else {
        blank_switch = ON;
        putchar(c);
      }
    } else {
      blank_switch = OFF;
      putchar(c); 
    }
  }
  return 0;
}