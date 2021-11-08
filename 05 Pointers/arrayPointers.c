#include <stdio.h>

void main()
{
    int var[] = {1, 2, 3, 4, 5, 6};
    int i, *ptr[6];

    // assigning the address of the integers to pointer array elements
    for (i = 0; i < 6; i++)
    {
        ptr[i] = &var[i];
    }

    // printing values using pointer
    for (i = 0; i < 6; i++)
    {
        printf("var[%d]: %d\n", i, *ptr[i]);
    }

    printf("\n");

    // Similllarly we can use an array of pointers to character to store a list of strings
    char *names[] = {"Ironman", "Captain America", "Thor", "Hulk", "Black Widow", "Hawkeye"};

    for (i = 0; i < 6; i++)
    {
        printf("names[%d]: %s\n", i, names[i]);
    }
}