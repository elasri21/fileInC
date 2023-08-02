#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * File In C Programming
 * A file is a sequence of bytes, where we can store data
 * So we can use it in the future
 * There are two types of files
 * * 1 - Text files(.txt): These files stores data in simple text
 * * 2 - Binary files(.bin): These files store data in form of 0's and 1's
 * Operation On files:
 * * create a file, Open a file, Read a file, write into a file, close a file ...
 * Operation on files called handling files, and to handle a file with C programming
 * you need pointers with type "FILE *ptr" (letters of file word should be capital)
 */

int main(void)
{
    FILE *file1 = NULL;
    char ch = 'a';
    int a = 10;
    char name[20] = "Jenny";
    file1 = fopen("info.txt", "w");
    if (file1 == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fputc(ch, file1);
    fputs(name, file1);
    fprintf(file1, "%d %c", a, ch);

    fclose(file1);
    return (0);
}