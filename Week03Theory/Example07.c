#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p=(int *)malloc(sizeof(int));

    printf("Address of pointer %d value %d\n",p,*p);
    p++;
    printf("Address of pointer %d value %d\n",p,*p);
    p--;
    printf("Address of pointer %d\n",p);
    
    char *p1=(char *)malloc(sizeof(char));

    printf("Address of pointer char %d value %c\n",p1,*p1);
    p1++;
    printf("Address of pointer char %d value %c\n",p1,*p1);
    
    //Substraction of pointer
    int *p2=p;
    p++;
    int *p3=p;
    printf("p3-p1  %d\n",p3-p2);

    //printf("p3-p1  %d\n",p-p1); //Error in code: invalid operands to binary - (have 'int *' and 'char *')
    
    return 0;
}
