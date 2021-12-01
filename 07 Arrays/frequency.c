#include <stdio.h>

void main()
{
    int n, i, x,
        a[50],
        count = 0;

    printf("How many elements to enter (<=50)? : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter element whose frequency is to be counted: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }

    printf("Frequency: %d\n", count);

}