#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * a+: a mode is for appending content at the end of the file
 * a+: opens a file for both reading and appending(not writing)
 * a+ is like a, w and w+,if the file does not exist it creates it
 * r+ vs w+ vs a+:
 * r+: reading and writing and do not create a new file
 * w+: reading, writing, creating new file and erasing the prev content
 * a+: readind and appending and creating new file
 */

int main()
{

    FILE *fp = NULL;
    char ch;
    fp = fopen("info.txt", "a+");
    if (fp == NULL)
    {
        printf("Error, can't open the file\n");
        exit(1);
    }
    fputs("\nappended with a+", fp);

    rewind(fp);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);

    return (0);
}