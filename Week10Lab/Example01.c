#include <stdio.h>
#include <stdlib.h>

// Write a program to store keyboard 
// input in a text file.

int main(void)
{
    char array[10000];
    printf("Write the file content");
    gets(array);

    FILE* fp = fopen("keyboardinput.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "%s", array);
    }
    return 0;
}
