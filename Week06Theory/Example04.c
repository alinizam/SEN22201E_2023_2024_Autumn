#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct salary{
        int netSalary;
        int currency;
    };
    struct salary s1={10000,0};
    struct salary *ptrSalary=&s1;
    printf("Net = %d currency=%d\n",s1.netSalary,s1.currency);
    printf("Net = %d currency=%d\n",ptrSalary->netSalary, ptrSalary->currency);
    return 0;
}
