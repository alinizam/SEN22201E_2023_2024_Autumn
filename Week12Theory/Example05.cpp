#include <iostream>
#include <new>
using namespace std;
class superBase{
    public:
    superBase(){
        cout<<"SuperBase is called"<<endl;
    }
    virtual void print(){
        cout<<"print super base"<<endl;
    } 
     
};

class Base1: public superBase{
public:
    
    virtual void print(){
        cout<<"print  base1"<<endl;
    } 
};
int main(){
  superBase* b=new Base1();
  b->print();
  return 0;
}