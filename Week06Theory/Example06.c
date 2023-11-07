#include <stdio.h>
#include <stdlib.h>

struct employeeType{
        int id;   
        int age;
        double salary;
        double commission;
        void (*displaySalary)(struct employeeType *);
    } ; 
void displaySalary(struct employeeType *self){
    printf("Total salary=%f",(1+self->commission)*(self->salary));
}
int main(void)
{
    struct employeeType employee={1,20,10000,0.1};
    employee.displaySalary=displaySalary;
    employee.displaySalary(&employee);
    return 0;
}
