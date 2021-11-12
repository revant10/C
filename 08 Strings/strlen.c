#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello World";
    char str2[] = "HelloWorld";

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    // strlen() also counts white-space character in length
    printf("str1: %s\tLength: %d\n", str1, l1);
    printf("str2: %s\tLength: %d\n", str2, l2);
}