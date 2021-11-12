#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello";
    char str2[] = "World!";

    // *Note: strcat() won't add any white-space between strings
    printf("%s\n", strcat(str1, str2));
}