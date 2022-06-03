/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd1_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:03:50 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/03 17:15:54 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_sa(t_stack **a)
{
	sa_b(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	sa_b(b);
	write(1, "sb\n", 3);
}

void	sort_3_ra(t_stack **a)
{
	ra_b(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ra_b(b);
	write(1, "rb\n", 3);
}

void	sort_3_rra(t_stack **a)
{
	rra_b(a);
	write(1, "rra\n", 4);
}
