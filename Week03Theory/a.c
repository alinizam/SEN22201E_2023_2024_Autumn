#include <stdio.h>
#include <stdlib.h>
void allocater(int *ptrTempAllctr)
{
    ptrTempAllctr = malloc(sizeof(int));
    if (ptrTempAllctr == NULL) {
        perror("in allocater() memory allocation error");
        exit(EXIT_FAILURE);
    }
}

int main() 
{
    int *ptrMain = NULL;
    allocater(ptrMain);
    if (ptrMain == NULL) {
        printf("ptrMain is points to NULL\n");
        return 1;
    }
    //free(ptrMain);  // we don't have to free because it will be invalid free.
    return 0;
}

