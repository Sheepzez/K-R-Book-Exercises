/* A program to print a histogram of the lengths of words in it's input. */
// It is easy to do horizontal, harder to do vertical.

#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, i, j, nc, nw, state;
    int wordLength[20];
    for (i = 0; i < 20; i++) {
        wordLength[i] = 0;
    }

    state = OUT;
    nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++wordLength[nc];
            nc = 0;
        } else if (state == OUT) {
            state = IN;
        }
        if (state == IN) {
            ++nc;
        }

    }
    printf("\nHistogram showing word length distribution for that input:");
    for (i = 0; i < 20; i++) {
        printf("\n%2d: ", i);
        for (j = 0; j < wordLength[i]; j++) {
            putchar('*');
        }
    }
    putchar('\n');

}
