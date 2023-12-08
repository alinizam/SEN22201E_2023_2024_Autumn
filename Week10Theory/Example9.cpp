#include <iostream>
using namespace std;
int add(int a){
    return a;
}

int add(int a,int b){
    return a+b;
}

double add(double a,double b){
    return a+b;
} 
int main(){
  cout<<add(1)<<endl;
  cout<<add(1.1,2.0);
  
  return 0;
}