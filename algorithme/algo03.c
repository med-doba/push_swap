/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:35:41 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/23 19:16:56 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_place(t_ps **stack_a, t_ps **stack_b, t_var *my)
{
	my->nbr;
	my->n = 0;
	while (*stack_a != NULL)
	{
		if (ft_lstsize_ps(*stack_a))
		my->x = ft_x(*stack_a);
		my->i = ft_index(*stack_a, my->x);
		if (my->i > 0 && my->i <= ft_lstsize_ps(*stack_a) / 2)
			while (my->x != (*stack_a)->data)
				ft_ra(stack_a, 1);
		if (my->i > ft_lstsize_ps(*stack_a) / 2)
			while (my->x != (*stack_a)->data)
				ft_rra(stack_a, 1);
		ft_pb(stack_a, stack_b, 1);
	}
}

void	ft_100_to_500(t_ps **stack_a, t_ps **stack_b, t_var *my)
{
	// while (*stack_a != NULL)
	// {
	// 	my->x = ft_x(*stack_a);
	// 	my->i = ft_index(*stack_a, my->x);
	// 	if (my->i > 0 && my->i <= ft_lstsize_ps(*stack_a) / 2)
	// 		while (my->x != (*stack_a)->data)
	// 			ft_ra(stack_a, 1);
	// 	if (my->i > ft_lstsize_ps(*stack_a) / 2)
	// 		while (my->x != (*stack_a)->data)
	// 			ft_rra(stack_a, 1);
	// 	ft_pb(stack_a, stack_b, 1);
	// 	(*stack_a) = (*stack_a)->next;
	// }
}
