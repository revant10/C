#include <stdio.h>

void main()
{
    FILE *fr, *fw;
    char c;

    // Open original filein read mode
    fr = fopen("sample.txt", "r");

    // OPen duplicate file in write mode
    fw = fopen("sample_copy.txt", "w");

    if (fr == NULL)
        printf("Error!!!\n-> Unable to open Original File.");
    else if (fw == NULL)
        printf("Error!!!\n-> Unable to open Duplicate File.");
    else
    {
        c = fgetc(fr);
        while (c != EOF)
        {
            fputc(c, fw);
            c = fgetc(fr);
        }
        printf("File copied successfully.\n");
    }
    fclose(fr);
    fclose(fw);
}