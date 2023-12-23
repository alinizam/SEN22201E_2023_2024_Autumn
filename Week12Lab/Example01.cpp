#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
   return dynamic_cast<const Base*>(ptr) != nullptr;
}

class Employee {
protected:
    string first_name;
    string last_name;
    int salary;
public:
    Employee(string first_name, string last_name,
    int salary) : first_name(first_name), 
    last_name(last_name), salary(salary)
    {}
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    int get_salary() {
        return salary;
    }
    string get_class() {
        return "Employee";
    }
    virtual ~Employee() = default;
};

class Manager : public Employee {
public:
    Manager(string first_name, string last_name,
    int salary) : Employee(first_name, 
    last_name, salary) { }

    void set_name(string first_name) {
        this->first_name = first_name;
    }
    string get_class() {
        return "Manager";
    }
};

class Factory {
public:
    vector<Employee*> employees;
    void addEmployee(Employee emp) {
        Employee* temp = new Employee(emp);
        employees.push_back(temp);
    }

    void addEmployeeForPolymorphism(Employee* emp) {
        employees.push_back(emp);
    }

    void printEmployeeTypeNumber() {
        int emp_count = 0;
        for (Employee* emp : employees) {
            if (instanceof<Manager>(emp)) {
                emp_count++;
            }
        }
        cout << "Normal employees: " << emp_count << endl << "Managers: " << employees.size() - emp_count << endl;
    }

};

int main(int argc, const char** argv) {
    Employee emp("ahmet", "ak", 10000); // object lifecycle
    Employee emp2("ahmediye", "ak", 10000);
    Manager manager("osman", "kara", 10000);
    Manager manager2("osmaniye", "kara", 10000);
    Factory f;
    
    f.addEmployeeForPolymorphism(&emp);
    f.addEmployeeForPolymorphism(&emp2);
    f.addEmployeeForPolymorphism(&manager);
    f.addEmployeeForPolymorphism(&manager2);
    f.printEmployeeTypeNumber();
}