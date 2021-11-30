#include <stdio.h>

// Using Recursive Function
void convert(int num, int base)
{
    int r;

    if (num != 0) // Escape condition
    {
        r = num % base;
        convert(num/base, base);

        if (r < 10)
            printf("%d", r);
        else
            printf("%c", 55 + r); // in case of character for Hexadecimal
    }
}

void main()
{
    int num, base;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter base: ");
    scanf("%d", &base);
    
    convert(num, base);
    printf("\n");
}
