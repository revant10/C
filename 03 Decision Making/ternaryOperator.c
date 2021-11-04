// Ternary or Conditional operator

#include <stdio.h>

void main()
{
    int a = 10;
    int b = 11;
    int max;

    // this operatr is used as single line if-else
    // (condition)? 'statement if condition is true' : 'statement if condition is false'
    max = (a > b) ? a : b;

    printf("Maximum: %d\n", max);
}