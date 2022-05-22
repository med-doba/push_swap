/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:36:36 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/22 22:46:15 by marvin           ###   ########.fr       */
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

int	ft_x(t_ps *stack_a)
{
	int	x;
	x = stack_a->data;
	while (stack_a->next != NULL)
	{
		if (x > stack_a->next->data)
			x = stack_a->next->data;
		stack_a = stack_a->next;
	}
	return (x);
}

int	ft_index(t_ps *stack_a, int x)
{
	int	i;

	i = 0;
	while(stack_a->next != NULL)
	{
		if (x == stack_a->data)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	ft_4_num(t_ps **stack_a, t_ps **stack_b)
{
	int	x;
	int	i;

	x = ft_x(*stack_a);
	i = ft_index(*stack_a, x);
	if (i >= 0 && i <= ft_lstsize_ps(*stack_a) / 2)
		while ((*stack_a)->data != x)
			ft_ra(stack_a, 1);
	if (i > ft_lstsize_ps(*stack_a) / 2)
		while ((*stack_a)->data != x)
			ft_rra(stack_a, 1);
	ft_pb(stack_a, stack_b, 1);
	ft_3_num(stack_a);
	ft_pa(stack_a, stack_b, 1);
}

void	ft_5_num(t_ps **stack_a, t_ps **stack_b)
{
	int	x;
	int	i;

	x = ft_x(*stack_a);
	i = ft_index(*stack_a, x);
	if (i >= 0 && i <= ft_lstsize_ps(*stack_a) / 2)
		while (i-- != 0)
			ft_ra(stack_a, 1);
	if (i > ft_lstsize_ps(*stack_a) / 2)
		while (i-- != 0)
			ft_rra(stack_a, 1);
	ft_pb(stack_a, stack_b, 1);
	ft_4_num(stack_a, stack_b);
	ft_pa(stack_a, stack_b, 1);
}
