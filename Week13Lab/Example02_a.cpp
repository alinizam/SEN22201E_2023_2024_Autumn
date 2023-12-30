#include <iostream>
#include <vector>
#include <string>
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
class Department
{
private:
    /* data */
    string name;
public:
    Department(string name){
        this->name=name;
    } 
    void display(){
        cout<<name<<endl;
    }
};

 
 


class Factory
{
private:
    /* data */
    vector<Employee*> employees;
    vector<Department*> departments;
public:
    Factory(/* args */);
    ~Factory();
    Factory& operator+(Employee* e){
        this->employees.push_back(e);
        return (*this);
    }

    Factory& operator+(Department* d){
        this->departments.push_back(d);
        return (*this);
    }
    void displayEmployees(){
        for(Employee* e:employees){
            e->display();
        } 
    }
    void displayDepartments(){
        for(Department* d:departments){
            d->display();
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
  e+500;
  e.display(); 
  Factory f;
  f+&e;
  e+1000;
  Department d("IT");
  f+&d;
  f.displayEmployees();
  f.displayDepartments();
  return 0;
}