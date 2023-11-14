#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[]="Ahmet AK";
    char *pName;
    pName=malloc(sizeof(name));

    for (size_t i = 0; i < sizeof(name)/sizeof(name[0]) ; i++)
    {
        pName[i]=name[i];
        //*pName=name[i];
        //pName++;    
    }
    printf("%s\n",pName);
   // printf("%s\n",pName-(sizeof(name)/sizeof(name[0])+1)); 
    free(pName);
    pName=NULL;
    free(pName);
    return 0;
}


/*Previous example without memory allocation

int main(void)
{
    char name[]="Ahmet AK";
    char *pName;
    pName=name;
    printf("%s\n",pName);
    return 0;
}*/
