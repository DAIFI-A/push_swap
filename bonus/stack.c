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

t_stack	*creat_node_bonus(void)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	head->num = 0;
	head->next = NULL;
	return (head);
}

t_stack	*stack_fillin_bonus(int argc, char **argv)
{
	int		i;
	t_stack	*head;
	t_stack	*tmp;
	int		j;
	char	*str;

	i = 1;
	j = 0;
	str = parse_bonus(argc, argv);
	argv = ft_split(str, ' ');
	head = creat_node_bonus();
	tmp = head;
	while (argv[j])
		j++;
	while (argv[i])
	{
		tmp->num = ft_atoi(argv[i]);
		if (i < j - 1)
		{
			tmp->next = creat_node_bonus();
			tmp = tmp->next;
		}
		i++;
	}
	return (head);
}