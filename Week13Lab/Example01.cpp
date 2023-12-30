#include <iostream>
using namespace std;

class A{
private:
    int x, y;
public:
    //a=5;
    A(int x,int y=0 ){
        this->x=x;
    }
    A(){
        this->x=0;
    }
    int getX(){
        return x;
    }
};
 
int main(){
  A a;
  a=5;
  cout<<a.getX()<<endl;
  return 0;
}