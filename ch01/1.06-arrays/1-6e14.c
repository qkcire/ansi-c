#include <stdio.h>

/**
 * Exercise 1-14
 * Write a program to print a histogram of the
 * frequencies of different characters in its input.
 * note: focused on english alphabet a-z
*/

#define MAX  30

int main() {
    int c;
    int freqchars[MAX] = { 0 };
    char alphabet[MAX] = {'a', 'b', 'c', 'd', 'e', 'f',
        'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z'};
    while ((c = getchar()) != EOF) {
        ++freqchars[c-'0' - 49];
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c", alphabet[i]);
        for (int j = 0; j < freqchars[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}