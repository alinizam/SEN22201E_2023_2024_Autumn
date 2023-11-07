#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct employeeType{
        int id;   
        int age;
        double salary;
    } employeeType;
    struct employeeType{
        int id;   
        int age;
        double salary;
    } employee1,employee2;


    //typedef int integer;
    //integer i;
    employeeType employee;
    employee.age=0;
    return 0;
}
