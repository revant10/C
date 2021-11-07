#include <stdio.h>

void main()
{
    // actual variable declaration
    int  i = 20;
    // pointer variable declaration
    int  *ip;

    // store address of i in pointer variable
    ip = &i;  

    printf("Address of i variable: %x\n", &i);

    // address stored in pointer variable
    printf("Address stored in ip variable: %x\n", ip);

    // access the value using the pointer
    printf("Value of *ip variable: %d\n", *ip);
}