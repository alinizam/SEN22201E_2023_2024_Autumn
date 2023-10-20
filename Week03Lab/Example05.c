#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Take a string parameter from the user and hold it in an
    array, then find the string length using a pointer
    (strings end with the '\0' character).
    */
   char string_array[100];

   printf("Give string:");
   scanf("%s", string_array);

   char* string_ptr = string_array;

    int i = 0;
   while (*string_ptr != '\0') {
    i++;
    string_ptr++;
   }
   printf("Length of array is %d", i);

}