#include <stdio.h>
/**
 * Exercise 1-6
 * Verify that the expression
 * getchar() != EOF is 0 or 1.
 * 
 * NOTE: Remember CTRL+D signals EOF.
*/
int main() {
  if ((getchar() != EOF) == 1) {
    printf("getchar() != EOF equals 1.");
  } else {
    printf("getchar() != EOF equals 0.");
  }
  printf("\n");
  return 0;
}