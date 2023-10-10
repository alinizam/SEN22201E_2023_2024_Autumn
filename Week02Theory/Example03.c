#include <stdio.h>
#include <stdlib.h>
int GLOBAL_I;

void f1(void)
{
    GLOBAL_I+=10;  
}

void f2(void)
{
    GLOBAL_I+=5;  
}

int main()
{
    printf("Global %d\n",GLOBAL_I);
    int GLOBAL_I=20;
    f1();
    printf("Global %d\n",GLOBAL_I);
    f2();
    {
        extern int GLOBAL_I;
        printf("Acceess Global from local %d",GLOBAL_I);
    }
    printf("Global %d\n",GLOBAL_I);
    return 0;
}






