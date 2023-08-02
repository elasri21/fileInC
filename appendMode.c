#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Append Mode In File Handling
 * First of all we have to open the file with fopen(file_name, mode) and assign the result to fp pointer
 * We have to use a as mode so we can append new content to the previous one
 * We can use any function that adds content to a file like fputs(str, fp), fputc(char, fp) or fprintf(fp, "format", str)
 * a (append mode) or w (write mode) both create the file if it is not existed, the diference between a mode and w mode is
 * a mode append the content to the end of the file, but w mode overide the file(erase the content file and add the new one)
 * with fprintf() we can add a new line character to make the cursor starts from the begining of a new line("\nFormat") <==> (fp, "\n%s", str)
 */

int main(void)
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("append.txt", "a");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    printf("Enter the content you want to append:\n");
    gets(str);
    // fprintf(fp, "\n%s", str);
    fputs(str, fp);
    fclose(fp);

    return (0);
}