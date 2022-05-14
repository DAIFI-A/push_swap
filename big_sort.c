/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:33:58 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/13 23:37:27 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"push_swap.h"

void	sort_big_stack(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (stack_len(a) > 5 && stack_len(a) <= 250)
		j = 15;
	else if (stack_len(a) > 250)
		j = 25;
	index_stack(a);
	range(a, b, i, j);
}

void	range(t_stack *a, t_stack *b, int i, int j)
{
	while (stack_len(a) != 0)
	{
		if (a->index <= i && stack_len(b) > 1)
		{
			pb(&b, &a);
			rb(&b);
			i++;
		}
		else if (a->index <= i + j)
		{
			pb(&b, &a);
			i++;
		}
		else
			ra(&a);
		if (stack_len(b) > 1)
		{
			if (b->index < b->next->index)
				sort_3_sa(&b);
		}
	}
	sort(a, b);
}

void	sort(t_stack *a, t_stack *b)
{
	int	middle;
	int	max;
	int	i;

	max = stack_len(b) - 1;
	i = 0;
	while (stack_len(b) != 0)
	{
		i = find_max_index(args->stack_b, max);
		while (max > -1)
		{
			middle = (max + 1) / 2;
			if (b->index == max)
				break ;
			else if (b->index != max)
			{
				if (i <= middle)
					rb(&b);
				else if (i > middle)
					rrb(&b)	;
			}
		}
		pa(&a, &b);
		max--;
	}
}
