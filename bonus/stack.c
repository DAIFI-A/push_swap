/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:25:38 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/05 01:58:06 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*creat_node_bonus(int data)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->num = data;
	head->next = NULL;
	return (head);
}

t_stack	*stack_fillin_bonus(int argc, char **argv)
{
	int		i;
	t_stack	*head;
	t_stack	*tmp;
	char	*str;

	str = parse_bonus(argc, argv);
	argv = ft_split(str, ' ');
	head = creat_node_bonus(ft_atoi(argv[0]));
	i = 1;
	while (argv[i])
	{
		tmp = creat_node_bonus(ft_atoi(argv[i]));
		lstadd_back_bonus(&head, tmp);
		i++;
	}
	free(str);
	free_arg_bonus(argv);
	return (head);
}
