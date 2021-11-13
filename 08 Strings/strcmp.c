/*
strcmp(s1, s2);
Returns 0 if s1 and s2 are the same; 
less than 0 if s1<s2; 
greater than 0 if s1>s2.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";
    char str3[] = "Hello";

    printf("str1: %s\tstr2: %s\tstr3: %s\n", str1, str2, str3);
    printf("strcmp(str1, str2), %d\n", strcmp(str1, str2));
    printf("strcmp(str1, str3), %d\n", strcmp(str1, str3));
    printf("strcmp(str2, str3), %d\n", strcmp(str2, str3));
}