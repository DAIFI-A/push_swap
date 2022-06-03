/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:33:58 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/03 14:31:38 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_big_stack(t_stack **a, t_stack **b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (stack_len(*a) > 5 && stack_len(*a) <= 250)
		j = 15;
	else if (stack_len(*a) > 250)
		j = 25;
	index_stack(*a);
	pb_andsort(a, b, i, j);
}

void	pb_andsort(t_stack **a, t_stack **b, int i, int j)
{
	while (stack_len(*a) != 0)
	{
		if ((*a)->index <= i && stack_len(*b) > 1)
		{
			pb_and_write(b, a);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + j)
		{
			pb_and_write(b, a);
			i++;
		}
		else
			sort_3_ra(a);
		if (stack_len(*b) == 2)
		{
			if ((*b)->next->index > (*b)->index)
				rb(b);
		}
	}
	sorting(a, b);
}

int	max_index_b(t_stack *a, int max)
{
	int		i;
	t_stack	*backup;

	i = 0;
	backup = a;
	while (backup)
	{
		if (backup->index == max)
			break ;
		i++;
		backup = backup->next;
	}
	return (i);
}

void	sorting(t_stack **a, t_stack **b)
{
	int	middle;
	int	max;
	int	i;

	max = stack_len(*b) - 1;
	while (stack_len(*b) != 0)
	{
		i = max_index_b(*b, max);
		while (max > -1)
		{
			middle = (max + 1) / 2;
			if ((*b)->index == max)
				break ;
			else if ((*b)->index != max)
			{
				if (i <= middle)
					rb(b);
				else if (i > middle)
					rrb(b);
			}
		}
		pa_and_write(a, b);
		max--;
	}
}
