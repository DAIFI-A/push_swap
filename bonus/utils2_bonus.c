/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:29:31 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/02 19:51:11 by adaifi           ###   ########lyon.fr   */
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
		while (((av[i][0] != '-' && av[i][0] != '+') || av[i][1] == '\0')
			&& (ft_isdigit(av[i][0]) == 0 ))
			return (0);
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

void	over_flow(char **av)
{
	int		i;
	int		j;
	int		n;

	i = 1;
	while (av[i])
	{
		j = 0;
		n = 0;
		while (av[i][j] != '\0')
		{
			while (av[i][j] == '0' || av[i][j] == '-' || av[i][j] == '+')
				j++;
			while (av[i][j])
			{
				j++;
				n++;
			}
			if (n > 10)
				ft_error(av);
		}
		i++;
	}
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
