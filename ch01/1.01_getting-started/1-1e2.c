#include <stdio.h>

/**
 * Exercise 1-2:
 * Experiment to find our what happens when
 * prints's argument string contains \c, where
 * c is some character not listed above.
*/

int main() {
    printf("\m");
    return 0;
}

/**
 * printf("\r") prints nothing.
 * printf("\v") prints an empty line.
 * printf("\m") pritns an error message.
 * - warning" unknown escape sequence: '\m'
 * 
*/