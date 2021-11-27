#include <stdio.h>

int GCD(int m, int n);

void main()
{
    int m, n, lcm, gcd;

    printf("Enter first number: ");
    scanf("%d", &m);
    printf("Enter second number: ");
    scanf("%d", &n);

    gcd = GCD(m, n);

    lcm = (m * n) / gcd;

    printf("LCM: %d\nGCD: %d\n", lcm, gcd);
}

int GCD(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}