/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:40:48 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/17 20:00:52 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct p_list{
	char	**ptr;
	char	*str;
	int		*nbr;
	int		n;
	int		i;
	int		j;
	int		x;
	int		y;
	int		h;
}t_list;

typedef struct node{
	int					data;
	struct push_swap	*next;
}t_ps;

int		ft_digits(char *stack);
int		ft_nbr(char str);
int		ft_duplicate(char *stack);
int		ft_signe(char *stack);
int		ft_calculate(char *str);
void	ft_double(char **stack, t_list *my, int k);
void	ft_free_all(char **str);

#endif
