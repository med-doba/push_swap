/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:53:11 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:50:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_ps **stack_a, int yes)
{
	int		l;
	int		i;
	t_ps	*last;
	t_ps	*top;

	if (ft_lstsize_ps(*stack_a) < 2)
		return ;
	i = 0;
	l = ft_lstsize_ps(*stack_a);
	top = *stack_a;
	last = ft_lstlast_ps(*stack_a);
	last->next = top;
	while (i < l - 2)
	{
		*stack_a = (*stack_a)->next;
		i++;
	}
	(*stack_a)->next = NULL;
	*stack_a = last;
	if (yes == 1)
		ft_printf("rra\n");
}
