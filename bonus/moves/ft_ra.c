/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:01:48 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:49:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_ra(t_ps **stack_a, int yes)
{
	t_ps	*tmp;
	t_ps	*head;

	if (ft_lstsize_ps(*stack_a) < 2)
		return ;
	tmp = ft_pop(stack_a);
	head = *stack_a;
	while ((*stack_a)->next != NULL)
		*stack_a = (*stack_a)->next;
	if ((*stack_a)->next == NULL)
	{
		(*stack_a)->next = tmp;
		tmp->next = NULL;
	}
	*stack_a = head;
	if (yes == 1)
		ft_printf("ra\n");
}
