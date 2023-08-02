#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("info.txt", "r+");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fseek(fp, 6, SEEK_SET);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    // go back to the begining and make the fist letter lowercase
    rewind(fp);
    ch = fgetc(fp);
    printf("\n%c\n", ch);
    printf("%ld", ftell(fp));
    fclose(fp);
    return (0);
}