#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[]={1, 3, 3};
    int *p=numbers;
    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    int *pArray[]={numbers,numbers+1,numbers+2};
    printf("%d %d %d\n",**pArray,*pArray[1],*pArray[2]);

    int **pp;
    pp=pArray;
    printf("%d",**pp);

    return 0;
}
