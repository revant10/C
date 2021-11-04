#include <stdio.h>

void main()
{
    int a = 10;
    int b = 11;

    // here we check for the truthness of the condition
    if (a < b)
    {
        // this will be executed if the condition is true
        printf("a is less than b.\n");
    }
    // if the condition is false, the control will pass to else block
    // or else it will skip the else block
    else
    {
        // this will be executed if the condition is false
        printf("b is less than a.\n");
    }

}