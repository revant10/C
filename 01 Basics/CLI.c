#include <stdio.h>

void main(int argc, char *argv[])
{
    printf("Argument 0: %s\n", argv[0]);
    int i = 1;
    // This loop will print rest of the arguments if they exists
    // *The arguments are of string type, type cast into required
    // type brfore operating on them.
    while (i < argc)
    {
        printf("Argument %d: %s\n", i, argv[i]);
        i++;
    }
}