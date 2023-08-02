#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Read the content of a file:
 * To handle a file you need a pointer that points to this file
 * we assign the return of fopen(file_name, "r") to the pointer, here we pass r as second
 * argument because we want to read the file content, the flag r will not create the file if it is not existed
 * we can read the file content character by character using fgetc(file_name), string by string using fgets(str, size_of_str, file_name)
 * Using loop and check the end of the file as condition allows us to read the entire file
 * while (!feof): this means, not the end of the file, in the while body we can use fgetc or fgets to read the file content (see example bellow)
 * Do not forget to close the file when you finished with it using fclose(file_name)
 * It is better to use the pointer that points to the file in the functions above
 *
 */

int main(void)
{

    FILE *fp = NULL;
    // char ch;
    char str[10];
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    while (!feof(fp))
    {
        // ch = fgetc(fp);
        // printf("%c", ch);
        fgets(str, 5, fp);
        printf("%s", str);
    }
    fclose(fp);
    return (0);
}