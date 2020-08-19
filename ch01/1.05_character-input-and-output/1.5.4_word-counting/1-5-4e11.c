#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outstide a word */

/**
 * Exercise 1-11
 * How would you test the word count
 * program? What kinds of input are most
 * likely to uncover bugs if there are any?
 * 
 * Response: My guess is any non alphanumeric
 * character in sequence can cause issues.
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