#include <stdio.h>

int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);
}