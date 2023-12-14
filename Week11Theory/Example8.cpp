#include <iostream>
using namespace std;

class Car
{
private:
    int speed=0;
public:
    void hello(){
        cout<<"Hello"<<endl;
    }
    void increaseSpeed();
    int getSpeed();
};

void Car::increaseSpeed(){
    speed++;
}

int Car::getSpeed(){
    return speed;
}




int main(){
  Car c;

  c.hello();
  c.increaseSpeed();
  cout<<c.getSpeed();

  return 0;
}