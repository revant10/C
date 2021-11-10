#include <stdio.h>

void printArray(int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {100, 101, 102, 103, 104, 105};

    printf("Array 1: ");
    // passing array a1 to function printArray()
    printArray(a1, 5);

    printf("Array 2: ");
    // passing array a2 to function printArray()
    printArray(a2, 6);
}