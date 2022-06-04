/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:13:28 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:38:32 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rrb(t_ps **stack_b, int yes)
{
	t_ps	*top;
	t_ps	*last;
	int		l;
	int		i;

	i = 0;
	top = *stack_b;
	last = ft_lstlast_ps(*stack_b);
	l = ft_lstsize_ps(*stack_b);
	while (i < l - 2)
	{
		*stack_b = (*stack_b)->next;
		i++;
	}
	(*stack_b)->next = NULL;
	last->next = top;
	*stack_b = last;
	if (yes == 1)
		ft_printf("rrb\n");
}
