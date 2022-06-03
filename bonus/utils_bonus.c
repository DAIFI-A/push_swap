/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:22:03 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/02 16:48:36 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

char	*parse_bonus(int ac, char**av)
{
	char	*str;
	char	*tmp;
	int		j;

	j = 2;
	ac--;
	tmp = av[1];
	str = ft_strjoin(tmp, " ");
	while (--ac)
	{
		str = ft_strjoin_custom(str, av[j]);
		if (ac == 1)
		{
			str = ft_strjoin_custom(str, "\0");
			break ;
		}
		str = ft_strjoin_custom(str, " ");
		j++;
	}
	return (str);
}

char	*ft_strjoin_custom(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (0);
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, len1);
	ft_memmove(str + len1, s2, len2 + 1);
	free((void *)s1);
	return (str);
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

char	*ft_error(char **av)
{
	write(2, "Error\n", 7);
	exit(1);
}
