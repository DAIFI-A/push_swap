/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:32:14 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/18 17:07:08 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H
#include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# define BUFFER_SIZE 1

typedef struct stack
{
	int		num;
	int		deff;
	int		index;
	struct stack	*next;
}	t_stack;

void	instructions_read(t_stack *a, t_stack *b, char *line);
void	check(t_stack *a, t_stack *b);
void	stack_vald(t_stack *a, char **argv);
t_stack	*stack_fillin(int argc, char **argv);
t_stack	*creat_node(void);
int		is_sorted(t_stack *a);
int		ft_atoi(const char *str);
void	sa_b_bonus(t_stack **head);
void	ra_b_bonus(t_stack **head);
void	rra_b_bonus(t_stack **head);
void	pa_b_bonus(t_stack **reciver_head, t_stack **origin_head);
int		swap(int *a, int *b);
void	ss_bonus(t_stack **stack_a, t_stack **stack_b);
void	rr_bonus(t_stack **stack_a, t_stack **stack_b);
void	rrr_bonus(t_stack **stack_a, t_stack **stack_b);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*get_next_line(int fd);

#endif

