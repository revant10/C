#include <stdio.h>

// Function Declaration
int partition(int arr[], int start, int end);
void quickSort(int arr[], int start, int end);

// Main Function
void main()
{
    int n, a[50], i, start;

    printf("Number of Elements: ");
    scanf("%d", &n);
    
    printf("\n\nEnter %d elemnts:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    printf("\nBefore Sorting: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    
    start = 0;
    
    //Calling Quick Sort Function
    quickSort(a, start, n-1);
    
    printf("\nAfter Sorting: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    printf("\n");
}

// Partition Function
int partition(int arr[],int start,int end)
{
    int temp,pindex,i,pivot;
    
    pivot = arr[end];
    pindex = start;

    for(i=start;i<=end-1;i++)
    {
        if(arr[i] <= pivot)
        {
            temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }

    temp = arr[pindex];
    arr[pindex] = arr[end];
    arr[end] = temp;

    // returning postion index
    return pindex;
}

// Quick Sort Function
void quickSort(int arr[], int start, int end)
{
    int pindex;
    
    if(start<end)
    {
        pindex = partition(arr, start, end);
        quickSort(arr, start, pindex-1);
        quickSort(arr, pindex+1, end);
    }
}