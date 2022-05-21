/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:25:38 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/21 21:18:11 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*creat_node(void)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
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
		}
		i++;
	}
	return (head);
}
