#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        int fact = 1, i = 1;
        while (i <= n)
        {
            fact *= i;
            i++;
        }
        return fact;
    }
}


void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Can't calculate factorial of negative numbers.\n");
    else
    {
        int fact = factorial(n);
        printf("Factorial of %d is: %d\n", n, fact);
    }
}