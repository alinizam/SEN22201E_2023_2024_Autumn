#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[]={1,4,6};
    int *p;
    p=numbers;
    for (size_t i = 0; i < 3; i++){
        printf("%d\n",*p);
        *p=*p+1;
        p++;
    }
    //Print the results
    p=numbers;
    for (size_t i = 0; i < 3; i++) {
        printf("%d\n",*p);
        p++;
    } 

    return 0;
}
