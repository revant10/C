/*
This function takes two strings s1 and s2 as an argument and
finds the first occurrence of the sub-string s2 in the string s1.
The process of matching does not include the terminating 
null-characters(‘\0’), but function stops there.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[] = "Hello World";
    char s2[] = "lo";
    char* p ;

    // Getting the addresss of substring's first occurence
    p = strstr(s1, s2);

    printf("Firest occurence: %s\n", p);
}