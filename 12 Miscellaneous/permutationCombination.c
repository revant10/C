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
    int n, r, c, p;

    printf("Enter value 'n': ");
    scanf("%d", &n);
    printf("Enter value 'r': ");
    scanf("%d", &r);

    p = factorial(n) / factorial(n-r);
    c = p / factorial(r);

    printf("Permutations: %d\nCombinations: %d\n", p, c);
}