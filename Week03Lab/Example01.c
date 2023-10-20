#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *i;
    int p=5;
    i=&p;
    printf("%d",*i);
    return 0;
}
