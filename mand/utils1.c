/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:45:37 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/03 17:13:57 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	stack_len(t_stack *stack)
{
	int		len;
	t_stack	*tmp;

	tmp = stack;
	len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*lastnode;

	if (!*lst)
		*lst = new;
	else
	{
		lastnode = lstlast(*lst);
		lastnode->next = new;
	}
}

void	lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	index_stack(t_stack *a)
{
	t_stack	*backup1;
	t_stack	*backup2;
	int		i;

	backup1 = a;
	while (backup1 != NULL)
	{
		i = 0;
		backup2 = a;
		while (backup2)
		{
			if (backup1->num > backup2->num)
				i++;
			backup2 = backup2->next;
		}
		backup1->index = i;
		backup1 = backup1->next;
	}
}
