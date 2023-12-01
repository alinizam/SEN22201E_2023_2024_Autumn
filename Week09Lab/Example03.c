#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implement a function to copy a string array from 
one memory location to another with/without using the 
memcpy() function. Provide an example to 
demonstrate the function's functionality. */

// hello, world, how, are, you
// _    , _    , _  , _  , _

char** string_array_cpy(char** source, int length) {
    char** dest = malloc(length * sizeof(char*));
    for (int i = 0; i < length; i++) {
        dest[i] = malloc((strlen(source[i]) + 1) * sizeof(char));
        strcpy(dest[i], source[i]);
    }
    return dest;
}

char** string_array_memcpy(char** source, int length) {
    char** dest;
    memcpy(dest, source, length);
    return dest;
}

int main(void)
{
    char* s1 = "awerawe";
    char* s2 = "afaweg";
    char* s3 = "awefaweawe";

    char* sarray[3] = {s1, s2, s3};
    
    char** result = string_array_cpy(sarray, 3);
    
    printf("%s", result[0]);

    return 0;
}
