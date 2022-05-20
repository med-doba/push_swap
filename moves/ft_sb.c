/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:49:06 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/20 19:03:14 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_ps **stack_b, int yes)
{
	if (*stack_b == NULL)
		return ;

	t_ps *tmp1 = ft_pop(stack_b);
	t_ps *tmp2 = ft_pop(stack_b);
	ft_push(stack_b, tmp1);
	ft_push(stack_b, tmp2);
	if (yes == 1)
		ft_printf("sb\n");
}
