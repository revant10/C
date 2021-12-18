#include<stdio.h>

// Function declaration
void bubbleSort(int arr[], int n);

void main()
{
    int a[50];
    int i, n;

    printf("Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elemnts:\n", n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n");
    
    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    printf("\n");

    // Calling Bubble Sort Function
    bubbleSort(a, n);

    printf("\nSorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\n");
}


// Bubble Sort Function
void bubbleSort(int arr[], int n)
{
    int i, j, temp, max, min;

    for(i = 0; i < n; i++)
    {
        for(j = 1; j < n-i; j++)
        {
            if(arr[j-1] > arr[j])
            {
                temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}