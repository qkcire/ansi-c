#include <stdio.h>

/**
 * Exercise 1-1
 * Run the 'hello, world' program on your system.
 * Experiment with leaving out parts of the
 * program, to see what error messages you get.
*/

int main() {
    printf("hello ");
    printf("world");
    printf("\n");
    return 0;
}

/**
 * Error message when leaving out a semicolon:
 * - 1-1e1.c: In function 'main':
 * - 1-1e1.c:13:5: error: expected ';' before 'printf'
 * -      printf("\n");
 * -      ^~~~~~
*/

/**
 * Error message when leaving out a closing paranthesis:
 * - 1-1e1.c: In function 'main':
 * - 1-1e1.c:12:19: error: expected ')' before ';' token
 * -      printf("world";
 * - 1-1e1.c:15:1 error: expected ';' before '}' token
 * -  }
 * -  ^
*/