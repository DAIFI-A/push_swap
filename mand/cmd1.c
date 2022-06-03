/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:03:25 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/02 17:38:09 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_b(t_stack **reciver_head, t_stack **origin_head)
{
	t_stack	*tmp;
	t_stack	*to;
	t_stack	*from;

	if (!(*origin_head))
		exit(0);
	from = (*origin_head)->next;
	to = *reciver_head;
	tmp = *origin_head;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*reciver_head = to;
	}
	else
		lstadd_front(reciver_head, *origin_head);
	*origin_head = from;
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa_b(stack_a);
	sa_b(stack_b);
	write(1, "ss\n", 4);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra_b(stack_a);
	ra_b(stack_b);
	write(1, "rr\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra_b(stack_a);
	rra_b(stack_b);
	write(1, "rrr\n", 5);
}
