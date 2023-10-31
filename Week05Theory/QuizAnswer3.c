    #include <stdio.h>
    #include <stdlib.h>

    int first()  {
        printf("Hello World");
        return 0;
    }
    int main()    {
        int (*ptr)() = first;
        ptr();
        printf("%p\n",ptr);
        ptr++;
        printf("%p\n",ptr);
        ptr();
        
    }
