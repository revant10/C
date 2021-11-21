#include <stdio.h>

void fibonacci(int n)
{
    if (n < 0)
        printf("Enter a valid number.\n");
    else if (n == 0)
        printf("No terms to print\n");
    else if (n == 1)
        printf("0\n");
    else if (n == 2)
        printf("0\n1\n");
    else
    {
        int t1 = 0;
        int t2 = 1;
        int t3;
        int i = 1;
        printf("0\n1\n");
        while (i < n-1)
        {
            t3 = t1 + t2;
            printf("%d\n", t3);
            t1 = t2;
            t2 = t3;
            i++;
        }
    }
}

void main()
{
    int n;
    printf("Number of terms for fibonacci series: ");
    scanf("%d", &n);
    fibonacci(n);
}