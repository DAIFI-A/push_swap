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
	while (a)
	{
		if (stack_len(b) == 1)
			break ;
		if (a->num == smallest_num(a))
			pb_and_write(&b, &a);
		else
			sort_3_ra(&a);
	}
	sort_3(&a);
	pa_and_write(&a, &b);
}

void	sort_five(t_stack *a, t_stack *b)
{
	while (a)
	{
		if (stack_len(b) == 2)
			break ;
		if (a->num == smallest_num(a))
			pb_and_write(&b, &a);
		else
			sort_3_ra(&a);
	}
	sort_3(&a);
	while (b)
		pa_and_write(&a, &b);
}
