#include"push_swap.h"

int stack_len(t_stack *stack)
{
    int     len;
    t_stack *tmp;

    tmp = stack;
    while(tmp)
    {
        tmp = tmp->next;
        len++;
    }
    return (len);
}

int swap(int *a, int *b)
{
    int     tmp;

    tmp = *a;
    *a = *b;
    b = tmp;
}