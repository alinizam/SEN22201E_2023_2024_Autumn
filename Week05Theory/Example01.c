#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUMBEROFSTUDENT 30
#ifdef true
#undef true
void f(){
    int true=0;

}
#endif
#define true 1

int main(void)
{
    int i=NUMBEROFSTUDENT;
    //int true=0;   //errornous code
    printf("%d",i);
    return 0;
}

 
