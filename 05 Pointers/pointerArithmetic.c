#include <stdio.h>

void main()
{
    int var[] = {10, 20, 30, 40, 50};
    int i, *ptr;

    // Assigning array address to ptr
    ptr = var;

    for (i = 0; i < 5; i++)
    {
        printf("var[%d]: %d\t Address of var[%d]: %p\n", i, *ptr, i, ptr);

        // increment value of ptr
        ptr++;
    }
}