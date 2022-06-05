/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:33:12 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:51:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_ps **stack_a, int yes)
{
	t_ps	*tmp1;
	t_ps	*tmp2;

	if (ft_lstsize_ps(*stack_a) < 2)
		return ;
	tmp1 = ft_pop(stack_a);
	tmp2 = ft_pop(stack_a);
	ft_push(stack_a, tmp1);
	ft_push(stack_a, tmp2);
	if (yes == 1)
		ft_printf("sa\n");
}
