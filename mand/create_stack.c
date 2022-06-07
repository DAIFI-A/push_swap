/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:01:38 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/04 15:05:07 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = parse(argc, argv);
	argv = ft_split(str, ' ');
	head = creat_node();
	tmp = head;
	while (argv[j])
		j++;
	while (argv[i])
	{
		tmp->num = ft_atoi(argv[i]);
		if (i < j - 1)
		{
			tmp->next = creat_node();
			tmp = tmp->next;
		}
		i++;
	}
	return (head);
}

void	push_swap(int argc, char **argv, t_stack *a, t_stack *b)
{
	int		len;

	len = stack_len(a);
	if (len == 2 && a->num > a->next->num)
		sort_3_sa(&a);
	else if (len == 3)
		sort_3(&a);
	else if (len == 4)
		sort_4(&a, &b);
	else if (len == 5)
		sort_five(&a, &b);
	else if (len > 5)
		sort_big_stack(&a, &b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack1;
	t_stack	*stack2;
	int		i;

	i = 0;
	while (i < argc)
	{
		if (argv[i++][0] == '\0')
			ft_error(argv);
	}
	if (argc == 1)
		exit(1);
	stack2 = NULL;
	stack1 = stack_fillin(argc, argv);
	ckeck_stack(argc, argv, stack1);
	push_swap(argc, argv, stack1, stack2);
	// while (stack1){
	// 	printf("%d\n", stack1->num);
	// 	stack1 = stack1->next;
	// }
	// exit(0);
	free_stack(stack1);
	stack2 = NULL;
	return (0);
}
