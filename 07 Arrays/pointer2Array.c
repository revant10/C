#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p;

    // Assigning address of array (arr[0] to p)
    p = arr;

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]: %d\n", i, *p);
        // incrementing pointer value for next address
        p++;
    }
}