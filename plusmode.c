#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Plus mode: r+, w+, a+
 * 1 - r+: open an existed file for reading and writing, writing in a file using r+
 * will make the cursor starts from the begining of the file
 * r+ is basically used to modify a file
 *
 *
 */

int main()
{
    // use r+
    char str[10];
    FILE *fp = NULL;
    fp = fopen("info.txt", "r+");
    // test.txt does not exist, so error will be printed
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(str, 5, fp);
        printf("%s", str);
    }
    // fputs("Hello", fp);
    // fputc('E', fp);
    fclose(fp);
    return (0);
}
