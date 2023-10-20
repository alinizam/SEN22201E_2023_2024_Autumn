#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p1,*p2;
    p1=malloc(sizeof(int));
    p2=malloc(sizeof(int));

    for (int *i = p1; i < p1+100 ; i++)
    {
        printf("Address %d Value %d \n",i,*i);
    }
    
    return 0;
}
