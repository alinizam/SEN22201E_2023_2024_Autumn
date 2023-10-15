#include <stdio.h>
#include <stdlib.h>


void printArray(int numbers[], int length){
    //int length=sizeof(numbers)/sizeof(numbers[1]);

    for (size_t i = 0; i < length; i++)
    {
        printf("%d \n",numbers[i]);
    }
    
}
int main(void)
{   
    int numbers[]={1, 5 ,6};
    int length=sizeof(numbers)/sizeof(numbers[0]);
    printf("Length %d\n ",length);
    printArray(numbers,length);
    return 0;
}


