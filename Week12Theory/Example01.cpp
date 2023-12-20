#include <iostream>

using namespace std;


class Car
{
private:
    /* data */
public:
    Car(/* args */);
    ~Car();
};


Car::Car(/* args */){
    cout<<"Car is initiated "<<endl;
}

Car::~Car(){
    cout<<"Car is destroyed "<<endl;
}

enum color{red, green, blue};
enum color1{red1, green1, blue1};

int main(){
    //color c=blue; Global scope problem
    color c;
    cout<<c<<endl;
    int i=c;
    cout<<color::blue<<endl;    
    return 0;
}