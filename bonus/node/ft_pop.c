/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:08:47 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:06:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_ps	*ft_pop(t_ps **stack)
{
	t_ps	*top;

	if (*stack == NULL)
		return (NULL);
	top = *stack;
	*stack = top->next;
	top->next = NULL;
	return (top);
}
