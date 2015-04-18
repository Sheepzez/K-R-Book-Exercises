#include <stdio.h>

main() {
    int c;
    printf("Program to copy input to output, replacing multiple blanks in a row, by a single blank.\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ') {

            }
            putchar(' ');
            if (c == EOF) break;
        }
        putchar(c);
    }
}
