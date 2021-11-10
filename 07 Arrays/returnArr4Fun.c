#include <stdio.h>

int *getArray()
{
    static int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i+1;
    }
    return arr;
}

void main()
{
    int *a;
    int i;

    a = getArray();

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
}