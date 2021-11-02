#include <stdio.h>

void main()
{
    int a = 100;
    int b = 3;
    int c, d;
    float f;
    int e = 65;
    char g;

    // Division of integers will give result without decimal point
    c = a / b;
    // Type casting integer division to float
    f = (float) a / b;
    //Type casting a float to integer
    d = (int) f;
    // Type casting an integer to character
    g = (char) e;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    printf("f: %f\n", f);
    printf("g: %c\n", g);

}