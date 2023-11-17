#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Creates a memory to store a dynamic 
string ("Fatih Sultan Mehmet" can be used)
Using a double pointer find and store
the word in a string.
Write a function that takes an array
and returns old and even number sum in a struct.
*/

int main() {
    char string[] = "Fatih Sultan Mehmet";
    char* ptr = (char*)malloc(sizeof(char)*strlen(string));
    ptr = strcpy(ptr, string);

    char** words = malloc(0);
    int current_pos = 0;
    int word_count = 0;
    for (int i = 0; i < strlen(string) + 1; i++) {
        if (string[i] == ' ' || string[i] == '\0') {
            word_count++;
            int length = i - current_pos;
            char *a = malloc((length) * sizeof(char) + 1);
            for (int j = 0; j < length; j++)
                a[j] = string[j + current_pos];
            a[length] = '\0';
            current_pos = i + 1;
            words = realloc(words, word_count);
            words[word_count - 1] = a;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%s\n", words[i]);
    }

}