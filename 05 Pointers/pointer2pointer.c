# include <stdio.h>

void main()
{
    int var = 100;
    int *ptr;
    int **ptr2ptr;

    // Assigning address of var to ptr
    ptr = &var;

    // Assigning address of ptr to ptr2ptr
    ptr2ptr = &ptr;

    printf("var: %d\n", var);
    printf("*ptr: %d\n", *ptr);
    printf("**ptr2ptr: %d\n", **ptr2ptr);
    printf("\n");
    printf("Adress of var: %p\n", &var);
    printf("ptr: %p\n", ptr);
    printf("Address of *ptr: %p\n", &ptr);
    printf("ptr2ptr: %p\n", ptr2ptr);
}