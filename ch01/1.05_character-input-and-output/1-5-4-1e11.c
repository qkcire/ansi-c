#include <stdio.h>

/**
 * Exercise 1-11
 * How would you test the word count program?
 * What kinds of input are most likely to uncover
 * bugs if there are any?
*/

int main() {
    printf("You can test the word count program by ");
    printf("anaylyzing the input for 'incorrect' words.\n");
    printf("Since the program does not signal for specific input, ");
    printf("non alpha-string may cause problems.");
    return 0;
}