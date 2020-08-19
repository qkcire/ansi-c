#include <stdio.h>

#define MAX 1000

/**
 * Exercise 1-13
 * Write a program to print a histogram
 * of the lengtsh of words in its input.
 * It is easy to draw the histogram with 
 * the bars horizontal; a vertical 
 * orientation is more challenging.
*/

int main() {
  int c, current_word, len_of_current_word, len_of_longest_word, total_num_of_words;
  int words[MAX] = {0};
  len_of_current_word = 0;
  len_of_longest_word = 0;
  total_num_of_words = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ') {
      words[total_num_of_words] = len_of_current_word;
      ++total_num_of_words;
      if (len_of_current_word > len_of_longest_word) {
        len_of_longest_word = len_of_current_word;
      }
      len_of_current_word = 0;
      if (c == '\n') {
        break;
      } else {
        continue;
      }
    }  else {
      ++len_of_current_word;
    }
  }
  words[total_num_of_words] = -1;
  while (len_of_longest_word > 0) {
    int i = 0;
    while (words[i] != -1) {
      if (words[i] >= len_of_longest_word) {
        printf("|");
      } else {
        printf(" ");
      }
      ++i;
    }
    printf("\n");
    --len_of_longest_word;
  }
  return 0;
}