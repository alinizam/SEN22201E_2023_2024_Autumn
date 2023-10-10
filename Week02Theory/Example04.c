#include <stdio.h>
#include <stdlib.h>

void f1();
void f2(int i);

int main(void)
{
    f1();
    f2(5);
    printf("Finished\n");
    return 0;
}

void f1(){
    printf("f1\n"); 
}

void f2(int i){
    printf("f2\n"); 
}