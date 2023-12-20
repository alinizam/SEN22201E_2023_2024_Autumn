#include <iostream>
using namespace std;
class superBase{
    public:
     superBase(){
        cout<<"SuperBase is called"<<endl;
    }
     void print(){
        cout<<"print super base"<<endl;
    } 
    virtual void printBase()=0;
};

class Base1:virtual public superBase{
public:
    void print1(){
        cout<<"print1"<<endl;
    }
     void print(){
        cout<<"print super base"<<endl;
    } 
};

class Base2:virtual public superBase{

public:
  void print2(){
    cout<<"print2"<<endl;
  } 
   void print(){
        cout<<"print super base"<<endl;
    } 
};

class derived:virtual public Base1,virtual public Base2{
     public:
     virtual void printBase(){
        cout<<"Derived implementation"<<endl;
     }
};


int main(){
  derived d;
  d.print1();  
  d.print2();
  //it is ambiguous
  //d.print();
  d.printBase();
  return 0;
}