#include<stdio.h>
#include<stdlib.h>

// Function Declarions
int mergeSort(int arr[], int n);
void merge(int left[], int nL, int right[], int nR, int arr[]);

// Main Function
void main()
{
    int n, a[50], i;

    printf("Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elemnts:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nBefore Sorting: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Calling Merge Sort Function
    mergeSort(a,n);

    printf("\nAfter Sorting: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// Merge Sort Function
int mergeSort(int arr[], int n)
{
    if(n < 2)
        return 0;
    
    int mid, i;
    int left[50], right[50];

    mid = n/2;

    for(i = 0; i <= mid-1; i++)
        left[i] = arr[i];
    
    for(i = mid; i <= n-1; i++)
        right[i-mid] = arr[i];
    
    mergeSort(left, mid);
    mergeSort(right, n-mid);
    merge(left, mid, right, n-mid, arr);
}

// Merge Function
void merge(int left[], int nL, int right[], int nR, int arr[])
{

    int i = 0, j = 0, k = 0;

    while((i < nL) && (j < nR))
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i = i+1;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j = j+1;
        }
    }

    while(i < nL)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < nR)
    {
        arr[k] = right[j];
        j = j+2;
        k = k+2;
    }
}