#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is an Even Number.\n", n);
    else
        printf("%d is an Odd Number.\n", n);
}