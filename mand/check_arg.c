/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:29:52 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/16 15:12:58 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isdupl(char **a)
{
	char	**tmp;
	int		i;
	int		j;
	int		k;

	tmp = a;
	i = 0;
	k = 0;
	j = 0;
	while(a != NULL)
	{
		while(tmp)
		{
			if(tmp[i] == a[j])
				return (0);
			i++;
		}
		j++;
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
	free(a);
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

void	ckeck_stack(t_stack *a, char **argv)
{
	if (!(a))
	{
		write(1, "error", 6);
		exit (1);
	}
	if (a->num != ft_atoi(argv[0]))
	{
		write(2, "error", 6);
		exit(1);
	}
}
