#include <stdio.h>

void main()
{
    int i = 10;

    // In case of do-while loop the block is executed atleast once
    // even if the condition is not true.
    do
    {
        printf("This from do block!!\n");
    }while(i < 5);
}