/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:40:48 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/14 19:13:51 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct p_list{
	char	*str;
	int	n;
}v_list;

int	ft_digits(char *stack);
int	ft_nbr(char str);
int	ft_duplicate(char *stack);
int	ft_signe(char *stack);
int	ft_calculate(char *str);

#endif
