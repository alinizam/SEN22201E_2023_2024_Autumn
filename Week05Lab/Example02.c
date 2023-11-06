#include <stdio.h>

// Return a function pointer from a function calculating sum of two number

int sum(int a, int b) {
    return a + b;
}

void* returns_func_ptr() {
    return sum;
}

int main() {
    int (*sum_ptr)(int, int) = returns_func_ptr();

    printf("%d\n", sum_ptr(2, 5));
    printf("%d", sum(2, 5));
}
