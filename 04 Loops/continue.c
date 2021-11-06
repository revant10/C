// continue statement is used to skip the statements in the loop

#include <stdio.h>

void main()
{
    int i;

    for  (i = 1; i <= 20; i++)
    {
        if (i == 10)
        {
            // here if i equals 10 then the rest of the statements in the 
            // loop will be skiped
            continue;
        }
        printf("%d\n", i);
    }

    // for while loop uncomment the following lines of code
    /*
    i = 1;
    while (i <= 20)
    {
        if (i == 10)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    */
}