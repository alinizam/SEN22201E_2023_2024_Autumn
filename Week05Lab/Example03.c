#include <stdio.h>

// Return a function pointer from a function calculating sum of two number

int sum(int a, int b) {
    return a + b;
}

int avg(int a, int b) {
    return (a + b) /2 ;
}


void* returns_func_ptr(int condition) {
    void* f;
    if (condition<5)
        f= sum;
    else{
        f= avg;
    }
    return (f);
}

int main() {
    int (*sum_ptr)(int, int) = returns_func_ptr(10);

    printf("%d\n", sum_ptr(2, 6));
     
}
