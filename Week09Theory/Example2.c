#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    
    char *src=malloc(100*sizeof(char));
    char *dest=(src+10);
    src[0]='A';
    src[1]='h';
    src[2]='m';
    src[3]='e';
    src[4]='t';

    memcpy(dest,src,8);
    printf("source %s target %s ",src, dest);
    return 0;
}
