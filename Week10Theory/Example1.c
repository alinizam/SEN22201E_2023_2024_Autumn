#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;
    f=fopen("c:\\dosya\\merhaba.txt","r");
    if(f==NULL){
        printf("The file is not opened");
        return -1;
    }else{
        printf("The file is opened\n");
    }
    char c;
    while ((c=fgetc(f))!=EOF){
        printf("%c",c);
    }
    fclose(f);
    return 0;
}
