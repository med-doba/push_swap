/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:36:36 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/22 19:11:29 by med-doba         ###   ########.fr       */
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

int	ft_x(t_ps **stack_a)
{
	int	x;
	x = (*stack_a)->data;
	while ((*stack_a)->next != NULL)
	{
		if (x > (*stack_a)->next->data)
			x = (*stack_a)->next->data;
		*stack_a = (*stack_a)->next;
	}
	return (x);
}

void	ft_4_num(t_ps **stack_a, t_ps **stack_b)
{
	t_ps	*tmp;
	t_ps	*top;
	int	x;
	int	i;

	top = *stack_a;
	tmp = *stack_a;
	x = ft_x(stack_a);
	// printf("%d\n", x);
	i = 0;
	while((*stack_a)->next != NULL)
	{
		if (x == (*stack_a)->data)
		{
			if (i == 0)
			{
				ft_pb(stack_a, stack_b, 1);
				top = *stack_a;
				break ;
			}
			if (i == 1)
			{
				ft_sa(stack_a, 1);
				ft_pb(stack_a, stack_b, 1);
				top = *stack_a;
				break ;
			}
			if (i == 2)
			{
				ft_rra(stack_a, 1);
				ft_rra(stack_a, 1);
				ft_pb(stack_a, stack_b, 1);
				top = *stack_a;
				break ;
			}
			if (i == 3)
			{
				ft_rra(&tmp, 1);
				ft_pb(&tmp, stack_b, 1);
				top = *stack_a;
				break ;
			}
		}
		i++;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = top;
	ft_3_num(stack_a);
	while(stack_a != NULL)
	{
		ft_printf("stack_a: %d\n", (*stack_a)->data);
		*stack_a = (*stack_a)->next;
	}
	while(stack_b != NULL)
	{
		ft_printf("(*stack_b)): %d\n", (*stack_b)->data);
		*stack_b = (*stack_b)->next;
	}
	// ft_pa(stack_a, stack_b, 1);
}
