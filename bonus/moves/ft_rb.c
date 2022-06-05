/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:21:06 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/05 18:29:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rb(t_ps **stack_b, int yes)
{
	t_ps	*tmp;
	t_ps	*head;

	if (ft_lstsize_ps(*stack_b) < 2)
		return ;
	tmp = ft_pop(stack_b);
	head = *stack_b;
	while ((*stack_b)->next != NULL)
		*stack_b = (*stack_b)->next;
	if ((*stack_b)->next == NULL)
	{
		(*stack_b)->next = tmp;
		tmp->next = NULL;
	}
	*stack_b = head;
	if (yes == 1)
		ft_printf("rb\n");
}
