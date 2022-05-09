#include<stdlib.h>
#include<unistd.h>

typedef struct stack
{
    int     num;
    int     deff;
    struct  stack     *next;
}   t_stack;
