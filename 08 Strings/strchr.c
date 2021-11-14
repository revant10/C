#include <stdio.h>
#include <string.h>

void main()
{
    char s1[] = "Hello World";
    char c = 'o';
    char *p;

    p = strchr(s1, c);

    printf("First Occurence at address: %p\n", p);
}