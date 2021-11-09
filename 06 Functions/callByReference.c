/*
The call by reference method of passing arguments to a function
copies the address of an argument into the formal parameter.
Inside the function, the address is used to access the actual
argument used in the call. It means the changes made to the
parameter affect the passed argument.
*/

#include <stdio.h>

// here we are using pointers in the arguments
void swap(int *x, int *y)
{
    // declaring local variable
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    int a = 10;
    int b = 11;
     
    printf("Before swap: a: %d, b: %d\n", a, b);

    // calling the swap function
    // here we are passing the address of 
    // a and b variables
    swap(&a, &b);

    printf("After swap: a: %d, b: %d\n", a, b);
}