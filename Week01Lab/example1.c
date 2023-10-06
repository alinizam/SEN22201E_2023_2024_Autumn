#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    while (1) {
        printf("Enter num: ");
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        sum += num;
    }    
    printf("\nSum is:%d", sum);
    return 0;
}