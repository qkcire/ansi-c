#include <stdio.h>

// 1.06 Arrays
    // e1.13 histogram of the length of words
    #define INSIDE_WORD  1
    #define OUTSIDE_WORD 0

    int main() {
        int c, state, i, j;
        int word[10];
        for (i = 0; i < 10; ++i)
            word[i] = 0;
        i = j = 0;
        while ((c = getchar()) != EOF) {
            if (c == ' ' || c == '\t' || c == '\n')
                word[j] = -1;
            else {
                word[j] += 1;
            }
            ++j;
        }
        for (i = 0; i < 10; ++i) {
            if (word[i] == 0)
                continue;
            
            for (j = 0; j < word[i]; ++j)
                printf("-");
            // putchar('\n');
        }
        return 0;
    }

    /* count digits, white space, others */

    // int main() {
    //     int c, i, nwhite, nother;
    //     int ndigit[10];
    //     nwhite = nother = 0;
    //     for (i = 0; i < 10; ++i)
    //         ndigit[i] = 0;
    //     while ((c = getchar()) != EOF) {
    //         if (c >= '0' && c <= '9')
    //             ++ndigit[c-'0'];
    //         else if (c == ' ' || c == '\n' || c == '\t')
    //             ++nwhite;
    //         else
    //             ++nother;
    //     }
    //     printf("digits =");
    //     for (i = 0; i < 10; ++i)
    //         printf(" %d", ndigit[i]);
    //     printf(", white space = %d, other = %d\n",
    //         nwhite, nother);
    //     return 0;
    // }

// 1.05 Character Input and Output
    // 1.5.4 Word Counting

    // e1-12 one word per line program
    // #define INSIDE_WORD  1
    // #define OUTSIDE_WORD 0
    // int main() {
    //     int c, nl, nw, nc, state;
    //     state = OUTSIDE_WORD;
    //     nl = nw = nc = 0;
    //     while((c = getchar()) != EOF) {
    //         if (c == '\n' || c == '\t' || c == ' ') {
    //             putchar('\n');
    //             // putchar('');
    //             state = OUTSIDE_WORD;
    //         }
    //         else if (state = OUTSIDE_WORD) {
    //             state = INSIDE_WORD;
    //         }
    //         else {
    //             putchar(c);
    //         }
    //     }
    //     return 0;
    // }

    // e1-11 what can break this?
    //  enough tabs probably
    // #define IN  1  /* inside a word */
    // #define OUT 0  /* outside a word */
    // int main() {
    //     int c, nl, nw, nc, state;
    //     state = OUT;
    //     nl = nw = nc = 0;
    //     while((c = getchar()) != EOF) {
    //         ++nc;
    //         if (c == '\n')
    //             ++nl;
    //         if (c == ' ' || c == '\n' || c == '\t')
    //             state = OUT;
    //         else if (state == OUT) {
    //             state = IN;
    //             ++nw;
    //         }
    //     }
    //     printf("new line: %d, new word: %d, char count: %d\n", nl, nw, nc);
    //     return 0;
    // }


    // 1.5.3 Line Counting

    // e1-10 replace tabs, backspaces, and blackslashes

    // int main() {
    //     int t, bsp, bsl, c;
    //     while ((c = getchar()) != EOF) {
    //         if (c == '\t')
    //             printf("\\t");
    //             // putchar('\\t');
    //         if (c == '\\')
    //             printf("\b");
    //             // putchar('\\b');
    //         if (c == '\b')
    //             printf("\b");
    //             // putchar('\\b');
    //         else {
    //             putchar(c);
    //         }
    //     }
    //     return 0;
    // }

    // e1-9 replace strings of blanks with single blank

    // int main() {
    //     int bl, c;
    //     bl = 0;
    //     while ((c = getchar()) != EOF) {
    //         if (bl >= 1 && c == ' ') {
    //             ++bl;
    //             continue;
    //         }
    //         if (bl == 0 && c == ' ' ) {
    //             putchar(c);
    //             ++bl;
    //         }
    //         else {
    //             bl = 0;
    //             putchar(c);
    //         }
    //     }
    //     return 0;
    // }

    // e1-8 count blanks, tabs, newlines

    // int main() {
    //     int c, bl, t, nl;
    //     bl = 0;
    //     t = 0;
    //     nl = 0;
    //     while ((c = getchar()) != EOF) {
    //         if (c == ' ')
    //             ++bl;
    //         if (c == '\t')
    //             ++t;
    //         if (c == '\n')
    //             ++nl;
    //     }
    //     printf("\nblank count: %d", bl);
    //     printf("\ntab count: %d", t);
    //     printf("\nnewline count: %d\n", nl);
    // }
 
    // int main() {
    //     int c, nl;
    //     nl = 0;
    //     // count lines
    //     while ((c = getchar()) != EOF) {
    //         if (c == '\n') {
    //             ++nl;
    //         }
    //     }
    //     printf("%d\n", nl);
    //     return 0;
    // }
    // 1.5.2 Character Counting
    /* count characters in input; 1st version */
    // int main() {
    //     double nc;
    //     // trigger EOF w/ CTRL+D
    //     for (nc = 0; getchar() != EOF; ++nc) {
    //         ;
    //     }
    //     printf("\nlength: %.0f\n", nc);
    //     return 0;
    // }

    // 1.5.1 File Copying
    /* copy input to output; 1st version */
    // int main() {
    //     int c;
    //     while ((c = getchar()) != EOF) {
    //         putchar(c);
    //     }
    //     return 0;
    // }
    // int main() {
    //     printf("EOF = %d\n", EOF);
    //     return 0;
    // }

// // 1.04 Symbolic Constants
// #define LOWER  0      /* lower limit of table */
// #define UPPER  300    /* upper limit */
// #define STEP   20     /* step size */
// /* print Fahrenheit-Celsius table */
// int main() {
//     int fahr;
//     for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
//         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//     }
//     return 0;
// }

// 1.03 The for statement
// /* print Fahrenheit-Celsius table */
// int main() {
//     int fahr;

//     for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
//         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//     }
// }

// 1.02 Variables and Arithmetic Expressions
// /* print Fahrenheit-Celsius table
//     for fahr = 0, 20, ..., 300 */
// int main() {
//     float fahr, celsius;
//     float lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     // fahr = lower;
//     // printf("Fahrenheit-to-Celsius Conversion\n");
//     // printf("--------------------------------\n");
//     // while (fahr <= upper) {
//     //     celsius = 5 * (fahr-32) / 9;
//     //     printf("%3.0f\t%6.1f\n", fahr, celsius);
//     //     fahr = fahr + step;
//     // }

//     printf("Celsius-to-Fahrenheit Conversion\n");
//     printf("--------------------------------\n");
//     celsius = lower;
//     while (celsius <= upper) {
//         fahr = (celsius * 9/5) + 32;
//         printf("%6.1f\t%3.0f\n", celsius, fahr);
//         celsius = celsius + step;
//     }
    
//     return 0;
// }

// 1.01 Getting Started
// int main() {
//     printf("hello, world\n");
//     return 0;
// }