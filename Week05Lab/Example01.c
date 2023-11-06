#include <stdio.h>
#include <stdlib.h>

/*
Using a static variable and pointer, design a function 
that takes two arrays and returns the sum of their elements 
using another array.
*/

#define SIZE 5
int* elementwise_sum(int a[SIZE], int b[SIZE]) {
    static int sum[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        sum[i] = a[i] + b[i];
    }
    return sum;
}

int main(void)
{
    int a[SIZE] = {0, 3, 2, 1, 3};
    int b[SIZE] = {0, 1, 5, 1, 3};
    int* c = elementwise_sum(a, b);
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *c);
        c++;
    }
    
    return 0;
}

