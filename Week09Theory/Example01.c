#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    
    char src[]="Ahmet Ak";
    char *dest=(src+5);
    memcpy(src + 2,src,strlen(src)+100);
    printf("source %s target %s ",src, dest);
    return 0;
}
