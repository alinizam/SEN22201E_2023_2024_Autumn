#include <stdio.h>
#include <stdlib.h>

void f(int *a){
    *a=5;
}
int main(void)
{
    int i=10;
    f(&i);
    printf("%d\n",i);
    return 0;
}
