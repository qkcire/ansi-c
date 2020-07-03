#include <stdio.h>

/**
 * Copy input to output; 1st version.

int main() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
*/

/**
 * Copy input to output; 2st version.
*/

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}