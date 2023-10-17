#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count=10;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            printf("i= %d, j=%d\n",i,j);
            if (i==3 && j==5){
                goto outer;
            }
        }   
    }
    outer: 
    return 0;
}
