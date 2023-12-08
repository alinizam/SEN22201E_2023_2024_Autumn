#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;
    f=fopen("c:\\dosya\\numbers.bin","rb");
    if(f==NULL){
        printf("The file is not opened");
        return -1;
    }else{
        printf("The file is opened\n");
    }
    int *p=malloc(sizeof(size_t));
    for (size_t i = 0; i < 10; i++)
    {
        fread(p,sizeof(size_t),1,f);
        printf("%d",*p);
    }
    printf("Success");
    fclose(f);
    return 0;
}
