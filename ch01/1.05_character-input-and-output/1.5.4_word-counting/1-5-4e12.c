#include <stdio.h>

#define ON  1
#define OFF 0
/**
 * Exercise 1-12
 * Write a program that prints its input
 * one word per line.
*/

int main() {
  int c;
  int blank_switch, tab_switch;
  blank_switch = OFF;
  tab_switch = OFF;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      printf("\n");
      printf("[]");
      blank_switch = ON;
    } else if (c == '\t') {
      printf("\n");
      printf("\\t");
      tab_switch = ON;
    } else {
      if (tab_switch == ON || blank_switch == ON) {
        printf("\n");
        putchar(c);
        tab_switch = OFF;
        blank_switch = OFF;
      } else {
        putchar(c);
      }
    }
  }
  return 0;
}