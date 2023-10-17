#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count=5;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            k:
            if (j==3) goto x;
            printf("i= %d, j=%d\n",i,j);
        }
        if (i==4) goto k;
        x:
    }
    return 0;
}
