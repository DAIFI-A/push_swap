/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:31:43 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/21 22:06:40 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check(t_stack *a, t_stack *b)
{
	char	line[5];

	line[0] = '\0';
	line[1] = '\0';
	line[2] = '\0';
	line[3] = '\0';
	line[4] = '\0';
	while (read(0, line, 4) != 0)
		instructions_read(a, b, line);
}

void	instructions_read(t_stack *a, t_stack *b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa_b_bonus(&a);
	if (ft_strncmp(line, "sb\n", 3) == 0)
		sa_b_bonus(&b);
	if (ft_strncmp(line, "pb\n", 3) == 0)
		pa_b_bonus(&b, &a);
	if (ft_strncmp(line, "pa\n", 3) == 0)
		pa_b_bonus(&a, &b);
	if (ft_strncmp(line, "rra\n", 4) == 0)
		rra_b_bonus(&a);
	if (ft_strncmp(line, "rrb\n", 4) == 0)
		rra_b_bonus(&b);
	if (ft_strncmp(line, "rb\n", 3) == 0)
		ra_b_bonus(&b);
	if (ft_strncmp(line, "ra\n", 3) == 0)
		ra_b_bonus(&a);
	if (ft_strncmp(line, "ss\n", 3) == 0)
		ss_bonus(&a, &b);
	if (ft_strncmp(line, "rr\n", 3) == 0)
		rr_bonus(&a, &b);
	if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr_bonus(&a, &b);
}

void	stack_vald(int ac, t_stack *a, char **argv)
{
	char	*tab;
	char	**str;

	tab = parse(ac, argv);
	str = ft_split(tab, ' ');
	if ((isdupl(a) == 0) || !(is_digit(str)))
	{
		write(2, "Error\n", 7);
		free_stack(a);
		exit(1);
	}
}

int	main(int ac, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (ac == 1)
		exit(0);
	if (ac == 2)
	{
		check(a, b);
		write(1, "OK\n", 4);
		exit(0);
	}
	a = stack_fillin(ac, argv);
	stack_vald(ac, a, argv);
	check(a, b);
	if ((is_sorted(a) == 1 && b == NULL))
		write(1, "OK\n", 4);
	else if (is_sorted(a) == 0 && b == NULL)
		write(1, "KO\n", 4);
	free_stack(a);
	b = NULL;
	return (0);
}
