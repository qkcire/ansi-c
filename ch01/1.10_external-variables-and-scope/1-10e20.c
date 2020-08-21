#include <stdio.h>

/**
 * Exercise 1-20
 * Write a program detab that replaces tabs
 * in the input with the proper number of blanks
 * to space to the next tab stop. Assume a fixed
 * set of tabs stops, say every n columns. Should
 * n be a variable of a symbolic parameter?
*/
#define MAXLINE 100
#define N_TABSPACE 5
#define ON 1
#define OFF 0
char line[MAXLINE];
int line_length;
int tab_detector = OFF;
char detabbed_line[MAXLINE];
int getline(void);
void detab(void);

int main() {
  extern int line_length;
  extern int tab_detector;
  extern char line[];
  extern char detabbed_line[];
  line_length = getline();
  if (tab_detector == ON) {
    detab();
    printf("%s", detabbed_line);
    printf("\n");
  } else {
    printf("%s", line);
  }
  return 0;
}

/**
 * getline: read a line into s, return length
*/
int getline(void) {
  int c, i;
  extern char line[];
  extern int tab_detector;
  for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    if (c == '\t') {
      tab_detector = ON;
    }
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/**
 * detab: remove tabs from LINE and add N_TABSPACE spaces
 * to DETABBED_LINE
*/
void detab(void) {
  extern char line[];
  extern char detabbed_line[];
  extern int line_length;
  int tab_amount = N_TABSPACE;
  int i = 0, j = 0;
  while(line[i] != '\0') {
    if (line[i] == '\t') {
      int k;
      for (k = 0; k < tab_amount; ++k) {
        detabbed_line[j+k] = '_';
      }
      j = j + k - 1;
    } else {
      detabbed_line[j] = line[i];
    }
    ++i;
    ++j;
  }
}