#include <stdio.h>

main() {
    int c;
    printf("Program to copy input to output, replacing each tab by \\t and each backspace by \\b\n");
    printf("HINT: On Unix ^H is the backspace key.");
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\b') {
            printf("\\b");
        }
        else if (c == '\\') {
            printf("\\\\");
        }
        else {
            putchar(c);
        }
    }
}
