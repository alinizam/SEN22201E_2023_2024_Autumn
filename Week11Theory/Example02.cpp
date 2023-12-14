#include <iostream>
using namespace std;


int main(){
    auto add=[](const int &a,const  int &b){
     return a+b;
    };
    
    int x=2,y=3;
    cout<<add(x,y)<<endl; 

    return 0;
}