#include <iostream>
using namespace std;

int add(int &a,int &b){
    return a=b;
}

int main(){
  int i=5,j=10;
  add(i,j);
  cout<<i;
  return 0;
}