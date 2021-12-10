#include <stdio.h>
#include <stdlib.h>

void main()
{

	int *ptr;
	int n, i;

	// Get the number of elements for the array
	n = 5;
	printf("Enter number of elements:  ");
	scanf("%d", &n);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{

		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i)
		{
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: \n");
		for (i = 0; i < n; ++i)
		{
			printf("%d, ", ptr[i]);
		}

		// Get the new size for the array
		printf("\n\nEnter the new size of the array: ");
		scanf("%d", &n);

		// Dynamically re-allocate memory using realloc()
		ptr = realloc(ptr, n * sizeof(int));

		// Memory has been successfully allocated
		printf("Memory successfully re-allocated using realloc.\n");

		// Get the new elements of the array
		for (i = 5; i < n; ++i)
		{
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: \n");
		for (i = 0; i < n; ++i)
		{
			printf("%d, ", ptr[i]);
		}

		printf("\n\n");

		free(ptr);
	}
}
