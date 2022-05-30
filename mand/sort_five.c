/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:50:24 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/13 00:50:24 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_num(t_stack *b)
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

void	sort_3(t_stack **val)
{
	int		f;
	int		m;
	int		b;
	int		i;

	f = (*val)->num;
	m = (*val)->next->num;
	b = (*val)->next->next->num;
	i = 0;
	if (f > m && m < b && b > f)
		sort_3_sa(val);
	if (f > m && m > b && b < f)
		sort_3_sa_and_rra(val);
	if (f > m && m < b && b < f)
		sort_3_ra(val);
	if (f < m && m > b && b > f)
		sort_3_sa_and_ra(val);
	if (f < m && m > b && b < f)
		sort_3_rra(val);
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	min;

	min = smallest_num(a);
	if (a->num == min)
		pb(&b, &a);
	else if (a->next->num == min)
	{
		sa(&a);
		pb(&a, &b);
	}
	else if (a->next->next->num == min)
	{
		rra(&a);
		rra(&a);
		pb(&b, &a);
	}
	else if (args->stack_a->next->next->next->content == min)
	{
		rra(&a);
		pb(&b, &a);
	}
	sort_3(a);
	pa(&a, &b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	int	i;
	int	min;
	int	middle;

	i = 0;
	middle = stack_len(a) / 2 + 1;
	min = smallest_num(a);
	while (i < 5)
	{
		if (a->num == min)
		{
			pb(&b, &a);
			break ;
		}
		else
		{
			if (i <= middle)
				ra(&a);
			else if (i > middle)
				rra(&a);
		}
		i++;
	}
	sort_4(a);
	pa(&a, &b);
}
