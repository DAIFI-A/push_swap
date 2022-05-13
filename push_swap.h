/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:04:55 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/13 23:04:05 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<stdlib.h>
# include<unistd.h>
# include"libft/libft.h"

typedef struct stack
{
	int		num;
	int		deff;
	int		index;
	struct stack	*next;
}	t_stack;

void	sa_b(t_stack **head);
void	sb(t_stack **b);
void	rrb(t_stack **a);
void	ra_b(t_stack **head);
void	rra_b(t_stack **head);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	pa_b(t_stack **reciver_head, t_stack **origin_head);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sorting(t_stack *a, t_stack *b);
void	sort_3(t_stack **val);
void	sort_4(t_stack *a, t_stack *b);
void	sort_3_sa_and_rra(t_stack **a);
void	sort_3_sa_and_ra(t_stack **a);
void	sort_3_sa(t_stack **a);
void	sort_3_ra(t_stack **a);
void	sort_3_rra(t_stack **a);
void	pa_and_write(t_stack **a, t_stack **b);
void	pb_and_write(t_stack **a, t_stack **b);
void	index_stack(t_stack *a);
void	rb(t_stack **b);
void	sort_five(t_stack *a, t_stack *b);
void	sort_big_stack(t_stack *a, t_stack *b);
int		stack_len(t_stack *stack);
int		swap(int *a, int *b);
int		smallest_num(t_stack *stack);
int		max_index_b(t_stack *a, int max);
int		main(int argc, char **argv);
t_stack	*creat_node(void);
t_stack	*stack_fillin(int argc, char **argv);
#endif
