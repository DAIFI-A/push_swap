/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:35:12 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/04 16:22:26 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa_b_bonus(t_stack **head)
{
	t_stack	*stack;

	stack = *head;
	if (stack && stack->next)
		swap(&stack->num, &stack->next->num);
}

void	ra_b_bonus(t_stack **head)
{
	t_stack	*stack;
	t_stack	*first;
	t_stack	*last;

	stack = *head;
	if (!(stack && stack->next))
		exit(1);
	first = stack;
	stack = stack->next;
	last = stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	*head = stack;
}

void	rra_b_bonus(t_stack **head)
{
	t_stack	*stack;
	t_stack	*previous;
	t_stack	*last;

	stack = *head;
	if (!(stack && stack->next))
		return ;
	last = stack;
	while (last->next)
	{
		previous = last;
		last = last->next;
	}
	previous->next = NULL;
	*head = last;
}

void	pa_b_bonus(t_stack **reciver_head, t_stack **origin_head)
{
	t_stack	*tmp;
	t_stack	*to;
	t_stack	*from;

	if (!(*origin_head))
		return ;
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
		lstadd_front_bonus(reciver_head, *origin_head);
	*origin_head = from;
}
