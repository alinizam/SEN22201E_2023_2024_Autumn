#include <stdio.h>
#include <stdlib.h>

swap(int **p1,int **p2){
    int *temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main(void)
{
    int a=5,b=10;
    int *ptr1,*ptr2;

    printf("ptr1=%p ptr=%p\n",ptr1,ptr2);
    swap(&ptr1,&ptr2);
    printf("ptr1=%p ptr=%p\n",ptr1,ptr2);
    return 0;
}
