#include <stdio.h>
#include <stdlib.h>

typedef union 
{   
    int salary;
    double commmision;
    char type;
} Employee;


int main(void)
{
    Employee e1={.commmision=100.0,.type='S'};
    printf("Size of union = %d\n",sizeof(e1));
    printf("Salary = %f\n",(double)e1.salary);
    printf("commission = %d\n",e1.commmision); 
    printf("type = %c\n",e1.type); 

    return 0;
}
