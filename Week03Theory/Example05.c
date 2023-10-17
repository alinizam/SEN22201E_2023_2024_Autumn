#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p,*p1; 
    int a=5;
    p=&a;
    p1=&a;
    //a=10;
    *p=2;
    printf("%d\n",a); 
    printf("%d\n",*p);
    printf("%d\n",*p1);
}
