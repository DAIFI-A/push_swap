#include "push_swap.h"

int smallest_num(t_stack *b)
{
	int		min;
	t_stack	*backup;

	backup = b;
	min = backup->num;
	while (backup->next)
	{
		if (min > backup->next->num)
			min = backup->next->num;
		backup = backup->next;
	}
	return (min);
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	min;

	min = smallest_num(a);
	if (a->num == min)
		pa_b(&b, &a);
	else if (a->next->num == min)
	{
		sa_b(&a);
		pb(&b, &a);
	}
	else if (args->stack_a->next->next->content == min)
	{
		rra_b(&a);
		rra_b(&a);
		pa_b(&b, &a);
	}
	else if (args->stack_a->next->next->next->content == min)
	{
		rra_b(&a);
		pa_b(&b, &a);
	}
	sort_3(args);
	pa(&a, &b);
}

void    sort_five(t_stack *a , t_stack *b, int i)
{
    int min;
    int len;


    len = stack_len(a);
    middle = len / 2 + 1;
	min = smallest_num(a);
	while (i < 5)
	{
		if (a->content == min)
		{
			pa_b(&b, &a);
			break ;
		}
		else
		{
			if (i <= middle)
				ra_b(&a);
			else if (i > middle)
				rra_b(&a);
		}
		i++;
	}
	sort_4(a);
	pa_b(&a, &b);
}
