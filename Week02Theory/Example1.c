#include <stdio.h>

int main(void)
{
    
    printf("Size of long %d\n",sizeof(long));
    int i;
    printf("Size of i variable %d\n",sizeof(i));
    int chars[10];
    printf("Size of array %d\n",sizeof(chars));
    printf("Number of element in array %d\n",sizeof(chars)/sizeof(chars[0]));
    return 0;
}
