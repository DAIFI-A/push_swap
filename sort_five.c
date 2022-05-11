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
{
	int min;
	int len;

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
}
