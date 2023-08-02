#include <stdio.h>
#include <stdlib.h>

/**
 * Copy the content of a fule into another
 * Tp copy the content of a file into another, we use one of the method bellow
 * inside a loop, and the condition that will be checked is the end of file
 * ((c = fgetc(f1)) != EOF) or (!feof(f1))
 * 1 - c = fgetc(f1)  ==> fputc(c, f2)
 * Or
 * 2 - fgets(str, size, f1)  ===> fputs(str, f2)
 *
 */
int main()
{
    FILE *fp = NULL;
    FILE *fp2 = NULL;
    char ch;
    char str[5];
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fp2 = fopen("dest.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error\n");
        exit(2);
    }
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     fputc(ch, fp2);
    //     printf("%c", ch);
    // }
    while (!feof(fp))
    {
        fgets(str, 5, fp);
        fputs(str, fp2);
    }
    fclose(fp2);
    fclose(fp);
    return (0);
}