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
    printf("%d\n", index);
    return (index);
}

void    rotrate_min(t_stack *a, t_stack *b, int len)
{
    int index;

    index = 0;
    while (len != 3)
    {
        index = smallest_num(a);
        if (index > 0 && index <= len /2)
        {
           ra_b(&a);
        }
        else if (index > len /2)
        {
            rra_b(&a);
        }
        pa_b(&b, &a);
        len--;
    }
}

void    push_back(t_stack *a, t_stack *b)
{
    int     i;

    i = 1;
    while (i < 4)
    {
        pa_b(&a, &b);
        i++;
    }
}

void    sort_five(t_stack *a , t_stack *b)
{
    int min;
    int len;

    min = 0;
    len = stack_len(a);
    if (len > 3)
    {
        while (a->num)
        {
            min = smallest_num(a);
            rotrate_min(a, b, len);
            sort_3(&a);
            pa_b(&a, &b);
            pa_b(&a, &b);
            if (min == 3)
                break;
        }
    }
    if (min == 3)
        sort_3(&a);
}
