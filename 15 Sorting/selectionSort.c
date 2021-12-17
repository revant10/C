#include<stdio.h>

// Declaring Function
void selectionSort(int arr[], int n);

void main()
{
    int n, i;
    int a[50];

    printf("Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elemnts:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    printf("\nBefore Sorting: ");
        for(i=0; i<n; i++)
            printf("%d ",a[i]);
    
    // Sorting
    selectionSort(a, n);

    printf("\nAfter Sorting: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int temp, min, c, d;

    for (c = 0; c < (n - 1); c++)
    {
        min = c;
        for (d = c + 1; d < n; d++)
        {
            if (arr[min] > arr[d])
            min = d;
        }
        temp = arr[c];
        arr[c] = arr[min];
        arr[min] = temp;
    }
}