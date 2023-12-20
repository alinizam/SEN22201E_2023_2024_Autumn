#include <iostream>
using namespace std;

class car {
private:
    /* data */
    int price;
public:
    int getPrice(){
        return price; 
    }
    void setPrice(int price){
        this->price=price; 
    }
    
};

class togg:public car {
private:
    /* data */
public:
  
};
 

int main(){
  togg t;
  t.setPrice(1000);
  cout<<t.getPrice()<<endl;
  return 0;
}