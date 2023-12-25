#include <iostream>
using namespace std;

class Employee{
    public:
    int  salary;
    //prefix
    void operator++(){
        this->salary++;
    }
    //postfix
    void operator++(int){
        this->salary++;
    }
};

int main(){
  Employee e;
  e.salary=5000;
  cout<<"Salary "<<e.salary<<endl;
  ++e;
  e++;
  cout<<"Salary "<<e.salary<<endl;
  return 0;
}