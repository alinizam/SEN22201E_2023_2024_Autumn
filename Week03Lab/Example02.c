#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p=malloc(sizeof(int));
    int *i;
    i=(int *)p;
    *i=5;
    printf("%d",*i);
    return 0;
}
