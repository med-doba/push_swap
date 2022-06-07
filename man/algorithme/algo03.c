/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:35:41 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/28 18:04:35 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index_stack(t_ps *stack)
{
	int		i;
	t_ps	*top;
	t_ps	*tmp;

	top = stack;
	while (top != NULL)
	{
		i = 0;
		tmp = stack;
		while (tmp != NULL)
		{
			if (top->data > tmp->data)
				i++;
			tmp = tmp->next;
		}
		top->index = i;
		top = top->next;
	}
}

void	ft_handle_cases(t_ps **stack_a, t_ps **stack_b, int n)
{
	int	i;
	int	j;

	i = 1;
	if (n > 5 && n <= 250)
		j = 15;
	else if (n > 250)
		j = 25;
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= i && ft_lstsize_ps(*stack_b) > 1)
		{
			ft_pb(stack_a, stack_b, 1);
			ft_rb(stack_b, 1);
			i++;
		}
		else if ((*stack_a)->index <= i + j)
		{
			ft_pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ft_ra(stack_a, 1);
	}
}

int	ft_uper_nbr(t_ps *stack_b)
{
	int	x;

	x = stack_b->data;
	while (stack_b->next != NULL)
	{
		if (x < stack_b->next->data)
			x = stack_b->next->data;
		stack_b = stack_b->next;
	}
	return (x);
}

int	ft_index_uper(t_ps *stack_b, int x)
{
	int	i;

	i = 0;
	while (stack_b->next != NULL)
	{
		if (x == stack_b->data)
			break ;
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}

void	ft_repush(t_ps **stack_a, t_ps **stack_b)
{
	int	x;
	int	index;
	int	l;

	l = ft_lstsize_ps(*stack_b);
	while (l--)
	{
		x = ft_uper_nbr(*stack_b);
		index = ft_index_uper(*stack_b, x);
		if (index > 0 && index <= ft_lstsize_ps(*stack_b) / 2)
			while (x != (*stack_b)->data)
				ft_rb(stack_b, 1);
		if (index > ft_lstsize_ps(*stack_b) / 2)
			while (x != (*stack_b)->data)
				ft_rrb(stack_b, 1);
		ft_pa(stack_a, stack_b, 1);
	}
}
