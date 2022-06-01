#pragma GCC diagnostic ignored "-Wimplicit-int"

#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */
main() {
    int c;

    c = getchar() != EOF;
    printf("%d\n", c);
}
