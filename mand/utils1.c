/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:45:37 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/20 17:21:43 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	stack_len(t_stack *stack)
{
	int		len;
	t_stack	*tmp;

	tmp = stack;
	len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

int	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	b = &tmp;
	return (0);
}

void	index_stack(t_stack *a)
{
	t_stack	*backup1;
	t_stack	*backup2;
	int		i;

	backup1 = a;
	while (backup1 != NULL)
	{
		i = 0;
		backup2 = a;
		while (backup2)
		{
			if (backup1->num > backup2->num)
				i++;
			backup2 = backup2->next;
		}
		backup1->index = i;
		backup1 = backup1->next;
	}
}
