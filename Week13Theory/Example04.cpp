#include <iostream>
using namespace std;

class Employee{
    public:
    int  salary;
    //prefix
    friend void operator++(Employee&);
    
};

void operator++(Employee& e ){
    e.salary++;
}

int main(){
  Employee e;
  e.salary=5000;
  cout<<"Salary "<<e.salary<<endl;
  ++e;
  
  cout<<"Salary "<<e.salary<<endl;
  return 0;
}