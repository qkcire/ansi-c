#include <stdio.h>

/**
 * Exercise 1-21
 * Write a program entab that replaces strings
 * of blanks by the minimum number of tabs and
 * blanks to achieve the same spacing. Use the
 * same tab stops as for detab. When either a
 * tab or a single blank would suffice to reach
 * a tab stop, which should be given preference?
*/
#define MAXLINE 100
#define SPACE_REQ 5
char line[MAXLINE];
int line_length;
char entab_line[MAXLINE];
int tab_count;
int tab_indices[MAXLINE];
int getline(void);
void entab(void);
int main() {
  extern int line_length;
  extern int tab_count;
  line_length = getline();
  if (tab_count > 0) {
    entab();
    printf("%s", entab_line);
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
  int space_count = 0;
  extern int tab_count;
  extern char line[];
  extern int tab_indices[];
  tab_count = 0;
  for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ') {
      ++space_count;
      if (space_count == SPACE_REQ) {
        tab_indices[tab_count] = i - (SPACE_REQ - 1);
        ++tab_count;
        space_count = 0;
      }
    } else {
      space_count = 0;
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
 * entab: replace spaces found in SPACE_REQ occurrences with tabs
*/
void entab(void) {
  extern char line[];
  extern int line_length;
  extern char entab_line[];
  extern int tab_count;
  extern int tab_indices[];
/**
  int i, j, k, l;
  i = j = k = l = 0;
  for (i; i < tab_count; ++i) {
    k = tab_indices[i];
    while (j != k) {
      entab_line[j] = line[l];
      ++j;
      ++l;
    }
    entab_line[j] = '\t';
    ++j;
    l = l + SPACE_REQ - 1;
  }
*/
  int i, j, k, l;
  i = j = l = 0;
  k = -1;
  for (i; i < line_length; ++i) {
    if (tab_count > 0) {
      k = tab_indices[j];
      --tab_count;
      ++j;
      while(k != i) {
        entab_line[l] = line[i];
        ++l;
        ++i;
      }
      entab_line[l] = 'T';
      i = i + (SPACE_REQ - 1);
    } else {
      entab_line[l] = line[i];
    }
    ++l;
  }
}