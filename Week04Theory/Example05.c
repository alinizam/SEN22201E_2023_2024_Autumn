#include <stdio.h>
#include <stdlib.h>

int f1(){
    printf("f1 is called\n");
}
int f2(){
    printf("f2 is called\n");
}

int main(void)
{
    int (* pFunc)();
    pFunc=f1;
    pFunc();
    pFunc=&f2;
    pFunc();
    (*pFunc)();
    return 0;
}

