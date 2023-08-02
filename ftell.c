#include <stdio.h>
#include <stdlib.h>

/**
 * ftell: it tells use where the cursor is right now
 * it is also help to find the length of a file
 * SyntaxL log int ftell(fp);
 * Return: return the current position of the corsor
 */

int main()
{

    FILE *fp = NULL;
    char ch;
    char str[50];
    long int pos;
    fp = fopen("append.txt", "r");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    pos = ftell(fp);
    printf("%ld\n", pos);
    fseek(fp, 6, SEEK_SET);
    printf("%ld\n", ftell(fp));
    ch = fgetc(fp);
    printf("%c\n", ch);
    printf("%ld\n", ftell(fp));
    fscanf(fp, "%s", str);
    printf("%s\n", str);
    printf("%ld\n", ftell(fp));
    // trick: length of the filr
    fseek(fp, 0, SEEK_END); // mode the cursor to the end of the file
    long int length = ftell(fp);
    printf("Length: %ld\n", length);
    fclose(fp);
    return (0);
}