// Nested if-else or if-else ladder

#include <stdio.h>

void main()
{
    int a = 10;
    int b = 10;

    if (a < b)
    {
        printf("a is less than b.\n");
    }
    else
    {
        // this is nested if-else inside the else block of first if-else.
        if (a > b)
        {
            printf("b is lesser than a.\n");
        }
        else
        {
            printf("a is equal to b.\n");
        }
    }
}