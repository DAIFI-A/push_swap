/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:03:59 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/12 23:03:59 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_sa_and_rra(t_stack **a)
{
	sa_b(a);
	rra_b(a);
	write(1, "sa\n", 3);
	write(1, "rra\n", 4);
}

void	sort_3_sa_and_ra(t_stack **a)
{
	sa_b(a);
	ra_b(a);
	write(1, "sa\n", 3);
	write(1, "ra\n", 3);
}

void	pa_and_write(t_stack **a, t_stack **b)
{
	pa_b(a, b);
	write(1, "pa\n", 3);
}

void	pb_and_write(t_stack **a, t_stack **b)
{
	pa_b(a, b);
	write(1, "pb\n", 3);
}

void	rrb(t_stack **a)
{
	rra_b(a);
	write(1, "rrb\n", 4);
}
