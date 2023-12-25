#include <iostream>
using namespace std;

class A
{
private:
  
public:
   int *x,y;
   A(){
     x=new int(0);  
   }
   A & operator= (const A &a){
    cout<<"oveloaded"<<endl;
     if (this!=&a){
        *x=*(a.x);
        y=a.y;
     } 
     return *this;
   }
};

int main(){
  A a1;
  *(a1.x)=5;
  a1.y=10;
  A a2;
  a2=a1;

  cout<<*(a2.x)<<"-"<<a2.y<<endl;

  *(a2.x)=7;
  cout<<*(a1.x)<<"-"<<a1.y<<endl;

  return 0;
}