#include <iostream>
#include <string>
#include <new>

using namespace std;

class Employee
{
    private:
    int salary;
    public:
    string firstName;
    inline static int empCount;
    Employee():salary(1000){
        empCount++;
    };
    Employee(int salary){
        this->salary=salary;  
        empCount++;
    };
   
    int getSalary(){
        return salary;
    }
};


int main(){
  Employee e1;
  e1.firstName="Ahmet";
  cout<<e1.getSalary()<<endl;
  Employee e2=Employee(5000);
  cout<<e2.getSalary()<<endl;
  Employee e3;
  cout<<"Emp count= "<<Employee::empCount<<endl;
  Employee *e4=new Employee();
  e4->firstName="Mehmet";
  cout<<"Emp count= "<<e4->firstName<<endl;

  return 0;
}