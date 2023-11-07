#include <stdio.h>
#include <stdlib.h>

typedef struct PString {
            int i;
            void (*length)(struct PString *self);
    } PString;

    void length(PString *self) {
        self->i=10;
    }


int main(void)
{
    PString *ps = malloc(sizeof(PString));
    ps->length=length;
    ps->length(ps);
    printf("%d\n",ps->i);


    struct btype{
        int a1;
        int a2;
    };

    struct atype{
        int a1;
        int a2;
        struct btype ctype;
    };

    
    struct btype b = {152, 3};
    struct atype a = {15, 3, b};
    


    printf("%d",a.ctype.a1);


    typedef struct _some_struct {
    int value;
    void (*set_value)(struct _some_struct *self, int new_value);
    } some_struct;

    //some_struct *s = {1};
   // s->set_value(s, 42);

    struct xyz {
       int a;
       int b;
       int c;
       } klm = { .a = 99, .c = 100 };
   // struct klm = { .a = 99, .c = 100 }; 
    printf("%d",klm.a);

    

    return 0;
}
    