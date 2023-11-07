#include <stdio.h>
#include <stdlib.h>

typedef struct employeeType{
        int id;   
        int age;
        double salary;
        double commission;
        void (*displaySalary)(struct employeeType *);
    } Employee; 
void displaySalary(struct employeeType *self){
    printf("Total salary=%f",(1+self->commission)*(self->salary));
}
int main(void)
{
    Employee employee={1,20,10000,0.1};
    employee.displaySalary=displaySalary;
    employee.displaySalary(&employee);
    return 0;
}
