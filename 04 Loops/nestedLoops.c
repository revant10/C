#include <stdio.h>

void main()
{
    int i, j;

    // outer loop
    for (i = 1; i <= 5; i++)
    {
        // inner loop
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}