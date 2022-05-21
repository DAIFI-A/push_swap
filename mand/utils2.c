/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:58:55 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/21 17:31:29 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*parse(int ac, char**av)
{
	char	*str;
	int		j;

	j = 2;
	ac--;
	str = ft_strjoin(av[1], " ");
	while (ac--)
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
