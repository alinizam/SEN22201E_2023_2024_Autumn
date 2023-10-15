#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 5;
    double d = 0.5;
    float f = 0.5f;
    printf("Size of int + double = %d\n", sizeof(a + d));
    printf("Size of int + float = %d\n", sizeof(a + f));
    printf("Size of float + double = %d\n", sizeof(f + d));
    return 0;
}
