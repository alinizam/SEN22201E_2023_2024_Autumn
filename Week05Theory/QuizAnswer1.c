#include <stdio.h>
#include <stdlib.h>

void f1(){}
void f2(){}

int MyFunction(void (* f1)(),void (* f2)()){
    int result=0;
    if (f1==f2){
        result=1;
    }
    return result; 
}

int main(void)
{
    printf("Result %d",MyFunction(f1,f1));
    return 0;
}
