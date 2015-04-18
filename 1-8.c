#include <stdio.h>

main() {
    int c, nb, nt, nl;

    nb = nt = nl = 0;
    printf("Program to count occurrences of blanks, tabs, and new lines\n");
    while((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        } else if (c == '\t') {
            nt++;
        } else if (c == ' ') {
            nb++;
        }
    }
    printf("Blanks: %d, Tabs: %d, New Lines: %d\n", nb, nt, nl);
}
