#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct salary{
        int netSalary;
        int currency;
    };
    typedef struct employeeType{
        int id;   
        int age;
        struct salary empSalary;
        struct employeeType *manager;
    } employee;

    employee employee1;
    employee1.empSalary.netSalary=5000;
    printf("%d\n",employee1.empSalary.netSalary);
    return 0;
}
