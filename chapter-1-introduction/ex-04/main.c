#pragma GCC diagnostic ignored "-Wimplicit-int"

#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = -20, -10, ..., 160 */
main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = -20;
    upper = 160;
    step = 10;

    celsius = lower;

    printf("%3s %6s\n", "C", "F");

    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
