#include <stdio.h>

void main()
{
    // Creating a 3 X 3 array
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    

    // Printing the 2D Array
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}