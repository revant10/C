#include <stdio.h>

int * getArray()
{
    static int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        arr[i] = i+10;
    }

    return arr;
}

void main()
{
    int i;
    int *p;

    p = getArray();

    for (i = 0; i < 10; i++)
    {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }
}