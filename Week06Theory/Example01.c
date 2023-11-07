#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct employeeType{
        int id;  //id=0; is not allowed in C
        int age;
        double salary;
    };
    struct employeeType employee;
    employee.id=1;
    employee.age=40;
    printf("id %d age %d\n",employee.id, employee.age);

    struct employeeType employee1={2,30,10000};
    struct employeeType employee2={3,20};
    printf("id %d age %d salary%d \n",employee2.id, employee2.age,employee2.salary);
    struct employeeType employee3={.age=50,.id=4};
    printf("id %d age %d salary%d \n",employee3.id, employee3.age,employee3.salary);
    
    struct employeeType employee4;
    employee4={.age=50,.id=4};
    printf("id %d age %d salary%d \n",employee3.id, employee3.age,employee3.salary);

    
    return 0;
}
