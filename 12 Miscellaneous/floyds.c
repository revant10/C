/* Flyod's Triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14
*/

#include <stdio.h>

void main()
{
    int n, i, j, k = 0;

    printf("Number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", ++k);
        }
        printf("\n");
    }
}