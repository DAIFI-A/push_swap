/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:31:43 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/17 20:25:12 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
t_stack	*creat_node(void)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	head->deff = 1;
	head->num = 0;
	head->next = NULL;
	return (head);
}

t_stack	*stack_fillin(int argc, char **argv)
{
	int		i;
	t_stack	*head;
	t_stack	*tmp;

	i = 1;
	head = creat_node();
	tmp = head;
	while (i < argc)
	{
		tmp->num = ft_atoi(argv[i]);
		if (i < argc - 1)
		{
			tmp->next = creat_node();
			tmp = tmp->next;
			tmp->deff = 1;
		}
		i++;
	}
	return (head);
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
	char	line[5];

	line[0] = '\0';
	line[1] = '\0';
	line[2] = '\0';
	line[3] = '\0';
	line[4] = '\0';
	while (read(0, line, 4) != 0)
		instructions_read(a, b, line);
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
}

int	main(int ac, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = stack_fillin(ac, argv);
	check(a, b);
	if (is_sorted(a) == 1 && b == NULL)
		write(1, "ok\n", 4);
	else if (is_sorted(a) != 1 && b == NULL)
		write(1, "ko\n", 4);
	else if (is_sorted(a) != 1 || (is_sorted(a) != 1 && b != NULL))
		write(2, "ko\n", 4);
	return (0);
}
