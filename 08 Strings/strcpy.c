#include <stdio.h>
#include <string.h>

void main()
{
	char str1[10] = "Hello";
	char str2[10];

	// Syntax
	// strcpy(destination, source);
	strcpy(str2, str1);

	printf("String 1: %s\n", str1);
	printf("String 2: %s\n", str2);
}
