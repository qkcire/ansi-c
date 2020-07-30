#include <stdio.h>

/**
 * Exercise 1-13
 * Write a program to print a histogram of the
 * lengths of words in its input. It is  easy 
 * to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
*/
#define MAX_WORD_COUNT  99
#define MAX_WORD_LENGTH 99
#define BLANK        1
#define NOT_BLANK    0

int main() {
    int storage[MAX_WORD_COUNT][MAX_WORD_LENGTH] = {0};
    int c, prev_c, new_word, char_count, word_count, word_length, longest_word_length;
    prev_c = NOT_BLANK;
    word_count = 0;
    char_count = 0;
    longest_word_length = 0;
    /* store input into array */
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prev_c == BLANK) {
                continue;
            } else {
                if (char_count > longest_word_length) {
                    longest_word_length = char_count;
                }
                for (int i = 0; i < longest_word_length; ++i) {
                    if (i <= char_count) {
                        storage[word_count][i] = 1;
                    } else {
                        storage[word_count][i] = 0;
                    }
                }
                ++word_count;
                prev_c = BLANK;
                char_count = 0; 
            }

        } else {
            ++char_count;
            prev_c = NOT_BLANK;
        }
    }
    if (c == EOF) {
        ++word_count;
        if (char_count > longest_word_length)
            longest_word_length = char_count;
    }
    printf("\n");
    printf("longest word length: %d\n", longest_word_length);
    printf("word count: %d\n", word_count);
    /* display information in array */
    /**
     *     for (int i = longest_word_length; i >= 0; --i) {
        for (int j = 0; i < word_count; ++j) {
            printf("%d", storage[j][i]);
        }
    }
    */
    for (int i = longest_word_length; i >= 0; --i) {
        for (int j = 0; i < word_count; ++j) {
            printf("%d", storage[j][i]);
        }
    }
    return 0;
}