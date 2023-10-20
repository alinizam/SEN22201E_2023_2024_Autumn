#include <stdio.h>
#include <stdlib.h>

int main() {

    //Convert string to uppercase using pointer (A 65, a 97)
    //hello -> HELLO
    //HellO -> HELLO
    //97-65 = 32
    //b-B = 32
    //c-C = 32
    //65-32 = 33
    
    char string_array[100];

    printf("Give string:");
    scanf("%s", string_array);

    char* string_ptr = string_array;

    while (*string_ptr != '\0') {
        if ((int)*string_ptr >= 97 && (int)*string_ptr <= 122)
            *string_ptr = *string_ptr - 32;
        string_ptr++;
    }
    printf("%s", string_array);
}