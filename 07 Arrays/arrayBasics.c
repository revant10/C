/*
Arrays a kind of data structure that can store a fixed-size
sequential collection of elements of the same type.
Array index starts at 0;
*/

#include <stdio.h>

void main()
{
    int i, n = 100;

    // Putting values in array

    // Method 1
    // int arr1[] = {1, 2, 3, 4, 5};

    // Method 2
    int arr2[10];

    for (i = 0; i < 10; i++)
    {
        arr2[i] = n;
        n++;
    }

    // Printing values of Array
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]: %d\n", i, arr2[i]);
    }
}