#include <stdio.h>

float getAvg(int *a, int len)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < len; i++)
    {
        sum += a[i];
    }

    avg = (double) sum / len;

    return avg;
}

void main()
{
    int arr[] = {22, 24, 16, 3, 12};
    int *ptr;
    // Assigning the address of array to pointer
    ptr = arr;

    // Passing the pointer to Array
    double avg = getAvg(ptr, 5);

    printf("Average: %f\n", avg);
}