#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    /*
    int *p1,*p2;
    int v1=5,v2=10;
    int *temp;
    p1=&v1;
    p2=&v2;

    printf("Before source = %d target = %d\n",v1,v2);
    printf("Before source = %d target = %d\n",*p1,*p2);
    temp=p1;
    p1=p2;
    p2=temp;
    printf("After source = %d target = %d\n",v1,v2);
    printf("After source = %d target = %d\n",*p1,*p2);
    */

    int x = 10, y = 50;
    swap(&x, &y);
    printf("x=%d y=%d", x, y);
    return 0;

}
