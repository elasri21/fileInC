#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * w+: open a file for reading and writing
 * creates a new file if the file does not exist
 * if the file is existed, w+ arases the previous content
 * when the writing process was end the cursor will be at the end of the file, so to make it again at the begining
 * we use: rewind(fp);
 *
 */

int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("info.txt", "w+");
    if (fp == NULL)
    {
        printf("Error, can not open the file.\n");
        exit(1);
    }
    // 1 - write the following at the file
    fputs("Hello with w+", fp); // after this line the cursor willbe at the end of the file
    // 2 - this will put again the cursor at the begining of the file
    rewind(fp);
    // 3 - loop through the file and print its content character by character
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    // 4 - Always close a file when you done with it
    fclose(fp);

    return (0);
}