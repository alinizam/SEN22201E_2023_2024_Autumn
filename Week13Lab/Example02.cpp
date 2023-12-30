#include <iostream>
#include <vector>
using namespace std;

class Employee
{
private:
    double salary;
public: 
    Employee():salary(0.0){};
    Employee& operator +(int increment){
        this->salary+=increment;
        return (*this);
    }
    /*Employee& operator +(int increment){
        Employee& newEmp(*this);
        newEmp.salary+=increment;
        return (newEmp);
    }*/
    void display(){
        cout<<this->salary<<endl;
    }
};

class Factory
{
private:
    /* data */
    vector<Employee> employees;
    
public:
    Factory(/* args */);
    ~Factory();
    Factory& operator+(const Employee& e){
        this->employees.push_back(e);
        return (*this);
    }
    void displayEmployees(){
        for(Employee e:employees){
            e.display();
        } 
    }

};

Factory::Factory(/* args */)
{
}

Factory::~Factory()
{
}



int main(){
  Employee e;
  e.display();
  e+1000;

  e.display();
  e+500;
  e.display();
  e+500;
  e.display();

  Factory f;
  f+e;
  e+1000;
  e.display();
  
  f.displayEmployees();
  
  return 0;
}