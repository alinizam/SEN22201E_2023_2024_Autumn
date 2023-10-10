#include <stdio.h>

int main()
{
    int numbers[5];
    numbers[0] = 5;
    numbers[1] = 10;
    numbers[2] = 5;
    numbers[3] = 5;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {   
        sum+=numbers[i];
        printf("%dth element is %d\n", i, numbers[i]);
    }
    printf("Result =%d",sum);
    return 0;
}
