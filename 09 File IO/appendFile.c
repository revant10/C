#include <stdio.h>

void main()
{
    FILE *fp;

    // Opening a file in append mode.
    // In append mode if a file is not present a new file will be created.
    // If file exists, new content will be appended to original contents.
    fp = fopen("mainFile.txt", "a");
    if (fp == NULL)
        printf("Error!!!\n-> Unable to open file in append mode.");
    else
    {
        fprintf(fp, "\nThis is appended line.");
        printf("Data written successfully.\n");
    }
    fclose(fp);
}