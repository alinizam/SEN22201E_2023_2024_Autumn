#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0;
        next:
        printf("%d\n",i++);
    if (i<10){
        goto next;
    }
    return 0;
}
