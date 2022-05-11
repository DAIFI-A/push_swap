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
<<<<<<< HEAD
	int		min;

	min = smallest_num(a);
	printf("%d++++\n", min);
	if (a->num == min)
		pb_and_write(&b, &a);
	else if (a->next->num == min)
	{
		sort_3_sa(&a);
		pb_and_write(&b, &a);
	}
	else if (a->next->next->num == min)
	{
		sort_3_rra(&a);
		sort_3_rra(&a);
		pb_and_write(&b, &a);
	}
	else if (a->next->next->next->num == min)
	{
		sort_3_rra(&a);
		pb_and_write(&b, &a);
	}
	sort_3(&a);
	printf("oy\n");
	pa_and_write(&a, &b);
}

void    sort_five(t_stack *a , t_stack *b)
=======
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
>>>>>>> 62fed94af6da746070f2d1527626d95546bca504
{
	int min;
	int len;

<<<<<<< HEAD
	len = stack_len(a);
	min = smallest_num(a);
	printf("%d\n", a->next->next->next->num);
	if (a->num == min)
		pb_and_write(&b, &a);
	else if (a->next->num == min)
	{
		sort_3_sa(&a);
		pb_and_write(&b, &a);
	}
	else if (a->next->next->num == min)
	{
		sort_3_ra(&a);
		sort_3_ra(&a);
		pb_and_write(&b, &a);
	}
	else if (a->next->next->next->num == min)
	{
		sort_3_rra(&a);
		sort_3_rra(&a);
		pb_and_write(&b, &a);
	}
	else if (a->next->next->next->next->num == min)
	{
		sort_3_rra(&a);
		pb_and_write(&b, &a);
	}
	// while(min != 1)
	// {
	// 	if (min > middle)
	// 		sort_3_rra(&a);
	// 	else if (min <= middle)
	// 		sort_3_ra(&a);
	// 	min = smallest_num(a);
	// }
	// if (min == 1)
	// 	pb_and_write(&b, &a);
	//printf("%d---\n", min);
	sort_4(a,b);
	printf("oy");
	pa_and_write(&a, &b);
=======

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
>>>>>>> 62fed94af6da746070f2d1527626d95546bca504
}
