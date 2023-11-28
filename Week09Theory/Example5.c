#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{ 
    char *c=malloc(sizeof(char)*2);  
    do{
        printf("Press q to quit\n");
        //scanf("%c", &c); 
        fgets(c,sizeof(char)*2,stdin);
        
        //Alternative solution (both lines are needed.)
        //*c=getchar(); 
        //getchar();

        printf("The character is %c\n", c[0]);

        //we need the clear buffer. 
        //Otherwise \n char couse skip one iteration (in the while loop)
        fseek(stdin,0,SEEK_END);
        
    } while(c[0]!='q');
     
    return 0; 
}

/*
Where the newline is getting left in the buffer is after the fgets 
call at the bottom of the loop. 
It only reads one character, 
so the newline (and any extra characters you may have entered) are still left. 
So when fgets is called on the next iteration, it reads just the newline.
*/

