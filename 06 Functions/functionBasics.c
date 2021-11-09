#include <stdio.h>

// Basic syntax for function
/*
return_type function_name(arguments if any)
{
    function body
    ...
    ...

    return variable/value;
}
*/

int max(int x, int y)
{
    // declaring local variable
    int max;
    if (x > y)
        max = x;
    else
        max = y;

    // returning the result to function call
    return max;
}

void main()
{
    int a = 10;
    int b = 11;

    // calling the function and assigning the return value to variable
    int result = max(a, b);
    
    printf("Maximum: %d\n", result);
}