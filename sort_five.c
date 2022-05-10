#include "push_swap.h"

int smallest_num(t_stack *b)
{
    int     i;
    int     index;
    int     a;

    a = b->num;
    i = 0;
    index = 0;
    while (b)
    {
        if (b->num < a)
        {
            a = b->num;
            index = i;
        }
        b = b->next;
        if (b == NULL)
            break;
        i++;
    }
    return (index);
}

void    sort_a_in_b(t_stack *a, int min)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (min < stack_len(a) - min)
    {
        while (i < min)
        {
            ra_b(a);
            i++;
        }
    }
    else
    {
        while (j < stack_len(a) - min)
        {
            rra_b(a);
            j++;
        }
        
    }
    
}

void    push_back(t_stack *a, t_stack *b)
{
    int     i;

    i = 1;
    while (i < 4)
    {
        pa_b(a, b);
        i++;
    }
}

void    sort_five(t_stack *a , t_stack *b, int i)
{
    int min;
    int len;

    len = stack_len(a);
    if (len > 3)
    {
        while (a->num)
        {
            min = smallest_num(a);
            sort_a_in_b(a, min);
            pa_b(b, a);
            if (min == 3)
                break;
        }
    }
    if (min == 3)
        sort_3(a);
    push_back(a, b);
}
