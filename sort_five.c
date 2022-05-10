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
<<<<<<< HEAD
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
=======
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
    
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
}

void    push_back(t_stack *a, t_stack *b)
{
    int     i;

    i = 1;
    while (i < 4)
    {
<<<<<<< HEAD
        pa_b(&a, &b);
=======
        pa_b(a, b);
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
        i++;
    }
}

<<<<<<< HEAD
void    sort_five(t_stack *a , t_stack *b)
=======
void    sort_five(t_stack *a , t_stack *b, int i)
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
{
    int min;
    int len;

<<<<<<< HEAD
    min = 0;
=======
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
    len = stack_len(a);
    if (len > 3)
    {
        while (a->num)
        {
            min = smallest_num(a);
<<<<<<< HEAD
            rotrate_min(a, b, len);
            sort_3(&a);
            pa_b(&a, &b);
            pa_b(&a, &b);
=======
            sort_a_in_b(a, min);
            pa_b(b, a);
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
            if (min == 3)
                break;
        }
    }
    if (min == 3)
<<<<<<< HEAD
        sort_3(&a);
=======
        sort_3(a);
    push_back(a, b);
>>>>>>> e6a620272d8d35c23683a75d9741bfb5625eec15
}
