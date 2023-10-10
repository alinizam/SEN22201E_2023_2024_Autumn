#include <stdio.h>
#include <stdlib.h>
void f1();
int main(void)
{
    f1();
    f1();
    f1();
    return 0;
}
void f1(){
    static int count=5;
    int nonStaticCount=5;
    
    printf("Call number %d\n",count);
    printf("Local Call number %d\n",nonStaticCount);

    count++;
    nonStaticCount++;
}
