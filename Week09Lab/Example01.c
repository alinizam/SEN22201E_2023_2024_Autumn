#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Write a function to calculate the 
length of a given string without using the strlen() function
*/

int custom_strlen(char* string) {
    int length = 0;
    while (*string != '\0') {
        length++;
        string++;
    }
    return length;
}

int main(void) {
    printf("%d", strlen("merhaba"));
    return 0;
}
