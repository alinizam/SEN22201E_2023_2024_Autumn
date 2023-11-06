#include <stdio.h>
#include <stdlib.h>

/*
Store functions with two arguments in an array. Call these functions 
and return the adress of the function having the minimum result.
*/

int avg(int a, int b) {
    return (a + b) / 2;
}

int sum(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int main() {
    int (*ptr[3])(int, int) = {avg, sum, minus};
    int minimum = ptr[0](3, 5);
    int (*minimum_function)(int, int) = ptr[0];

    for (int i = 1; i < 3; i++) {
        if (minimum > ptr[i](3, 5)) {
            minimum = ptr[i](3, 5);
            minimum_function = ptr[i];
        }
    }
    printf("%p\n", minimum_function);
    printf("%d", minimum);
}
