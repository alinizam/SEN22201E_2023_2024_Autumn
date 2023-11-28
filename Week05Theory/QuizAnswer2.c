#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int (*p)[2];
    int (*numbers)[2]=calloc(5,sizeof(int));
    int *p1=numbers[0];
    //0,0 
    *p1=5;
    p1++;
    //0,1
    *p1=2;
 
    p1++;
    //0,2
   *p1=-1;
   int *p2=numbers[1];
   //1,0
   *p2=3;
   p2++;
   //1,1
   *p2=-1;

    int sum=0;
    for (size_t i = 0; i < 2; i++)
    {
        /*int *pp=numbers[i];
        while (*pp!=-1){
            sum+=*pp;
            pp++;
        }*/
        for (int *pp = numbers[i]; *pp !=-1; pp++)
        {
             sum+=*pp;
        }
    }
    printf("Sum of elements = %d",sum);
    return 0;
}
