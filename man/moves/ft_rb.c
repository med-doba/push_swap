/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:21:06 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/25 22:16:21 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_ps **stack_b, int yes)
{
	t_ps	*tmp;
	t_ps	*head;

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
