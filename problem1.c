#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Count the number of lines in a file
 *
 */
int main()
{
    FILE *fp = NULL;
    int i = 1;
    int numChar = 0;
    char ch;
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch != '\0')
            numChar++;
        if (ch == '\n')
            i++;
    }
    fclose(fp);
    printf("Number of lines: %d\n", i);
    printf("Number of characters: %d\n", numChar);
    return (0);
}