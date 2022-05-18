/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:01:34 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/18 17:02:57 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss_bonus(t_stack **stack_a, t_stack **stack_b)
{
	sa_b_bonus(stack_a);
	sa_b_bonus(stack_b);
}

void	rr_bonus(t_stack **stack_a, t_stack **stack_b)
{
	ra_b_bonus(stack_a);
	ra_b_bonus(stack_b);
}

void	rrr_bonus(t_stack **stack_a, t_stack **stack_b)
{
	rra_b_bonus(stack_a);
	rra_b_bonus(stack_b);
}
