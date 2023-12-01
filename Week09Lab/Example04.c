#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to set all elements of an integer 
array to a specified value without using the 
memset() function. Verify the correctness of your 
program with a sample array.
*/

int main(void)
{
    int array[] = {0, 4, 5, 1, 12, 435, 1, 521}; // gibberish
    int value = 5;
    // size of array is = 8 * 4 bytes = 32 bytes
    int* new_array = malloc(sizeof(array));
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        new_array[i] = value;
    }

    return 0;
}
