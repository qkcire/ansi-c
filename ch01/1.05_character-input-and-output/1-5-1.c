#include <stdio.h>

/**
 * copy input to output; 1st version
*/

int main() {
    int c;
    printf("Hi.\n");
    printf("Enter your full name: ");
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}