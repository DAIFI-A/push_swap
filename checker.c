/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:31:43 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/16 19:51:35 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	arg_stack(av, a);
	check(a, b);
	if (is_sorted(a) && !b)
		write(1, "ok\n", 4);
	else
		write(2, "ko\n", 4);
	return (0);
}

void	stack_vald(t_stack *a, char **argv)
{
	if (a->num != ft_atoi(argv[0]))
		write(2, "error", 6);
	if (!a)
		exit(1);
}

void	check(t_stack *a, t_stack *b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		instructions_read(a, b, line);
		free(line);
		line = get_next_line(0);
	}
}

int	is_sorted(t_stack *a)
{
	while (a)
	{
		if (a->num < a->next->num)
			return (1);
		a = a->next;
	}
	return (0);
}

void	instructions_read(t_stack *a, t_stack *b, char *line)
{
	if (ft_strncmp(line, "sa", 3))
		return (sa_b(&a));
	if (ft_strncmp(line, "sb", 3))
		return (sa_b(&b));
	if (ft_strncmp(line, "pb", 3))
		return (pa_b(&b, &a));
	if (ft_strncmp(line, "pa", 3))
		return (pa_b(&a, &b));
	if (ft_strncmp(line, "rra", 4))
		return (rra_b(&a));
	if (ft_strncmp(line, "rrb", 4))
		return (rra_b(&b));
	if (ft_strncmp(line, "rb", 4))
		return (ra_b(&b));
	if (ft_strncmp(line, "ra", 4))
		return (ra_b(&a));
}
