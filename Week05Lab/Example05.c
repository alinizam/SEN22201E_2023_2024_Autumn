#include <stdio.h>
#include <stdlib.h>
/*
Define and test a macro function calculating
absolute value
max value of two integer
*/
// Override boolean TRUE and FALSE values using new macro definitions
/*
Using void __attribute__((constructor)) and 
__attribute__((destructor)) write open and close 
datetime to screen
*/

// Create an #error when TRUE macro is not defined


__attribute__((constructor))
void programStart() {
    printf("Program starts at %s", __TIME__);
}

__attribute__((destructor))
void programEnd() {
    printf("Program ends at %s", __TIME__);
}

#ifdef TRUE
#undef TRUE
#define TRUE 1
#endif

#ifdef FALSE
#undef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#error error here
#endif

#define ABS(x) x < 0 ? x * -1 : x

#define MAX(x, y) x < y ? y : x

int main(int argc, char const *argv[])
{
    
    for (int i = 1; i < 100000; i++);
    // printf("Absolute of %d is %d\n", -10, ABS(-10));
    // printf("Max between %d and %d is %d", 15, 10, MAX(15, 10));
}
