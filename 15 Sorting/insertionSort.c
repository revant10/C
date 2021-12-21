#include <stdio.h>

// Function Declaration
void insertionSort(int arr[], int n);

// Main Function
void main()
{
    int a[100], n, i;

    printf("\n\nNumber of Elements: ");
    scanf("%d", &n);
    printf("\n");
    
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nBefore Sorting: ");
    for(i = 0; i < n; i++)
        printf(" %d ", a[i]);
    printf("\n");
    
    // Calling Insertion Sort
    insertionSort(a, n);

    printf("\nAfter Sorting: ");
    for(i = 0; i < n; i++)
        printf(" %d ", a[i]);
    printf("\n");
}

// Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, hole, value;

    for(i = 1; i < n; i++)
    {
        value = arr[i];
        hole = i-1;

        while(hole >= 0 && arr[hole] > value)
        {
            arr[hole + 1] = arr[hole];
            hole = hole-1;
        }

        arr[hole + 1] = value;
    }
}