#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a function that makes a copy of string

char* copy(char* string) {
    /*
    char* cpy = (char*)malloc(0);
    strcpy(cpy, string);
    return cpy;
    */
    char* cpy = (char*)malloc(strlen(string) + 1);
    for (int i = 0; i < strlen(string); i++) {
        cpy[i] = string[i];
    }
    cpy[strlen(string)] = '\0';
    return cpy;
}

int main(void)
{
    char* temp = "awfawefawgawew";
    char* cpy = copy(temp);

    printf("%p %p, %s", temp, cpy, cpy);
    return 0;
}
