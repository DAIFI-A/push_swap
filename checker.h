/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:32:14 by adaifi            #+#    #+#             */
/*   Updated: 2022/05/16 17:42:34 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H
#include <unistd.h>
#include "get_next_line/get_next_line.h"

void	instructions_read(t_stack *a, t_stack *b, char *line);
void	check(t_stack *a, t_stack *b);
void	stack_vald(t_stack *a, char **argv);

#endif
