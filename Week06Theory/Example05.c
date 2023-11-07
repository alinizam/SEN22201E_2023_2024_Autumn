#include <stdio.h>
  
// structure with padding
struct str1 {
    char c;
    int i;
};
  
struct str2 {
    char c;
    int i;
} __attribute((packed))__; // using structure packing

struct str3 {
    int c:1;
    int i:1;
    int d:1;
};

int main(){  
    printf("Size of str1: %d\n", sizeof(struct str1));
    printf("Size of str2: %d\n", sizeof(struct str2));
    printf("Size of str3: %d\n", sizeof(struct str3));
    return 0;
}