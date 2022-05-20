/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:29:52 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/19 00:02:33 by adaifi           ###   ########lyon.fr   */
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
			{
				free_stack(a);
				return 0;
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (1);
}

char	*join_str(int ac, char**av)
{
	char	*str;
	int		j;

	j = 2;
	ac--;
	str = ft_strjoin(av[1], " ");
	while (ac--)
	{
		str = ft_strjoin(str, av[j]);
		if (ac == 1)
		{
			str = ft_strjoin(str, "\0");
			break ;
		}
		str = ft_strjoin(str, " ");
		j++;
	}
	return (str);
}

char	parse(int ac, char **av,t_stack *a)
{
	char	*str;
	char	**str1;
	int		i;

	i = 0;
	str = join_str(ac, av);
	str1 = ft_split(str, ' ');
	return (str1);
}

int	is_digit(char	**av)
{
	int		j;
	int		i;

	i = 0;
	while (av[i])
	{
		j = 1;
		if (((av[i][0] != '-' && av[i][0] != '+') || (av[i][1] == '\0')) && (ft_isdigit(av[i][0]) != 0))
			return (0);
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_stack(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (a->next != NULL)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
	free(a->next);
}

void	free_arg(char **argv)
{
	int		i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv[i]);
}

int	is_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->num < a->next->num)
			return (1);
		a = a->next;
	}
	return (0);
}

void	ckeck_stack(int ac, char **av, t_stack *a)
{
	char	**tab;
	
	tab = parse(ac, av, a); 
	if ((!a) || (isdupl(a) == 0) || (is_digit(tab)) == 0)
	{
		write(1, "error", 6);
		exit (1);
	}
	if (is_sorted(a) == 1)
		exit(1);
}
