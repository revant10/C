#include <stdio.h>
#include <math.h>

void main()
{
    double a, b, c, d, x1, x2;
    
    printf("Enter the coefficients:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    d = (b*b) - (4*a*c);

    if (d < 0)
        printf("Roots are imaginary.\n");
    else
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("The roots are:\n");
        printf("x1: %lf\tx2: %lf\n", x1, x2);
    }
}