#include"push_swap.h"

int sa_b(t_stack **head)
{
    t_stack *stack;

    stack = *head;
    if (stack && stack->next)
        swap(&stack->num, &stack->next->num);
    return (0);
}

int ra_b(t_stack **head)
{
    t_stack *stack;
    t_stack *first;
    t_stack *last;

    stack = *head;
    if (!(stack && stack->next))
        return (0);
    first = stack;
    stack = stack->next;
    last = stack;
    while(last->next)
    {
        last = last->next;
    }
    last->next = first;
    first->next = NULL;
    *head = stack;
    return (0);
}

int rra_b(t_stack **head)
{
    t_stack *stack;
    t_stack *previous;
    t_stack *last;

    stack = *head;
    if (!(stack && stack->next))
        return (0);
    last = stack;
    while(last->next)
    {
        previous = last;
        last = last->next;
    }
    previous->next = NULL;
    *head = last;
    return (0);
}

void	pa_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*back1;
	t_list	*back2;

	if (*stack_a == NULL)
		exit(1);
	back1 = (*stack_a)->next;
	back2 = *stack_b;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		(*stack_b)->next = NULL;
	}
	else
		ft_lstadd_front(stack_b, *stack_a);
	*stack_a = back1;
}

int ss(t_stack **stack_a, t_stack **stack_b)
{
    sa_b(stack_a);
    sa_b(stack_b);
    return(0);
}

int rr(t_stack **stack_a, t_stack **stack_b)
{
    ra_b(stack_a);
    ra_b(stack_b);
    return(0);
}

int rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra_b(stack_a);
    rra_b(stack_b);
    return(0);
}
