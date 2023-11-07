#include <stdlib.h>
#include <cstdio>
#include <string.h> 
union Function {
    char c;
    int d;
    int i;
};

union Function functions[] = {
    {.c = 'c'},
    {.i = 5},
    {.d = 10},
};

int  main(){
    for (size_t i = 0; i < 3; i++)
    {   
        printf("%d\n",functions[i].d);
    }
    