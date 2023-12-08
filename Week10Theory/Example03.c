#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;
    f=fopen("c:\\dosya\\numbers.bin","wb");
    if(f==NULL){
        printf("The file is not opened");
        return -1;
    }else{
        printf("The file is opened\n");
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        fwrite(&i,sizeof(size_t),1,f);
    }
    printf("Success");
    fclose(f);
    return 0;
}
