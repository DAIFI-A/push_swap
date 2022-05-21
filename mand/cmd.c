/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:04:05 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/12 23:04:05 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa_b(t_stack **head)
{
	t_stack	*stack;

	stack = *head;
	if (stack && stack->next)
		swap(&stack->num, &stack->next->num);
}

void	ra_b(t_stack **head)
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

void	rra_b(t_stack **head)
{
	t_stack	*stack;
	t_stack	*previous;
	t_stack	*last;

	stack = *head;
	if (!(stack && stack->next))
		exit(1);
	last = stack;
	while (last->next)
	{
		previous = last;
		last = last->next;
	}
	previous->next = NULL;
	*head = last;
	(*head)->next = stack;
}
