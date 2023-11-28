#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char text[10];
    // text="Ahmet"; it is not supported
    printf("%s",text);

    /*printf("Please enter a name");
    scanf("%s",text);


    printf("%s",text);*/
    
    printf("Please enter a name");
    fgets(text,sizeof(char)*10,stdin);
    printf("%s",text);

    return 0;
}
