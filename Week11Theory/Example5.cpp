#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;
    numbers.assign({1, 2, 3, 4, 5}); 
    numbers.erase(numbers.begin()+1);
    numbers.pop_back(); 
    for (int i:numbers)
    {
        cout<<i<<endl;
    }
    
  return 0;
}