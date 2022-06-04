/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:36:36 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/31 21:34:50 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_3_num(t_ps **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		ft_sa(stack_a, 1);
	if (ft_order(*stack_a) == 1)
		ft_rra(stack_a, 1);
	if ((*stack_a)->data > (*stack_a)->next->data)
		ft_sa(stack_a, 1);
}

void	ft_2_num(t_ps **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
	{
		ft_ra(stack_a, 1);
	}
}
