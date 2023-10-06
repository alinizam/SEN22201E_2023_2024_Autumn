#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    char temp;

    int i = 0;
    while (1) {
        scanf("%c", &temp);
        
        if (temp == 'x') {
            for (int j = 0; j < strlen(arr); j++) {
                printf("%c", arr[j]);
            }
            break;
        }
        if (temp == 'c') {
            /*for (int j = 0; j < strlen(arr); j++) {
                printf("%c", arr[j]);
            }*/
            printf("%s", arr);
        }
        else {
            arr[i] = temp;
            i++;
        
        }
    }
    return 0;
}