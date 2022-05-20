/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:29:52 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/20 20:43:10 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdupl(t_stack *a)
{
	t_stack	*tmp;

	while (a->next)
	{
		tmp = a;
		while (tmp->next)
		{
			if (a->num == tmp->next->num)
				return (0);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (1);
}

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

void	ckeck_stack(int ac, char **av, t_stack *a)
{
	char	*tab;
	char	**str;

	tab = parse(ac, av);
	str = ft_split(tab, ' ');
	if ((isdupl(a) == 0) || (is_digit(str)) == 0)
	{
		write(2, "Error\n", 7);
		free_stack(a);
		exit (1);
	}
	if (is_sorted(a) == 1 || (!a))
	{
		free_stack(a);
		exit(1);
	}
}
