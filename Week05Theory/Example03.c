#include <stdio.h>
#include <stdlib.h>

//#define square(r)({return r*r;}) macros can not have return values.
#define MACRO(num, str) ({\ 
            printf("%d", num);\ 
            printf(" is");\ 
            printf(" %s number", str);\ 
            printf("\n");\
           }) 
int main(void)
{
    
    //printf("%d\n",square(5)());
    MACRO(5,"ssss");
    return 0;
}
