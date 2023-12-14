#include <iostream>
#include <stdint.h>
using namespace std;

int64_t add_one(const int64_t n) {
    return n + 1;
}
int main(){
    const int64_t x=add_one(3);
    //constexpr int64_t x=add_one(3); It can be assigned a runtime expression 

    cout << x;
}
