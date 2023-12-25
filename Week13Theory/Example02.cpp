#include <iostream>
using namespace std;

class Truck;

class Car
{
private:
    int x=5;
public:
  friend void displayX(Car c);
  friend void compareX(Car c,Truck t);
};

class Truck
{
private:
    int x=5;
public:
  friend void displayX(Car c);
  friend void compareX(Car c,Truck t);
};

void compareX(Car c,Truck t){
    if (c.x==t.x){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }

}
void displayX(Car c){
    cout<<c.x<<endl; 
}
 


int main(){
  Car c1;
  displayX(c1);
  Truck t1;
  compareX(c1,t1);
  return 0;
}