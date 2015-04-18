/* Write a program to print all input lines that are longer than 90 characters */
#include <stdio.h>
#define PRINTLIM 80
#define MAXLINE 1000

int getLine(char line[], int maxline);

main() {
    int len;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0) {
        if (len > PRINTLIM) {
            printf("%s", line);
        }
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
