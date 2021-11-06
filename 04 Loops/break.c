// break statement is used to get the control out of a loop.

#include <stdio.h>

void main()
{
    int i;

    for (i = 1; i <21; i++)
    {
        if (i == 15)
        {
            // when the value of i will be 15 the control will shift
            // out of the for loop.
            break;
        }
        printf("%d\n", i);
    }

    // for while loop un-comment the following code
    /*
    i = 1;
    while (i < 21) 
    {
        if (i == 15)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    */
}