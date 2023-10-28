#include <stdio.h>
#include <stdlib.h>

int sumImp(int a,int b){
    return a+b;
}

int main(void)
{
    int (*sum)(int,int);
    sum=sumImp;
    printf("The sum of %d and %d = %d",5,2,sum(5,2));
    return 0;
}
