#include <stdio.h>
#include <math.h>

void main()
{
    // Integer Remainder
    int a = 10;
    int b = 20;
    int c = -30;
    int d = -40;

    printf("a: %d\tb: %d\tc: %d\td: %d\n", a, b, c, d);
    printf("a %% b = %d\n", a % b);
    printf("c %% d = %d\n", c % d);
    printf("a %% d = %d\n", a % d);
    printf("c %% b = %d\n", c % b);

    printf("\n");

    // Currently unsure about floating numbers
    // Float Remainder
    // float w = 10.0;
    // float x = 20.0;
    // float y = -30;
    // float z = -40;
    // printf("w: %f\tx: %f\ty: %f\tz: %f\n", w, x, y, z);
    // printf("w %% x = %f\n", fmodf(w, x));
    // printf("y %% z = %f\n", fmodf(y, z));
    // printf("w %% z = %f\n", fmodf(w, z));
    // printf("y %% x = %f\n", fmodf(y, x));
}