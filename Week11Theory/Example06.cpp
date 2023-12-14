#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1="Hello ",s2="World";
  s1=s1+s2;
  cout<<s1<<endl;

   cout<<s1.find("Wor")<<endl;

   s1.insert(s1.size()," again");
   cout<<s1<<endl;
   return 0;
}