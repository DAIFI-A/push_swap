#include "push_swap.h"

int push_first_2_elements(t_stack **a, t_stack **b, int i)
{
    i = 2;
    pa_b(a, b);
    pa_b(a, b);
    write(1, "pb\n", 3);
	write(1, "pb\n", 3);
	return (i);
}

int sort_five(t_stack **val , t_stack **val1, int i)
{
    //first we need to push the top 2 elements to stack_b
    i += push_first_2_elements(val, val1, i);
    //then we deal with the rest by the three sort algo
    i += sort_3(val);
    if ((*val1)->num < (*val1)->next)
    {
        i += sa_b(val1);
        write(1, "sb\n", 3);
    }
}
