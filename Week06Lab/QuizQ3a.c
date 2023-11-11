#include <stdio.h>
#include <stdlib.h>

#define INCR(x)  (x + 1)
int main(){
    int i = INCR(15) * 2;
    printf("%d", i);
}
