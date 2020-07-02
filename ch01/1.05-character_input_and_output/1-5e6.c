#include <stdio.h>

/**
 * Exercises 1-6
 * Verify that the expression getchar() != EOF is 0 or 1.
*/

int main() {
    int c;
    if (((c = getchar()) != EOF) == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}