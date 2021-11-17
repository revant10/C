/*
A union is a special data type available in C that allows to store
different data types in the same memory location. You can define
a union with many members, but only one member can contain a
value at any given time. Unions provide an efficient way of
using the same memory location for multiple-purpose.
*/

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

void main()
{
    union Data data;        

    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");


    // here the final allocation will be to the string
    // because it has be assigned at last.
    // And union can hold any one of the members
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
}