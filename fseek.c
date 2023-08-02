#include <stdio.h>
#include <stdlib.h>

/**
 * Seek means to try to find or get something
 * fseek: moves the cursor to a specific position
 * Syntax: fseek(fp, offset, position)
 * 1 - fp: file,
 * 2- offset: long int(how many bytes you want to move, positive value mean moving forward
 * and negative values mean moving backward)
 * 3 - position: int (The position you want to start
 * from the begining: SEEK_SET
 * from current position: SEEK_CUR
 * from the end: SEEK_END)
 * if the file is open with r+(reading and writing) you cam move to a specific position
 * and update it
 *
 */

int main()
{

    FILE *fp = NULL;
    FILE *fp2 = NULL;
    fp = fopen("info.txt", "r");
    fp2 = fopen("append.txt", "r+");
    char ch;
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fseek(fp, 10, SEEK_SET);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fseek(fp, -2, SEEK_END);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);

    // working with file 2
    fseek(fp2, 6, SEEK_SET);
    fputs("everybody", fp2);
    fclose(fp2);
    return (0);
}