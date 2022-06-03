/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:25:38 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/02 16:53:12 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*creat_node_bonus(void)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->num = 0;
	head->next = NULL;
	return (head);
}

t_stack	*stack_fillin_bonus(int argc, char **argv)
{
	int		i;
	int		j;
	t_stack	*head;
	t_stack	*tmp;
	char	*str;

	str = parse_bonus(argc, argv);
	argv = ft_split(str, ' ');
	head = creat_node_bonus();
	tmp = head;
	i = 0;
	j = 0;
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
	free(str);
	return (head);
}
