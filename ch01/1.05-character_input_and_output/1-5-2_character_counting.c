#include <stdio.h>

/**
 * count characters in input; 1st version.

int main() {
    long nc;
    nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    printf("\n");
    printf("Character count: %ld\n", nc);
    return 0;
}
*/

/**
 * count characters in input; 2nd version.
*/

int main() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc) {
        ;
    }
    printf("\n");
    printf("character count: %.0f\n", nc);
    return 0;
}