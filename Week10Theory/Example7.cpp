#include <iostream>
using namespace std;
const double PI=3.1415;
int main(){
  double PI=3.14;
  cout << ::PI << std::endl;
  return 0;
}