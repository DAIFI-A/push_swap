#include "checker.h"

void	sa_b_bonus(t_stack **head)
{
	t_stack	*stack;

	stack = *head;
	if (stack && stack->next)
		swap(&stack->num, &stack->next->num);
}

void	ra_b_bonus(t_stack **head)
{
	t_stack	*stack;
	t_stack	*first;
	t_stack	*last;

	stack = *head;
	if (!(stack && stack->next))
		exit(1);
	first = stack;
	stack = stack->next;
	last = stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	*head = stack;
}

void	rra_b_bonus(t_stack **head)
{
	t_stack	*stack;
	t_stack	*previous;
	t_stack	*last;

	stack = *head;
	if (!(stack && stack->next))
		exit(1);
	last = stack;
	while (last->next)
	{
		previous = last;
		last = last->next;
	}
	previous->next = NULL;
	*head = last;
}

void	pa_b_bonus(t_stack **reciver_head, t_stack **origin_head)
{
	t_stack	*tmp;
	t_stack	*to;
	t_stack	*from;

	if (!(*origin_head))
		exit(0);
	from = (*origin_head)->next;
	to = *reciver_head;
	tmp = *origin_head;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*reciver_head = to;
	}
	else
		ft_lstadd_front(reciver_head, *origin_head);
	*origin_head = from;
}

int	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	b = &tmp;
	return (0);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
