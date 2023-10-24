#include <stdio.h>
#include <stdlib.h>

void filterMod2(int a){
    if (a%2 ==0){
        printf("%d\n",a);
    }
}

void filterLessThen5(int a){
    if (a<5){
        printf("%d\n",a);
    }
}


void displayArray(int numbers[],void (*filter)()){
    for (size_t i = 0; i < 5; i++)
    {
        filter(numbers[i]);
    }
    
}

int main(void)
{
    int numbers[]={1 , 5 ,6, 3, 10};
    displayArray(numbers,filterLessThen5);
    return 0;
}
