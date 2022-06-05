/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:33:12 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/05 18:14:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_sa(t_ps **stack_a, int yes)
{
	int		tmp;

	if (ft_lstsize_ps(*stack_a) < 2)
		return ;
	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = tmp;
	}
	if (yes == 1)
		ft_printf("sa\n");
}
