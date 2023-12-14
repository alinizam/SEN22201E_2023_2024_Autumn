#include <iostream>
using namespace std;
void print_type(const int x){
    cout << "I got a 64-bit integer: " << x << '\n';
}

void print_type(const void *const x){
    cout << "I got a pointer: " << x << '\n';
}

int main(){ 
    print_type(nullptr);
}