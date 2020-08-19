#include <stdio.h>
#include <ctype.h>

#define MAX 128

/**
 * Exercise 1-14
 * Write a program to print a histogram
 * of the frequencies of different characters
 * in its input.
*/

int main() {
  int c;
  int character_bank[MAX] = {0};
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      break;
    } else {
      ++character_bank[c];
    }
  }
  int i, j;
  for (i = 32; i < MAX; ++i) {
    if (character_bank[i] == 0) {
      continue;
    } else {
      printf("%c: ", i);
      for (j = 0; j < character_bank[i]; ++j) {
        printf("-");
      }
      printf("\n");
    }
  }
  return 0;
}