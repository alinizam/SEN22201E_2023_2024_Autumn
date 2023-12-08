#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;
    f=fopen("c:\\dosya\\numbers.txt","r");
    if(f==NULL){
        printf("The file is not opened");
        return -1;
    }else{
        printf("The file is opened\n");
    }
    int i;
    while ((fscanf(f,"%d",&i))!=0){
        printf("%d\n",i);
    }
    fclose(f);
    return 0;
}
