#include <iostream>
using namespace std;

int add(const int &a,const  int &b){
    //a=6; compile time arror.
    return a+b;
}

int main(){
  int x=2,y=3;
  cout<<add(x,y)<<endl;
  cout<<x<<endl;

  return 0;
}