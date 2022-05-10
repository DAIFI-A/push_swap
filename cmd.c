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

int pa_b(t_stack **reciver_head, t_stack **origin_head)
{
    t_stack *tmp;
    t_stack *to;
    t_stack *from;

    to = *reciver_head;
    from = *origin_head;
    if (!from)
        return 0;
    tmp = from;
    from = from->next;
    *origin_head = from;
    if (!to)
    {
        to = tmp;
        to->next = NULL;
        *reciver_head = to;
    }
    else
    {
        tmp->next = to;
        *reciver_head = tmp;
    }
    return (0);
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
