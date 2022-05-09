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

int smallest_num(t_stack *stack)
{
    int     min;

    min = stack->num;
    while (stack->next)
    {
        if (stack->num < min)
            min = stack->num;
        stack = stack->next;
    }
    if(stack->num < min)
        min = stack->num;
    return (min);
}

int sort_five(t_stack **val , t_stack **val1, int i)
{
    int min;

    
    //first we need to push the top 2 elements to stack_b
    i += push_first_2_elements(val, val1, i);
    //then we deal with the rest by the three sort algo
    i += sort_3(val);
    min = smallest_num(val);
    if ()
    i += pa_b()
}
