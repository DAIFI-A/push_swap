/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:29:31 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/21 22:04:09 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_digit(char	**av)
{
	int		j;
	int		i;

	i = 0;
	while (av[i])
	{
		j = 1;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
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
