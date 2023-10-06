#include <stdio.h>

int main() {
    char x,y,z;
    printf("Input chars");
    scanf(" %c %c %c",&x,&y,&z);
    if (x>y&&x>z){
        printf("max is %c ",x);
    } else if (y>z){
        printf("max is %c ",y);
    }else{
        printf("max is %c ",z);
    }
 


}
