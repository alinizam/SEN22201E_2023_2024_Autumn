#include <stdio.h>
#include <stdlib.h>

int squareFunction(int a){
    return a*a;
}

int doubleFunction(int a){
    return 2*a;
}

int main(void){
    int (*functionPointerArray[])(int a)={squareFunction, doubleFunction};

    for (size_t i = 0; i < 2; i++)
    {
       printf("%dth calculation = %d\n",i,functionPointerArray[i](5));
    } 
     
    /* The usage below is in not suitable
     because function pointer address navigation with pointer 
     is not directly supported. 
    */
    int (*p)(int a)=*functionPointerArray;

    for (size_t i = 0; i < 5; i++)
    {
       printf("%dth calculation = %d\n",i,p(5));
       p++;    
    }
    
    return 0;
}
