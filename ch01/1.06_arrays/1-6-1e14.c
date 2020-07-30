#include <stdio.h>

/**
 * Exercise 1-14
 * Write a program to print a histogram of the
 * frequencies of different characters in its input.
*/

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int alpha_count[26] = {0};
    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            continue;
        }
        ++alpha_count[c - 97];
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c: ", alphabet[i]);
        for (int j = 0; j < alpha_count[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}