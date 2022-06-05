/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:49:06 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:51:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_sb(t_ps **stack_b, int yes)
{
	t_ps	*tmp1;
	t_ps	*tmp2;

	if (ft_lstsize_ps(*stack_b) < 2)
		return ;
	tmp1 = ft_pop(stack_b);
	tmp2 = ft_pop(stack_b);
	ft_push(stack_b, tmp1);
	ft_push(stack_b, tmp2);
	if (yes == 1)
		ft_printf("sb\n");
}
