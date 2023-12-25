#include <iostream>
using namespace std;

class SuperBase{
    public:
    SuperBase():i(5){
        cout<<"SuperBase is initialized"<<endl;
    }
    virtual void print(){
        cout<<"print super base"<<i<<endl;
    } 
    void setI(int i){
        this->i=i;
    }
     
    int getI(){
        return this->i;
    }
    private:
        int i;
};

class DerivedA:protected SuperBase{
    public:
    DerivedA(){
        cout<<"Derived is initialized"<<endl;
    }
    void print(){
        cout<<"Deived class print"<<endl;
    } 
};

int main(){
  SuperBase s;
  s.setI(10);
  s.print();
  DerivedA d;
  SuperBase *s1=new DerivedA();
  s1->print();
  SuperBase s2(s);
  cout<<s2.getI()<<endl;
  return 0;
}