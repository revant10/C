#include <stdio.h>

void main()
{
    FILE *fp;
    
    // Opening a file in write mode.
    // In write mode if a file is not present a new file will be created.
    // If file exists, contents will we overwritten.
    fp = fopen("output.txt", "w");
    if (fp == NULL)
        printf("Error!!!\n-> Unable to open file in write mode.");
    else
    {
        fprintf(fp, "This is a sample output file.");
        printf("Data written successfully.\n");
    }
    fclose(fp);
}