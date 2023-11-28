#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *c=malloc(sizeof(char));
    //some code
    free(c);
    c=NULL;
    free(c);
    return 0;
}
