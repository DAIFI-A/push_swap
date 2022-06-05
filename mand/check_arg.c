/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:29:52 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/05 00:53:56 by adaifi           ###   ########lyon.fr   */
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
		while (((av[i][0] != '-' && av[i][0] != '+') || av[i][1] == '\0')
			&& ft_isdigit(av[i][0]) == 0)
			return (0);
		j = 1;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0 || av[i][j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_sorted(t_stack *a)
{
	t_stack	*back;

	while (a)
	{
		back = a;
		while (back)
		{
			if (a->num > back->next->num)
				return (0);
			back = back->next;
		}
		a = a->next;
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

void	ckeck_stack(int ac, char **av, t_stack *a)
{
	char	*tab;
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = parse(ac, av);
	str = ft_split(tab, ' ');
	over_flow(av);
	if ((isdupl(a) == 0) || !(is_digit(str)))
	{
		ft_error(str);
		free_stack(a);
		exit(1);
	}
	if (is_sorted(a) == 1)
	{
		free_arg(str);
		free_stack(a);
		exit(0);
	}
	free(tab);
	free_arg(str);
}
