#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int callMe(int b){
    static int callCount;
    if(b){
        callCount++;
    }

}

int callMeWithBoolean(bool b){
    static int callCount;
    if(b){
        callCount++;
    }

}
int main(void)
{
    callMe(1);
    callMe(0);
    callMe(1);
    callMe(5);
    callMe(-6);
    printf("Call times %d\n",callMe(1));
    

    callMeWithBoolean(true);
    callMeWithBoolean(false);
    callMeWithBoolean(0);
    callMeWithBoolean(5);
    printf("Call times %d\n",callMeWithBoolean(true));

    return 0;
}


