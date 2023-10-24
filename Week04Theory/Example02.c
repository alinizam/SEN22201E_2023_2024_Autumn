#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=10;
    int *p;
    int **pp;

    p=&i;

    pp=&p;
    printf("i=%d p=%d pp=%d",i,*p,**pp);
    printf("i=%p p=%p pp=%p",&i,p,*pp);

    return 0;
}
