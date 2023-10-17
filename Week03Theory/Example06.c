#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *memory1=malloc(4); //not preferred use
    void *memory2=malloc(sizeof(int));
    int *i=(int *)memory1;

    int *p=(int *)malloc(sizeof(int));
    *p=5;
    printf("Address of pointer %d\n",p);
    printf("VAlue of pointer %d\n",*p);
    p++;
    

    return 0;
}
