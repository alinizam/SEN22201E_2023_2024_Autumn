#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int a=10;
    //int *p=&a;
    int *p;//malloc(sizeof(int));

    p=(int *)malloc(sizeof(int));
    *p=10;
    printf("%d\n",*p);
    return 0;
}
