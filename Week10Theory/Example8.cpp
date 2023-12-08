#include <iostream> 
 #include <ios>   // used to get stream size 
 #include <limits>   // used to get numeric limits 
using namespace std; 
int main() { 
    int x; 
    char str[80]; 
    cout << "Enter a number and string:\n"; 
    cin >> x; 
  
    // clear buffer before taking new line 
    //cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
  
    // Input a string 
    cin.getline(str, 80); 
    cout << "You have entered:\n"; 
    cout << x << endl; 
    cout << str << endl; 
  
    return 0; 
}
