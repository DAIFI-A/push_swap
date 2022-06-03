/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:32:14 by adaifi            #+#    #+#             */
/*   Updated: 2022/06/02 17:03:03 by adaifi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include<unistd.h>
# include<fcntl.h>
# include<limits.h>
# include<stdlib.h>
# include"../libft/libft.h"

typedef struct stack
{
	int				num;
	int				index;
	struct stack	*next;
}	t_stack;

void	instructions_read(t_stack *a, t_stack *b, char *line);
void	free_stack(t_stack *a);
char	*ft_strjoin_custom(char const *s1, char const *s2);
int		is_digit(char	**av);
void	check(t_stack *a, t_stack *b);
char	*parse_bonus(int ac, char**av);
char	*ft_strjoin_custom(char const *s1, char const *s2);
void	stack_vald(int ac, t_stack *a, char **argv);
t_stack	*stack_fillin_bonus(int argc, char **argv);
t_stack	*creat_node_bonus(void);
int		is_sorted(t_stack *a);
int		ft_atoi(const char *str);
void	sa_b_bonus(t_stack **head);
void	ra_b_bonus(t_stack **head);
void	rra_b_bonus(t_stack **head);
void	pa_b_bonus(t_stack **reciver_head, t_stack **origin_head);
int		swap(int *a, int *b);
void	over_flow(char **av);
void	ss_bonus(t_stack **stack_a, t_stack **stack_b);
void	rr_bonus(t_stack **stack_a, t_stack **stack_b);
void	rrr_bonus(t_stack **stack_a, t_stack **stack_b);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		isdupl(t_stack *a);
char	*ft_error(char **av);

#endif
