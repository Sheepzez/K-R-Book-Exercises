#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for celsius = 0, 20, ..., 300;

    floating-point version */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // Lower limit of temperature table
    upper = 300;    // Upper Limit
    step = 20;      // Step Size

    celsius = lower;
    printf("Cel  Fahr\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
