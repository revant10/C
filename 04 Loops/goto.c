// use of goto statement should be avoided as it makes confusion in flow of program.

#include <stdio.h>

void main()
{
    int i = 1;

    HERE: printf("Here's the statement..\n");

    while (i <= 10)
    {
        if (i == 5)
        {
            i++;
            goto HERE;
        }
        printf("%d\n", i);
        i++;
    }

}