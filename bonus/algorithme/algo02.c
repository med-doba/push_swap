/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:31:24 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:40:48 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_6_to_10(t_ps **stack_a, t_ps **stack_b, t_var *my)
{
	t_ps	*tmp;

	my->k = 0;
	tmp = *stack_a;
	my->j = ft_lstsize_ps(*stack_a);
	while (my->j-- > 5)
	{
		my->x = ft_x(*stack_a);
		my->i = ft_index(*stack_a, my->x);
		if (my->i > 0 && my->i <= ft_lstsize_ps(*stack_a) / 2)
			while (my->x != (*stack_a)->data)
				ft_ra(stack_a, 1);
		if (my->i > ft_lstsize_ps(*stack_a) / 2)
			while (my->x != (*stack_a)->data)
				ft_rra(stack_a, 1);
		ft_pb(stack_a, stack_b, 1);
		my->k++;
	}
	ft_5_num(stack_a, stack_b);
	while (my->k > 0)
	{
		ft_pa(stack_a, stack_b, 1);
		my->k--;
	}
}
