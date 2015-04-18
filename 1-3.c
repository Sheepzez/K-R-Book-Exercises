#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300;

    floating-point version */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // Lower limit of temperature table
    upper = 300;    // Upper Limit
    step = 20;      // Step Size

    fahr = lower;
    printf("Fahr  Cel\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
