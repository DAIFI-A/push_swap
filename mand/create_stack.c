/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:01:38 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/03 17:39:29 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	*creat_node(int data)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->num = data;
	head->next = NULL;
	return (head);
}

t_stack	*stack_fillin(int argc, char **argv)
{
	int		i;
	t_stack	*head;
	t_stack	*tmp;
	char	*str;

	str = parse(argc, argv);
	argv = ft_split(str, ' ');
	head = creat_node(ft_atoi(argv[0]));
	i = 1;
	while (argv[i])
	{
		tmp = creat_node(ft_atoi(argv[i]));
		lstadd_back(&head, tmp);
		i++;
	}
	free(str);
	return (head);
}

int	main(int argc, char **argv)
{
	t_stack	*stack1;
	t_stack	*stack2;
	int		len;

	if (argc == 1)
		exit(0);
	stack2 = NULL;
	stack1 = stack_fillin(argc, argv);
	len = stack_len(stack1);
	ckeck_stack(argc, argv, stack1);
	if (len == 2 && stack1->num > stack1->next->num)
		sort_3_sa(&stack1);
	else if (len == 3)
		sort_3(&stack1);
	else if (len == 4)
		sort_4(&stack1, &stack2);
	else if (len == 5)
		sort_five(&stack1, &stack2);
	else if (len > 5)
		sort_big_stack(&stack1, &stack2);
	free_stack(stack1);
	stack2 = NULL;
	return (0);
}
