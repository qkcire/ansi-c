#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outstide a word */

/**
 * Count lines, words, and characters
 * in input
*/

int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("line count: %d, word count: %d, character count: %d\n", nl, nw, nc);
  return 0;
}