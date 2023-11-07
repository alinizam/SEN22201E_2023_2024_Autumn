#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef union numbers{
        int x;
        double y;
        int z;
    } numberType;
    numberType number;
    number.x=10;
    printf("%d %f %d",number.x,number.y,number.z );

    return 0;
}
