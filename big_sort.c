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
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (stack_len(a) > 5 && stack_len(a) <= 250)
		j = 15;
	if (stack_len(a) > 250)
		j = 25;
	index_stack(a);
	while (stack_len(a) != 0)
	{
		if (a->index <= i + j)
		{
			pb_and_write(&b, &a);
			i++;
		}
		else if (a->index <= i && stack_len(b) > 1)
		{
			pb_and_write(&b, &a);
			rb(&b);
			i++;
		}
		else
			sort_3_ra(&a);
		if (stack_len(b) > 1)
		{
			if (b->index < b->next->index)
				rb(&b);
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
			break;
		i++;
		backup = backup->next;
	}
	return(i);
}

void	sorting(t_stack *a, t_stack *b)
{
	int		middle;
	int		i;
	int		max;

	max = stack_len(b) - 1;
	while (b)
	{
		i = max_index_b(b, max);
		while (max > -1)
		{
			middle = stack_len(b) / 2;
			if (b->index == max)
				break;
			else if (b->index != max)
			{
				if (i > middle)
					rrb(&b);
				else if (i <= middle)
					rb(&b);
			}
		}
		pa_and_write(&a, &b);
		max--;
		middle--;
	}
}
