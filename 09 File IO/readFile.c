#include <stdio.h>

void main()
{
    FILE *fp;
    char c;

    fp = fopen("input.txt", "r");

    if(fp == NULL)
        printf("Error!!\n-> Unable to open file.");
    else
    {
        c = fgetc(fp);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(fp);
        }
    
        fclose(fp);
    }
    printf("\n");
}