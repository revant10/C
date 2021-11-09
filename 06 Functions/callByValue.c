/*
Call by value is Default way
The code within a function cannot alter the arguments 
used to call the function.
*/

#include <stdio.h>

void swap(int x, int y)
{
    // declaring local variable:
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void main()
{
    int a = 10;
    int b = 11;

    printf("Before Swap: a: %d, b: %d\n", a, b);

    // calling swap function
    swap(a, b);

    printf("After Swap: a: %d, b: %d\n", a, b);
}