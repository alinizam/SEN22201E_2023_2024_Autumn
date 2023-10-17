#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[]={1 ,5,6,5,6};
    int *p;
    p=array;
    if (p==array){
        printf("Equal");
    }else{
        printf("Not Equal");
    }
    for (size_t i = 0; i < 5; i++,p++)
    { 
        printf("Elemens %d value %d\n",i,*p);
    }
    
    

}