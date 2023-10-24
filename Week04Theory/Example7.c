#include <stdio.h>
#include <stdlib.h>

void callbackImp1(){
        printf("callbackImp1 is worked.");
}

void callbackImp2(){
        printf("callbackImp2 is worked.");
}

void writeSomething(void (*callback)()){
    callback();
}

int main(void)
{
    writeSomething(callbackImp1);
    return 0;
}
